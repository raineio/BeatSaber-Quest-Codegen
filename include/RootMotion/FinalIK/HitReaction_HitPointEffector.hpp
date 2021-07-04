// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReaction
#include "RootMotion/FinalIK/HitReaction.hpp"
// Including type: RootMotion.FinalIK.HitReaction/HitPoint
#include "RootMotion/FinalIK/HitReaction_HitPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPointEffector
  class HitReaction::HitPointEffector : public RootMotion::FinalIK::HitReaction::HitPoint {
    public:
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink
    class EffectorLink;
    // [TooltipAttribute] Offset: 0xE0D4F4
    // public UnityEngine.AnimationCurve offsetInForceDirection
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AnimationCurve* offsetInForceDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0D52C
    // public UnityEngine.AnimationCurve offsetInUpDirection
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::AnimationCurve* offsetInUpDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0D564
    // public RootMotion.FinalIK.HitReaction/HitPointEffector/EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>* effectorLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>*) == 0x8);
    // Creating value type constructor for type: HitPointEffector
    HitPointEffector(UnityEngine::AnimationCurve* offsetInForceDirection_ = {}, UnityEngine::AnimationCurve* offsetInUpDirection_ = {}, ::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>* effectorLinks_ = {}) noexcept : offsetInForceDirection{offsetInForceDirection_}, offsetInUpDirection{offsetInUpDirection_}, effectorLinks{effectorLinks_} {}
    // protected override System.Single GetLength()
    // Offset: 0x1C63D3C
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Single HitPoint::GetLength()
    float GetLength();
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1C63EB4
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x1C63F34
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // public System.Void .ctor()
    // Offset: 0x1C64254
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPointEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReaction::HitPointEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPointEffector*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReaction/HitPointEffector
  #pragma pack(pop)
  static check_size<sizeof(HitReaction::HitPointEffector), 96 + sizeof(::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>*)> __RootMotion_FinalIK_HitReaction_HitPointEffectorSizeCheck;
  static_assert(sizeof(HitReaction::HitPointEffector) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointEffector*, "RootMotion.FinalIK", "HitReaction/HitPointEffector");
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReaction::HitPointEffector::*)()>(&RootMotion::FinalIK::HitReaction::HitPointEffector::GetLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointEffector*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointEffector::*)()>(&RootMotion::FinalIK::HitReaction::HitPointEffector::CrossFadeStart)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointEffector*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::OnApply
// Il2CppName: OnApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointEffector::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, float)>(&RootMotion::FinalIK::HitReaction::HitPointEffector::OnApply)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointEffector*), "OnApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::FinalIK::IKSolverFullBodyBiped*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
