// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.Warning
#include "RootMotion/Warning.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKConstraintBend
  class IKConstraintBend;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKConstraintBend);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKConstraintBend*, "RootMotion.FinalIK", "IKConstraintBend");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x86
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKConstraintBend
  // [TokenAttribute] Offset: FFFFFFFF
  class IKConstraintBend : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform bone1
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* bone1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform bone2
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* bone2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform bone3
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* bone3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform bendGoal
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* bendGoal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 direction
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotationOffset
    // Size: 0x10
    // Offset: 0x3C
    ::UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // [RangeAttribute] Offset: 0x11463B8
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x4C
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 defaultLocalDirection
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 defaultLocalDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 defaultChildDirection
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 defaultChildDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single clampF
    // Size: 0x4
    // Offset: 0x68
    float clampF;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 chainIndex1
    // Size: 0x4
    // Offset: 0x6C
    int chainIndex1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeIndex1
    // Size: 0x4
    // Offset: 0x70
    int nodeIndex1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 chainIndex2
    // Size: 0x4
    // Offset: 0x74
    int chainIndex2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeIndex2
    // Size: 0x4
    // Offset: 0x78
    int nodeIndex2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 chainIndex3
    // Size: 0x4
    // Offset: 0x7C
    int chainIndex3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeIndex3
    // Size: 0x4
    // Offset: 0x80
    int nodeIndex3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x84
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean limbOrientationsSet
    // Size: 0x1
    // Offset: 0x85
    bool limbOrientationsSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform bone1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone1();
    // Get instance field reference: public UnityEngine.Transform bone2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone2();
    // Get instance field reference: public UnityEngine.Transform bone3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone3();
    // Get instance field reference: public UnityEngine.Transform bendGoal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bendGoal();
    // Get instance field reference: public UnityEngine.Vector3 direction
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_direction();
    // Get instance field reference: public UnityEngine.Quaternion rotationOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotationOffset();
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: public UnityEngine.Vector3 defaultLocalDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_defaultLocalDirection();
    // Get instance field reference: public UnityEngine.Vector3 defaultChildDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_defaultChildDirection();
    // Get instance field reference: public System.Single clampF
    [[deprecated("Use field access instead!")]] float& dyn_clampF();
    // Get instance field reference: private System.Int32 chainIndex1
    [[deprecated("Use field access instead!")]] int& dyn_chainIndex1();
    // Get instance field reference: private System.Int32 nodeIndex1
    [[deprecated("Use field access instead!")]] int& dyn_nodeIndex1();
    // Get instance field reference: private System.Int32 chainIndex2
    [[deprecated("Use field access instead!")]] int& dyn_chainIndex2();
    // Get instance field reference: private System.Int32 nodeIndex2
    [[deprecated("Use field access instead!")]] int& dyn_nodeIndex2();
    // Get instance field reference: private System.Int32 chainIndex3
    [[deprecated("Use field access instead!")]] int& dyn_chainIndex3();
    // Get instance field reference: private System.Int32 nodeIndex3
    [[deprecated("Use field access instead!")]] int& dyn_nodeIndex3();
    // Get instance field reference: private System.Boolean <initiated>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$initiated$k__BackingField();
    // Get instance field reference: private System.Boolean limbOrientationsSet
    [[deprecated("Use field access instead!")]] bool& dyn_limbOrientationsSet();
    // public System.Boolean get_initiated()
    // Offset: 0x22E2138
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x22E2140
    void set_initiated(bool value);
    // public System.Void .ctor()
    // Offset: 0x22E214C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKConstraintBend* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKConstraintBend::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKConstraintBend*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3)
    // Offset: 0x22E21D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKConstraintBend* New_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKConstraintBend::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKConstraintBend*, creationType>(bone1, bone2, bone3)));
    }
    // public System.Boolean IsValid(RootMotion.FinalIK.IKSolverFullBody solver, RootMotion.Warning/RootMotion.Logger logger)
    // Offset: 0x22E1F70
    bool IsValid(::RootMotion::FinalIK::IKSolverFullBody* solver, ::RootMotion::Warning::Logger* logger);
    // public System.Void SetBones(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3)
    // Offset: 0x22E227C
    void SetBones(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x22E2288
    void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void SetLimbOrientation(UnityEngine.Vector3 upper, UnityEngine.Vector3 lower, UnityEngine.Vector3 last)
    // Offset: 0x22E2778
    void SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower, ::UnityEngine::Vector3 last);
    // public System.Void LimitBend(System.Single solverWeight, System.Single positionWeight)
    // Offset: 0x22E29B0
    void LimitBend(float solverWeight, float positionWeight);
    // public UnityEngine.Vector3 GetDir(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x22E2E4C
    ::UnityEngine::Vector3 GetDir(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Vector3 OrthoToLimb(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Vector3 tangent)
    // Offset: 0x22E2538
    ::UnityEngine::Vector3 OrthoToLimb(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent);
    // private UnityEngine.Vector3 OrthoToBone1(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Vector3 tangent)
    // Offset: 0x22E2658
    ::UnityEngine::Vector3 OrthoToBone1(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent);
  }; // RootMotion.FinalIK.IKConstraintBend
  #pragma pack(pop)
  static check_size<sizeof(IKConstraintBend), 133 + sizeof(bool)> __RootMotion_FinalIK_IKConstraintBendSizeCheck;
  static_assert(sizeof(IKConstraintBend) == 0x86);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::get_initiated
// Il2CppName: get_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKConstraintBend::*)()>(&RootMotion::FinalIK::IKConstraintBend::get_initiated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "get_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::set_initiated
// Il2CppName: set_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(bool)>(&RootMotion::FinalIK::IKConstraintBend::set_initiated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "set_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKConstraintBend::*)(::RootMotion::FinalIK::IKSolverFullBody*, ::RootMotion::Warning::Logger*)>(&RootMotion::FinalIK::IKConstraintBend::IsValid)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* logger = &::il2cpp_utils::GetClassFromName("RootMotion", "Warning/Logger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, logger});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::SetBones
// Il2CppName: SetBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKConstraintBend::SetBones)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "SetBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2, bone3});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKConstraintBend::Initiate)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::SetLimbOrientation
// Il2CppName: SetLimbOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKConstraintBend::SetLimbOrientation)> {
  static const MethodInfo* get() {
    static auto* upper = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lower = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* last = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "SetLimbOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{upper, lower, last});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::LimitBend
// Il2CppName: LimitBend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(float, float)>(&RootMotion::FinalIK::IKConstraintBend::LimitBend)> {
  static const MethodInfo* get() {
    static auto* solverWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* positionWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "LimitBend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solverWeight, positionWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::GetDir
// Il2CppName: GetDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKConstraintBend::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKConstraintBend::GetDir)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "GetDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::OrthoToLimb
// Il2CppName: OrthoToLimb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKConstraintBend::*)(::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKConstraintBend::OrthoToLimb)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "OrthoToLimb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, tangent});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::OrthoToBone1
// Il2CppName: OrthoToBone1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKConstraintBend::*)(::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKConstraintBend::OrthoToBone1)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "OrthoToBone1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, tangent});
  }
};
