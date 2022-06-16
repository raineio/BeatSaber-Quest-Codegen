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
// Type namespace: System
namespace System {
  // Forward declaring type: Handles
  struct Handles;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Handles, "System", "Handles");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Handles
  // [TokenAttribute] Offset: FFFFFFFF
  struct Handles/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Handles
    constexpr Handles(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Handles STD_INPUT
    static constexpr const int STD_INPUT = -10;
    // Get static field: static public System.Handles STD_INPUT
    static ::System::Handles _get_STD_INPUT();
    // Set static field: static public System.Handles STD_INPUT
    static void _set_STD_INPUT(::System::Handles value);
    // static field const value: static public System.Handles STD_OUTPUT
    static constexpr const int STD_OUTPUT = -11;
    // Get static field: static public System.Handles STD_OUTPUT
    static ::System::Handles _get_STD_OUTPUT();
    // Set static field: static public System.Handles STD_OUTPUT
    static void _set_STD_OUTPUT(::System::Handles value);
    // static field const value: static public System.Handles STD_ERROR
    static constexpr const int STD_ERROR = -12;
    // Get static field: static public System.Handles STD_ERROR
    static ::System::Handles _get_STD_ERROR();
    // Set static field: static public System.Handles STD_ERROR
    static void _set_STD_ERROR(::System::Handles value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Handles
  #pragma pack(pop)
  static check_size<sizeof(Handles), 0 + sizeof(int)> __System_HandlesSizeCheck;
  static_assert(sizeof(Handles) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
