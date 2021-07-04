// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
  // Skipping declaration: Foot because it is already included!
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x140
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderQuadruped
  // [HelpURLAttribute] Offset: E06EE8
  // [AddComponentMenu] Offset: E06EE8
  class GrounderQuadruped : public RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // Nested type: RootMotion::FinalIK::GrounderQuadruped::Foot
    struct Foot;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: RootMotion.FinalIK.GrounderQuadruped/Foot
    struct Foot/*, public System::ValueType*/ {
      public:
      // public RootMotion.FinalIK.IKSolver solver
      // Size: 0x8
      // Offset: 0x0
      RootMotion::FinalIK::IKSolver* solver;
      // Field size check
      static_assert(sizeof(RootMotion::FinalIK::IKSolver*) == 0x8);
      // public UnityEngine.Transform transform
      // Size: 0x8
      // Offset: 0x8
      UnityEngine::Transform* transform;
      // Field size check
      static_assert(sizeof(UnityEngine::Transform*) == 0x8);
      // public UnityEngine.Quaternion rotation
      // Size: 0x10
      // Offset: 0x10
      UnityEngine::Quaternion rotation;
      // Field size check
      static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
      // public RootMotion.FinalIK.Grounding/Leg leg
      // Size: 0x8
      // Offset: 0x20
      RootMotion::FinalIK::Grounding::Leg* leg;
      // Field size check
      static_assert(sizeof(RootMotion::FinalIK::Grounding::Leg*) == 0x8);
      // Creating value type constructor for type: Foot
      constexpr Foot(RootMotion::FinalIK::IKSolver* solver_ = {}, UnityEngine::Transform* transform_ = {}, UnityEngine::Quaternion rotation_ = {}, RootMotion::FinalIK::Grounding::Leg* leg_ = {}) noexcept : solver{solver_}, transform{transform_}, rotation{rotation_}, leg{leg_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(RootMotion.FinalIK.IKSolver solver, UnityEngine.Transform transform)
      // Offset: 0xF0946C
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      Foot(RootMotion::FinalIK::IKSolver* solver, UnityEngine::Transform* transform) {
        static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderQuadruped::Foot::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(solver), ::il2cpp_utils::ExtractType(transform)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, solver, transform);
      }
    }; // RootMotion.FinalIK.GrounderQuadruped/Foot
    #pragma pack(pop)
    static check_size<sizeof(GrounderQuadruped::Foot), 32 + sizeof(RootMotion::FinalIK::Grounding::Leg*)> __RootMotion_FinalIK_GrounderQuadruped_FootSizeCheck;
    static_assert(sizeof(GrounderQuadruped::Foot) == 0x28);
    // [TooltipAttribute] Offset: 0xE083AC
    // public RootMotion.FinalIK.Grounding forelegSolver
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::Grounding* forelegSolver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding*) == 0x8);
    // [TooltipAttribute] Offset: 0xE083E4
    // [RangeAttribute] Offset: 0xE083E4
    // public System.Single rootRotationWeight
    // Size: 0x4
    // Offset: 0x48
    float rootRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE08438
    // [RangeAttribute] Offset: 0xE08438
    // public System.Single minRootRotation
    // Size: 0x4
    // Offset: 0x4C
    float minRootRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE08490
    // [RangeAttribute] Offset: 0xE08490
    // public System.Single maxRootRotation
    // Size: 0x4
    // Offset: 0x50
    float maxRootRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE084E8
    // public System.Single rootRotationSpeed
    // Size: 0x4
    // Offset: 0x54
    float rootRotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE08520
    // public System.Single maxLegOffset
    // Size: 0x4
    // Offset: 0x58
    float maxLegOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE08558
    // public System.Single maxForeLegOffset
    // Size: 0x4
    // Offset: 0x5C
    float maxForeLegOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE08590
    // [RangeAttribute] Offset: 0xE08590
    // public System.Single maintainHeadRotationWeight
    // Size: 0x4
    // Offset: 0x60
    float maintainHeadRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maintainHeadRotationWeight and: characterRoot
    char __padding7[0x4] = {};
    // [TooltipAttribute] Offset: 0xE085E4
    // public UnityEngine.Transform characterRoot
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* characterRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0861C
    // public UnityEngine.Transform pelvis
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* pelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE08654
    // public UnityEngine.Transform lastSpineBone
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* lastSpineBone;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0868C
    // public UnityEngine.Transform head
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* head;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public RootMotion.FinalIK.IK[] legs
    // Size: 0x8
    // Offset: 0x88
    ::Array<RootMotion::FinalIK::IK*>* legs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IK*>*) == 0x8);
    // public RootMotion.FinalIK.IK[] forelegs
    // Size: 0x8
    // Offset: 0x90
    ::Array<RootMotion::FinalIK::IK*>* forelegs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IK*>*) == 0x8);
    // [HideInInspector] Offset: 0xE086C4
    // public UnityEngine.Vector3 gravity
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 gravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: gravity and: feet
    char __padding14[0x4] = {};
    // private RootMotion.FinalIK.GrounderQuadruped/Foot[] feet
    // Size: 0x8
    // Offset: 0xA8
    ::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>* feet;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>*) == 0x8);
    // private UnityEngine.Vector3 animatedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0xB0
    UnityEngine::Vector3 animatedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion animatedPelvisLocalRotation
    // Size: 0x10
    // Offset: 0xBC
    UnityEngine::Quaternion animatedPelvisLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion animatedHeadLocalRotation
    // Size: 0x10
    // Offset: 0xCC
    UnityEngine::Quaternion animatedHeadLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 solvedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0xDC
    UnityEngine::Vector3 solvedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion solvedPelvisLocalRotation
    // Size: 0x10
    // Offset: 0xE8
    UnityEngine::Quaternion solvedPelvisLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion solvedHeadLocalRotation
    // Size: 0x10
    // Offset: 0xF8
    UnityEngine::Quaternion solvedHeadLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Int32 solvedFeet
    // Size: 0x4
    // Offset: 0x108
    int solvedFeet;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean solved
    // Size: 0x1
    // Offset: 0x10C
    bool solved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: solved and: angle
    char __padding23[0x3] = {};
    // private System.Single angle
    // Size: 0x4
    // Offset: 0x110
    float angle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: angle and: forefeetRoot
    char __padding24[0x4] = {};
    // private UnityEngine.Transform forefeetRoot
    // Size: 0x8
    // Offset: 0x118
    UnityEngine::Transform* forefeetRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Quaternion headRotation
    // Size: 0x10
    // Offset: 0x120
    UnityEngine::Quaternion headRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single lastWeight
    // Size: 0x4
    // Offset: 0x130
    float lastWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastWeight and: characterRootRigidbody
    char __padding27[0x4] = {};
    // private UnityEngine.Rigidbody characterRootRigidbody
    // Size: 0x8
    // Offset: 0x138
    UnityEngine::Rigidbody* characterRootRigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // Creating value type constructor for type: GrounderQuadruped
    GrounderQuadruped(RootMotion::FinalIK::Grounding* forelegSolver_ = {}, float rootRotationWeight_ = {}, float minRootRotation_ = {}, float maxRootRotation_ = {}, float rootRotationSpeed_ = {}, float maxLegOffset_ = {}, float maxForeLegOffset_ = {}, float maintainHeadRotationWeight_ = {}, UnityEngine::Transform* characterRoot_ = {}, UnityEngine::Transform* pelvis_ = {}, UnityEngine::Transform* lastSpineBone_ = {}, UnityEngine::Transform* head_ = {}, ::Array<RootMotion::FinalIK::IK*>* legs_ = {}, ::Array<RootMotion::FinalIK::IK*>* forelegs_ = {}, UnityEngine::Vector3 gravity_ = {}, ::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>* feet_ = {}, UnityEngine::Vector3 animatedPelvisLocalPosition_ = {}, UnityEngine::Quaternion animatedPelvisLocalRotation_ = {}, UnityEngine::Quaternion animatedHeadLocalRotation_ = {}, UnityEngine::Vector3 solvedPelvisLocalPosition_ = {}, UnityEngine::Quaternion solvedPelvisLocalRotation_ = {}, UnityEngine::Quaternion solvedHeadLocalRotation_ = {}, int solvedFeet_ = {}, bool solved_ = {}, float angle_ = {}, UnityEngine::Transform* forefeetRoot_ = {}, UnityEngine::Quaternion headRotation_ = {}, float lastWeight_ = {}, UnityEngine::Rigidbody* characterRootRigidbody_ = {}) noexcept : forelegSolver{forelegSolver_}, rootRotationWeight{rootRotationWeight_}, minRootRotation{minRootRotation_}, maxRootRotation{maxRootRotation_}, rootRotationSpeed{rootRotationSpeed_}, maxLegOffset{maxLegOffset_}, maxForeLegOffset{maxForeLegOffset_}, maintainHeadRotationWeight{maintainHeadRotationWeight_}, characterRoot{characterRoot_}, pelvis{pelvis_}, lastSpineBone{lastSpineBone_}, head{head_}, legs{legs_}, forelegs{forelegs_}, gravity{gravity_}, feet{feet_}, animatedPelvisLocalPosition{animatedPelvisLocalPosition_}, animatedPelvisLocalRotation{animatedPelvisLocalRotation_}, animatedHeadLocalRotation{animatedHeadLocalRotation_}, solvedPelvisLocalPosition{solvedPelvisLocalPosition_}, solvedPelvisLocalRotation{solvedPelvisLocalRotation_}, solvedHeadLocalRotation{solvedHeadLocalRotation_}, solvedFeet{solvedFeet_}, solved{solved_}, angle{angle_}, forefeetRoot{forefeetRoot_}, headRotation{headRotation_}, lastWeight{lastWeight_}, characterRootRigidbody{characterRootRigidbody_} {}
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x1C5CE74
    bool IsReadyToInitiate();
    // private System.Boolean IsReadyToInitiateLegs(RootMotion.FinalIK.IK[] ikComponents)
    // Offset: 0x1C5CFA4
    bool IsReadyToInitiateLegs(::Array<RootMotion::FinalIK::IK*>* ikComponents);
    // private System.Void OnDisable()
    // Offset: 0x1C5D164
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x1C5D1CC
    void Update();
    // private System.Void Initiate()
    // Offset: 0x1C5D284
    void Initiate();
    // private UnityEngine.Transform[] InitiateFeet(RootMotion.FinalIK.IK[] ikComponents, ref RootMotion.FinalIK.GrounderQuadruped/Foot[] f, System.Int32 indexOffset)
    // Offset: 0x1C5D584
    ::Array<UnityEngine::Transform*>* InitiateFeet(::Array<RootMotion::FinalIK::IK*>* ikComponents, ::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>*& f, int indexOffset);
    // private System.Void LateUpdate()
    // Offset: 0x1C5D8E4
    void LateUpdate();
    // private System.Void RootRotation()
    // Offset: 0x1C5DA30
    void RootRotation();
    // private System.Void OnSolverUpdate()
    // Offset: 0x1C5DED4
    void OnSolverUpdate();
    // private System.Void UpdateForefeetRoot()
    // Offset: 0x1C5E6C4
    void UpdateForefeetRoot();
    // private System.Void SetFootIK(RootMotion.FinalIK.GrounderQuadruped/Foot foot, System.Single maxOffset)
    // Offset: 0x1C5E984
    void SetFootIK(RootMotion::FinalIK::GrounderQuadruped::Foot foot, float maxOffset);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x1C5EAE4
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1C5EDC0
    void OnDestroy();
    // private System.Void DestroyLegs(RootMotion.FinalIK.IK[] ikComponents)
    // Offset: 0x1C5EDF8
    void DestroyLegs(::Array<RootMotion::FinalIK::IK*>* ikComponents);
    // protected override System.Void OpenUserManual()
    // Offset: 0x1C5CDA8
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1C5CDF4
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x1C5CE40
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
    // public System.Void .ctor()
    // Offset: 0x1C5EFB8
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderQuadruped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderQuadruped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderQuadruped*, creationType>()));
    }
  }; // RootMotion.FinalIK.GrounderQuadruped
  #pragma pack(pop)
  static check_size<sizeof(GrounderQuadruped), 312 + sizeof(UnityEngine::Rigidbody*)> __RootMotion_FinalIK_GrounderQuadrupedSizeCheck;
  static_assert(sizeof(GrounderQuadruped) == 0x140);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderQuadruped*, "RootMotion.FinalIK", "GrounderQuadruped");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderQuadruped::Foot, "RootMotion.FinalIK", "GrounderQuadruped/Foot");
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiate
// Il2CppName: IsReadyToInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "IsReadyToInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiateLegs
// Il2CppName: IsReadyToInitiateLegs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::GrounderQuadruped::*)(::Array<RootMotion::FinalIK::IK*>*)>(&RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiateLegs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "IsReadyToInitiateLegs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<RootMotion::FinalIK::IK*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::Initiate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::InitiateFeet
// Il2CppName: InitiateFeet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Transform*>* (RootMotion::FinalIK::GrounderQuadruped::*)(::Array<RootMotion::FinalIK::IK*>*, ::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>*&, int)>(&RootMotion::FinalIK::GrounderQuadruped::InitiateFeet)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "InitiateFeet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<RootMotion::FinalIK::IK*>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<RootMotion::FinalIK::GrounderQuadruped::Foot>*&>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::RootRotation
// Il2CppName: RootRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::RootRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "RootRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OnSolverUpdate
// Il2CppName: OnSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OnSolverUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OnSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::UpdateForefeetRoot
// Il2CppName: UpdateForefeetRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::UpdateForefeetRoot)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "UpdateForefeetRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::SetFootIK
// Il2CppName: SetFootIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)(RootMotion::FinalIK::GrounderQuadruped::Foot, float)>(&RootMotion::FinalIK::GrounderQuadruped::SetFootIK)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "SetFootIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::FinalIK::GrounderQuadruped::Foot>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OnPostSolverUpdate
// Il2CppName: OnPostSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OnPostSolverUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OnPostSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::DestroyLegs
// Il2CppName: DestroyLegs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)(::Array<RootMotion::FinalIK::IK*>*)>(&RootMotion::FinalIK::GrounderQuadruped::DestroyLegs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "DestroyLegs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<RootMotion::FinalIK::IK*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OpenUserManual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::OpenScriptReference)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::ResetPosition
// Il2CppName: ResetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderQuadruped::*)()>(&RootMotion::FinalIK::GrounderQuadruped::ResetPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderQuadruped*), "ResetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderQuadruped::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
