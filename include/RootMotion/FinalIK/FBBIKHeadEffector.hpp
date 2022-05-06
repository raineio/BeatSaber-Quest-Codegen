// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
  // Forward declaring type: IKEffector
  class IKEffector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FBBIKHeadEffector
  class FBBIKHeadEffector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::FBBIKHeadEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBBIKHeadEffector*, "RootMotion.FinalIK", "FBBIKHeadEffector");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x170
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FBBIKHeadEffector
  // [TokenAttribute] Offset: FFFFFFFF
  class FBBIKHeadEffector : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::RootMotion::FinalIK::FBBIKHeadEffector::BendBone
    class BendBone;
    public:
    // [TooltipAttribute] Offset: 0x10F89A8
    // public RootMotion.FinalIK.FullBodyBipedIK ik
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::FullBodyBipedIK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FullBodyBipedIK*) == 0x8);
    // [LargeHeader] Offset: 0x10F89E0
    // [TooltipAttribute] Offset: 0x10F89E0
    // [RangeAttribute] Offset: 0x10F89E0
    // public System.Single positionWeight
    // Size: 0x4
    // Offset: 0x20
    float positionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8A58
    // [RangeAttribute] Offset: 0x10F8A58
    // public System.Single bodyWeight
    // Size: 0x4
    // Offset: 0x24
    float bodyWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8AAC
    // [RangeAttribute] Offset: 0x10F8AAC
    // public System.Single thighWeight
    // Size: 0x4
    // Offset: 0x28
    float thighWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8B00
    // public System.Boolean handsPullBody
    // Size: 0x1
    // Offset: 0x2C
    bool handsPullBody;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: handsPullBody and: rotationWeight
    char __padding4[0x3] = {};
    // [LargeHeader] Offset: 0x10F8B38
    // [TooltipAttribute] Offset: 0x10F8B38
    // [RangeAttribute] Offset: 0x10F8B38
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x30
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8BB0
    // [RangeAttribute] Offset: 0x10F8BB0
    // public System.Single bodyClampWeight
    // Size: 0x4
    // Offset: 0x34
    float bodyClampWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8C04
    // [RangeAttribute] Offset: 0x10F8C04
    // public System.Single headClampWeight
    // Size: 0x4
    // Offset: 0x38
    float headClampWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8C58
    // [RangeAttribute] Offset: 0x10F8C58
    // public System.Single bendWeight
    // Size: 0x4
    // Offset: 0x3C
    float bendWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8CAC
    // public RootMotion.FinalIK.FBBIKHeadEffector/RootMotion.FinalIK.BendBone[] bendBones
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::RootMotion::FinalIK::FBBIKHeadEffector::BendBone*> bendBones;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::FBBIKHeadEffector::BendBone*>) == 0x8);
    // [LargeHeader] Offset: 0x10F8CE4
    // [TooltipAttribute] Offset: 0x10F8CE4
    // [RangeAttribute] Offset: 0x10F8CE4
    // public System.Single CCDWeight
    // Size: 0x4
    // Offset: 0x48
    float CCDWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8D5C
    // [RangeAttribute] Offset: 0x10F8D5C
    // public System.Single roll
    // Size: 0x4
    // Offset: 0x4C
    float roll;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8DB0
    // [RangeAttribute] Offset: 0x10F8DB0
    // public System.Single damper
    // Size: 0x4
    // Offset: 0x50
    float damper;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: damper and: CCDBones
    char __padding12[0x4] = {};
    // [TooltipAttribute] Offset: 0x10F8E08
    // public UnityEngine.Transform[] CCDBones
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Transform*> CCDBones;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // [LargeHeader] Offset: 0x10F8E40
    // [TooltipAttribute] Offset: 0x10F8E40
    // [RangeAttribute] Offset: 0x10F8E40
    // public System.Single postStretchWeight
    // Size: 0x4
    // Offset: 0x60
    float postStretchWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8EB8
    // public System.Single maxStretch
    // Size: 0x4
    // Offset: 0x64
    float maxStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8EF0
    // public System.Single stretchDamper
    // Size: 0x4
    // Offset: 0x68
    float stretchDamper;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10F8F28
    // public System.Boolean fixHead
    // Size: 0x1
    // Offset: 0x6C
    bool fixHead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixHead and: stretchBones
    char __padding17[0x3] = {};
    // [TooltipAttribute] Offset: 0x10F8F60
    // public UnityEngine.Transform[] stretchBones
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::Transform*> stretchBones;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // [LargeHeader] Offset: 0x10F8F98
    // public UnityEngine.Vector3 chestDirection
    // Size: 0xC
    // Offset: 0x78
    ::UnityEngine::Vector3 chestDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [RangeAttribute] Offset: 0x10F8FD0
    // public System.Single chestDirectionWeight
    // Size: 0x4
    // Offset: 0x84
    float chestDirectionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Transform[] chestBones
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::UnityEngine::Transform*> chestBones;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostHeadEffectorFK
    // Size: 0x8
    // Offset: 0x90
    ::RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostHeadEffectorFK;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // private UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x98
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 headToBody
    // Size: 0xC
    // Offset: 0xA4
    ::UnityEngine::Vector3 headToBody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 shoulderCenterToHead
    // Size: 0xC
    // Offset: 0xB0
    ::UnityEngine::Vector3 shoulderCenterToHead;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 headToLeftThigh
    // Size: 0xC
    // Offset: 0xBC
    ::UnityEngine::Vector3 headToLeftThigh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 headToRightThigh
    // Size: 0xC
    // Offset: 0xC8
    ::UnityEngine::Vector3 headToRightThigh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 leftShoulderPos
    // Size: 0xC
    // Offset: 0xD4
    ::UnityEngine::Vector3 leftShoulderPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 rightShoulderPos
    // Size: 0xC
    // Offset: 0xE0
    ::UnityEngine::Vector3 rightShoulderPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single shoulderDist
    // Size: 0x4
    // Offset: 0xEC
    float shoulderDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single leftShoulderDist
    // Size: 0x4
    // Offset: 0xF0
    float leftShoulderDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rightShoulderDist
    // Size: 0x4
    // Offset: 0xF4
    float rightShoulderDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion chestRotation
    // Size: 0x10
    // Offset: 0xF8
    ::UnityEngine::Quaternion chestRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion headRotationRelativeToRoot
    // Size: 0x10
    // Offset: 0x108
    ::UnityEngine::Quaternion headRotationRelativeToRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion[] ccdDefaultLocalRotations
    // Size: 0x8
    // Offset: 0x118
    ::ArrayW<::UnityEngine::Quaternion> ccdDefaultLocalRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // private UnityEngine.Vector3 headLocalPosition
    // Size: 0xC
    // Offset: 0x120
    ::UnityEngine::Vector3 headLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion headLocalRotation
    // Size: 0x10
    // Offset: 0x12C
    ::UnityEngine::Quaternion headLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // Padding between fields: headLocalRotation and: stretchLocalPositions
    char __padding37[0x4] = {};
    // private UnityEngine.Vector3[] stretchLocalPositions
    // Size: 0x8
    // Offset: 0x140
    ::ArrayW<::UnityEngine::Vector3> stretchLocalPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Quaternion[] stretchLocalRotations
    // Size: 0x8
    // Offset: 0x148
    ::ArrayW<::UnityEngine::Quaternion> stretchLocalRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // private UnityEngine.Vector3[] chestLocalPositions
    // Size: 0x8
    // Offset: 0x150
    ::ArrayW<::UnityEngine::Vector3> chestLocalPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Quaternion[] chestLocalRotations
    // Size: 0x8
    // Offset: 0x158
    ::ArrayW<::UnityEngine::Quaternion> chestLocalRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // private System.Int32 bendBonesCount
    // Size: 0x4
    // Offset: 0x160
    int bendBonesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 ccdBonesCount
    // Size: 0x4
    // Offset: 0x164
    int ccdBonesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 stretchBonesCount
    // Size: 0x4
    // Offset: 0x168
    int stretchBonesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 chestBonesCount
    // Size: 0x4
    // Offset: 0x16C
    int chestBonesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedIK ik
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::FullBodyBipedIK*& dyn_ik();
    // Get instance field reference: public System.Single positionWeight
    [[deprecated("Use field access instead!")]] float& dyn_positionWeight();
    // Get instance field reference: public System.Single bodyWeight
    [[deprecated("Use field access instead!")]] float& dyn_bodyWeight();
    // Get instance field reference: public System.Single thighWeight
    [[deprecated("Use field access instead!")]] float& dyn_thighWeight();
    // Get instance field reference: public System.Boolean handsPullBody
    [[deprecated("Use field access instead!")]] bool& dyn_handsPullBody();
    // Get instance field reference: public System.Single rotationWeight
    [[deprecated("Use field access instead!")]] float& dyn_rotationWeight();
    // Get instance field reference: public System.Single bodyClampWeight
    [[deprecated("Use field access instead!")]] float& dyn_bodyClampWeight();
    // Get instance field reference: public System.Single headClampWeight
    [[deprecated("Use field access instead!")]] float& dyn_headClampWeight();
    // Get instance field reference: public System.Single bendWeight
    [[deprecated("Use field access instead!")]] float& dyn_bendWeight();
    // Get instance field reference: public RootMotion.FinalIK.FBBIKHeadEffector/RootMotion.FinalIK.BendBone[] bendBones
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::FBBIKHeadEffector::BendBone*>& dyn_bendBones();
    // Get instance field reference: public System.Single CCDWeight
    [[deprecated("Use field access instead!")]] float& dyn_CCDWeight();
    // Get instance field reference: public System.Single roll
    [[deprecated("Use field access instead!")]] float& dyn_roll();
    // Get instance field reference: public System.Single damper
    [[deprecated("Use field access instead!")]] float& dyn_damper();
    // Get instance field reference: public UnityEngine.Transform[] CCDBones
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_CCDBones();
    // Get instance field reference: public System.Single postStretchWeight
    [[deprecated("Use field access instead!")]] float& dyn_postStretchWeight();
    // Get instance field reference: public System.Single maxStretch
    [[deprecated("Use field access instead!")]] float& dyn_maxStretch();
    // Get instance field reference: public System.Single stretchDamper
    [[deprecated("Use field access instead!")]] float& dyn_stretchDamper();
    // Get instance field reference: public System.Boolean fixHead
    [[deprecated("Use field access instead!")]] bool& dyn_fixHead();
    // Get instance field reference: public UnityEngine.Transform[] stretchBones
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_stretchBones();
    // Get instance field reference: public UnityEngine.Vector3 chestDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_chestDirection();
    // Get instance field reference: public System.Single chestDirectionWeight
    [[deprecated("Use field access instead!")]] float& dyn_chestDirectionWeight();
    // Get instance field reference: public UnityEngine.Transform[] chestBones
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_chestBones();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostHeadEffectorFK
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPostHeadEffectorFK();
    // Get instance field reference: private UnityEngine.Vector3 offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: private UnityEngine.Vector3 headToBody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_headToBody();
    // Get instance field reference: private UnityEngine.Vector3 shoulderCenterToHead
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_shoulderCenterToHead();
    // Get instance field reference: private UnityEngine.Vector3 headToLeftThigh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_headToLeftThigh();
    // Get instance field reference: private UnityEngine.Vector3 headToRightThigh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_headToRightThigh();
    // Get instance field reference: private UnityEngine.Vector3 leftShoulderPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_leftShoulderPos();
    // Get instance field reference: private UnityEngine.Vector3 rightShoulderPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rightShoulderPos();
    // Get instance field reference: private System.Single shoulderDist
    [[deprecated("Use field access instead!")]] float& dyn_shoulderDist();
    // Get instance field reference: private System.Single leftShoulderDist
    [[deprecated("Use field access instead!")]] float& dyn_leftShoulderDist();
    // Get instance field reference: private System.Single rightShoulderDist
    [[deprecated("Use field access instead!")]] float& dyn_rightShoulderDist();
    // Get instance field reference: private UnityEngine.Quaternion chestRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_chestRotation();
    // Get instance field reference: private UnityEngine.Quaternion headRotationRelativeToRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_headRotationRelativeToRoot();
    // Get instance field reference: private UnityEngine.Quaternion[] ccdDefaultLocalRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_ccdDefaultLocalRotations();
    // Get instance field reference: private UnityEngine.Vector3 headLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_headLocalPosition();
    // Get instance field reference: private UnityEngine.Quaternion headLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_headLocalRotation();
    // Get instance field reference: private UnityEngine.Vector3[] stretchLocalPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_stretchLocalPositions();
    // Get instance field reference: private UnityEngine.Quaternion[] stretchLocalRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_stretchLocalRotations();
    // Get instance field reference: private UnityEngine.Vector3[] chestLocalPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_chestLocalPositions();
    // Get instance field reference: private UnityEngine.Quaternion[] chestLocalRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_chestLocalRotations();
    // Get instance field reference: private System.Int32 bendBonesCount
    [[deprecated("Use field access instead!")]] int& dyn_bendBonesCount();
    // Get instance field reference: private System.Int32 ccdBonesCount
    [[deprecated("Use field access instead!")]] int& dyn_ccdBonesCount();
    // Get instance field reference: private System.Int32 stretchBonesCount
    [[deprecated("Use field access instead!")]] int& dyn_stretchBonesCount();
    // Get instance field reference: private System.Int32 chestBonesCount
    [[deprecated("Use field access instead!")]] int& dyn_chestBonesCount();
    // public System.Void .ctor()
    // Offset: 0x225702C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKHeadEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FBBIKHeadEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKHeadEffector*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x2254180
    void Start();
    // private System.Void OnStoreDefaultLocalState()
    // Offset: 0x22544B0
    void OnStoreDefaultLocalState();
    // private System.Void OnFixTransforms()
    // Offset: 0x2254970
    void OnFixTransforms();
    // private System.Void OnPreRead()
    // Offset: 0x2254D64
    void OnPreRead();
    // private System.Void SpineBend()
    // Offset: 0x22556DC
    void SpineBend();
    // private System.Void CCDPass()
    // Offset: 0x2255A28
    void CCDPass();
    // private System.Void Iterate(System.Int32 iteration)
    // Offset: 0x2255DC4
    void Iterate(int iteration);
    // private System.Void OnPostUpdate()
    // Offset: 0x2256830
    void OnPostUpdate();
    // private System.Void ChestDirection()
    // Offset: 0x2255408
    void ChestDirection();
    // private System.Void PostStretching()
    // Offset: 0x2256A40
    void PostStretching();
    // private System.Void LerpSolverPosition(RootMotion.FinalIK.IKEffector effector, UnityEngine.Vector3 position, System.Single weight, UnityEngine.Vector3 offset)
    // Offset: 0x22566EC
    void LerpSolverPosition(::RootMotion::FinalIK::IKEffector* effector, ::UnityEngine::Vector3 position, float weight, ::UnityEngine::Vector3 offset);
    // private System.Void Solve(ref UnityEngine.Vector3 pos1, ref UnityEngine.Vector3 pos2, System.Single nominalDistance)
    // Offset: 0x2256550
    void Solve(ByRef<::UnityEngine::Vector3> pos1, ByRef<::UnityEngine::Vector3> pos2, float nominalDistance);
    // private System.Void OnDestroy()
    // Offset: 0x2256DAC
    void OnDestroy();
  }; // RootMotion.FinalIK.FBBIKHeadEffector
  #pragma pack(pop)
  static check_size<sizeof(FBBIKHeadEffector), 364 + sizeof(int)> __RootMotion_FinalIK_FBBIKHeadEffectorSizeCheck;
  static_assert(sizeof(FBBIKHeadEffector) == 0x170);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::OnStoreDefaultLocalState
