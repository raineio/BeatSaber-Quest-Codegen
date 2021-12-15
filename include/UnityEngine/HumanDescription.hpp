// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.HumanBone
#include "UnityEngine/HumanBone.hpp"
// Including type: UnityEngine.SkeletonBone
#include "UnityEngine/SkeletonBone.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HumanDescription
  struct HumanDescription;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanDescription, "UnityEngine", "HumanDescription");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x3B
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.HumanDescription
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: ECDE88
  // [NativeHeaderAttribute] Offset: ECDE88
  struct HumanDescription/*, public System::ValueType*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0xECEEF8
    // public UnityEngine.HumanBone[] human
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<UnityEngine::HumanBone> human;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::HumanBone>) == 0x8);
    // [NativeNameAttribute] Offset: 0xECEF30
    // public UnityEngine.SkeletonBone[] skeleton
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<UnityEngine::SkeletonBone> skeleton;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::SkeletonBone>) == 0x8);
    // System.Single m_ArmTwist
    // Size: 0x4
    // Offset: 0x10
    float m_ArmTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_ForeArmTwist
    // Size: 0x4
    // Offset: 0x14
    float m_ForeArmTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_UpperLegTwist
    // Size: 0x4
    // Offset: 0x18
    float m_UpperLegTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_LegTwist
    // Size: 0x4
    // Offset: 0x1C
    float m_LegTwist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_ArmStretch
    // Size: 0x4
    // Offset: 0x20
    float m_ArmStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_LegStretch
    // Size: 0x4
    // Offset: 0x24
    float m_LegStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_FeetSpacing
    // Size: 0x4
    // Offset: 0x28
    float m_FeetSpacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_GlobalScale
    // Size: 0x4
    // Offset: 0x2C
    float m_GlobalScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.String m_RootMotionBoneName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* m_RootMotionBoneName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Boolean m_HasTranslationDoF
    // Size: 0x1
    // Offset: 0x38
    bool m_HasTranslationDoF;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_HasExtraRoot
    // Size: 0x1
    // Offset: 0x39
    bool m_HasExtraRoot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_SkeletonHasParents
    // Size: 0x1
    // Offset: 0x3A
    bool m_SkeletonHasParents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: HumanDescription
    constexpr HumanDescription(::ArrayW<UnityEngine::HumanBone> human_ = ::ArrayW<UnityEngine::HumanBone>(nullptr), ::ArrayW<UnityEngine::SkeletonBone> skeleton_ = ::ArrayW<UnityEngine::SkeletonBone>(nullptr), float m_ArmTwist_ = {}, float m_ForeArmTwist_ = {}, float m_UpperLegTwist_ = {}, float m_LegTwist_ = {}, float m_ArmStretch_ = {}, float m_LegStretch_ = {}, float m_FeetSpacing_ = {}, float m_GlobalScale_ = {}, ::Il2CppString* m_RootMotionBoneName_ = {}, bool m_HasTranslationDoF_ = {}, bool m_HasExtraRoot_ = {}, bool m_SkeletonHasParents_ = {}) noexcept : human{human_}, skeleton{skeleton_}, m_ArmTwist{m_ArmTwist_}, m_ForeArmTwist{m_ForeArmTwist_}, m_UpperLegTwist{m_UpperLegTwist_}, m_LegTwist{m_LegTwist_}, m_ArmStretch{m_ArmStretch_}, m_LegStretch{m_LegStretch_}, m_FeetSpacing{m_FeetSpacing_}, m_GlobalScale{m_GlobalScale_}, m_RootMotionBoneName{m_RootMotionBoneName_}, m_HasTranslationDoF{m_HasTranslationDoF_}, m_HasExtraRoot{m_HasExtraRoot_}, m_SkeletonHasParents{m_SkeletonHasParents_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.HumanBone[] human
    ::ArrayW<UnityEngine::HumanBone>& dyn_human();
    // Get instance field reference: public UnityEngine.SkeletonBone[] skeleton
    ::ArrayW<UnityEngine::SkeletonBone>& dyn_skeleton();
    // Get instance field reference: System.Single m_ArmTwist
    float& dyn_m_ArmTwist();
    // Get instance field reference: System.Single m_ForeArmTwist
    float& dyn_m_ForeArmTwist();
    // Get instance field reference: System.Single m_UpperLegTwist
    float& dyn_m_UpperLegTwist();
    // Get instance field reference: System.Single m_LegTwist
    float& dyn_m_LegTwist();
    // Get instance field reference: System.Single m_ArmStretch
    float& dyn_m_ArmStretch();
    // Get instance field reference: System.Single m_LegStretch
    float& dyn_m_LegStretch();
    // Get instance field reference: System.Single m_FeetSpacing
    float& dyn_m_FeetSpacing();
    // Get instance field reference: System.Single m_GlobalScale
    float& dyn_m_GlobalScale();
    // Get instance field reference: System.String m_RootMotionBoneName
    ::Il2CppString*& dyn_m_RootMotionBoneName();
    // Get instance field reference: System.Boolean m_HasTranslationDoF
    bool& dyn_m_HasTranslationDoF();
    // Get instance field reference: System.Boolean m_HasExtraRoot
    bool& dyn_m_HasExtraRoot();
    // Get instance field reference: System.Boolean m_SkeletonHasParents
    bool& dyn_m_SkeletonHasParents();
  }; // UnityEngine.HumanDescription
  #pragma pack(pop)
  static check_size<sizeof(HumanDescription), 58 + sizeof(bool)> __UnityEngine_HumanDescriptionSizeCheck;
  static_assert(sizeof(HumanDescription) == 0x3B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
