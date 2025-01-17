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

#ifndef XSMP_ENTRYPOINT_H_
#define XSMP_ENTRYPOINT_H_

#include <Smp/IEntryPoint.h>
#include <Smp/PrimitiveTypes.h>
#include <Xsmp/Object.h>
#include <functional>

namespace Xsmp {

class EntryPointPublisher;

class EntryPoint final: public Object, public ::Smp::IEntryPoint {
public:

    template<typename ObjectType>
    EntryPoint(::Smp::String8 name, ::Smp::String8 description,
            ObjectType *parent, void (ObjectType::*callback)(void)) :
            EntryPoint(name, description, parent, std::bind(callback, parent)) {
    }

    EntryPoint(::Smp::String8 name, ::Smp::String8 description,
            ::Xsmp::EntryPointPublisher *parent,
            std::function<void()> &&callback);
    EntryPoint(::Smp::String8 name, ::Smp::String8 description,
            ::Smp::IObject *parent, std::function<void()> &&callback);

    void Execute() const override;
    inline void operator()() const {
        std::invoke(_callback);
    }
private:
    std::function<void()> _callback;
};

} // namespace Xsmp

#endif // XSMP_ENTRYPOINT_H_
