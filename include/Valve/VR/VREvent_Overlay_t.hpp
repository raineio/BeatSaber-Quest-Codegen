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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_Overlay_t
  struct VREvent_Overlay_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_Overlay_t, "Valve.VR", "VREvent_Overlay_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Overlay_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Overlay_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 overlayHandle
    // Size: 0x8
    // Offset: 0x0
    uint64_t overlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: VREvent_Overlay_t
    constexpr VREvent_Overlay_t(uint64_t overlayHandle_ = {}) noexcept : overlayHandle{overlayHandle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return overlayHandle;
    }
    // Get instance field reference: public System.UInt64 overlayHandle
    [[deprecated("Use field access instead!")]] uint64_t& dyn_overlayHandle();
  }; // Valve.VR.VREvent_Overlay_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Overlay_t), 0 + sizeof(uint64_t)> __Valve_VR_VREvent_Overlay_tSizeCheck;
  static_assert(sizeof(VREvent_Overlay_t) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
