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
// File Name    : ModelWithEvents.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/ModelWithEvents.h

#ifndef XSMP_TESTS_MODELWITHEVENTS_H_
#define XSMP_TESTS_MODELWITHEVENTS_H_

// Include the generated header file
#include "Xsmp/Tests/ModelWithEventsGen.h"

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp {
namespace Tests {
class ModelWithEvents: public ModelWithEventsGen {
public:
    /// Re-use parent constructors
    using ModelWithEventsGen::ModelWithEventsGen;

    /// Virtual destructor to release memory.
    ~ModelWithEvents() noexcept override = default;

private:
    // visibility to call DoPublish/DoConfigure/DoConnect/DoDisconnect
    friend class ::Xsmp::Component::Helper;

    /// Publish fields, operations and properties of the model.
    /// @param receiver Publication receiver.
    void DoPublish(::Smp::IPublication *receiver);

    /// Request for configuration.
    /// @param logger Logger to use for log messages during Configure().
    /// @param linkRegistry Link Registry to use for registration of
    ///         links created during Configure() or later.
    void DoConfigure(::Smp::Services::ILogger *logger,
            ::Smp::Services::ILinkRegistry *linkRegistry);

    /// Connect model to simulator.
    /// @param simulator Simulation Environment that hosts the model.
    ///
    void DoConnect(::Smp::ISimulator *simulator);

    /// Disconnect model to simulator.
    /// @throws Smp::InvalidComponentState
    void DoDisconnect();

public:
    void _void_esi(::Smp::IObject *sender) override;
    void _bool_esi(::Smp::IObject *sender, ::Smp::Bool value) override;
    void _char8_esi(::Smp::IObject *sender, ::Smp::Char8 value) override;
    void _dateTime_esi(::Smp::IObject *sender, ::Smp::DateTime value) override;
    void _duration_esi(::Smp::IObject *sender, ::Smp::Duration value) override;
    void _float32_esi(::Smp::IObject *sender, ::Smp::Float32 value) override;
    void _float64_esi(::Smp::IObject *sender, ::Smp::Float64 value) override;
    void _int16_esi(::Smp::IObject *sender, ::Smp::Int16 value) override;
    void _int32_esi(::Smp::IObject *sender, ::Smp::Int32 value) override;
    void _int64_esi(::Smp::IObject *sender, ::Smp::Int64 value) override;
    void _int8_esi(::Smp::IObject *sender, ::Smp::Int8 value) override;
    void _string8_esi(::Smp::IObject *sender, ::Smp::String8 value) override;
    void _uint16_esi(::Smp::IObject *sender, ::Smp::UInt16 value) override;
    void _uint32_esi(::Smp::IObject *sender, ::Smp::UInt32 value) override;
    void _uint64_esi(::Smp::IObject *sender, ::Smp::UInt64 value) override;
    void _uint8_esi(::Smp::IObject *sender, ::Smp::UInt8 value) override;
};
} // namespace Tests
} // namespace Xsmp

#endif // XSMP_TESTS_MODELWITHEVENTS_H_
