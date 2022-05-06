// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: LookAtIK
  class LookAtIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionLookAt
  class InteractionLookAt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionLookAt);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionLookAt*, "RootMotion.FinalIK", "InteractionLookAt");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionLookAt
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionLookAt : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x10F9784
    // public RootMotion.FinalIK.LookAtIK ik
    // Size: 0x8
    // Offset: 0x10
    ::RootMotion::FinalIK::LookAtIK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::LookAtIK*) == 0x8);
    // [TooltipAttribute] Offset: 0x10F97BC
    // public System.Single lerpSpeed
    // Size: 0x4
    // Offset: 0x18
    float lerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F97F4
    // public System.Single weightSpeed
    // Size: 0x4
    // Offset: 0x1C
    float weightSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean isPaused
    // Size: 0x1
    // Offset: 0x20
    bool isPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPaused and: lookAtTarget
    char __padding3[0x7] = {};
    // private UnityEngine.Transform lookAtTarget
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* lookAtTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single stopLookTime
    // Size: 0x4
    // Offset: 0x30
    float stopLookTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single weight
    // Size: 0x4
    // Offset: 0x34
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean firstFBBIKSolve
    // Size: 0x1
    // Offset: 0x38
    bool firstFBBIKSolve;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public RootMotion.FinalIK.LookAtIK ik
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::LookAtIK*& dyn_ik();
    // Get instance field reference: public System.Single lerpSpeed
    [[deprecated("Use field access instead!")]] float& dyn_lerpSpeed();
    // Get instance field reference: public System.Single weightSpeed
    [[deprecated("Use field access instead!")]] float& dyn_weightSpeed();
    // Get instance field reference: public System.Boolean isPaused
    [[deprecated("Use field access instead!")]] bool& dyn_isPaused();
    // Get instance field reference: private UnityEngine.Transform lookAtTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_lookAtTarget();
    // Get instance field reference: private System.Single stopLookTime
    [[deprecated("Use field access instead!")]] float& dyn_stopLookTime();
    // Get instance field reference: private System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: private System.Boolean firstFBBIKSolve
    [[deprecated("Use field access instead!")]] bool& dyn_firstFBBIKSolve();
    // public System.Void .ctor()
    // Offset: 0x239F92C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionLookAt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionLookAt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionLookAt*, creationType>()));
    }
    // public System.Void Look(UnityEngine.Transform target, System.Single time)
    // Offset: 0x239F304
    void Look(::UnityEngine::Transform* target, float time);
    // public System.Void OnFixTransforms()
    // Offset: 0x239F47C
    void OnFixTransforms();
    // public System.Void Update()
    // Offset: 0x239F524
    void Update();
    // public System.Void SolveSpine()
    // Offset: 0x239F768
    void SolveSpine();
    // public System.Void SolveHead()
    // Offset: 0x239F860
    void SolveHead();
  }; // RootMotion.FinalIK.InteractionLookAt
  #pragma pack(pop)
  static check_size<sizeof(InteractionLookAt), 56 + sizeof(bool)> __RootMotion_FinalIK_InteractionLookAtSizeCheck;
  static_assert(sizeof(InteractionLookAt) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionLookAt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionLookAt::Look
// Il2CppName: Look
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionLookAt::*)(::UnityEngine::Transform*, float)>(&RootMotion::FinalIK::InteractionLookAt::Look)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionLookAt*), "Look", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, time});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionLookAt::OnFixTransforms
// Il2CppName: OnFixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionLookAt::*)()>(&RootMotion::FinalIK::InteractionLookAt::OnFixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionLookAt*), "OnFixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionLookAt::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionLookAt::*)()>(&RootMotion::FinalIK::InteractionLookAt::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionLookAt*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionLookAt::SolveSpine
// Il2CppName: SolveSpine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionLookAt::*)()>(&RootMotion::FinalIK::InteractionLookAt::SolveSpine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionLookAt*), "SolveSpine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionLookAt::SolveHead
// Il2CppName: SolveHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionLookAt::*)()>(&RootMotion::FinalIK::InteractionLookAt::SolveHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionLookAt*), "SolveHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
