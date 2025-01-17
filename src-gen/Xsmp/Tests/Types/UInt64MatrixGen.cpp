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
// File Name    : UInt64Matrix.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/UInt64Matrix.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Xsmp/Tests/Types/UInt64Matrix.h"

namespace Xsmp::Tests::Types {
void _Register_UInt64Matrix(::Smp::Publication::ITypeRegistry *registry) {
    registry->AddArrayType("UInt64Matrix", // Name
            "", // Description
            ::Xsmp::Tests::Types::Uuid_UInt64Matrix, // UUID
            ::Xsmp::Tests::Types::Uuid_UInt64Array, // Item Type UUID
            sizeof(::Xsmp::Tests::Types::UInt64Array), // Item Type size
            3, // size of the array
            false // is simple array
            );
}
} // namespace Xsmp::Tests::Types
