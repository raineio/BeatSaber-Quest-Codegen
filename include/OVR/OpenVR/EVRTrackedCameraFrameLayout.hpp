// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRTrackedCameraFrameLayout
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRTrackedCameraFrameLayout/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRTrackedCameraFrameLayout
    constexpr EVRTrackedCameraFrameLayout(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraFrameLayout Mono
    static constexpr const int Mono = 1;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraFrameLayout Mono
    static OVR::OpenVR::EVRTrackedCameraFrameLayout _get_Mono();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraFrameLayout Mono
    static void _set_Mono(OVR::OpenVR::EVRTrackedCameraFrameLayout value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraFrameLayout Stereo
    static constexpr const int Stereo = 2;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraFrameLayout Stereo
    static OVR::OpenVR::EVRTrackedCameraFrameLayout _get_Stereo();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraFrameLayout Stereo
    static void _set_Stereo(OVR::OpenVR::EVRTrackedCameraFrameLayout value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraFrameLayout VerticalLayout
    static constexpr const int VerticalLayout = 16;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraFrameLayout VerticalLayout
    static OVR::OpenVR::EVRTrackedCameraFrameLayout _get_VerticalLayout();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraFrameLayout VerticalLayout
    static void _set_VerticalLayout(OVR::OpenVR::EVRTrackedCameraFrameLayout value);
    // static field const value: static public OVR.OpenVR.EVRTrackedCameraFrameLayout HorizontalLayout
    static constexpr const int HorizontalLayout = 32;
    // Get static field: static public OVR.OpenVR.EVRTrackedCameraFrameLayout HorizontalLayout
    static OVR::OpenVR::EVRTrackedCameraFrameLayout _get_HorizontalLayout();
    // Set static field: static public OVR.OpenVR.EVRTrackedCameraFrameLayout HorizontalLayout
    static void _set_HorizontalLayout(OVR::OpenVR::EVRTrackedCameraFrameLayout value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRTrackedCameraFrameLayout
  #pragma pack(pop)
  static check_size<sizeof(EVRTrackedCameraFrameLayout), 0 + sizeof(int)> __OVR_OpenVR_EVRTrackedCameraFrameLayoutSizeCheck;
  static_assert(sizeof(EVRTrackedCameraFrameLayout) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRTrackedCameraFrameLayout, "OVR.OpenVR", "EVRTrackedCameraFrameLayout");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
