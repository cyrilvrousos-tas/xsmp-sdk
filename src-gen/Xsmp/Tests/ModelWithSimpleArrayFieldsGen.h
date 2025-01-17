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
// File Name    : ModelWithSimpleArrayFieldsGen.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/ModelWithSimpleArrayFieldsGen.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_MODELWITHSIMPLEARRAYFIELDSGEN_H_
#define XSMP_TESTS_MODELWITHSIMPLEARRAYFIELDSGEN_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/ISimulator.h"
#include "Smp/Publication/ITypeRegistry.h"
#include "Xsmp/FallibleModel.h"
#include "Xsmp/Field.h"
#include "Xsmp/Model.h"
#include "Xsmp/Tests/Types/SimpleBoolArray.h"
#include "Xsmp/Tests/Types/SimpleChar8Array.h"
#include "Xsmp/Tests/Types/SimpleEnum1Array.h"
#include "Xsmp/Tests/Types/SimpleFloat1Array.h"
#include "Xsmp/Tests/Types/SimpleInteger1Array.h"
#include "Xsmp/Tests/Types/SimpleString1Array.h"
#include <type_traits>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests {
// forward declaration of user class
class ModelWithSimpleArrayFields;
/// Universally unique identifier of type ModelWithSimpleArrayFields.
static constexpr ::Smp::Uuid Uuid_ModelWithSimpleArrayFields { 0xea180c7cU,
        0x4a55U, 0x4b42U, 0x8029U, 0x569a0b622c00U };

class ModelWithSimpleArrayFieldsGen: public ::Xsmp::Model,
        public virtual ::Xsmp::FallibleModel {

    friend class ::Xsmp::Tests::ModelWithSimpleArrayFields;

public:
    // ------------------------------------------------------------------------------------
    // -------------------------- Constructors/Destructor --------------------------
    // ------------------------------------------------------------------------------------

    /// Constructor setting name, description, parent and simulator.
    /// @param name Name of new model instance.
    /// @param description Description of new model instance.
    /// @param parent Parent of new model instance.
    /// @param simulator The simulator instance.
    ModelWithSimpleArrayFieldsGen(::Smp::String8 name,
            ::Smp::String8 description, ::Smp::IObject *parent,
            ::Smp::ISimulator *simulator);
    /// deleted copy constructor
    ModelWithSimpleArrayFieldsGen(const ModelWithSimpleArrayFieldsGen&) = delete;
    /// deleted move constructor
    ModelWithSimpleArrayFieldsGen(ModelWithSimpleArrayFieldsGen&&) = delete;
    /// deleted copy assignment
    ModelWithSimpleArrayFieldsGen& operator=(
            const ModelWithSimpleArrayFieldsGen&) = delete;
    /// deleted move assignment
    ModelWithSimpleArrayFieldsGen& operator=(ModelWithSimpleArrayFieldsGen&&) = delete;

    /// Virtual destructor to release memory.
    ~ModelWithSimpleArrayFieldsGen() override;

    // ----------------------------------------------------------------------------------
    // -------------------------------- IComponent ---------------------------------
    // ----------------------------------------------------------------------------------

    /// Publish fields, operations and properties of the model.
    /// @param receiver Publication receiver.
    void Publish(::Smp::IPublication *receiver) override;

    /// Request for configuration.
    /// @param logger Logger to use for log messages during Configure().
    /// @param linkRegistry Link Registry to use for registration of
    ///         links created during Configure() or later.
    void Configure(::Smp::Services::ILogger *logger,
            ::Smp::Services::ILinkRegistry *linkRegistry) override;

    /// Connect model to simulator.
    /// @param simulator Simulation Environment that hosts the model.
    ///
    void Connect(::Smp::ISimulator *simulator) override;

    /// Disconnect model to simulator.
    /// @throws Smp::InvalidComponentState
    void Disconnect() override;

    /// Return the Universally Unique Identifier of the Model.
    /// @return Universally Unique Identifier of the Model.
    const Smp::Uuid& GetUuid() const override;

private:
    ::Xsmp::Tests::Types::SimpleBoolArray boolean;
    ::Xsmp::Tests::Types::SimpleChar8Array char8;
    ::Xsmp::Tests::Types::SimpleEnum1Array enum1;
    ::Xsmp::Tests::Types::SimpleString1Array string1;
    ::Xsmp::Tests::Types::SimpleFloat1Array float1;
    ::Xsmp::Tests::Types::SimpleInteger1Array integer1;
    ::Xsmp::Tests::Types::SimpleBoolArray booleanInput;
    ::Xsmp::Tests::Types::SimpleChar8Array char8Input;
    ::Xsmp::Tests::Types::SimpleEnum1Array enum1Input;
    ::Xsmp::Tests::Types::SimpleString1Array string1Input;
    ::Xsmp::Tests::Types::SimpleFloat1Array float1Input;
    ::Xsmp::Tests::Types::SimpleInteger1Array integer1Input;
    ::Xsmp::Tests::Types::SimpleBoolArray booleanTransient;
    ::Xsmp::Tests::Types::SimpleChar8Array char8Transient;
    ::Xsmp::Tests::Types::SimpleEnum1Array enum1Transient;
    ::Xsmp::Tests::Types::SimpleString1Array string1Transient;
    ::Xsmp::Tests::Types::SimpleFloat1Array float1Transient;
    ::Xsmp::Tests::Types::SimpleInteger1Array integer1Transient;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleBoolArray>::output booleanOutput;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleChar8Array>::output char8Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleEnum1Array>::output enum1Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleString1Array>::output string1Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleFloat1Array>::output float1Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleInteger1Array>::output integer1Output;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleBoolArray>::failure booleanFailure;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleChar8Array>::failure char8Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleEnum1Array>::failure enum1Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleString1Array>::failure string1Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleFloat1Array>::failure float1Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleInteger1Array>::failure integer1Failure;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleBoolArray>::transient::input::output::failure booleanAll;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleChar8Array>::transient::input::output::failure char8All;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleEnum1Array>::transient::input::output::failure enum1All;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleString1Array>::transient::input::output::failure string1All;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleFloat1Array>::transient::input::output::failure float1All;
    ::Xsmp::Field<::Xsmp::Tests::Types::SimpleInteger1Array>::transient::input::output::failure integer1All;
};
} // namespace Xsmp::Tests

#endif // XSMP_TESTS_MODELWITHSIMPLEARRAYFIELDSGEN_H_
