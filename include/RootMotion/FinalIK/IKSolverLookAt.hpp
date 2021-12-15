// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLookAt
  class IKSolverLookAt;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::IKSolverLookAt);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLookAt*, "RootMotion.FinalIK", "IKSolverLookAt");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverLookAt
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverLookAt : public RootMotion::FinalIK::IKSolver {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverLookAt::LookAtBone
    class LookAtBone;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone[] spine
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*> spine;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone head
    // Size: 0x8
    // Offset: 0x68
    RootMotion::FinalIK::IKSolverLookAt::LookAtBone* head;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLookAt::LookAtBone*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone[] eyes
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*> eyes;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>) == 0x8);
    // [RangeAttribute] Offset: 0xF5E5E0
    // public System.Single bodyWeight
    // Size: 0x4
    // Offset: 0x78
    float bodyWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xF5E5F8
    // public System.Single headWeight
    // Size: 0x4
    // Offset: 0x7C
    float headWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xF5E610
    // public System.Single eyesWeight
    // Size: 0x4
    // Offset: 0x80
    float eyesWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xF5E628
    // public System.Single clampWeight
    // Size: 0x4
    // Offset: 0x84
    float clampWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xF5E640
    // public System.Single clampWeightHead
    // Size: 0x4
    // Offset: 0x88
    float clampWeightHead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xF5E658
    // public System.Single clampWeightEyes
    // Size: 0x4
    // Offset: 0x8C
    float clampWeightEyes;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xF5E670
    // public System.Int32 clampSmoothing
    // Size: 0x4
    // Offset: 0x90
    int clampSmoothing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: clampSmoothing and: spineWeightCurve
    char __padding10[0x4] = {};
    // public UnityEngine.AnimationCurve spineWeightCurve
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::AnimationCurve* spineWeightCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector3 spineTargetOffset
    // Size: 0xC
    // Offset: 0xA0
    UnityEngine::Vector3 spineTargetOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: spineTargetOffset and: spineForwards
    char __padding12[0x4] = {};
    // protected UnityEngine.Vector3[] spineForwards
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<UnityEngine::Vector3> spineForwards;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector3>) == 0x8);
    // protected UnityEngine.Vector3[] headForwards
    // Size: 0x8
    // Offset: 0xB8
    ::ArrayW<UnityEngine::Vector3> headForwards;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector3>) == 0x8);
    // protected UnityEngine.Vector3[] eyeForward
    // Size: 0x8
    // Offset: 0xC0
    ::ArrayW<UnityEngine::Vector3> eyeForward;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Vector3>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform target
    UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone[] spine
    ::ArrayW<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>& dyn_spine();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone head
    RootMotion::FinalIK::IKSolverLookAt::LookAtBone*& dyn_head();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone[] eyes
    ::ArrayW<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>& dyn_eyes();
    // Get instance field reference: public System.Single bodyWeight
    float& dyn_bodyWeight();
    // Get instance field reference: public System.Single headWeight
    float& dyn_headWeight();
    // Get instance field reference: public System.Single eyesWeight
    float& dyn_eyesWeight();
    // Get instance field reference: public System.Single clampWeight
    float& dyn_clampWeight();
    // Get instance field reference: public System.Single clampWeightHead
    float& dyn_clampWeightHead();
    // Get instance field reference: public System.Single clampWeightEyes
    float& dyn_clampWeightEyes();
    // Get instance field reference: public System.Int32 clampSmoothing
    int& dyn_clampSmoothing();
    // Get instance field reference: public UnityEngine.AnimationCurve spineWeightCurve
    UnityEngine::AnimationCurve*& dyn_spineWeightCurve();
    // Get instance field reference: public UnityEngine.Vector3 spineTargetOffset
    UnityEngine::Vector3& dyn_spineTargetOffset();
    // Get instance field reference: protected UnityEngine.Vector3[] spineForwards
    ::ArrayW<UnityEngine::Vector3>& dyn_spineForwards();
    // Get instance field reference: protected UnityEngine.Vector3[] headForwards
    ::ArrayW<UnityEngine::Vector3>& dyn_headForwards();
    // Get instance field reference: protected UnityEngine.Vector3[] eyeForward
    ::ArrayW<UnityEngine::Vector3>& dyn_eyeForward();
    // protected System.Boolean get_spineIsValid()
    // Offset: 0x1E4C98C
    bool get_spineIsValid();
    // protected System.Boolean get_spineIsEmpty()
    // Offset: 0x1E4CB64
    bool get_spineIsEmpty();
    // protected System.Boolean get_headIsValid()
    // Offset: 0x1E4CA70
    bool get_headIsValid();
    // protected System.Boolean get_headIsEmpty()
    // Offset: 0x1E4CB88
    bool get_headIsEmpty();
    // protected System.Boolean get_eyesIsValid()
    // Offset: 0x1E4CA80
    bool get_eyesIsValid();
    // protected System.Boolean get_eyesIsEmpty()
    // Offset: 0x1E4CC04
    bool get_eyesIsEmpty();
    // public System.Void SetLookAtWeight(System.Single weight)
    // Offset: 0x1E4C04C
    void SetLookAtWeight(float weight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight)
    // Offset: 0x1E4C0D0
    void SetLookAtWeight(float weight, float bodyWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight)
    // Offset: 0x1E4C17C
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight)
    // Offset: 0x1E4C244
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight)
    // Offset: 0x1E4C330
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight, System.Single clampWeightHead, System.Single clampWeightEyes)
    // Offset: 0x1E4C43C
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes);
    // public System.Boolean SetChain(UnityEngine.Transform[] spine, UnityEngine.Transform head, UnityEngine.Transform[] eyes, UnityEngine.Transform root)
    // Offset: 0x1E4D000
    bool SetChain(::ArrayW<UnityEngine::Transform*> spine, UnityEngine::Transform* head, ::ArrayW<UnityEngine::Transform*> eyes, UnityEngine::Transform* root);
    // protected System.Void SolveSpine()
    // Offset: 0x1E4D7A4
    void SolveSpine();
    // protected System.Void SolveHead()
    // Offset: 0x1E4D9D0
    void SolveHead();
    // protected System.Void SolveEyes()
    // Offset: 0x1E4DC2C
    void SolveEyes();
    // protected UnityEngine.Vector3[] GetForwards(ref UnityEngine.Vector3[] forwards, UnityEngine.Vector3 baseForward, UnityEngine.Vector3 targetForward, System.Int32 bones, System.Single clamp)
    // Offset: 0x1E4E158
    ::ArrayW<UnityEngine::Vector3> GetForwards(ByRef<::ArrayW<UnityEngine::Vector3>> forwards, UnityEngine::Vector3 baseForward, UnityEngine::Vector3 targetForward, int bones, float clamp);
    // protected System.Void SetBones(UnityEngine.Transform[] array, ref RootMotion.FinalIK.IKSolverLookAt/RootMotion.FinalIK.LookAtBone[] bones)
    // Offset: 0x1E4D0B0
    void SetBones(::ArrayW<UnityEngine::Transform*> array, ByRef<::ArrayW<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>> bones);
    // public System.Void .ctor()
    // Offset: 0x1E4E5F8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLookAt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverLookAt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLookAt*, creationType>()));
    }
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1E4C584
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1E4C6B4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1E4C7F8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(ByRef<::Il2CppString*> message);
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] GetPoints()
    // Offset: 0x1E4CC28
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] IKSolver::GetPoints()
    ::ArrayW<RootMotion::FinalIK::IKSolver::Point*> GetPoints();
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1E4CE60
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // protected override System.Void OnInitiate()
    // Offset: 0x1E4D254
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1E4D6A0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverLookAt
  #pragma pack(pop)
  static check_size<sizeof(IKSolverLookAt), 192 + sizeof(::ArrayW<UnityEngine::Vector3>)> __RootMotion_FinalIK_IKSolverLookAtSizeCheck;
  static_assert(sizeof(IKSolverLookAt) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_spineIsValid
// Il2CppName: get_spineIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_spineIsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_spineIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_spineIsEmpty
// Il2CppName: get_spineIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_spineIsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_spineIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_headIsValid
// Il2CppName: get_headIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_headIsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_headIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_headIsEmpty
// Il2CppName: get_headIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_headIsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_headIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_eyesIsValid
// Il2CppName: get_eyesIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_eyesIsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_eyesIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_eyesIsEmpty
// Il2CppName: get_eyesIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_eyesIsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_eyesIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float, float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* eyesWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight, eyesWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float, float, float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* eyesWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight, eyesWeight, clampWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float, float, float, float, float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* eyesWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeightHead = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeightEyes = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight, eyesWeight, clampWeight, clampWeightHead, clampWeightEyes});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetChain
// Il2CppName: SetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)(::ArrayW<UnityEngine::Transform*>, UnityEngine::Transform*, ::ArrayW<UnityEngine::Transform*>, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverLookAt::SetChain)> {
  static const MethodInfo* get() {
    static auto* spine = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* head = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* eyes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spine, head, eyes, root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SolveSpine
// Il2CppName: SolveSpine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::SolveSpine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SolveSpine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SolveHead
// Il2CppName: SolveHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::SolveHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SolveHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SolveEyes
// Il2CppName: SolveEyes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::SolveEyes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SolveEyes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::GetForwards
// Il2CppName: GetForwards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Vector3> (RootMotion::FinalIK::IKSolverLookAt::*)(ByRef<::ArrayW<UnityEngine::Vector3>>, UnityEngine::Vector3, UnityEngine::Vector3, int, float)>(&RootMotion::FinalIK::IKSolverLookAt::GetForwards)> {
  static const MethodInfo* get() {
    static auto* forwards = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->this_arg;
    static auto* baseForward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetForward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bones = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* clamp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "GetForwards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forwards, baseForward, targetForward, bones, clamp});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetBones
// Il2CppName: SetBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(::ArrayW<UnityEngine::Transform*>, ByRef<::ArrayW<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>>)>(&RootMotion::FinalIK::IKSolverLookAt::SetBones)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverLookAt/LookAtBone"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, bones});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)(ByRef<::Il2CppString*>)>(&RootMotion::FinalIK::IKSolverLookAt::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<RootMotion::FinalIK::IKSolver::Point*> (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverLookAt::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverLookAt::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
