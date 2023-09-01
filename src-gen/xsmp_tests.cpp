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
// File Name    : xsmp_tests.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file xsmp_tests.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Xsmp/Factory.h"
#include "Xsmp/Tests/ModelWithArrayFields.h"
#include "Xsmp/Tests/ModelWithEvents.h"
#include "Xsmp/Tests/ModelWithOperations.h"
#include "Xsmp/Tests/ModelWithSimpleArrayFields.h"
#include "Xsmp/Tests/ModelWithSimpleFields.h"
#include "Xsmp/Tests/Types/BoolArray.h"
#include "Xsmp/Tests/Types/Char8Array.h"
#include "Xsmp/Tests/Types/Enum1.h"
#include "Xsmp/Tests/Types/Enum1Array.h"
#include "Xsmp/Tests/Types/Float1.h"
#include "Xsmp/Tests/Types/Float1Array.h"
#include "Xsmp/Tests/Types/Float32Array.h"
#include "Xsmp/Tests/Types/Float64Array.h"
#include "Xsmp/Tests/Types/Int16Array.h"
#include "Xsmp/Tests/Types/Int16Matrix.h"
#include "Xsmp/Tests/Types/Int32Array.h"
#include "Xsmp/Tests/Types/Int32Matrix.h"
#include "Xsmp/Tests/Types/Int64Array.h"
#include "Xsmp/Tests/Types/Int64Matrix.h"
#include "Xsmp/Tests/Types/Int8Array.h"
#include "Xsmp/Tests/Types/Int8Matrix.h"
#include "Xsmp/Tests/Types/Integer1.h"
#include "Xsmp/Tests/Types/Integer1Array.h"
#include "Xsmp/Tests/Types/SimpleBoolArray.h"
#include "Xsmp/Tests/Types/SimpleChar8Array.h"
#include "Xsmp/Tests/Types/SimpleEnum1Array.h"
#include "Xsmp/Tests/Types/SimpleFloat1Array.h"
#include "Xsmp/Tests/Types/SimpleFloat32Array.h"
#include "Xsmp/Tests/Types/SimpleFloat64Array.h"
#include "Xsmp/Tests/Types/SimpleInt16Array.h"
#include "Xsmp/Tests/Types/SimpleInt16Matrix.h"
#include "Xsmp/Tests/Types/SimpleInt32Array.h"
#include "Xsmp/Tests/Types/SimpleInt32Matrix.h"
#include "Xsmp/Tests/Types/SimpleInt64Array.h"
#include "Xsmp/Tests/Types/SimpleInt64Matrix.h"
#include "Xsmp/Tests/Types/SimpleInt8Array.h"
#include "Xsmp/Tests/Types/SimpleInt8Matrix.h"
#include "Xsmp/Tests/Types/SimpleInteger1Array.h"
#include "Xsmp/Tests/Types/SimpleString1Array.h"
#include "Xsmp/Tests/Types/SimpleStructure.h"
#include "Xsmp/Tests/Types/SimpleUInt16Array.h"
#include "Xsmp/Tests/Types/SimpleUInt16Matrix.h"
#include "Xsmp/Tests/Types/SimpleUInt32Array.h"
#include "Xsmp/Tests/Types/SimpleUInt32Matrix.h"
#include "Xsmp/Tests/Types/SimpleUInt64Array.h"
#include "Xsmp/Tests/Types/SimpleUInt64Matrix.h"
#include "Xsmp/Tests/Types/SimpleUInt8Array.h"
#include "Xsmp/Tests/Types/SimpleUInt8Matrix.h"
#include "Xsmp/Tests/Types/String1.h"
#include "Xsmp/Tests/Types/String1Array.h"
#include "Xsmp/Tests/Types/StructureWithCustomFields.h"
#include "Xsmp/Tests/Types/UInt16Array.h"
#include "Xsmp/Tests/Types/UInt16Matrix.h"
#include "Xsmp/Tests/Types/UInt32Array.h"
#include "Xsmp/Tests/Types/UInt32Matrix.h"
#include "Xsmp/Tests/Types/UInt64Array.h"
#include "Xsmp/Tests/Types/UInt64Matrix.h"
#include "Xsmp/Tests/Types/UInt8Array.h"
#include "Xsmp/Tests/Types/UInt8Matrix.h"
#include "Xsmp/Tests/Types/Vector.h"
#include "Xsmp/Tests/Types/VectorArray.h"
#include "Xsmp/Tests/Types/VectorMatrix.h"
#include "xsmp_tests.h"
#include <unordered_set>

// ----------------------------------------------------------------------------------
// ----------------------------- Global variables ------------------------------
// ----------------------------------------------------------------------------------

namespace {
/// Simulators set.
std::unordered_set<::Smp::ISimulator*> simulators { };
} // namespace

#if __cplusplus >= 201703L
    #define MAYBE_UNUSED [[maybe_unused]]
#else
#define MAYBE_UNUSED
#endif

// --------------------------------------------------------------------------------
// --------------------------- Initialise Function -----------------------------
// --------------------------------------------------------------------------------

