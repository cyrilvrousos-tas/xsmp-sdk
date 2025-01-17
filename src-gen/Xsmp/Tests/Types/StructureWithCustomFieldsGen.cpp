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
// File Name    : StructureWithCustomFields.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/StructureWithCustomFields.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/Publication/IStructureType.h"
#include "Xsmp/Tests/Types/StructureWithCustomFields.h"
#include <cstddef>

namespace Xsmp::Tests::Types {
void StructureWithCustomFields::_Register(
        ::Smp::Publication::ITypeRegistry *registry) {
    auto *type = registry->AddStructureType("StructureWithCustomFields", /// Name
            "", /// description
            ::Xsmp::Tests::Types::Uuid_StructureWithCustomFields /// UUID
            );

    /// Register the Fields of the Structure
    type->AddField("booleanInput", "", ::Smp::Uuids::Uuid_Bool, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, booleanInput), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            true, ///is an input field
            false ///is an output field
            );
    type->AddField("char8Input", "", ::Smp::Uuids::Uuid_Char8, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, char8Input), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            true, ///is an input field
            false ///is an output field
            );
    type->AddField("enum1Input", "", ::Xsmp::Tests::Types::Uuid_Enum1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, enum1Input), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            true, ///is an input field
            false ///is an output field
            );
    type->AddField("string1Input", "", ::Xsmp::Tests::Types::Uuid_String1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, string1Input), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            true, ///is an input field
            false ///is an output field
            );
    type->AddField("float1Input", "", ::Xsmp::Tests::Types::Uuid_Float1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, float1Input), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            true, ///is an input field
            false ///is an output field
            );
    type->AddField("integer1Input", "", ::Xsmp::Tests::Types::Uuid_Integer1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, integer1Input), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            true, ///is an input field
            false ///is an output field
            );
    type->AddField("struct1Input", "",
            ::Xsmp::Tests::Types::Uuid_SimpleStructure, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, struct1Input), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            true, ///is an input field
            false ///is an output field
            );
    type->AddField("booleanTransient", "", ::Smp::Uuids::Uuid_Bool, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, booleanTransient), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("char8Transient", "", ::Smp::Uuids::Uuid_Char8, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, char8Transient), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("enum1Transient", "", ::Xsmp::Tests::Types::Uuid_Enum1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, enum1Transient), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("string1Transient", "", ::Xsmp::Tests::Types::Uuid_String1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, string1Transient), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("float1Transient", "", ::Xsmp::Tests::Types::Uuid_Float1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, float1Transient), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("integer1Transient", "", ::Xsmp::Tests::Types::Uuid_Integer1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, integer1Transient), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("struct1Transient", "",
            ::Xsmp::Tests::Types::Uuid_SimpleStructure, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, struct1Transient), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("booleanOutput", "", ::Smp::Uuids::Uuid_Bool, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, booleanOutput), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            true ///is an output field
            );
    type->AddField("char8Output", "", ::Smp::Uuids::Uuid_Char8, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, char8Output), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            true ///is an output field
            );
    type->AddField("enum1Output", "", ::Xsmp::Tests::Types::Uuid_Enum1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, enum1Output), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            true ///is an output field
            );
    type->AddField("string1Output", "", ::Xsmp::Tests::Types::Uuid_String1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, string1Output), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            true ///is an output field
            );
    type->AddField("float1Output", "", ::Xsmp::Tests::Types::Uuid_Float1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, float1Output), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            true ///is an output field
            );
    type->AddField("integer1Output", "", ::Xsmp::Tests::Types::Uuid_Integer1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, integer1Output), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            true ///is an output field
            );
    type->AddField("struct1Output", "",
            ::Xsmp::Tests::Types::Uuid_SimpleStructure, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, struct1Output), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            true ///is an output field
            );
    type->AddField("booleanForcible", "", ::Smp::Uuids::Uuid_Bool, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, booleanForcible), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("char8Forcible", "", ::Smp::Uuids::Uuid_Char8, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, char8Forcible), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("enum1Forcible", "", ::Xsmp::Tests::Types::Uuid_Enum1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, enum1Forcible), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("string1Forcible", "", ::Xsmp::Tests::Types::Uuid_String1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, string1Forcible), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("float1Forcible", "", ::Xsmp::Tests::Types::Uuid_Float1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, float1Forcible), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("integer1Forcible", "", ::Xsmp::Tests::Types::Uuid_Integer1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, integer1Forcible), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("struct1Forcible", "",
            ::Xsmp::Tests::Types::Uuid_SimpleStructure, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, struct1Forcible), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("booleanFailure", "", ::Smp::Uuids::Uuid_Bool, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, booleanFailure), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("char8Failure", "", ::Smp::Uuids::Uuid_Char8, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, char8Failure), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("enum1Failure", "", ::Xsmp::Tests::Types::Uuid_Enum1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, enum1Failure), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("string1Failure", "", ::Xsmp::Tests::Types::Uuid_String1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, string1Failure), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("float1Failure", "", ::Xsmp::Tests::Types::Uuid_Float1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, float1Failure), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("integer1Failure", "", ::Xsmp::Tests::Types::Uuid_Integer1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, integer1Failure), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("struct1Failure", "",
            ::Xsmp::Tests::Types::Uuid_SimpleStructure, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, struct1Failure), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            true, ///state
            false, ///is an input field
            false ///is an output field
            );
    type->AddField("booleanAll", "", ::Smp::Uuids::Uuid_Bool, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, booleanAll), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            true, ///is an input field
            true ///is an output field
            );
    type->AddField("char8All", "", ::Smp::Uuids::Uuid_Char8, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, char8All), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            true, ///is an input field
            true ///is an output field
            );
    type->AddField("enum1All", "", ::Xsmp::Tests::Types::Uuid_Enum1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, enum1All), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            true, ///is an input field
            true ///is an output field
            );
    type->AddField("string1All", "", ::Xsmp::Tests::Types::Uuid_String1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, string1All), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            true, ///is an input field
            true ///is an output field
            );
    type->AddField("float1All", "", ::Xsmp::Tests::Types::Uuid_Float1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, float1All), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            true, ///is an input field
            true ///is an output field
            );
    type->AddField("integer1All", "", ::Xsmp::Tests::Types::Uuid_Integer1, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, integer1All), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            true, ///is an input field
            true ///is an output field
            );
    type->AddField("struct1All", "", ::Xsmp::Tests::Types::Uuid_SimpleStructure, ///UUID of the Field Type
            offsetof(StructureWithCustomFields, struct1All), ///Compute the offset of the current item
            ::Smp::ViewKind::VK_None, ///viewkind
            false, ///state
            true, ///is an input field
            true ///is an output field
            );
}

} // namespace Xsmp::Tests::Types
