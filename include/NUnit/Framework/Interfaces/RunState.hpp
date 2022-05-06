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
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: RunState
  struct RunState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Interfaces::RunState, "NUnit.Framework.Interfaces", "RunState");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.RunState
  // [TokenAttribute] Offset: FFFFFFFF
  struct RunState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RunState
    constexpr RunState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.Interfaces.RunState NotRunnable
    static constexpr const int NotRunnable = 0;
    // Get static field: static public NUnit.Framework.Interfaces.RunState NotRunnable
    static ::NUnit::Framework::Interfaces::RunState _get_NotRunnable();
    // Set static field: static public NUnit.Framework.Interfaces.RunState NotRunnable
    static void _set_NotRunnable(::NUnit::Framework::Interfaces::RunState value);
    // static field const value: static public NUnit.Framework.Interfaces.RunState Runnable
    static constexpr const int Runnable = 1;
    // Get static field: static public NUnit.Framework.Interfaces.RunState Runnable
    static ::NUnit::Framework::Interfaces::RunState _get_Runnable();
    // Set static field: static public NUnit.Framework.Interfaces.RunState Runnable
    static void _set_Runnable(::NUnit::Framework::Interfaces::RunState value);
    // static field const value: static public NUnit.Framework.Interfaces.RunState Explicit
    static constexpr const int Explicit = 2;
    // Get static field: static public NUnit.Framework.Interfaces.RunState Explicit
    static ::NUnit::Framework::Interfaces::RunState _get_Explicit();
    // Set static field: static public NUnit.Framework.Interfaces.RunState Explicit
    static void _set_Explicit(::NUnit::Framework::Interfaces::RunState value);
    // static field const value: static public NUnit.Framework.Interfaces.RunState Skipped
    static constexpr const int Skipped = 3;
    // Get static field: static public NUnit.Framework.Interfaces.RunState Skipped
    static ::NUnit::Framework::Interfaces::RunState _get_Skipped();
    // Set static field: static public NUnit.Framework.Interfaces.RunState Skipped
    static void _set_Skipped(::NUnit::Framework::Interfaces::RunState value);
    // static field const value: static public NUnit.Framework.Interfaces.RunState Ignored
    static constexpr const int Ignored = 4;
    // Get static field: static public NUnit.Framework.Interfaces.RunState Ignored
    static ::NUnit::Framework::Interfaces::RunState _get_Ignored();
    // Set static field: static public NUnit.Framework.Interfaces.RunState Ignored
    static void _set_Ignored(::NUnit::Framework::Interfaces::RunState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // NUnit.Framework.Interfaces.RunState
  #pragma pack(pop)
  static check_size<sizeof(RunState), 0 + sizeof(int)> __NUnit_Framework_Interfaces_RunStateSizeCheck;
  static_assert(sizeof(RunState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
