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
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::IKSolverVR::Arm);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::Arm*, "RootMotion.FinalIK", "IKSolverVR/Arm");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x148
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverVR::Arm : public RootMotion::FinalIK::IKSolverVR::BodyPart {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode
    struct ShoulderRotationMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct ShoulderRotationMode/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ShoulderRotationMode
      constexpr ShoulderRotationMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode YawPitch
      static constexpr const int YawPitch = 0;
      // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode YawPitch
      static RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode _get_YawPitch();
      // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode YawPitch
      static void _set_YawPitch(RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode value);
      // static field const value: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode FromTo
      static constexpr const int FromTo = 1;
      // Get static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode FromTo
      static RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode _get_FromTo();
      // Set static field: static public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode FromTo
      static void _set_FromTo(RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode
    #pragma pack(pop)
    static check_size<sizeof(IKSolverVR::Arm::ShoulderRotationMode), 0 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_Arm_ShoulderRotationModeSizeCheck;
    static_assert(sizeof(IKSolverVR::Arm::ShoulderRotationMode) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0xF6061C
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xF60654
    // public UnityEngine.Transform bendGoal
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* bendGoal;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xF6068C
    // [RangeAttribute] Offset: 0xF6068C
    // public System.Single positionWeight
    // Size: 0x4
    // Offset: 0x58
    float positionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF606E0
    // [RangeAttribute] Offset: 0xF606E0
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x5C
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF60734
    // public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode shoulderRotationMode
    // Size: 0x4
    // Offset: 0x60
    RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode shoulderRotationMode;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode) == 0x4);
    // [TooltipAttribute] Offset: 0xF6076C
    // [RangeAttribute] Offset: 0xF6076C
    // public System.Single shoulderRotationWeight
    // Size: 0x4
    // Offset: 0x64
    float shoulderRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF607C0
    // [RangeAttribute] Offset: 0xF607C0
    // public System.Single shoulderTwistWeight
    // Size: 0x4
    // Offset: 0x68
    float shoulderTwistWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF60814
    // [RangeAttribute] Offset: 0xF60814
    // public System.Single bendGoalWeight
    // Size: 0x4
    // Offset: 0x6C
    float bendGoalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF60868
    // [RangeAttribute] Offset: 0xF60868
    // public System.Single swivelOffset
    // Size: 0x4
    // Offset: 0x70
    float swivelOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF608C4
    // public UnityEngine.Vector3 wristToPalmAxis
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 wristToPalmAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xF608FC
    // public UnityEngine.Vector3 palmToThumbAxis
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 palmToThumbAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xF60934
    // [RangeAttribute] Offset: 0xF60934
    // public System.Single armLengthMlp
    // Size: 0x4
    // Offset: 0x8C
    float armLengthMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xF6098C
    // public UnityEngine.AnimationCurve stretchCurve
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::AnimationCurve* stretchCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector3 IKPosition
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 IKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion IKRotation
    // Size: 0x10
    // Offset: 0xA4
    UnityEngine::Quaternion IKRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 bendDirection
    // Size: 0xC
    // Offset: 0xB4
    UnityEngine::Vector3 bendDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 handPositionOffset
    // Size: 0xC
    // Offset: 0xC0
    UnityEngine::Vector3 handPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <position>k__BackingField
    // Size: 0xC
    // Offset: 0xCC
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion <rotation>k__BackingField
    // Size: 0x10
    // Offset: 0xD8
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Boolean hasShoulder
    // Size: 0x1
    // Offset: 0xE8
    bool hasShoulder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasShoulder and: chestForwardAxis
    char __padding19[0x3] = {};
    // private UnityEngine.Vector3 chestForwardAxis
    // Size: 0xC
    // Offset: 0xEC
    UnityEngine::Vector3 chestForwardAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 chestUpAxis
    // Size: 0xC
    // Offset: 0xF8
    UnityEngine::Vector3 chestUpAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion chestRotation
    // Size: 0x10
    // Offset: 0x104
    UnityEngine::Quaternion chestRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 chestForward
    // Size: 0xC
    // Offset: 0x114
    UnityEngine::Vector3 chestForward;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 chestUp
    // Size: 0xC
    // Offset: 0x120
    UnityEngine::Vector3 chestUp;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion forearmRelToUpperArm
    // Size: 0x10
    // Offset: 0x12C
    UnityEngine::Quaternion forearmRelToUpperArm;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 upperArmBendAxis
    // Size: 0xC
    // Offset: 0x13C
    UnityEngine::Vector3 upperArmBendAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // static field const value: static private System.Single yawOffsetAngle
    static constexpr const float yawOffsetAngle = 45;
    // Get static field: static private System.Single yawOffsetAngle
    static float _get_yawOffsetAngle();
    // Set static field: static private System.Single yawOffsetAngle
    static void _set_yawOffsetAngle(float value);
    // static field const value: static private System.Single pitchOffsetAngle
    static constexpr const float pitchOffsetAngle = -30;
    // Get static field: static private System.Single pitchOffsetAngle
    static float _get_pitchOffsetAngle();
    // Set static field: static private System.Single pitchOffsetAngle
    static void _set_pitchOffsetAngle(float value);
    // Get instance field reference: public UnityEngine.Transform target
    UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public UnityEngine.Transform bendGoal
    UnityEngine::Transform*& dyn_bendGoal();
    // Get instance field reference: public System.Single positionWeight
    float& dyn_positionWeight();
    // Get instance field reference: public System.Single rotationWeight
    float& dyn_rotationWeight();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm/RootMotion.FinalIK.ShoulderRotationMode shoulderRotationMode
    RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode& dyn_shoulderRotationMode();
    // Get instance field reference: public System.Single shoulderRotationWeight
    float& dyn_shoulderRotationWeight();
    // Get instance field reference: public System.Single shoulderTwistWeight
    float& dyn_shoulderTwistWeight();
    // Get instance field reference: public System.Single bendGoalWeight
    float& dyn_bendGoalWeight();
    // Get instance field reference: public System.Single swivelOffset
    float& dyn_swivelOffset();
    // Get instance field reference: public UnityEngine.Vector3 wristToPalmAxis
    UnityEngine::Vector3& dyn_wristToPalmAxis();
    // Get instance field reference: public UnityEngine.Vector3 palmToThumbAxis
    UnityEngine::Vector3& dyn_palmToThumbAxis();
    // Get instance field reference: public System.Single armLengthMlp
    float& dyn_armLengthMlp();
    // Get instance field reference: public UnityEngine.AnimationCurve stretchCurve
    UnityEngine::AnimationCurve*& dyn_stretchCurve();
    // Get instance field reference: public UnityEngine.Vector3 IKPosition
    UnityEngine::Vector3& dyn_IKPosition();
    // Get instance field reference: public UnityEngine.Quaternion IKRotation
    UnityEngine::Quaternion& dyn_IKRotation();
    // Get instance field reference: public UnityEngine.Vector3 bendDirection
    UnityEngine::Vector3& dyn_bendDirection();
    // Get instance field reference: public UnityEngine.Vector3 handPositionOffset
    UnityEngine::Vector3& dyn_handPositionOffset();
    // Get instance field reference: private UnityEngine.Vector3 <position>k__BackingField
    UnityEngine::Vector3& dyn_$position$k__BackingField();
    // Get instance field reference: private UnityEngine.Quaternion <rotation>k__BackingField
    UnityEngine::Quaternion& dyn_$rotation$k__BackingField();
    // Get instance field reference: private System.Boolean hasShoulder
    bool& dyn_hasShoulder();
    // Get instance field reference: private UnityEngine.Vector3 chestForwardAxis
    UnityEngine::Vector3& dyn_chestForwardAxis();
    // Get instance field reference: private UnityEngine.Vector3 chestUpAxis
    UnityEngine::Vector3& dyn_chestUpAxis();
    // Get instance field reference: private UnityEngine.Quaternion chestRotation
    UnityEngine::Quaternion& dyn_chestRotation();
    // Get instance field reference: private UnityEngine.Vector3 chestForward
    UnityEngine::Vector3& dyn_chestForward();
    // Get instance field reference: private UnityEngine.Vector3 chestUp
    UnityEngine::Vector3& dyn_chestUp();
    // Get instance field reference: private UnityEngine.Quaternion forearmRelToUpperArm
    UnityEngine::Quaternion& dyn_forearmRelToUpperArm();
    // Get instance field reference: private UnityEngine.Vector3 upperArmBendAxis
    UnityEngine::Vector3& dyn_upperArmBendAxis();
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x1FDF1C8
    UnityEngine::Vector3 get_position();
    // private System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x1FDF1D4
    void set_position(UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x1FDF1E0
    UnityEngine::Quaternion get_rotation();
    // private System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x1FDF1EC
    void set_rotation(UnityEngine::Quaternion value);
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_shoulder()
    // Offset: 0x1FDF1F8
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_shoulder();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_upperArm()
    // Offset: 0x1FDF22C
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_upperArm();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_forearm()
    // Offset: 0x1FDF26C
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_forearm();
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone get_hand()
    // Offset: 0x1FDF2B8
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_hand();
    // private System.Void Stretching()
    // Offset: 0x1FDFF54
    void Stretching();
    // public System.Void Solve(System.Boolean isLeft)
    // Offset: 0x1FE036C
    void Solve(bool isLeft);
    // private System.Single DamperValue(System.Single value, System.Single min, System.Single max, System.Single weight)
    // Offset: 0x1FE18C0
    float DamperValue(float value, float min, float max, float weight);
    // private UnityEngine.Vector3 GetBendNormal(UnityEngine.Vector3 dir)
    // Offset: 0x1FE1BCC
    UnityEngine::Vector3 GetBendNormal(UnityEngine::Vector3 dir);
    // private System.Void Visualize(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone bone1, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone bone2, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone bone3, UnityEngine.Color color)
    // Offset: 0x1FE2B60
    void Visualize(RootMotion::FinalIK::IKSolverVR::VirtualBone* bone1, RootMotion::FinalIK::IKSolverVR::VirtualBone* bone2, RootMotion::FinalIK::IKSolverVR::VirtualBone* bone3, UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1FE2C88
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::Arm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::Arm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::Arm*, creationType>()));
    }
    // protected override System.Void OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0x1FDF304
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    void OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public override System.Void PreSolve()
    // Offset: 0x1FDFCB4
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::PreSolve()
    void PreSolve();
    // public override System.Void ApplyOffsets()
    // Offset: 0x1FDFEA8
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::ApplyOffsets()
    void ApplyOffsets();
    // public override System.Void ResetOffsets()
    // Offset: 0x1FE28D0
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::ResetOffsets()
    void ResetOffsets();
    // public override System.Void Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    // Offset: 0x1FE2940
    // Implemented from: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.BodyPart
    // Base method: System.Void BodyPart::Write(ref UnityEngine.Vector3[] solvedPositions, ref UnityEngine.Quaternion[] solvedRotations)
    void Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations);
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::Arm), 316 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverVR_ArmSizeCheck;
  static_assert(sizeof(IKSolverVR::Arm) == 0x148);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::Arm::ShoulderRotationMode, "RootMotion.FinalIK", "IKSolverVR/Arm/ShoulderRotationMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Arm::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::Arm::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::get_shoulder