extern "C" {
/// Initialise Package xsmp_tests.
/// @param simulator Simulator for registration of factories.
/// @param typeRegistry Type Registry for registration of types.
/// @return True if initialisation was successful, false otherwise.
bool Initialise_xsmp_tests(::Smp::ISimulator *simulator,
        MAYBE_UNUSED ::Smp::Publication::ITypeRegistry *typeRegistry) {
    // check simulator validity
    if (!simulator) {
        return false;
    }
    // avoid double initialisation
    else if (!::simulators.emplace(simulator).second) {
        return true;
    }

    // register Enumeration Enum1
    ::Xsmp::Tests::Types::_Register_Enum1(typeRegistry);
    // register String String1
    ::Xsmp::Tests::Types::_Register_String1(typeRegistry);
    // register Float Float1
    ::Xsmp::Tests::Types::_Register_Float1(typeRegistry);
    // register Integer Integer1
    ::Xsmp::Tests::Types::_Register_Integer1(typeRegistry);
    // register Array BoolArray
    ::Xsmp::Tests::Types::_Register_BoolArray(typeRegistry);
    // register Array SimpleBoolArray
    ::Xsmp::Tests::Types::_Register_SimpleBoolArray(typeRegistry);
    // register Array Char8Array
    ::Xsmp::Tests::Types::_Register_Char8Array(typeRegistry);
    // register Array SimpleChar8Array
    ::Xsmp::Tests::Types::_Register_SimpleChar8Array(typeRegistry);
    // register Array Int8Array
    ::Xsmp::Tests::Types::_Register_Int8Array(typeRegistry);
    // register Array SimpleInt8Array
    ::Xsmp::Tests::Types::_Register_SimpleInt8Array(typeRegistry);
    // register Array Int16Array
    ::Xsmp::Tests::Types::_Register_Int16Array(typeRegistry);
    // register Array SimpleInt16Array
    ::Xsmp::Tests::Types::_Register_SimpleInt16Array(typeRegistry);
    // register Array Int32Array
    ::Xsmp::Tests::Types::_Register_Int32Array(typeRegistry);
    // register Array SimpleInt32Array
    ::Xsmp::Tests::Types::_Register_SimpleInt32Array(typeRegistry);
    // register Array Int64Array
    ::Xsmp::Tests::Types::_Register_Int64Array(typeRegistry);
    // register Array SimpleInt64Array
    ::Xsmp::Tests::Types::_Register_SimpleInt64Array(typeRegistry);
    // register Array UInt8Array
    ::Xsmp::Tests::Types::_Register_UInt8Array(typeRegistry);
    // register Array SimpleUInt8Array
    ::Xsmp::Tests::Types::_Register_SimpleUInt8Array(typeRegistry);
    // register Array UInt16Array
    ::Xsmp::Tests::Types::_Register_UInt16Array(typeRegistry);
    // register Array SimpleUInt16Array
    ::Xsmp::Tests::Types::_Register_SimpleUInt16Array(typeRegistry);
    // register Array UInt32Array
    ::Xsmp::Tests::Types::_Register_UInt32Array(typeRegistry);
    // register Array SimpleUInt32Array
    ::Xsmp::Tests::Types::_Register_SimpleUInt32Array(typeRegistry);
    // register Array UInt64Array
    ::Xsmp::Tests::Types::_Register_UInt64Array(typeRegistry);
    // register Array SimpleUInt64Array
    ::Xsmp::Tests::Types::_Register_SimpleUInt64Array(typeRegistry);
    // register Array Enum1Array
    ::Xsmp::Tests::Types::_Register_Enum1Array(typeRegistry);
    // register Array SimpleEnum1Array
    ::Xsmp::Tests::Types::_Register_SimpleEnum1Array(typeRegistry);
    // register Array String1Array
    ::Xsmp::Tests::Types::_Register_String1Array(typeRegistry);
    // register Array SimpleString1Array
    ::Xsmp::Tests::Types::_Register_SimpleString1Array(typeRegistry);
    // register Array Float32Array
    ::Xsmp::Tests::Types::_Register_Float32Array(typeRegistry);
    // register Array SimpleFloat32Array
    ::Xsmp::Tests::Types::_Register_SimpleFloat32Array(typeRegistry);
    // register Array Float64Array
    ::Xsmp::Tests::Types::_Register_Float64Array(typeRegistry);
    // register Array SimpleFloat64Array
    ::Xsmp::Tests::Types::_Register_SimpleFloat64Array(typeRegistry);
    // register Array Float1Array
    ::Xsmp::Tests::Types::_Register_Float1Array(typeRegistry);
    // register Array SimpleFloat1Array
    ::Xsmp::Tests::Types::_Register_SimpleFloat1Array(typeRegistry);
    // register Array Integer1Array
    ::Xsmp::Tests::Types::_Register_Integer1Array(typeRegistry);
    // register Array SimpleInteger1Array
    ::Xsmp::Tests::Types::_Register_SimpleInteger1Array(typeRegistry);
    // register Structure Vector
    ::Xsmp::Tests::Types::Vector::_Register(typeRegistry);
    // register Array VectorArray
    ::Xsmp::Tests::Types::_Register_VectorArray(typeRegistry);
    // register Array Int8Matrix
    ::Xsmp::Tests::Types::_Register_Int8Matrix(typeRegistry);
    // register Array SimpleInt8Matrix
    ::Xsmp::Tests::Types::_Register_SimpleInt8Matrix(typeRegistry);
    // register Array Int16Matrix
    ::Xsmp::Tests::Types::_Register_Int16Matrix(typeRegistry);
    // register Array SimpleInt16Matrix
    ::Xsmp::Tests::Types::_Register_SimpleInt16Matrix(typeRegistry);
    // register Array Int32Matrix
    ::Xsmp::Tests::Types::_Register_Int32Matrix(typeRegistry);
    // register Array SimpleInt32Matrix
    ::Xsmp::Tests::Types::_Register_SimpleInt32Matrix(typeRegistry);
    // register Array Int64Matrix
    ::Xsmp::Tests::Types::_Register_Int64Matrix(typeRegistry);
    // register Array SimpleInt64Matrix
    ::Xsmp::Tests::Types::_Register_SimpleInt64Matrix(typeRegistry);
    // register Array UInt8Matrix
    ::Xsmp::Tests::Types::_Register_UInt8Matrix(typeRegistry);
    // register Array SimpleUInt8Matrix
    ::Xsmp::Tests::Types::_Register_SimpleUInt8Matrix(typeRegistry);
    // register Array UInt16Matrix
    ::Xsmp::Tests::Types::_Register_UInt16Matrix(typeRegistry);
    // register Array SimpleUInt16Matrix
    ::Xsmp::Tests::Types::_Register_SimpleUInt16Matrix(typeRegistry);
    // register Array UInt32Matrix
    ::Xsmp::Tests::Types::_Register_UInt32Matrix(typeRegistry);
    // register Array SimpleUInt32Matrix
    ::Xsmp::Tests::Types::_Register_SimpleUInt32Matrix(typeRegistry);
    // register Array UInt64Matrix
    ::Xsmp::Tests::Types::_Register_UInt64Matrix(typeRegistry);
    // register Array SimpleUInt64Matrix
    ::Xsmp::Tests::Types::_Register_SimpleUInt64Matrix(typeRegistry);
    // register Array VectorMatrix
    ::Xsmp::Tests::Types::_Register_VectorMatrix(typeRegistry);
    // register Structure SimpleStructure
    ::Xsmp::Tests::Types::SimpleStructure::_Register(typeRegistry);
    // register Structure StructureWithCustomFields
    ::Xsmp::Tests::Types::StructureWithCustomFields::_Register(typeRegistry);

    // Register factory for Model ModelWithSimpleFields
    simulator->RegisterFactory(
            ::Xsmp::Factory::Create < ::Xsmp::Tests::ModelWithSimpleFields
                    > ("ModelWithSimpleFields", // name
                    "", // description
                    simulator, // simulator
                    ::Xsmp::Tests::Uuid_ModelWithSimpleFields // UUID
                    ));
    // Register factory for Model ModelWithArrayFields
    simulator->RegisterFactory(
            ::Xsmp::Factory::Create < ::Xsmp::Tests::ModelWithArrayFields
                    > ("ModelWithArrayFields", // name
                    "", // description
                    simulator, // simulator
                    ::Xsmp::Tests::Uuid_ModelWithArrayFields // UUID
                    ));
    // Register factory for Model ModelWithSimpleArrayFields
    simulator->RegisterFactory(
            ::Xsmp::Factory::Create < ::Xsmp::Tests::ModelWithSimpleArrayFields
                    > ("ModelWithSimpleArrayFields", // name
                    "", // description
                    simulator, // simulator
                    ::Xsmp::Tests::Uuid_ModelWithSimpleArrayFields // UUID
                    ));
    // Register factory for Model ModelWithEvents
    simulator->RegisterFactory(
            ::Xsmp::Factory::Create < ::Xsmp::Tests::ModelWithEvents
                    > ("ModelWithEvents", // name
                    "", // description
                    simulator, // simulator
                    ::Xsmp::Tests::Uuid_ModelWithEvents // UUID
                    ));
    // Register factory for Model ModelWithOperations
    simulator->RegisterFactory(
            ::Xsmp::Factory::Create < ::Xsmp::Tests::ModelWithOperations
                    > ("ModelWithOperations", // name
                    "", // description
                    simulator, // simulator
                    ::Xsmp::Tests::Uuid_ModelWithOperations // UUID
                    ));

    return true;
}

}

// ---------------------------------------------------------------------------------
// ---------------------------- Finalise Function ------------------------------
// ---------------------------------------------------------------------------------

extern "C" {
/// Finalise Package xsmp_tests.
/// @param simulator Simulator.
/// @return True if finalisation was successful, false otherwise.
bool Finalise_xsmp_tests(::Smp::ISimulator *simulator) {
    // backward compatibility
    if (!simulator) {
        ::simulators.clear();
    }
    // avoid double finalisation
    else if (!::simulators.erase(simulator)) {
        return true;
    }

    return true;
}
}