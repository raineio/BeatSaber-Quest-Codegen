// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VREvent_Overlay_t
  struct VREvent_Overlay_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Overlay_t, "OVR.OpenVR", "VREvent_Overlay_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Overlay_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Overlay_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.UInt64 overlayHandle
    // Size: 0x8
    // Offset: 0x0
    uint64_t overlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 devicePath
    // Size: 0x8
    // Offset: 0x8
    uint64_t devicePath;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: VREvent_Overlay_t
    constexpr VREvent_Overlay_t(uint64_t overlayHandle_ = {}, uint64_t devicePath_ = {}) noexcept : overlayHandle{overlayHandle_}, devicePath{devicePath_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 overlayHandle
    uint64_t& dyn_overlayHandle();
    // Get instance field reference: public System.UInt64 devicePath
    uint64_t& dyn_devicePath();
  }; // OVR.OpenVR.VREvent_Overlay_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Overlay_t), 8 + sizeof(uint64_t)> __OVR_OpenVR_VREvent_Overlay_tSizeCheck;
  static_assert(sizeof(VREvent_Overlay_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
