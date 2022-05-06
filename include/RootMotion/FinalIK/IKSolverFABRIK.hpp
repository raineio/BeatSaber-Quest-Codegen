// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverHeuristic
#include "RootMotion/FinalIK/IKSolverHeuristic.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFABRIK
  class IKSolverFABRIK;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverFABRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverFABRIK*, "RootMotion.FinalIK", "IKSolverFABRIK");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverFABRIK
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverFABRIK : public ::RootMotion::FinalIK::IKSolverHeuristic {
    public:
    public:
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    // Size: 0x8
    // Offset: 0x88
    ::RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // private System.Boolean[] limitedBones
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<bool> limitedBones;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private UnityEngine.Vector3[] solverLocalPositions
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<::UnityEngine::Vector3> solverLocalPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::IterationDelegate*& dyn_OnPreIteration();
    // Get instance field reference: private System.Boolean[] limitedBones
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_limitedBones();
    // Get instance field reference: private UnityEngine.Vector3[] solverLocalPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_solverLocalPositions();
    // public System.Void SolveForward(UnityEngine.Vector3 position)
    // Offset: 0x21EA4C8
    void SolveForward(::UnityEngine::Vector3 position);
    // public System.Void SolveBackward(UnityEngine.Vector3 position)
    // Offset: 0x21EAC0C
    void SolveBackward(::UnityEngine::Vector3 position);
    // private UnityEngine.Vector3 SolveJoint(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single length)
    // Offset: 0x21EB6E8
    ::UnityEngine::Vector3 SolveJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float length);
    // private System.Void OnPreSolve()
    // Offset: 0x21EA598
    void OnPreSolve();
    // private System.Void OnPostSolve()
    // Offset: 0x21EACEC
    void OnPostSolve();
    // private System.Void Solve(UnityEngine.Vector3 targetPosition)
    // Offset: 0x21EB684
    void Solve(::UnityEngine::Vector3 targetPosition);
    // private System.Void ForwardReach(UnityEngine.Vector3 position)
    // Offset: 0x21EAA34
    void ForwardReach(::UnityEngine::Vector3 position);
    // private System.Void SolverMove(System.Int32 index, UnityEngine.Vector3 offset)
    // Offset: 0x21EBF30
    void SolverMove(int index, ::UnityEngine::Vector3 offset);
    // private System.Void SolverRotate(System.Int32 index, UnityEngine.Quaternion rotation, System.Boolean recursive)
    // Offset: 0x21EC040
    void SolverRotate(int index, ::UnityEngine::Quaternion rotation, bool recursive);
    // private System.Void SolverRotateChildren(System.Int32 index, UnityEngine.Quaternion rotation)
    // Offset: 0x21EC16C
    void SolverRotateChildren(int index, ::UnityEngine::Quaternion rotation);
    // private System.Void SolverMoveChildrenAroundPoint(System.Int32 index, UnityEngine.Quaternion rotation)
    // Offset: 0x21EC284
    void SolverMoveChildrenAroundPoint(int index, ::UnityEngine::Quaternion rotation);
    // private UnityEngine.Quaternion GetParentSolverRotation(System.Int32 index)
    // Offset: 0x21EB0E4
    ::UnityEngine::Quaternion GetParentSolverRotation(int index);
    // private UnityEngine.Vector3 GetParentSolverPosition(System.Int32 index)
    // Offset: 0x21EB230
    ::UnityEngine::Vector3 GetParentSolverPosition(int index);
    // private UnityEngine.Quaternion GetLimitedRotation(System.Int32 index, UnityEngine.Quaternion q, out System.Boolean changed)
    // Offset: 0x21EC470
    ::UnityEngine::Quaternion GetLimitedRotation(int index, ::UnityEngine::Quaternion q, ByRef<bool> changed);
    // private System.Void LimitForward(System.Int32 rotateBone, System.Int32 limitBone)
    // Offset: 0x21EB9A4
    void LimitForward(int rotateBone, int limitBone);
    // private System.Void BackwardReach(UnityEngine.Vector3 position)
    // Offset: 0x21EACDC
    void BackwardReach(::UnityEngine::Vector3 position);
    // private System.Void BackwardReachUnlimited(UnityEngine.Vector3 position)
    // Offset: 0x21ECBE0
    void BackwardReachUnlimited(::UnityEngine::Vector3 position);
    // private System.Void BackwardReachLimited(UnityEngine.Vector3 position)
    // Offset: 0x21EC648
    void BackwardReachLimited(::UnityEngine::Vector3 position);
    // private System.Void MapToSolverPositions()
    // Offset: 0x21EB800
    void MapToSolverPositions();
    // private System.Void MapToSolverPositionsLimited()
    // Offset: 0x21EB8E0
    void MapToSolverPositionsLimited();
    // protected override System.Boolean get_boneLengthCanBeZero()
    // Offset: 0x21EB6E0
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Boolean IKSolverHeuristic::get_boneLengthCanBeZero()
    bool get_boneLengthCanBeZero();
    // public System.Void .ctor()
    // Offset: 0x21ECCAC
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::.ctor()
    // Base method: System.Void IKSolver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverFABRIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverFABRIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverFABRIK*, creationType>()));
    }
    // public override UnityEngine.Vector3 GetIKPosition()
    // Offset: 0x21EAD40
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: UnityEngine.Vector3 IKSolver::GetIKPosition()
    ::UnityEngine::Vector3 GetIKPosition();
    // protected override System.Void OnInitiate()
    // Offset: 0x21EADD8
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x21EB37C
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverFABRIK
  #pragma pack(pop)
  static check_size<sizeof(IKSolverFABRIK), 152 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __RootMotion_FinalIK_IKSolverFABRIKSizeCheck;
  static_assert(sizeof(IKSolverFABRIK) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::SolveForward
// Il2CppName: SolveForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverFABRIK::SolveForward)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "SolveForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::SolveBackward
// Il2CppName: SolveBackward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverFABRIK::SolveBackward)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "SolveBackward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::SolveJoint
// Il2CppName: SolveJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverFABRIK::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverFABRIK::SolveJoint)> {
  static const MethodInfo* get() {
    static auto* pos1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pos2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "SolveJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos1, pos2, length});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::OnPreSolve
// Il2CppName: OnPreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)()>(&RootMotion::FinalIK::IKSolverFABRIK::OnPreSolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "OnPreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::OnPostSolve
// Il2CppName: OnPostSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)()>(&RootMotion::FinalIK::IKSolverFABRIK::OnPostSolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "OnPostSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverFABRIK::Solve)> {
  static const MethodInfo* get() {
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::ForwardReach
// Il2CppName: ForwardReach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverFABRIK::ForwardReach)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "ForwardReach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::SolverMove
// Il2CppName: SolverMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(int, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverFABRIK::SolverMove)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "SolverMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, offset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::SolverRotate
// Il2CppName: SolverRotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(int, ::UnityEngine::Quaternion, bool)>(&RootMotion::FinalIK::IKSolverFABRIK::SolverRotate)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "SolverRotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, rotation, recursive});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::SolverRotateChildren
// Il2CppName: SolverRotateChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(int, ::UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverFABRIK::SolverRotateChildren)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "SolverRotateChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::SolverMoveChildrenAroundPoint
// Il2CppName: SolverMoveChildrenAroundPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(int, ::UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverFABRIK::SolverMoveChildrenAroundPoint)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "SolverMoveChildrenAroundPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::GetParentSolverRotation
// Il2CppName: GetParentSolverRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverFABRIK::*)(int)>(&RootMotion::FinalIK::IKSolverFABRIK::GetParentSolverRotation)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "GetParentSolverRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::GetParentSolverPosition
// Il2CppName: GetParentSolverPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverFABRIK::*)(int)>(&RootMotion::FinalIK::IKSolverFABRIK::GetParentSolverPosition)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "GetParentSolverPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::GetLimitedRotation
// Il2CppName: GetLimitedRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverFABRIK::*)(int, ::UnityEngine::Quaternion, ByRef<bool>)>(&RootMotion::FinalIK::IKSolverFABRIK::GetLimitedRotation)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* changed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "GetLimitedRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, q, changed});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::LimitForward
// Il2CppName: LimitForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(int, int)>(&RootMotion::FinalIK::IKSolverFABRIK::LimitForward)> {
  static const MethodInfo* get() {
    static auto* rotateBone = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* limitBone = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "LimitForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotateBone, limitBone});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::BackwardReach
// Il2CppName: BackwardReach
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverFABRIK::BackwardReach)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "BackwardReach", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::BackwardReachUnlimited
// Il2CppName: BackwardReachUnlimited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverFABRIK::BackwardReachUnlimited)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "BackwardReachUnlimited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::BackwardReachLimited
// Il2CppName: BackwardReachLimited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverFABRIK::BackwardReachLimited)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "BackwardReachLimited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::MapToSolverPositions
// Il2CppName: MapToSolverPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)()>(&RootMotion::FinalIK::IKSolverFABRIK::MapToSolverPositions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "MapToSolverPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::MapToSolverPositionsLimited
// Il2CppName: MapToSolverPositionsLimited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)()>(&RootMotion::FinalIK::IKSolverFABRIK::MapToSolverPositionsLimited)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "MapToSolverPositionsLimited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::get_boneLengthCanBeZero
// Il2CppName: get_boneLengthCanBeZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverFABRIK::*)()>(&RootMotion::FinalIK::IKSolverFABRIK::get_boneLengthCanBeZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "get_boneLengthCanBeZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::GetIKPosition
// Il2CppName: GetIKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverFABRIK::*)()>(&RootMotion::FinalIK::IKSolverFABRIK::GetIKPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "GetIKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)()>(&RootMotion::FinalIK::IKSolverFABRIK::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIK::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIK::*)()>(&RootMotion::FinalIK::IKSolverFABRIK::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIK*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
