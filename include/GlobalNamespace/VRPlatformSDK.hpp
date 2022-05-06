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
  // Forward declaring type: VRPlatformSDK
  struct VRPlatformSDK;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRPlatformSDK, "", "VRPlatformSDK");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VRPlatformSDK
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRPlatformSDK/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VRPlatformSDK
    constexpr VRPlatformSDK(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VRPlatformSDK OpenVR
    static constexpr const int OpenVR = 0;
    // Get static field: static public VRPlatformSDK OpenVR
    static ::GlobalNamespace::VRPlatformSDK _get_OpenVR();
    // Set static field: static public VRPlatformSDK OpenVR
    static void _set_OpenVR(::GlobalNamespace::VRPlatformSDK value);
    // static field const value: static public VRPlatformSDK Oculus
    static constexpr const int Oculus = 1;
    // Get static field: static public VRPlatformSDK Oculus
    static ::GlobalNamespace::VRPlatformSDK _get_Oculus();
    // Set static field: static public VRPlatformSDK Oculus
    static void _set_Oculus(::GlobalNamespace::VRPlatformSDK value);
    // static field const value: static public VRPlatformSDK Unknown
    static constexpr const int Unknown = 2;
    // Get static field: static public VRPlatformSDK Unknown
    static ::GlobalNamespace::VRPlatformSDK _get_Unknown();
    // Set static field: static public VRPlatformSDK Unknown
    static void _set_Unknown(::GlobalNamespace::VRPlatformSDK value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // VRPlatformSDK
  #pragma pack(pop)
  static check_size<sizeof(VRPlatformSDK), 0 + sizeof(int)> __GlobalNamespace_VRPlatformSDKSizeCheck;
  static_assert(sizeof(VRPlatformSDK) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
