// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.HitReaction
#include "RootMotion/FinalIK/HitReaction.hpp"
// Including type: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
#include "RootMotion/FinalIK/HitReaction_HitPoint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::HitReaction::HitPointBone);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointBone*, "RootMotion.FinalIK", "HitReaction/HitPointBone");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReaction::HitPointBone : public RootMotion::FinalIK::HitReaction::HitPoint {
    public:
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink
    class BoneLink;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0xF624E4
    // public UnityEngine.AnimationCurve aroundCenterOfMass
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AnimationCurve* aroundCenterOfMass;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xF6251C
    // public RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone/RootMotion.FinalIK.BoneLink[] boneLinks
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*> boneLinks;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*>) == 0x8);
    // private UnityEngine.Rigidbody rigidbody
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AnimationCurve aroundCenterOfMass
    UnityEngine::AnimationCurve*& dyn_aroundCenterOfMass();
    // Get instance field reference: public RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone/RootMotion.FinalIK.BoneLink[] boneLinks
    ::ArrayW<RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*>& dyn_boneLinks();
    // Get instance field reference: private UnityEngine.Rigidbody rigidbody
    UnityEngine::Rigidbody*& dyn_rigidbody();
    // public System.Void .ctor()
    // Offset: 0x1E7DD08
    // Implemented from: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
    // Base method: System.Void HitPoint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPointBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReaction::HitPointBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPointBone*, creationType>()));
    }
    // protected override System.Single GetLength()
    // Offset: 0x1E7D83C
    // Implemented from: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
    // Base method: System.Single HitPoint::GetLength()
    float GetLength();
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1E7D8E0
    // Implemented from: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
    // Base method: System.Void HitPoint::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x1E7D950
    // Implemented from: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
    // Base method: System.Void HitPoint::OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
  }; // RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone
  #pragma pack(pop)
  static check_size<sizeof(HitReaction::HitPointBone), 96 + sizeof(UnityEngine::Rigidbody*)> __RootMotion_FinalIK_HitReaction_HitPointBoneSizeCheck;
  static_assert(sizeof(HitReaction::HitPointBone) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointBone::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReaction::HitPointBone::*)()>(&RootMotion::FinalIK::HitReaction::HitPointBone::GetLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointBone*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointBone::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointBone::*)()>(&RootMotion::FinalIK::HitReaction::HitPointBone::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointBone*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointBone::OnApply
// Il2CppName: OnApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointBone::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, float)>(&RootMotion::FinalIK::HitReaction::HitPointBone::OnApply)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointBone*), "OnApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight});
  }
};
