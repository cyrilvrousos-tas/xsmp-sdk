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

// -----------------------------------------------------------------------------
// File Name    : ModelWithSimpleFields.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/ModelWithSimpleFields.cpp

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/IPublication.h"
#include "Xsmp/EventSink.h"
#include "Xsmp/Tests/ModelWithSimpleFields.h"

namespace Xsmp {
namespace Tests {
void ModelWithSimpleFields::DoPublish(::Smp::IPublication*) {
}

void ModelWithSimpleFields::DoConfigure(::Smp::Services::ILogger*,
        ::Smp::Services::ILinkRegistry*) {
}

void ModelWithSimpleFields::DoConnect(::Smp::ISimulator*) {
}

void ModelWithSimpleFields::DoDisconnect() {
}

void ModelWithSimpleFields::_esi(::Smp::IObject*) {
    // TODO implement EventSink esi
}
} // namespace Tests
} // namespace Xsmp