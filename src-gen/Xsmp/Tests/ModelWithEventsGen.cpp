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
// File Name    : ModelWithEventsGen.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/ModelWithEventsGen.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/IPublication.h"
#include "Xsmp/ComponentHelper.h"
#include "Xsmp/EventSink.h"
#include "Xsmp/Tests/ModelWithEvents.h"

namespace Xsmp {
namespace Tests {
//--------------------------- Constructor -------------------------
ModelWithEventsGen::ModelWithEventsGen(::Smp::String8 name,
        ::Smp::String8 description, ::Smp::IObject *parent,
        ::Smp::ISimulator *simulator) :
        // Base class initialization
        ::Xsmp::Model(name, description, parent, simulator),
        // Event Sink: void_esi
        void_esi { new ::Xsmp::EventSink<>("void_esi", "", this,
                &ModelWithEventsGen::_void_esi) },
        // Event Sink: bool_esi
        bool_esi { new ::Xsmp::EventSink<::Smp::Bool>("bool_esi", "", this,
                &ModelWithEventsGen::_bool_esi,
                ::Smp::PrimitiveTypeKind::PTK_Bool) },
        // Event Sink: char8_esi
        char8_esi { new ::Xsmp::EventSink<::Smp::Char8>("char8_esi", "", this,
                &ModelWithEventsGen::_char8_esi,
                ::Smp::PrimitiveTypeKind::PTK_Char8) },
        // Event Sink: dateTime_esi
        dateTime_esi { new ::Xsmp::EventSink<::Smp::DateTime>("dateTime_esi",
                "", this, &ModelWithEventsGen::_dateTime_esi,
                ::Smp::PrimitiveTypeKind::PTK_DateTime) },
        // Event Sink: duration_esi
        duration_esi { new ::Xsmp::EventSink<::Smp::Duration>("duration_esi",
                "", this, &ModelWithEventsGen::_duration_esi,
                ::Smp::PrimitiveTypeKind::PTK_Duration) },
        // Event Sink: float32_esi
        float32_esi { new ::Xsmp::EventSink<::Smp::Float32>("float32_esi", "",
                this, &ModelWithEventsGen::_float32_esi,
                ::Smp::PrimitiveTypeKind::PTK_Float32) },
        // Event Sink: float64_esi
        float64_esi { new ::Xsmp::EventSink<::Smp::Float64>("float64_esi", "",
                this, &ModelWithEventsGen::_float64_esi,
                ::Smp::PrimitiveTypeKind::PTK_Float64) },
        // Event Sink: int16_esi
        int16_esi { new ::Xsmp::EventSink<::Smp::Int16>("int16_esi", "", this,
                &ModelWithEventsGen::_int16_esi,
                ::Smp::PrimitiveTypeKind::PTK_Int16) },
        // Event Sink: int32_esi
        int32_esi { new ::Xsmp::EventSink<::Smp::Int32>("int32_esi", "", this,
                &ModelWithEventsGen::_int32_esi,
                ::Smp::PrimitiveTypeKind::PTK_Int32) },
        // Event Sink: int64_esi
        int64_esi { new ::Xsmp::EventSink<::Smp::Int64>("int64_esi", "", this,
                &ModelWithEventsGen::_int64_esi,
                ::Smp::PrimitiveTypeKind::PTK_Int64) },
        // Event Sink: int8_esi
        int8_esi { new ::Xsmp::EventSink<::Smp::Int8>("int8_esi", "", this,
                &ModelWithEventsGen::_int8_esi,
                ::Smp::PrimitiveTypeKind::PTK_Int8) },
        // Event Sink: string8_esi
        string8_esi { new ::Xsmp::EventSink<::Smp::String8>("string8_esi", "",
                this, &ModelWithEventsGen::_string8_esi,
                ::Smp::PrimitiveTypeKind::PTK_String8) },
        // Event Sink: uint16_esi
        uint16_esi { new ::Xsmp::EventSink<::Smp::UInt16>("uint16_esi", "",
                this, &ModelWithEventsGen::_uint16_esi,
                ::Smp::PrimitiveTypeKind::PTK_UInt16) },
        // Event Sink: uint32_esi
        uint32_esi { new ::Xsmp::EventSink<::Smp::UInt32>("uint32_esi", "",
                this, &ModelWithEventsGen::_uint32_esi,
                ::Smp::PrimitiveTypeKind::PTK_UInt32) },
        // Event Sink: uint64_esi
        uint64_esi { new ::Xsmp::EventSink<::Smp::UInt64>("uint64_esi", "",
                this, &ModelWithEventsGen::_uint64_esi,
                ::Smp::PrimitiveTypeKind::PTK_UInt64) },
        // Event Sink: uint8_esi
        uint8_esi { new ::Xsmp::EventSink<::Smp::UInt8>("uint8_esi", "", this,
                &ModelWithEventsGen::_uint8_esi,
                ::Smp::PrimitiveTypeKind::PTK_UInt8) },
        // Event Source: void_eso
        void_eso { new ::Xsmp::EventSource<>("void_eso", "", this) },
        // Event Source: bool_eso
        bool_eso { new ::Xsmp::EventSource<::Smp::Bool>("bool_eso", "", this,
                ::Smp::PrimitiveTypeKind::PTK_Bool) },
        // Event Source: char8_eso
        char8_eso { new ::Xsmp::EventSource<::Smp::Char8>("char8_eso", "", this,
                ::Smp::PrimitiveTypeKind::PTK_Char8) },
        // Event Source: dateTime_eso
        dateTime_eso { new ::Xsmp::EventSource<::Smp::DateTime>("dateTime_eso",
                "", this, ::Smp::PrimitiveTypeKind::PTK_DateTime) },
        // Event Source: duration_eso
        duration_eso { new ::Xsmp::EventSource<::Smp::Duration>("duration_eso",
                "", this, ::Smp::PrimitiveTypeKind::PTK_Duration) },
        // Event Source: float32_eso
        float32_eso { new ::Xsmp::EventSource<::Smp::Float32>("float32_eso", "",
                this, ::Smp::PrimitiveTypeKind::PTK_Float32) },
        // Event Source: float64_eso
        float64_eso { new ::Xsmp::EventSource<::Smp::Float64>("float64_eso", "",
                this, ::Smp::PrimitiveTypeKind::PTK_Float64) },
        // Event Source: int16_eso
        int16_eso { new ::Xsmp::EventSource<::Smp::Int16>("int16_eso", "", this,
                ::Smp::PrimitiveTypeKind::PTK_Int16) },
        // Event Source: int32_eso
        int32_eso { new ::Xsmp::EventSource<::Smp::Int32>("int32_eso", "", this,
                ::Smp::PrimitiveTypeKind::PTK_Int32) },
        // Event Source: int64_eso
        int64_eso { new ::Xsmp::EventSource<::Smp::Int64>("int64_eso", "", this,
                ::Smp::PrimitiveTypeKind::PTK_Int64) },
        // Event Source: int8_eso
        int8_eso { new ::Xsmp::EventSource<::Smp::Int8>("int8_eso", "", this,
                ::Smp::PrimitiveTypeKind::PTK_Int8) },
        // Event Source: string8_eso
        string8_eso { new ::Xsmp::EventSource<::Smp::String8>("string8_eso", "",
                this, ::Smp::PrimitiveTypeKind::PTK_String8) },
        // Event Source: uint16_eso
        uint16_eso { new ::Xsmp::EventSource<::Smp::UInt16>("uint16_eso", "",
                this, ::Smp::PrimitiveTypeKind::PTK_UInt16) },
        // Event Source: uint32_eso
        uint32_eso { new ::Xsmp::EventSource<::Smp::UInt32>("uint32_eso", "",
                this, ::Smp::PrimitiveTypeKind::PTK_UInt32) },
        // Event Source: uint64_eso
        uint64_eso { new ::Xsmp::EventSource<::Smp::UInt64>("uint64_eso", "",
                this, ::Smp::PrimitiveTypeKind::PTK_UInt64) },
        // Event Source: uint8_eso
        uint8_eso { new ::Xsmp::EventSource<::Smp::UInt8>("uint8_eso", "", this,
                ::Smp::PrimitiveTypeKind::PTK_UInt8) } {
}

/// Virtual destructor that is called by inherited classes as well.
ModelWithEventsGen::~ModelWithEventsGen() {
    delete void_esi;
    void_esi = nullptr;
    delete bool_esi;
    bool_esi = nullptr;
    delete char8_esi;
    char8_esi = nullptr;
    delete dateTime_esi;
    dateTime_esi = nullptr;
    delete duration_esi;
    duration_esi = nullptr;
    delete float32_esi;
    float32_esi = nullptr;
    delete float64_esi;
    float64_esi = nullptr;
    delete int16_esi;
    int16_esi = nullptr;
    delete int32_esi;
    int32_esi = nullptr;
    delete int64_esi;
    int64_esi = nullptr;
    delete int8_esi;
    int8_esi = nullptr;
    delete string8_esi;
    string8_esi = nullptr;
    delete uint16_esi;
    uint16_esi = nullptr;
    delete uint32_esi;
    uint32_esi = nullptr;
    delete uint64_esi;
    uint64_esi = nullptr;
    delete uint8_esi;
    uint8_esi = nullptr;
    delete void_eso;
    void_eso = nullptr;
    delete bool_eso;
    bool_eso = nullptr;
    delete char8_eso;
    char8_eso = nullptr;
    delete dateTime_eso;
    dateTime_eso = nullptr;
    delete duration_eso;
    duration_eso = nullptr;
    delete float32_eso;
    float32_eso = nullptr;
    delete float64_eso;
    float64_eso = nullptr;
    delete int16_eso;
    int16_eso = nullptr;
    delete int32_eso;
    int32_eso = nullptr;
    delete int64_eso;
    int64_eso = nullptr;
    delete int8_eso;
    int8_eso = nullptr;
    delete string8_eso;
    string8_eso = nullptr;
    delete uint16_eso;
    uint16_eso = nullptr;
    delete uint32_eso;
    uint32_eso = nullptr;
    delete uint64_eso;
    uint64_eso = nullptr;
    delete uint8_eso;
    uint8_eso = nullptr;
}

void ModelWithEventsGen::Publish(::Smp::IPublication *receiver) {
    // Call parent class implementation first
    ::Xsmp::Model::Publish(receiver);

    // Call user DoPublish if any
    ::Xsmp::Component::Helper::Publish < ::Xsmp::Tests::ModelWithEvents
            > (this, receiver);
}

void ModelWithEventsGen::Configure(::Smp::Services::ILogger *logger,
        ::Smp::Services::ILinkRegistry *linkRegistry) {
    // Call parent implementation first
    ::Xsmp::Model::Configure(logger, linkRegistry);

    // Call user DoConfigure if any
    ::Xsmp::Component::Helper::Configure < ::Xsmp::Tests::ModelWithEvents
            > (this, logger, linkRegistry);
}

void ModelWithEventsGen::Connect(::Smp::ISimulator *simulator) {
    // Call parent implementation first
    ::Xsmp::Model::Connect(simulator);

    // Call user DoConnect if any
    ::Xsmp::Component::Helper::Connect < ::Xsmp::Tests::ModelWithEvents
            > (this, simulator);
}

void ModelWithEventsGen::Disconnect() {
    // Call user DoDisconnect if any
    ::Xsmp::Component::Helper::Disconnect < ::Xsmp::Tests::ModelWithEvents
            > (this);

    // Call parent implementation last, to remove references to the Simulator and its services
    ::Xsmp::Model::Disconnect();
}

const Smp::Uuid& ModelWithEventsGen::GetUuid() const {
    return Uuid_ModelWithEvents;
}
} // namespace Tests
} // namespace Xsmp