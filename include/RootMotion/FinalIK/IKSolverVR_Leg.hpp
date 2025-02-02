// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
#include "RootMotion/FinalIK/IKSolverVR_BodyPart.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverVR::Leg);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverVR::Leg*, "RootMotion.FinalIK", "IKSolverVR/Leg");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x150
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverVR::Leg : public ::RootMotion::FinalIK::IKSolverVR::BodyPart {
    public:
    public:
    // [TooltipAttribute] Offset: 0x1148B10
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x1148B48
    // public UnityEngine.Transform bendGoal
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* bendGoal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x1148B80
    // [RangeAttribute] Offset: 0x1148B80
    // public System.Single positionWeight
    // Size: 0x4
    // Offset: 0x58
    float positionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1148BD4
    // [RangeAttribute] Offset: 0x1148BD4
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x5C
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1148C28
    // [RangeAttribute] Offset: 0x1148C28
    // public System.Single bendGoalWeight
    // Size: 0x4
    // Offset: 0x60
    float bendGoalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1148C7C
    // [RangeAttribute] Offset: 0x1148C7C
    // public System.Single swivelOffset
    // Size: 0x4
    // Offset: 0x64
    float swivelOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1148CD8
    // [RangeAttribute] Offset: 0x1148CD8
    // public System.Single bendToTargetWeight
    // Size: 0x4
    // Offset: 0x68
    float bendToTargetWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1148D2C
    // [RangeAttribute] Offset: 0x1148D2C
    // public System.Single legLengthMlp
    // Size: 0x4
    // Offset: 0x6C
    float legLengthMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1148D84
    // public UnityEngine.AnimationCurve stretchCurve
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::AnimationCurve* stretchCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector3 IKPosition
    // Size: 0xC
    // Offset: 0x78
    ::UnityEngine::Vector3 IKPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion IKRotation
    // Size: 0x10
    // Offset: 0x84
    ::UnityEngine::Quaternion IKRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 footPositionOffset
    // Size: 0xC
    // Offset: 0x94
    ::UnityEngine::Vector3 footPositionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 heelPositionOffset
    // Size: 0xC
    // Offset: 0xA0
    ::UnityEngine::Vector3 heelPositionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion footRotationOffset
    // Size: 0x10
    // Offset: 0xAC
    ::UnityEngine::Quaternion footRotationOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public System.Single currentMag
    // Size: 0x4
    // Offset: 0xBC
    float currentMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean useAnimatedBendNormal
    // Size: 0x1
    // Offset: 0xC0
    bool useAnimatedBendNormal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAnimatedBendNormal and: position
    char __padding15[0x3] = {};
    // private UnityEngine.Vector3 <position>k__BackingField
    // Size: 0xC
    // Offset: 0xC4
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion <rotation>k__BackingField
    // Size: 0x10
    // Offset: 0xD0
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Boolean <hasToes>k__BackingField
    // Size: 0x1
    // Offset: 0xE0
    bool hasToes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasToes and: thighRelativeToPelvis
    char __padding18[0x3] = {};
    // private UnityEngine.Vector3 <thighRelativeToPelvis>k__BackingField
    // Size: 0xC
    // Offset: 0xE4
    ::UnityEngine::Vector3 thighRelativeToPelvis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 footPosition
    // Size: 0xC
    // Offset: 0xF0
    ::UnityEngine::Vector3 footPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion footRotation
    // Size: 0x10
    // Offset: 0xFC
    ::UnityEngine::Quaternion footRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bendNormal
    // Size: 0xC
    // Offset: 0x10C
    ::UnityEngine::Vector3 bendNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion calfRelToThigh
    // Size: 0x10
    // Offset: 0x118
    ::UnityEngine::Quaternion calfRelToThigh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion thighRelToFoot
    // Size: 0x10
    // Offset: 0x128
    ::UnityEngine::Quaternion thighRelToFoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bendNormalRelToPelvis
    // Size: 0xC
    // Offset: 0x138
    ::UnityEngine::Vector3 bendNormalRelToPelvis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 bendNormalRelToTarget
    // Size: 0xC
    // Offset: 0x144
    ::UnityEngine::Vector3 bendNormalRelToTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Transform target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public UnityEngine.Transform bendGoal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bendGoal();
    // Get instance field reference: public System.Single positionWeight
    [[deprecated("Use field access instead!")]] float& dyn_positionWeight();
    // Get instance field reference: public System.Single rotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_rotationWeight();
    // Get instance field reference: public System.Single bendGoalWeight
    [[deprecated("Use field access instead!")]] float& dyn_bendGoalWeight();
    // Get instance field reference: public System.Single swivelOffset
    [[deprecated("Use field access instead!")]] float& dyn_swivelOffset();
    // Get instance field reference: public System.Single bendToTargetWeight
    [[deprecated("Use field access instead!")]] float& dyn_bendToTargetWeight();
    // Get instance field reference: public System.Single legLengthMlp
    [[deprecated("Use field access instead!")]] float& dyn_legLengthMlp();
    // Get instance field reference: public UnityEngine.AnimationCurve stretchCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_stretchCurve();
    // Get instance field reference: public UnityEngine.Vector3 IKPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_IKPosition();
    // Get instance field reference: public UnityEngine.Quaternion IKRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_IKRotation();
    // Get instance field reference: public UnityEngine.Vector3 footPositionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_footPositionOffset();
    // Get instance field reference: public UnityEngine.Vector3 heelPositionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_heelPositionOffset();
    // Get instance field reference: public UnityEngine.Quaternion footRotationOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_footRotationOffset();
    // Get instance field reference: public System.Single currentMag
    [[deprecated("Use field access instead!")]] float& dyn_currentMag();
    // Get instance field reference: public System.Boolean useAnimatedBendNormal
    [[deprecated("Use field access instead!")]] bool& dyn_useAnimatedBendNormal();
    // Get instance field reference: private UnityEngine.Vector3 <position>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$position$k__BackingField();
    // Get instance field reference: private UnityEngine.Quaternion <rotation>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_$rotation$k__BackingField();
    // Get instance field reference: private System.Boolean <hasToes>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$hasToes$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <thighRelativeToPelvis>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$thighRelativeToPelvis$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 footPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_footPosition();
    // Get instance field reference: private UnityEngine.Quaternion footRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_footRotation();
    // Get instance field reference: private UnityEngine.Vector3 bendNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bendNormal();
    // Get instance field reference: private UnityEngine.Quaternion calfRelToThigh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_calfRelToThigh();
    // Get instance field reference: private UnityEngine.Quaternion thighRelToFoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_thighRelToFoot();
    // Get instance field reference: private UnityEngine.Vector3 bendNormalRelToPelvis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bendNormalRelToPelvis();
    // Get instance field reference: private UnityEngine.Vector3 bendNormalRelToTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bendNormalRelToTarget();
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x2450594
    ::UnityEngine::Vector3 get_position();
    // private System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x24505A0
    void set_position(::UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x24505AC
    ::UnityEngine::Quaternion get_rotation();
    // private System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x24505B8
    void set_rotation(::UnityEngine::Quaternion value);
    // public System.Boolean get_hasToes()
    // Offset: 0x24505C4
    bool get_hasToes();
    // private System.Void set_hasToes(System.Boolean value)
    // Offset: 0x24505CC
    void set_hasToes(bool value);
    // public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_thigh()
    // Offset: 0x24505D8
    ::RootMotion::FinalIK::IKSolverVR::VirtualBone* get_thigh();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_calf()
    // Offset: 0x245060C
    ::RootMotion::FinalIK::IKSolverVR::VirtualBone* get_calf();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_foot()
    // Offset: 0x2450644
    ::RootMotion::FinalIK::IKSolverVR::VirtualBone* get_foot();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_toes()
    // Offset: 0x245067C
    ::RootMotion::FinalIK::IKSolverVR::VirtualBone* get_toes();
    // public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_lastBone()
    // Offset: 0x24506B4
    ::RootMotion::FinalIK::IKSolverVR::VirtualBone* get_lastBone();
    // public UnityEngine.Vector3 get_thighRelativeToPelvis()
    // Offset: 0x24506F4
    ::UnityEngine::Vector3 get_thighRelativeToPelvis();
    // private System.Void set_thighRelativeToPelvis(UnityEngine.Vector3 value)
    // Offset: 0x2450700
    void set_thighRelativeToPelvis(::UnityEngine::Vector3 value);
    // private System.Void ApplyPositionOffset(UnityEngine.Vector3 offset, System.Single weight)
    // Offset: 0x245150C
    void ApplyPositionOffset(::UnityEngine::Vector3 offset, float weight);
    // private System.Void ApplyRotationOffset(UnityEngine.Quaternion offset, System.Single weight)
    // Offset: 0x24512D4
    void ApplyRotationOffset(::UnityEngine::Quaternion offset, float weight);
    // public System.Void Solve(System.Boolean stretch)
    // Offset: 0x2451BC8
    void Solve(bool stretch);
    // private System.Void FixTwistRotations()
    // Offset: 0x2452314
    void FixTwistRotations();
    // private System.Void Stretching()
    // Offset: 0x2451DE8
    void Stretching();
    // public System.Void .ctor()
    // Offset: 0x2452A48
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::Leg* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverVR::Leg::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::Leg*, creationType>()));
    }
    // protected override System.Void OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0x245070C
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    void OnRead(::ArrayW<::UnityEngine::Vector3> positions, ::ArrayW<::UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public override System.Void PreSolve()
    // Offset: 0x2450D28
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::PreSolve()
    void PreSolve();
    // public override System.Void ApplyOffsets()
    // Offset: 0x2451610
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::ApplyOffsets()
    void ApplyOffsets();
    // public override System.Void Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    // Offset: 0x245277C
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    void Write(ByRef<::ArrayW<::UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<::UnityEngine::Quaternion>> solvedRotations);
    // public override System.Void ResetOffsets()
    // Offset: 0x2452998
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::ResetOffsets()
    void ResetOffsets();
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::Leg), 324 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverVR_LegSizeCheck;
  static_assert(sizeof(IKSolverVR::Leg) == 0x150);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Leg::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::Leg::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_hasToes
