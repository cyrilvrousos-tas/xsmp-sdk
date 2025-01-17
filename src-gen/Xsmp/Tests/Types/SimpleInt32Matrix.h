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
// File Name    : SimpleInt32Matrix.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleInt32Matrix.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLEINT32MATRIX_H_
#define XSMP_TESTS_TYPES_SIMPLEINT32MATRIX_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/PrimitiveTypes.h"
#include "Smp/Publication/ITypeRegistry.h"
#include "Xsmp/Array.h"
#include "Xsmp/Tests/Types/SimpleInt32Array.h"

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
using SimpleInt32Matrix = ::Xsmp::Array<::Xsmp::Tests::Types::SimpleInt32Array, 3>;

/// Universally unique identifier of type SimpleInt32Matrix.
static constexpr ::Smp::Uuid Uuid_SimpleInt32Matrix { 0x4d94b2b3U, 0x9b5cU,
        0x4f7fU, 0xb89eU, 0xcd24fb368542U };

void _Register_SimpleInt32Matrix(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_SIMPLEINT32MATRIX_H_
