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
  // Forward declaring type: EGamepadTextInputMode
  struct EGamepadTextInputMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EGamepadTextInputMode, "Valve.VR", "EGamepadTextInputMode");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EGamepadTextInputMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct EGamepadTextInputMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EGamepadTextInputMode
    constexpr EGamepadTextInputMode(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModeNormal
    static constexpr const int k_EGamepadTextInputModeNormal = 0;
    // Get static field: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModeNormal
    static ::Valve::VR::EGamepadTextInputMode _get_k_EGamepadTextInputModeNormal();
    // Set static field: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModeNormal
    static void _set_k_EGamepadTextInputModeNormal(::Valve::VR::EGamepadTextInputMode value);
    // static field const value: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModePassword
    static constexpr const int k_EGamepadTextInputModePassword = 1;
    // Get static field: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModePassword
    static ::Valve::VR::EGamepadTextInputMode _get_k_EGamepadTextInputModePassword();
    // Set static field: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModePassword
    static void _set_k_EGamepadTextInputModePassword(::Valve::VR::EGamepadTextInputMode value);
    // static field const value: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModeSubmit
    static constexpr const int k_EGamepadTextInputModeSubmit = 2;
    // Get static field: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModeSubmit
    static ::Valve::VR::EGamepadTextInputMode _get_k_EGamepadTextInputModeSubmit();
    // Set static field: static public Valve.VR.EGamepadTextInputMode k_EGamepadTextInputModeSubmit
    static void _set_k_EGamepadTextInputModeSubmit(::Valve::VR::EGamepadTextInputMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EGamepadTextInputMode
  #pragma pack(pop)
  static check_size<sizeof(EGamepadTextInputMode), 0 + sizeof(int)> __Valve_VR_EGamepadTextInputModeSizeCheck;
  static_assert(sizeof(EGamepadTextInputMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
