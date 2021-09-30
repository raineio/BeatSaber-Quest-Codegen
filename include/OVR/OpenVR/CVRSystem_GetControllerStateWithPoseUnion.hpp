// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.CVRSystem
#include "OVR/OpenVR/CVRSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.CVRSystem/OVR.OpenVR.GetControllerStateWithPoseUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRSystem::GetControllerStateWithPoseUnion/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerStateWithPose pGetControllerStateWithPose
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRSystem::_GetControllerStateWithPose* pGetControllerStateWithPose;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*) == 0x8);
    // public OVR.OpenVR.CVRSystem/OVR.OpenVR._GetControllerStateWithPosePacked pGetControllerStateWithPosePacked
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::CVRSystem::_GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRSystem::_GetControllerStateWithPosePacked*) == 0x8);
    public:
    // Creating value type constructor for type: GetControllerStateWithPoseUnion
    constexpr GetControllerStateWithPoseUnion(OVR::OpenVR::IVRSystem::_GetControllerStateWithPose* pGetControllerStateWithPose_ = {}, OVR::OpenVR::CVRSystem::_GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked_ = {}) noexcept : pGetControllerStateWithPose{pGetControllerStateWithPose_}, pGetControllerStateWithPosePacked{pGetControllerStateWithPosePacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerStateWithPose pGetControllerStateWithPose
    OVR::OpenVR::IVRSystem::_GetControllerStateWithPose*& dyn_pGetControllerStateWithPose();
    // Get instance field reference: public OVR.OpenVR.CVRSystem/OVR.OpenVR._GetControllerStateWithPosePacked pGetControllerStateWithPosePacked
    OVR::OpenVR::CVRSystem::_GetControllerStateWithPosePacked*& dyn_pGetControllerStateWithPosePacked();
  }; // OVR.OpenVR.CVRSystem/OVR.OpenVR.GetControllerStateWithPoseUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSystem::GetControllerStateWithPoseUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateWithPoseUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