// Il2CppName: get_shoulder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::get_shoulder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "get_shoulder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::get_upperArm
// Il2CppName: get_upperArm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::get_upperArm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "get_upperArm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::get_forearm
// Il2CppName: get_forearm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::get_forearm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "get_forearm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::get_hand
// Il2CppName: get_hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::get_hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "get_hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::Stretching
// Il2CppName: Stretching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::Stretching)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "Stretching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)(bool)>(&RootMotion::FinalIK::IKSolverVR::Arm::Solve)> {
  static const MethodInfo* get() {
    static auto* isLeft = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLeft});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::DamperValue
// Il2CppName: DamperValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolverVR::Arm::*)(float, float, float, float)>(&RootMotion::FinalIK::IKSolverVR::Arm::DamperValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "DamperValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::GetBendNormal
// Il2CppName: GetBendNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Arm::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Arm::GetBendNormal)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "GetBendNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::Visualize
// Il2CppName: Visualize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)(RootMotion::FinalIK::IKSolverVR::VirtualBone*, RootMotion::FinalIK::IKSolverVR::VirtualBone*, RootMotion::FinalIK::IKSolverVR::VirtualBone*, UnityEngine::Color)>(&RootMotion::FinalIK::IKSolverVR::Arm::Visualize)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone")->byval_arg;
    static auto* bone3 = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "Visualize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2, bone3, color});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::OnRead
// Il2CppName: OnRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int, int)>(&RootMotion::FinalIK::IKSolverVR::Arm::OnRead)> {
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
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "OnRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::PreSolve
// Il2CppName: PreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::PreSolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "PreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::ApplyOffsets
// Il2CppName: ApplyOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::ApplyOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "ApplyOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::ResetOffsets
// Il2CppName: ResetOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)()>(&RootMotion::FinalIK::IKSolverVR::Arm::ResetOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "ResetOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Arm::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Arm::*)(ByRef<::ArrayW<UnityEngine::Vector3>>, ByRef<::ArrayW<UnityEngine::Quaternion>>)>(&RootMotion::FinalIK::IKSolverVR::Arm::Write)> {
  static const MethodInfo* get() {
    static auto* solvedPositions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->this_arg;
    static auto* solvedRotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Arm*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solvedPositions, solvedRotations});
  }
};
