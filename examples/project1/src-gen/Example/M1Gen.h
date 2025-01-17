// Copyright 2023 YOUR ORGANIZATION. All rights reserved.
// 
// YOUR NOTICE

// -----------------------------------------------------------------------------
// File Name    : M1Gen.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Example/M1Gen.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef EXAMPLE_M1GEN_H_
#define EXAMPLE_M1GEN_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/ISimulator.h"
#include "Smp/PrimitiveTypes.h"
#include "Smp/Publication/ITypeRegistry.h"
#include "Xsmp/Composite.h"
#include "Xsmp/Container.h"
#include "Xsmp/Model.h"
#include <type_traits>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Example {
// forward declaration of user class
class M1;
/// Universally unique identifier of type M1.
static constexpr ::Smp::Uuid Uuid_M1 { 0x2386045dU, 0x5cffU, 0x46b5U, 0xb6daU,
        0x3ff6e2cfd792U };

class M1Gen: public ::Xsmp::Model, public virtual ::Xsmp::Composite {

    friend class ::Example::M1;

public:
    // ------------------------------------------------------------------------------------
    // -------------------------- Constructors/Destructor --------------------------
    // ------------------------------------------------------------------------------------

    /// Constructor setting name, description, parent and simulator.
    /// @param name Name of new model instance.
    /// @param description Description of new model instance.
    /// @param parent Parent of new model instance.
    /// @param simulator The simulator instance.
    M1Gen(::Smp::String8 name, ::Smp::String8 description,
            ::Smp::IObject *parent, ::Smp::ISimulator *simulator);
    /// deleted copy constructor
    M1Gen(const M1Gen&) = delete;
    /// deleted move constructor
    M1Gen(M1Gen&&) = delete;
    /// deleted copy assignment
    M1Gen& operator=(const M1Gen&) = delete;
    /// deleted move assignment
    M1Gen& operator=(M1Gen&&) = delete;

    /// Virtual destructor to release memory.
    ~M1Gen() override;

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
    ::Smp::Int8 integer1;
    ::Smp::Int16 integer2;
public:
    ::Xsmp::Container<::Example::M1> *subModels;
};
} // namespace Example

#endif // EXAMPLE_M1GEN_H_
