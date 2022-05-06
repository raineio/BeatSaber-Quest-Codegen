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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackedDeviceClass, "OVR.OpenVR", "ETrackedDeviceClass");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.ETrackedDeviceClass
  // [TokenAttribute] Offset: FFFFFFFF
  struct ETrackedDeviceClass/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ETrackedDeviceClass
    constexpr ETrackedDeviceClass(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.ETrackedDeviceClass Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public OVR.OpenVR.ETrackedDeviceClass Invalid
    static ::OVR::OpenVR::ETrackedDeviceClass _get_Invalid();
    // Set static field: static public OVR.OpenVR.ETrackedDeviceClass Invalid
    static void _set_Invalid(::OVR::OpenVR::ETrackedDeviceClass value);
    // static field const value: static public OVR.OpenVR.ETrackedDeviceClass HMD
    static constexpr const int HMD = 1;
    // Get static field: static public OVR.OpenVR.ETrackedDeviceClass HMD
    static ::OVR::OpenVR::ETrackedDeviceClass _get_HMD();
    // Set static field: static public OVR.OpenVR.ETrackedDeviceClass HMD
    static void _set_HMD(::OVR::OpenVR::ETrackedDeviceClass value);
    // static field const value: static public OVR.OpenVR.ETrackedDeviceClass Controller
    static constexpr const int Controller = 2;
    // Get static field: static public OVR.OpenVR.ETrackedDeviceClass Controller
    static ::OVR::OpenVR::ETrackedDeviceClass _get_Controller();
    // Set static field: static public OVR.OpenVR.ETrackedDeviceClass Controller
    static void _set_Controller(::OVR::OpenVR::ETrackedDeviceClass value);
    // static field const value: static public OVR.OpenVR.ETrackedDeviceClass GenericTracker
    static constexpr const int GenericTracker = 3;
    // Get static field: static public OVR.OpenVR.ETrackedDeviceClass GenericTracker
    static ::OVR::OpenVR::ETrackedDeviceClass _get_GenericTracker();
    // Set static field: static public OVR.OpenVR.ETrackedDeviceClass GenericTracker
    static void _set_GenericTracker(::OVR::OpenVR::ETrackedDeviceClass value);
    // static field const value: static public OVR.OpenVR.ETrackedDeviceClass TrackingReference
    static constexpr const int TrackingReference = 4;
    // Get static field: static public OVR.OpenVR.ETrackedDeviceClass TrackingReference
    static ::OVR::OpenVR::ETrackedDeviceClass _get_TrackingReference();
    // Set static field: static public OVR.OpenVR.ETrackedDeviceClass TrackingReference
    static void _set_TrackingReference(::OVR::OpenVR::ETrackedDeviceClass value);
    // static field const value: static public OVR.OpenVR.ETrackedDeviceClass DisplayRedirect
    static constexpr const int DisplayRedirect = 5;
    // Get static field: static public OVR.OpenVR.ETrackedDeviceClass DisplayRedirect
    static ::OVR::OpenVR::ETrackedDeviceClass _get_DisplayRedirect();
    // Set static field: static public OVR.OpenVR.ETrackedDeviceClass DisplayRedirect
    static void _set_DisplayRedirect(::OVR::OpenVR::ETrackedDeviceClass value);
    // static field const value: static public OVR.OpenVR.ETrackedDeviceClass Max
    static constexpr const int Max = 6;
    // Get static field: static public OVR.OpenVR.ETrackedDeviceClass Max
    static ::OVR::OpenVR::ETrackedDeviceClass _get_Max();
    // Set static field: static public OVR.OpenVR.ETrackedDeviceClass Max
    static void _set_Max(::OVR::OpenVR::ETrackedDeviceClass value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.OpenVR.ETrackedDeviceClass
  #pragma pack(pop)
  static check_size<sizeof(ETrackedDeviceClass), 0 + sizeof(int)> __OVR_OpenVR_ETrackedDeviceClassSizeCheck;
  static_assert(sizeof(ETrackedDeviceClass) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
