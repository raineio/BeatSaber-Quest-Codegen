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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EVRMouseButton
  struct EVRMouseButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVRMouseButton, "Valve.VR", "EVRMouseButton");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRMouseButton
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRMouseButton/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRMouseButton
    constexpr EVRMouseButton(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRMouseButton Left
    static constexpr const int Left = 1;
    // Get static field: static public Valve.VR.EVRMouseButton Left
    static ::Valve::VR::EVRMouseButton _get_Left();
    // Set static field: static public Valve.VR.EVRMouseButton Left
    static void _set_Left(::Valve::VR::EVRMouseButton value);
    // static field const value: static public Valve.VR.EVRMouseButton Right
    static constexpr const int Right = 2;
    // Get static field: static public Valve.VR.EVRMouseButton Right
    static ::Valve::VR::EVRMouseButton _get_Right();
    // Set static field: static public Valve.VR.EVRMouseButton Right
    static void _set_Right(::Valve::VR::EVRMouseButton value);
    // static field const value: static public Valve.VR.EVRMouseButton Middle
    static constexpr const int Middle = 4;
    // Get static field: static public Valve.VR.EVRMouseButton Middle
    static ::Valve::VR::EVRMouseButton _get_Middle();
    // Set static field: static public Valve.VR.EVRMouseButton Middle
    static void _set_Middle(::Valve::VR::EVRMouseButton value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EVRMouseButton
  #pragma pack(pop)
  static check_size<sizeof(EVRMouseButton), 0 + sizeof(int)> __Valve_VR_EVRMouseButtonSizeCheck;
  static_assert(sizeof(EVRMouseButton) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
