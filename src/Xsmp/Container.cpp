// Copyright 2023 THALES ALENIA SPACE FRANCE. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <Smp/CollectionIterator.h>
#include <Smp/IDynamicInvocation.h>
#include <Smp/IEntryPointPublisher.h>
#include <Smp/IEventConsumer.h>
#include <Smp/IEventProvider.h>
#include <Smp/IFallibleModel.h>
#include <Xsmp/Composite.h>
#include <Xsmp/Container.h>

namespace Xsmp::detail {

AbstractContainer::ContainerCollection::ContainerCollection(
        AbstractContainer &parent) :
        _parent(parent) {
}
::Smp::String8 AbstractContainer::ContainerCollection::GetName() const {
    return "Collection";
}
::Smp::String8 AbstractContainer::ContainerCollection::GetDescription() const {
    return "Collection of component";
}
::Smp::IObject* AbstractContainer::ContainerCollection::GetParent() const {
    return &_parent;
}
::Smp::IComponent* AbstractContainer::ContainerCollection::at(
        ::Smp::String8 name) const {
    return _parent.GetComponent(name);
}
::Smp::IComponent* AbstractContainer::ContainerCollection::at(
        size_t index) const {

    return _parent.GetComponent(index);
}
size_t AbstractContainer::ContainerCollection::size() const {
    return static_cast<size_t>(_parent.GetCount());
}
AbstractContainer::ContainerCollection::const_iterator AbstractContainer::ContainerCollection::begin() const {
    return const_iterator(*this, 0);
}
AbstractContainer::ContainerCollection::const_iterator AbstractContainer::ContainerCollection::end() const {
    return const_iterator(*this, size());
}

AbstractContainer::AbstractContainer(::Smp::String8 name,
        ::Smp::String8 description, ::Xsmp::Composite *parent,
        ::Smp::Int64 lower, ::Smp::Int64 upper) :
        AbstractContainer(name, description,
                static_cast<::Smp::IObject*>(parent), lower, upper) {
    parent->AddContainer(this);
}
AbstractContainer::AbstractContainer(::Smp::String8 name,
        ::Smp::String8 description, ::Smp::IObject *parent, ::Smp::Int64 lower,
        ::Smp::Int64 upper) :
        Object(name, description, parent), _collection(*this), _lower(lower), _upper(
                upper) {
}
const ::Smp::ComponentCollection* AbstractContainer::GetComponents() const {
    return &_collection;
}
::Smp::Int64 AbstractContainer::GetUpper() const {
    return _upper;
}
::Smp::Int64 AbstractContainer::GetLower() const {
    return _lower;
}

namespace {
inline void CheckComposite(::Smp::IContainer const *container,
        ::Smp::IComposite const *composite, ::Smp::String8 name) {
    if (auto const *containers = composite->GetContainers()) {
        for (auto const *ctn : *containers) {
            if (ctn->GetComponent(name)) {
                ::Xsmp::Exception::throwDuplicateName(container, name,
                        container->GetComponents());
            }
        }
    }
}

inline void CheckComponent(::Smp::IContainer const *container,
        ::Smp::IComponent const *cmp, ::Smp::String8 name) {
    if (cmp->GetField(name)) {
        ::Xsmp::Exception::throwDuplicateName(container, name,
                container->GetComponents());
    }
    if (auto const *entryPointPublisher =
            dynamic_cast<::Smp::IEntryPointPublisher const*>(cmp)) {
        if (entryPointPublisher->GetEntryPoint(name))
            ::Xsmp::Exception::throwDuplicateName(container, name,
                    container->GetComponents());
    }
    if (auto const *dynamicInvocation =
            dynamic_cast<::Smp::IDynamicInvocation const*>(cmp)) {

        if (auto const *operations = dynamicInvocation->GetOperations(); operations
                && operations->at(name))
            ::Xsmp::Exception::throwDuplicateName(container, name,
                    container->GetComponents());

        if (auto const *properties = dynamicInvocation->GetProperties(); properties
                && properties->at(name))
            ::Xsmp::Exception::throwDuplicateName(container, name,
                    container->GetComponents());
    }

    if (auto const *eventProvider =
            dynamic_cast<::Smp::IEventProvider const*>(cmp)) {
        if (eventProvider->GetEventSource(name))
            ::Xsmp::Exception::throwDuplicateName(container, name,
                    container->GetComponents());
    }
    if (auto const *eventConsumer =
            dynamic_cast<::Smp::IEventConsumer const*>(cmp)) {
        if (eventConsumer->GetEventSink(name))
            ::Xsmp::Exception::throwDuplicateName(container, name,
                    container->GetComponents());
    }
    if (auto const *model = dynamic_cast<::Smp::IFallibleModel const*>(cmp)) {
        if (model->GetFailure(name))
            ::Xsmp::Exception::throwDuplicateName(container, name,
                    container->GetComponents());
    }
}

void CheckNoDuplicateName(::Smp::IContainer const *container,
        ::Smp::IComponent const *component) {

    auto *parent = container->GetParent();
    const auto *name = component->GetName();
    //check in the composite that no other sub component with the same name exist
    if (auto const *composite = dynamic_cast<::Smp::IComposite*>(parent)) {
        CheckComposite(container, composite, name);
    }

    if (auto const *cmp = dynamic_cast<::Smp::IComponent*>(parent)) {
        CheckComponent(container, cmp, name);
    }

    // check same parents
    if (parent != component->GetParent()) {
        ::Xsmp::Exception::throwException(container, "InvalidParent",
                "The parent's component is invalid",
                "A Container and its Components shall have the same parent.");
    }
}
} // namespace

void AbstractContainer::AddComponent(::Smp::IComponent *component) {
    if (static_cast<std::size_t>(GetCount())
            >= static_cast<std::size_t>(GetUpper())) {
        ::Xsmp::Exception::throwContainerFull(this);
    }

    CheckNoDuplicateName(this, component);
}
void AbstractContainer::DeleteComponent(::Smp::IComponent *component) {
    if (static_cast<std::size_t>(GetCount())
            <= static_cast<std::size_t>(GetLower()))
        ::Xsmp::Exception::throwCannotDelete(this, component);
}

} // namespace Xsmp::detail
