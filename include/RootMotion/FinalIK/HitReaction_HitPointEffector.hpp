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
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: HitPointEffector
  class HitPointEffector;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::HitReaction::HitPointEffector);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointEffector*, "RootMotion.FinalIK", "HitReaction/HitPointEffector");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointEffector
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReaction::HitPointEffector : public RootMotion::FinalIK::HitReaction::HitPoint {
    public:
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink
    class EffectorLink;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0xF6243C
    // public UnityEngine.AnimationCurve offsetInForceDirection
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AnimationCurve* offsetInForceDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xF62474
    // public UnityEngine.AnimationCurve offsetInUpDirection
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::AnimationCurve* offsetInUpDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xF624AC
    // public RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointEffector/RootMotion.FinalIK.EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*> effectorLinks;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AnimationCurve offsetInForceDirection
    UnityEngine::AnimationCurve*& dyn_offsetInForceDirection();
    // Get instance field reference: public UnityEngine.AnimationCurve offsetInUpDirection
    UnityEngine::AnimationCurve*& dyn_offsetInUpDirection();
    // Get instance field reference: public RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointEffector/RootMotion.FinalIK.EffectorLink[] effectorLinks
    ::ArrayW<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>& dyn_effectorLinks();
    // public System.Void .ctor()
    // Offset: 0x1E7E2BC
    // Implemented from: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
    // Base method: System.Void HitPoint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPointEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReaction::HitPointEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPointEffector*, creationType>()));
    }
    // protected override System.Single GetLength()
    // Offset: 0x1E7DDA4
    // Implemented from: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
    // Base method: System.Single HitPoint::GetLength()
    float GetLength();
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1E7DF1C
    // Implemented from: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
    // Base method: System.Void HitPoint::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x1E7DF9C
    // Implemented from: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPoint
    // Base method: System.Void HitPoint::OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
  }; // RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointEffector
  #pragma pack(pop)
  static check_size<sizeof(HitReaction::HitPointEffector), 96 + sizeof(::ArrayW<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>)> __RootMotion_FinalIK_HitReaction_HitPointEffectorSizeCheck;
  static_assert(sizeof(HitReaction::HitPointEffector) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReaction::HitPointEffector::*)()>(&RootMotion::FinalIK::HitReaction::HitPointEffector::GetLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointEffector*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointEffector::*)()>(&RootMotion::FinalIK::HitReaction::HitPointEffector::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointEffector*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointEffector::OnApply
// Il2CppName: OnApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointEffector::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, float)>(&RootMotion::FinalIK::HitReaction::HitPointEffector::OnApply)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointEffector*), "OnApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight});
  }
};
