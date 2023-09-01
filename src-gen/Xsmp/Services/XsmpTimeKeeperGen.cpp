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
// File Name    : XsmpTimeKeeperGen.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Services/XsmpTimeKeeperGen.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/IPublication.h"
#include "Xsmp/ComponentHelper.h"
#include "Xsmp/EntryPoint.h"
#include "Xsmp/Services/XsmpTimeKeeper.h"

namespace Xsmp {
namespace Services {
//--------------------------- Constructor -------------------------
XsmpTimeKeeperGen::XsmpTimeKeeperGen(::Smp::String8 name,
        ::Smp::String8 description, ::Smp::IObject *parent,
        ::Smp::ISimulator *simulator) :
        // Base class initialization
        ::Xsmp::Service(name, description, parent, simulator),
        // EntryPoint: PreSimTimeChange
        PreSimTimeChange { new ::Xsmp::EntryPoint("PreSimTimeChange", "", this,
                &XsmpTimeKeeperGen::_PreSimTimeChange) },
        // EntryPoint: PostSimTimeChange
        PostSimTimeChange { new ::Xsmp::EntryPoint("PostSimTimeChange", "",
                this, &XsmpTimeKeeperGen::_PostSimTimeChange) } {
}

/// Virtual destructor that is called by inherited classes as well.
XsmpTimeKeeperGen::~XsmpTimeKeeperGen() {
    delete PreSimTimeChange;
    PreSimTimeChange = nullptr;
    delete PostSimTimeChange;
    PostSimTimeChange = nullptr;
}

void XsmpTimeKeeperGen::Publish(::Smp::IPublication *receiver) {
    // Call parent class implementation first
    ::Xsmp::Service::Publish(receiver);

    // Call user DoPublish if any
    ::Xsmp::Component::Helper::Publish < ::Xsmp::Services::XsmpTimeKeeper
            > (this, receiver);
}

void XsmpTimeKeeperGen::Configure(::Smp::Services::ILogger *logger,
        ::Smp::Services::ILinkRegistry *linkRegistry) {
    // Call parent implementation first
    ::Xsmp::Service::Configure(logger, linkRegistry);

    // Call user DoConfigure if any
    ::Xsmp::Component::Helper::Configure < ::Xsmp::Services::XsmpTimeKeeper
            > (this, logger, linkRegistry);
}

void XsmpTimeKeeperGen::Connect(::Smp::ISimulator *simulator) {
    // Call parent implementation first
    ::Xsmp::Service::Connect(simulator);

    // Call user DoConnect if any
    ::Xsmp::Component::Helper::Connect < ::Xsmp::Services::XsmpTimeKeeper
            > (this, simulator);
}

void XsmpTimeKeeperGen::Disconnect() {
    // Call user DoDisconnect if any
    ::Xsmp::Component::Helper::Disconnect < ::Xsmp::Services::XsmpTimeKeeper
            > (this);

    // Call parent implementation last, to remove references to the Simulator and its services
    ::Xsmp::Service::Disconnect();
}

const Smp::Uuid& XsmpTimeKeeperGen::GetUuid() const {
    return Uuid_XsmpTimeKeeper;
}
} // namespace Services
} // namespace Xsmp