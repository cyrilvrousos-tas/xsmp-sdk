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
// File Name    : Integer1Array.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/Integer1Array.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_INTEGER1ARRAY_H_
#define XSMP_TESTS_TYPES_INTEGER1ARRAY_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/PrimitiveTypes.h"
#include "Smp/Publication/ITypeRegistry.h"
#include "Xsmp/Array.h"
#include "Xsmp/Tests/Types/Integer1.h"

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
using Integer1Array = ::Xsmp::Array<::Xsmp::Tests::Types::Integer1, 3>;

/// Universally unique identifier of type Integer1Array.
static constexpr ::Smp::Uuid Uuid_Integer1Array { 0xf3b181a7U, 0x896dU, 0x400dU,
        0xa61aU, 0x9e0edb92fabaU };

void _Register_Integer1Array(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_INTEGER1ARRAY_H_
