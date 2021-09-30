// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector3_t
#include "OVR/OpenVR/HmdVector3_t.hpp"
// Including type: OVR.OpenVR.HmdVector2_t
#include "OVR/OpenVR/HmdVector2_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VROverlayIntersectionResults_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VROverlayIntersectionResults_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public OVR.OpenVR.HmdVector3_t vPoint
    // Size: 0xC
    // Offset: 0x0
    OVR::OpenVR::HmdVector3_t vPoint;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3_t) == 0xC);
    // public OVR.OpenVR.HmdVector3_t vNormal
    // Size: 0xC
    // Offset: 0xC
    OVR::OpenVR::HmdVector3_t vNormal;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3_t) == 0xC);
    // public OVR.OpenVR.HmdVector2_t vUVs
    // Size: 0x8
    // Offset: 0x18
    OVR::OpenVR::HmdVector2_t vUVs;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector2_t) == 0x8);
    // public System.Single fDistance
    // Size: 0x4
    // Offset: 0x20
    float fDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VROverlayIntersectionResults_t
    constexpr VROverlayIntersectionResults_t(OVR::OpenVR::HmdVector3_t vPoint_ = {}, OVR::OpenVR::HmdVector3_t vNormal_ = {}, OVR::OpenVR::HmdVector2_t vUVs_ = {}, float fDistance_ = {}) noexcept : vPoint{vPoint_}, vNormal{vNormal_}, vUVs{vUVs_}, fDistance{fDistance_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.HmdVector3_t vPoint
    OVR::OpenVR::HmdVector3_t& dyn_vPoint();
    // Get instance field reference: public OVR.OpenVR.HmdVector3_t vNormal
    OVR::OpenVR::HmdVector3_t& dyn_vNormal();
    // Get instance field reference: public OVR.OpenVR.HmdVector2_t vUVs
    OVR::OpenVR::HmdVector2_t& dyn_vUVs();
    // Get instance field reference: public System.Single fDistance
    float& dyn_fDistance();
  }; // OVR.OpenVR.VROverlayIntersectionResults_t
  #pragma pack(pop)
  static check_size<sizeof(VROverlayIntersectionResults_t), 32 + sizeof(float)> __OVR_OpenVR_VROverlayIntersectionResults_tSizeCheck;
  static_assert(sizeof(VROverlayIntersectionResults_t) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayIntersectionResults_t, "OVR.OpenVR", "VROverlayIntersectionResults_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