// Il2CppName: get_hasToes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_hasToes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_hasToes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::set_hasToes
// Il2CppName: set_hasToes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(bool)>(&RootMotion::FinalIK::IKSolverVR::Leg::set_hasToes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "set_hasToes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_thigh
// Il2CppName: get_thigh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_thigh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_thigh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_calf
// Il2CppName: get_calf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_calf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_calf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_foot
// Il2CppName: get_foot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_foot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_foot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_toes
// Il2CppName: get_toes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_toes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_toes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_lastBone
// Il2CppName: get_lastBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_lastBone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_lastBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::get_thighRelativeToPelvis
// Il2CppName: get_thighRelativeToPelvis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::get_thighRelativeToPelvis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "get_thighRelativeToPelvis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::set_thighRelativeToPelvis
// Il2CppName: set_thighRelativeToPelvis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Leg::set_thighRelativeToPelvis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "set_thighRelativeToPelvis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::ApplyPositionOffset
// Il2CppName: ApplyPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverVR::Leg::ApplyPositionOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "ApplyPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::ApplyRotationOffset
// Il2CppName: ApplyRotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(::UnityEngine::Quaternion, float)>(&RootMotion::FinalIK::IKSolverVR::Leg::ApplyRotationOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "ApplyRotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(bool)>(&RootMotion::FinalIK::IKSolverVR::Leg::Solve)> {
  static const MethodInfo* get() {
    static auto* stretch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stretch});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::FixTwistRotations
// Il2CppName: FixTwistRotations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::FixTwistRotations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "FixTwistRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::Stretching
// Il2CppName: Stretching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::Stretching)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "Stretching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::OnRead
// Il2CppName: OnRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int, int)>(&RootMotion::FinalIK::IKSolverVR::Leg::OnRead)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    static auto* hasChest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasNeck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasShoulders = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasToes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasLegs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* rootIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "OnRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::PreSolve
// Il2CppName: PreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::PreSolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "PreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::ApplyOffsets
// Il2CppName: ApplyOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::ApplyOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "ApplyOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)(ByRef<::ArrayW<::UnityEngine::Vector3>>, ByRef<::ArrayW<::UnityEngine::Quaternion>>)>(&RootMotion::FinalIK::IKSolverVR::Leg::Write)> {
  static const MethodInfo* get() {
    static auto* solvedPositions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->this_arg;
    static auto* solvedRotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solvedPositions, solvedRotations});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Leg::ResetOffsets
// Il2CppName: ResetOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Leg::*)()>(&RootMotion::FinalIK::IKSolverVR::Leg::ResetOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Leg*), "ResetOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
