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
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: Axis
  struct Axis;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Axis, "RootMotion", "Axis");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Axis
  // [TokenAttribute] Offset: FFFFFFFF
  struct Axis/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Axis
    constexpr Axis(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public RootMotion.Axis X
    static constexpr const int X = 0;
    // Get static field: static public RootMotion.Axis X
    static ::RootMotion::Axis _get_X();
    // Set static field: static public RootMotion.Axis X
    static void _set_X(::RootMotion::Axis value);
    // static field const value: static public RootMotion.Axis Y
    static constexpr const int Y = 1;
    // Get static field: static public RootMotion.Axis Y
    static ::RootMotion::Axis _get_Y();
    // Set static field: static public RootMotion.Axis Y
    static void _set_Y(::RootMotion::Axis value);
    // static field const value: static public RootMotion.Axis Z
    static constexpr const int Z = 2;
    // Get static field: static public RootMotion.Axis Z
    static ::RootMotion::Axis _get_Z();
    // Set static field: static public RootMotion.Axis Z
    static void _set_Z(::RootMotion::Axis value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // RootMotion.Axis
  #pragma pack(pop)
  static check_size<sizeof(Axis), 0 + sizeof(int)> __RootMotion_AxisSizeCheck;
  static_assert(sizeof(Axis) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
