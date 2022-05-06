// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::Axis2D, "", "OVRInput/Axis2D");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/Axis2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::Axis2D/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Axis2D
    constexpr Axis2D(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/Axis2D None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/Axis2D None
    static ::GlobalNamespace::OVRInput::Axis2D _get_None();
    // Set static field: static public OVRInput/Axis2D None
    static void _set_None(::GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D PrimaryThumbstick
    static constexpr const int PrimaryThumbstick = 1;
    // Get static field: static public OVRInput/Axis2D PrimaryThumbstick
    static ::GlobalNamespace::OVRInput::Axis2D _get_PrimaryThumbstick();
    // Set static field: static public OVRInput/Axis2D PrimaryThumbstick
    static void _set_PrimaryThumbstick(::GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D PrimaryTouchpad
    static constexpr const int PrimaryTouchpad = 4;
    // Get static field: static public OVRInput/Axis2D PrimaryTouchpad
    static ::GlobalNamespace::OVRInput::Axis2D _get_PrimaryTouchpad();
    // Set static field: static public OVRInput/Axis2D PrimaryTouchpad
    static void _set_PrimaryTouchpad(::GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D SecondaryThumbstick
    static constexpr const int SecondaryThumbstick = 2;
    // Get static field: static public OVRInput/Axis2D SecondaryThumbstick
    static ::GlobalNamespace::OVRInput::Axis2D _get_SecondaryThumbstick();
    // Set static field: static public OVRInput/Axis2D SecondaryThumbstick
    static void _set_SecondaryThumbstick(::GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D SecondaryTouchpad
    static constexpr const int SecondaryTouchpad = 8;
    // Get static field: static public OVRInput/Axis2D SecondaryTouchpad
    static ::GlobalNamespace::OVRInput::Axis2D _get_SecondaryTouchpad();
    // Set static field: static public OVRInput/Axis2D SecondaryTouchpad
    static void _set_SecondaryTouchpad(::GlobalNamespace::OVRInput::Axis2D value);
    // static field const value: static public OVRInput/Axis2D Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/Axis2D Any
    static ::GlobalNamespace::OVRInput::Axis2D _get_Any();
    // Set static field: static public OVRInput/Axis2D Any
    static void _set_Any(::GlobalNamespace::OVRInput::Axis2D value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRInput/Axis2D
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::Axis2D), 0 + sizeof(int)> __GlobalNamespace_OVRInput_Axis2DSizeCheck;
  static_assert(sizeof(OVRInput::Axis2D) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
