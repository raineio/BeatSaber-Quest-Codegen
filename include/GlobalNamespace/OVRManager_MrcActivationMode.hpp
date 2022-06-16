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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MrcActivationMode
  struct OVRManager_MrcActivationMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_MrcActivationMode, "", "OVRManager/MrcActivationMode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/MrcActivationMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_MrcActivationMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRManager_MrcActivationMode
    constexpr OVRManager_MrcActivationMode(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public OVRManager/MrcActivationMode Automatic
    static constexpr const int Automatic = 0;
    // Get static field: static public OVRManager/MrcActivationMode Automatic
    static ::GlobalNamespace::OVRManager_MrcActivationMode _get_Automatic();
    // Set static field: static public OVRManager/MrcActivationMode Automatic
    static void _set_Automatic(::GlobalNamespace::OVRManager_MrcActivationMode value);
    // static field const value: static public OVRManager/MrcActivationMode Disabled
    static constexpr const int Disabled = 1;
    // Get static field: static public OVRManager/MrcActivationMode Disabled
    static ::GlobalNamespace::OVRManager_MrcActivationMode _get_Disabled();
    // Set static field: static public OVRManager/MrcActivationMode Disabled
    static void _set_Disabled(::GlobalNamespace::OVRManager_MrcActivationMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRManager/MrcActivationMode
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_MrcActivationMode), 0 + sizeof(int)> __GlobalNamespace_OVRManager_MrcActivationModeSizeCheck;
  static_assert(sizeof(OVRManager_MrcActivationMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
