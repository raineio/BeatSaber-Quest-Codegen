// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: AimIK
  class AimIK;
  // Forward declaring type: IKEffector
  class IKEffector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xF0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Recoil
  class Recoil : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: RootMotion::FinalIK::Recoil::RecoilOffset
    class RecoilOffset;
    // Nested type: RootMotion::FinalIK::Recoil::Handedness
    struct Handedness;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.FinalIK.Recoil/Handedness
    struct Handedness/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Handedness
      constexpr Handedness(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.Recoil/Handedness Right
      static constexpr const int Right = 0;
      // Get static field: static public RootMotion.FinalIK.Recoil/Handedness Right
      static RootMotion::FinalIK::Recoil::Handedness _get_Right();
      // Set static field: static public RootMotion.FinalIK.Recoil/Handedness Right
      static void _set_Right(RootMotion::FinalIK::Recoil::Handedness value);
      // static field const value: static public RootMotion.FinalIK.Recoil/Handedness Left
      static constexpr const int Left = 1;
      // Get static field: static public RootMotion.FinalIK.Recoil/Handedness Left
      static RootMotion::FinalIK::Recoil::Handedness _get_Left();
      // Set static field: static public RootMotion.FinalIK.Recoil/Handedness Left
      static void _set_Left(RootMotion::FinalIK::Recoil::Handedness value);
    }; // RootMotion.FinalIK.Recoil/Handedness
    #pragma pack(pop)
    static check_size<sizeof(Recoil::Handedness), 0 + sizeof(int)> __RootMotion_FinalIK_Recoil_HandednessSizeCheck;
    static_assert(sizeof(Recoil::Handedness) == 0x4);
    // [TooltipAttribute] Offset: 0xE0AF20
    // public RootMotion.FinalIK.AimIK aimIK
    // Size: 0x8
    // Offset: 0x30
    RootMotion::FinalIK::AimIK* aimIK;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::AimIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0AF58
    // public System.Boolean aimIKSolvedLast
    // Size: 0x1
    // Offset: 0x38
    bool aimIKSolvedLast;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: aimIKSolvedLast and: handedness
    char __padding1[0x3] = {};
    // [TooltipAttribute] Offset: 0xE0AF90
    // public RootMotion.FinalIK.Recoil/Handedness handedness
    // Size: 0x4
    // Offset: 0x3C
    RootMotion::FinalIK::Recoil::Handedness handedness;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Recoil::Handedness) == 0x4);
    // [TooltipAttribute] Offset: 0xE0AFC8
    // public System.Boolean twoHanded
    // Size: 0x1
    // Offset: 0x40
    bool twoHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: twoHanded and: recoilWeight
    char __padding3[0x7] = {};
    // [TooltipAttribute] Offset: 0xE0B000
    // public UnityEngine.AnimationCurve recoilWeight
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* recoilWeight;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0B038
    // public System.Single magnitudeRandom
    // Size: 0x4
    // Offset: 0x50
    float magnitudeRandom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0B070
    // public UnityEngine.Vector3 rotationRandom
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 rotationRandom;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xE0B0A8
    // public UnityEngine.Vector3 handRotationOffset
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 handRotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xE0B0E0
    // public System.Single blendTime
    // Size: 0x4
    // Offset: 0x6C
    float blendTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xE0B118
    // [TooltipAttribute] Offset: 0xE0B118
    // public RootMotion.FinalIK.Recoil/RecoilOffset[] offsets
    // Size: 0x8
    // Offset: 0x70
    ::Array<RootMotion::FinalIK::Recoil::RecoilOffset*>* offsets;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Recoil::RecoilOffset*>*) == 0x8);
    // [HideInInspector] Offset: 0xE0B168
    // public UnityEngine.Quaternion rotationOffset
    // Size: 0x10
    // Offset: 0x78
    UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single magnitudeMlp
    // Size: 0x4
    // Offset: 0x88
    float magnitudeMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single endTime
    // Size: 0x4
    // Offset: 0x8C
    float endTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion handRotation
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Quaternion handRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion secondaryHandRelativeRotation
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Quaternion secondaryHandRelativeRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion randomRotation
    // Size: 0x10
    // Offset: 0xB0
    UnityEngine::Quaternion randomRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single length
    // Size: 0x4
    // Offset: 0xC0
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0xC4
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: blendWeight
    char __padding17[0x3] = {};
    // private System.Single blendWeight
    // Size: 0x4
    // Offset: 0xC8
    float blendWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single w
    // Size: 0x4
    // Offset: 0xCC
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion primaryHandRotation
    // Size: 0x10
    // Offset: 0xD0
    UnityEngine::Quaternion primaryHandRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Boolean handRotationsSet
    // Size: 0x1
    // Offset: 0xE0
    bool handRotationsSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: handRotationsSet and: aimIKAxis
    char __padding21[0x3] = {};
    // private UnityEngine.Vector3 aimIKAxis
    // Size: 0xC
    // Offset: 0xE4
    UnityEngine::Vector3 aimIKAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Recoil
    Recoil(RootMotion::FinalIK::AimIK* aimIK_ = {}, bool aimIKSolvedLast_ = {}, RootMotion::FinalIK::Recoil::Handedness handedness_ = {}, bool twoHanded_ = {}, UnityEngine::AnimationCurve* recoilWeight_ = {}, float magnitudeRandom_ = {}, UnityEngine::Vector3 rotationRandom_ = {}, UnityEngine::Vector3 handRotationOffset_ = {}, float blendTime_ = {}, ::Array<RootMotion::FinalIK::Recoil::RecoilOffset*>* offsets_ = {}, UnityEngine::Quaternion rotationOffset_ = {}, float magnitudeMlp_ = {}, float endTime_ = {}, UnityEngine::Quaternion handRotation_ = {}, UnityEngine::Quaternion secondaryHandRelativeRotation_ = {}, UnityEngine::Quaternion randomRotation_ = {}, float length_ = {}, bool initiated_ = {}, float blendWeight_ = {}, float w_ = {}, UnityEngine::Quaternion primaryHandRotation_ = {}, bool handRotationsSet_ = {}, UnityEngine::Vector3 aimIKAxis_ = {}) noexcept : aimIK{aimIK_}, aimIKSolvedLast{aimIKSolvedLast_}, handedness{handedness_}, twoHanded{twoHanded_}, recoilWeight{recoilWeight_}, magnitudeRandom{magnitudeRandom_}, rotationRandom{rotationRandom_}, handRotationOffset{handRotationOffset_}, blendTime{blendTime_}, offsets{offsets_}, rotationOffset{rotationOffset_}, magnitudeMlp{magnitudeMlp_}, endTime{endTime_}, handRotation{handRotation_}, secondaryHandRelativeRotation{secondaryHandRelativeRotation_}, randomRotation{randomRotation_}, length{length_}, initiated{initiated_}, blendWeight{blendWeight_}, w{w_}, primaryHandRotation{primaryHandRotation_}, handRotationsSet{handRotationsSet_}, aimIKAxis{aimIKAxis_} {}
    // public System.Boolean get_isFinished()
    // Offset: 0x1AA42DC
    bool get_isFinished();
    // public System.Void SetHandRotations(UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation)
    // Offset: 0x1AA430C
    void SetHandRotations(UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation);
    // public System.Void Fire(System.Single magnitude)
    // Offset: 0x1AA4338
    void Fire(float magnitude);
    // private System.Void AfterFBBIK()
    // Offset: 0x1AA53C8
    void AfterFBBIK();
    // private System.Void AfterAimIK()
    // Offset: 0x1AA5520
    void AfterAimIK();
    // private RootMotion.FinalIK.IKEffector get_primaryHandEffector()
    // Offset: 0x1AA5348
    RootMotion::FinalIK::IKEffector* get_primaryHandEffector();
    // private RootMotion.FinalIK.IKEffector get_secondaryHandEffector()
    // Offset: 0x1AA5388
    RootMotion::FinalIK::IKEffector* get_secondaryHandEffector();
    // private UnityEngine.Transform get_primaryHand()
    // Offset: 0x1AA5308
    UnityEngine::Transform* get_primaryHand();
    // private UnityEngine.Transform get_secondaryHand()
    // Offset: 0x1AA5328
    UnityEngine::Transform* get_secondaryHand();
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1AA45B4
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // protected override System.Void OnDestroy()
    // Offset: 0x1AA555C
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1AA56F4
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Recoil* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Recoil::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Recoil*, creationType>()));
    }
  }; // RootMotion.FinalIK.Recoil
  #pragma pack(pop)
  static check_size<sizeof(Recoil), 228 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_RecoilSizeCheck;
  static_assert(sizeof(Recoil) == 0xF0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Recoil*, "RootMotion.FinalIK", "Recoil");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Recoil::Handedness, "RootMotion.FinalIK", "Recoil/Handedness");
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::get_isFinished
// Il2CppName: get_isFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::get_isFinished)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "get_isFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::SetHandRotations
// Il2CppName: SetHandRotations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Recoil::*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>(&RootMotion::FinalIK::Recoil::SetHandRotations)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "SetHandRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::Fire
// Il2CppName: Fire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Recoil::*)(float)>(&RootMotion::FinalIK::Recoil::Fire)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "Fire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::AfterFBBIK
// Il2CppName: AfterFBBIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::AfterFBBIK)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "AfterFBBIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::AfterAimIK
// Il2CppName: AfterAimIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::AfterAimIK)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "AfterAimIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::get_primaryHandEffector
// Il2CppName: get_primaryHandEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKEffector* (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::get_primaryHandEffector)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "get_primaryHandEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::get_secondaryHandEffector
// Il2CppName: get_secondaryHandEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKEffector* (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::get_secondaryHandEffector)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "get_secondaryHandEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::get_primaryHand
// Il2CppName: get_primaryHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::get_primaryHand)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "get_primaryHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::get_secondaryHand
// Il2CppName: get_secondaryHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::get_secondaryHand)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "get_secondaryHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::OnModifyOffset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Recoil::*)()>(&RootMotion::FinalIK::Recoil::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Recoil*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Recoil::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
