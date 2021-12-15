// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Recoil/RootMotion.FinalIK.RecoilOffset
#include "RootMotion/FinalIK/Recoil_RecoilOffset.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink*, "RootMotion.FinalIK", "Recoil/RecoilOffset/EffectorLink");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Recoil/RootMotion.FinalIK.RecoilOffset/RootMotion.FinalIK.EffectorLink
  // [TokenAttribute] Offset: FFFFFFFF
  class Recoil::RecoilOffset::EffectorLink : public ::Il2CppObject {
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
    // [TooltipAttribute] Offset: 0xF63510
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0xF63548
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x14
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedEffector effector
    RootMotion::FinalIK::FullBodyBipedEffector& dyn_effector();
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
    // public System.Void .ctor()
    // Offset: 0x1C9D304
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Recoil::RecoilOffset::EffectorLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Recoil::RecoilOffset::EffectorLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.Recoil/RootMotion.FinalIK.RecoilOffset/RootMotion.FinalIK.EffectorLink
  #pragma pack(pop)
  static check_size<sizeof(Recoil::RecoilOffset::EffectorLink), 20 + sizeof(float)> __RootMotion_FinalIK_Recoil_RecoilOffset_EffectorLinkSizeCheck;
  static_assert(sizeof(Recoil::RecoilOffset::EffectorLink) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