// Il2CppName: OnStoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::OnStoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "OnStoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::OnFixTransforms
// Il2CppName: OnFixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::OnFixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "OnFixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::OnPreRead
// Il2CppName: OnPreRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::OnPreRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "OnPreRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::SpineBend
// Il2CppName: SpineBend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::SpineBend)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "SpineBend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::CCDPass
// Il2CppName: CCDPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::CCDPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "CCDPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::Iterate
// Il2CppName: Iterate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)(int)>(&RootMotion::FinalIK::FBBIKHeadEffector::Iterate)> {
  static const MethodInfo* get() {
    static auto* iteration = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "Iterate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{iteration});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::OnPostUpdate
// Il2CppName: OnPostUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::OnPostUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "OnPostUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::ChestDirection
// Il2CppName: ChestDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::ChestDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "ChestDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::PostStretching
// Il2CppName: PostStretching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::PostStretching)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "PostStretching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::LerpSolverPosition
// Il2CppName: LerpSolverPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)(::RootMotion::FinalIK::IKEffector*, ::UnityEngine::Vector3, float, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::FBBIKHeadEffector::LerpSolverPosition)> {
  static const MethodInfo* get() {
    static auto* effector = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKEffector")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "LerpSolverPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effector, position, weight, offset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float)>(&RootMotion::FinalIK::FBBIKHeadEffector::Solve)> {
  static const MethodInfo* get() {
    static auto* pos1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* pos2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* nominalDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos1, pos2, nominalDistance});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
