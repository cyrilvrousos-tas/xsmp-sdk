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
#include <Xsmp/Aggregate.h>
#include <Xsmp/Reference.h>

namespace Xsmp::detail {

AbstractReference::RefCollection::RefCollection(AbstractReference &parent) :
        _parent(parent) {
}
::Smp::String8 AbstractReference::RefCollection::GetName() const {
    return "Collection";
}
::Smp::String8 AbstractReference::RefCollection::GetDescription() const {
    return "Collection of component";
}
::Smp::IObject* AbstractReference::RefCollection::GetParent() const {
    return &_parent;
}
::Smp::IComponent* AbstractReference::RefCollection::at(
        ::Smp::String8 name) const {
    return _parent.GetComponent(name);
}
::Smp::IComponent* AbstractReference::RefCollection::at(size_t index) const {
    return _parent.GetComponent(index);
}
size_t AbstractReference::RefCollection::size() const {
    return static_cast<size_t>(_parent.GetCount());
}
AbstractReference::RefCollection::const_iterator AbstractReference::RefCollection::begin() const {
    return const_iterator(*this, 0);
}
AbstractReference::RefCollection::const_iterator AbstractReference::RefCollection::end() const {
    return const_iterator(*this, size());
}

AbstractReference::AbstractReference(::Smp::String8 name,
        ::Smp::String8 description, ::Xsmp::Aggregate *parent,
        ::Smp::Int64 lower, ::Smp::Int64 upper) :
        AbstractReference(name, description,
                static_cast<::Smp::IObject*>(parent), lower, upper) {
    parent->AddReference(this);
}
AbstractReference::AbstractReference(::Smp::String8 name,
        ::Smp::String8 description, ::Smp::IObject *parent, ::Smp::Int64 lower,
        ::Smp::Int64 upper) :
        Object(name, description, parent), _collection(*this), _lower(lower), _upper(
                upper) {
}
const ::Smp::ComponentCollection* AbstractReference::GetComponents() const {
    return &_collection;
}
::Smp::Int64 AbstractReference::GetUpper() const {
    return _upper;
}
::Smp::Int64 AbstractReference::GetLower() const {
    return _lower;
}

} // namespace Xsmp::detail
