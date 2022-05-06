// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_MessageOverlay_t
  struct VREvent_MessageOverlay_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_MessageOverlay_t, "Valve.VR", "VREvent_MessageOverlay_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_MessageOverlay_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_MessageOverlay_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 unVRMessageOverlayResponse
    // Size: 0x4
    // Offset: 0x0
    uint unVRMessageOverlayResponse;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_MessageOverlay_t
    constexpr VREvent_MessageOverlay_t(uint unVRMessageOverlayResponse_ = {}) noexcept : unVRMessageOverlayResponse{unVRMessageOverlayResponse_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return unVRMessageOverlayResponse;
    }
    // Get instance field reference: public System.UInt32 unVRMessageOverlayResponse
    [[deprecated("Use field access instead!")]] uint& dyn_unVRMessageOverlayResponse();
  }; // Valve.VR.VREvent_MessageOverlay_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_MessageOverlay_t), 0 + sizeof(uint)> __Valve_VR_VREvent_MessageOverlay_tSizeCheck;
  static_assert(sizeof(VREvent_MessageOverlay_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
