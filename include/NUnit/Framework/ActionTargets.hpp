// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: ActionTargets
  struct ActionTargets;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::ActionTargets, "NUnit.Framework", "ActionTargets");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.ActionTargets
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ActionTargets/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ActionTargets
    constexpr ActionTargets(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.ActionTargets Default
    static constexpr const int Default = 0;
    // Get static field: static public NUnit.Framework.ActionTargets Default
    static NUnit::Framework::ActionTargets _get_Default();
    // Set static field: static public NUnit.Framework.ActionTargets Default
    static void _set_Default(NUnit::Framework::ActionTargets value);
    // static field const value: static public NUnit.Framework.ActionTargets Test
    static constexpr const int Test = 1;
    // Get static field: static public NUnit.Framework.ActionTargets Test
    static NUnit::Framework::ActionTargets _get_Test();
    // Set static field: static public NUnit.Framework.ActionTargets Test
    static void _set_Test(NUnit::Framework::ActionTargets value);
    // static field const value: static public NUnit.Framework.ActionTargets Suite
    static constexpr const int Suite = 2;
    // Get static field: static public NUnit.Framework.ActionTargets Suite
    static NUnit::Framework::ActionTargets _get_Suite();
    // Set static field: static public NUnit.Framework.ActionTargets Suite
    static void _set_Suite(NUnit::Framework::ActionTargets value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NUnit.Framework.ActionTargets
  #pragma pack(pop)
  static check_size<sizeof(ActionTargets), 0 + sizeof(int)> __NUnit_Framework_ActionTargetsSizeCheck;
  static_assert(sizeof(ActionTargets) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
