// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.BipedNaming
#include "RootMotion/BipedNaming.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::BipedReferences);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedReferences*, "RootMotion", "BipedReferences");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BipedReferences
  // [TokenAttribute] Offset: FFFFFFFF
  class BipedReferences : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::BipedReferences::AutoDetectParams
    struct AutoDetectParams;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Transform root
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* root;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform pelvis
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* pelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftThigh
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* leftThigh;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftCalf
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* leftCalf;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftFoot
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* leftFoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightThigh
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* rightThigh;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightCalf
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* rightCalf;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightFoot
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* rightFoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftUpperArm
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* leftUpperArm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftForearm
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* leftForearm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftHand
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* leftHand;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightUpperArm
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::Transform* rightUpperArm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightForearm
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Transform* rightForearm;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform rightHand
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* rightHand;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform head
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::Transform* head;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform[] spine
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<UnityEngine::Transform*> spine;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Transform*>) == 0x8);
    // public UnityEngine.Transform[] eyes
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<UnityEngine::Transform*> eyes;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Transform*>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform root
    UnityEngine::Transform*& dyn_root();
    // Get instance field reference: public UnityEngine.Transform pelvis
    UnityEngine::Transform*& dyn_pelvis();
    // Get instance field reference: public UnityEngine.Transform leftThigh
    UnityEngine::Transform*& dyn_leftThigh();
    // Get instance field reference: public UnityEngine.Transform leftCalf
    UnityEngine::Transform*& dyn_leftCalf();
    // Get instance field reference: public UnityEngine.Transform leftFoot
    UnityEngine::Transform*& dyn_leftFoot();
    // Get instance field reference: public UnityEngine.Transform rightThigh
    UnityEngine::Transform*& dyn_rightThigh();
    // Get instance field reference: public UnityEngine.Transform rightCalf
    UnityEngine::Transform*& dyn_rightCalf();
    // Get instance field reference: public UnityEngine.Transform rightFoot
    UnityEngine::Transform*& dyn_rightFoot();
    // Get instance field reference: public UnityEngine.Transform leftUpperArm
    UnityEngine::Transform*& dyn_leftUpperArm();
    // Get instance field reference: public UnityEngine.Transform leftForearm
    UnityEngine::Transform*& dyn_leftForearm();
    // Get instance field reference: public UnityEngine.Transform leftHand
    UnityEngine::Transform*& dyn_leftHand();
    // Get instance field reference: public UnityEngine.Transform rightUpperArm
    UnityEngine::Transform*& dyn_rightUpperArm();
    // Get instance field reference: public UnityEngine.Transform rightForearm
    UnityEngine::Transform*& dyn_rightForearm();
    // Get instance field reference: public UnityEngine.Transform rightHand
    UnityEngine::Transform*& dyn_rightHand();
    // Get instance field reference: public UnityEngine.Transform head
    UnityEngine::Transform*& dyn_head();
    // Get instance field reference: public UnityEngine.Transform[] spine
    ::ArrayW<UnityEngine::Transform*>& dyn_spine();
    // Get instance field reference: public UnityEngine.Transform[] eyes
    ::ArrayW<UnityEngine::Transform*>& dyn_eyes();
    // public System.Boolean get_isFilled()
    // Offset: 0x1EA6010
    bool get_isFilled();
    // public System.Boolean get_isEmpty()
    // Offset: 0x1EA63FC
    bool get_isEmpty();
    // public System.Boolean IsEmpty(System.Boolean includeRoot)
    // Offset: 0x1EA640C
    bool IsEmpty(bool includeRoot);
    // public System.Boolean Contains(UnityEngine.Transform t, System.Boolean ignoreRoot)
    // Offset: 0x1EA6838
    bool Contains(UnityEngine::Transform* t, bool ignoreRoot);
    // static public System.Boolean AutoDetectReferences(ref RootMotion.BipedReferences references, UnityEngine.Transform root, RootMotion.BipedReferences/RootMotion.AutoDetectParams autoDetectParams)
    // Offset: 0x1EA6C70
    static bool AutoDetectReferences(ByRef<RootMotion::BipedReferences*> references, UnityEngine::Transform* root, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static public System.Void DetectReferencesByNaming(ref RootMotion.BipedReferences references, UnityEngine.Transform root, RootMotion.BipedReferences/RootMotion.AutoDetectParams autoDetectParams)
    // Offset: 0x1EA7280
    static void DetectReferencesByNaming(ByRef<RootMotion::BipedReferences*> references, UnityEngine::Transform* root, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static public System.Void AssignHumanoidReferences(ref RootMotion.BipedReferences references, UnityEngine.Animator animator, RootMotion.BipedReferences/RootMotion.AutoDetectParams autoDetectParams)
    // Offset: 0x1EA6EBC
    static void AssignHumanoidReferences(ByRef<RootMotion::BipedReferences*> references, UnityEngine::Animator* animator, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static public System.Boolean SetupError(RootMotion.BipedReferences references, ref System.String errorMessage)
    // Offset: 0x1EA7A30
    static bool SetupError(RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);
    // static public System.Boolean SetupWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1EA7B24
    static bool SetupWarning(RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);
    // static private System.Boolean IsNeckBone(UnityEngine.Transform bone, UnityEngine.Transform leftUpperArm)
    // Offset: 0x1EA807C
    static bool IsNeckBone(UnityEngine::Transform* bone, UnityEngine::Transform* leftUpperArm);
    // static private System.Boolean AddBoneToEyes(UnityEngine.Transform bone, ref RootMotion.BipedReferences references, RootMotion.BipedReferences/RootMotion.AutoDetectParams autoDetectParams)
    // Offset: 0x1EA7E80
    static bool AddBoneToEyes(UnityEngine::Transform* bone, ByRef<RootMotion::BipedReferences*> references, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static private System.Boolean AddBoneToSpine(UnityEngine.Transform bone, ref RootMotion.BipedReferences references, RootMotion.BipedReferences/RootMotion.AutoDetectParams autoDetectParams)
    // Offset: 0x1EA7CF8
    static bool AddBoneToSpine(UnityEngine::Transform* bone, ByRef<RootMotion::BipedReferences*> references, RootMotion::BipedReferences::AutoDetectParams autoDetectParams);
    // static private System.Void DetectLimb(RootMotion.BipedNaming/RootMotion.BoneType boneType, RootMotion.BipedNaming/RootMotion.BoneSide boneSide, ref UnityEngine.Transform firstBone, ref UnityEngine.Transform secondBone, ref UnityEngine.Transform lastBone, UnityEngine.Transform[] transforms)
    // Offset: 0x1EA7BC4
    static void DetectLimb(RootMotion::BipedNaming::BoneType boneType, RootMotion::BipedNaming::BoneSide boneSide, ByRef<UnityEngine::Transform*> firstBone, ByRef<UnityEngine::Transform*> secondBone, ByRef<UnityEngine::Transform*> lastBone, ::ArrayW<UnityEngine::Transform*> transforms);
    // static private System.Void AddBoneToHierarchy(ref UnityEngine.Transform[] bones, UnityEngine.Transform transform)
    // Offset: 0x1EA7F84
    static void AddBoneToHierarchy(ByRef<::ArrayW<UnityEngine::Transform*>> bones, UnityEngine::Transform* transform);
    // static private System.Boolean LimbError(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, ref System.String errorMessage)
    // Offset: 0x1EA8178
    static bool LimbError(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, ByRef<::StringW> errorMessage);
    // static private System.Boolean LimbWarning(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3, ref System.String warningMessage)
    // Offset: 0x1EA8C18
    static bool LimbWarning(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, ByRef<::StringW> warningMessage);
    // static private System.Boolean SpineError(RootMotion.BipedReferences references, ref System.String errorMessage)
    // Offset: 0x1EA86FC
    static bool SpineError(RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);
    // static private System.Boolean SpineWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1EA8F0C
    static bool SpineWarning(RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);
    // static private System.Boolean EyesError(RootMotion.BipedReferences references, ref System.String errorMessage)
    // Offset: 0x1EA8A3C
    static bool EyesError(RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);
    // static private System.Boolean EyesWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1EA8F14
    static bool EyesWarning(RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);
    // static private System.Boolean RootHeightWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1EA8F1C
    static bool RootHeightWarning(RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);
    // static private System.Boolean FacingAxisWarning(RootMotion.BipedReferences references, ref System.String warningMessage)
    // Offset: 0x1EA90DC
    static bool FacingAxisWarning(RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);
    // static private System.Single GetVerticalOffset(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2, UnityEngine.Quaternion rotation)
    // Offset: 0x1EA92F4
    static float GetVerticalOffset(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x1EA6E4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BipedReferences* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::BipedReferences::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BipedReferences*, creationType>()));
    }
  }; // RootMotion.BipedReferences
  #pragma pack(pop)
  static check_size<sizeof(BipedReferences), 144 + sizeof(::ArrayW<UnityEngine::Transform*>)> __RootMotion_BipedReferencesSizeCheck;
  static_assert(sizeof(BipedReferences) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BipedReferences::get_isFilled
// Il2CppName: get_isFilled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::BipedReferences::*)()>(&RootMotion::BipedReferences::get_isFilled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "get_isFilled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::get_isEmpty
// Il2CppName: get_isEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::BipedReferences::*)()>(&RootMotion::BipedReferences::get_isEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "get_isEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::BipedReferences::*)(bool)>(&RootMotion::BipedReferences::IsEmpty)> {
  static const MethodInfo* get() {
    static auto* includeRoot = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includeRoot});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::BipedReferences::*)(UnityEngine::Transform*, bool)>(&RootMotion::BipedReferences::Contains)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* ignoreRoot = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, ignoreRoot});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::AutoDetectReferences
// Il2CppName: AutoDetectReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<RootMotion::BipedReferences*>, UnityEngine::Transform*, RootMotion::BipedReferences::AutoDetectParams)>(&RootMotion::BipedReferences::AutoDetectReferences)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->this_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* autoDetectParams = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences/AutoDetectParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "AutoDetectReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, root, autoDetectParams});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::DetectReferencesByNaming
// Il2CppName: DetectReferencesByNaming
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<RootMotion::BipedReferences*>, UnityEngine::Transform*, RootMotion::BipedReferences::AutoDetectParams)>(&RootMotion::BipedReferences::DetectReferencesByNaming)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->this_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* autoDetectParams = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences/AutoDetectParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "DetectReferencesByNaming", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, root, autoDetectParams});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::AssignHumanoidReferences
// Il2CppName: AssignHumanoidReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<RootMotion::BipedReferences*>, UnityEngine::Animator*, RootMotion::BipedReferences::AutoDetectParams)>(&RootMotion::BipedReferences::AssignHumanoidReferences)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->this_arg;
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* autoDetectParams = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences/AutoDetectParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "AssignHumanoidReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, animator, autoDetectParams});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::SetupError
// Il2CppName: SetupError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences*, ByRef<::StringW>)>(&RootMotion::BipedReferences::SetupError)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "SetupError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, errorMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::SetupWarning
// Il2CppName: SetupWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences*, ByRef<::StringW>)>(&RootMotion::BipedReferences::SetupWarning)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* warningMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "SetupWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, warningMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::IsNeckBone
// Il2CppName: IsNeckBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::BipedReferences::IsNeckBone)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leftUpperArm = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "IsNeckBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone, leftUpperArm});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::AddBoneToEyes
// Il2CppName: AddBoneToEyes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, ByRef<RootMotion::BipedReferences*>, RootMotion::BipedReferences::AutoDetectParams)>(&RootMotion::BipedReferences::AddBoneToEyes)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->this_arg;
    static auto* autoDetectParams = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences/AutoDetectParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "AddBoneToEyes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone, references, autoDetectParams});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::AddBoneToSpine
// Il2CppName: AddBoneToSpine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, ByRef<RootMotion::BipedReferences*>, RootMotion::BipedReferences::AutoDetectParams)>(&RootMotion::BipedReferences::AddBoneToSpine)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->this_arg;
    static auto* autoDetectParams = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences/AutoDetectParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "AddBoneToSpine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone, references, autoDetectParams});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::DetectLimb
// Il2CppName: DetectLimb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(RootMotion::BipedNaming::BoneType, RootMotion::BipedNaming::BoneSide, ByRef<UnityEngine::Transform*>, ByRef<UnityEngine::Transform*>, ByRef<UnityEngine::Transform*>, ::ArrayW<UnityEngine::Transform*>)>(&RootMotion::BipedReferences::DetectLimb)> {
  static const MethodInfo* get() {
    static auto* boneType = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedNaming/BoneType")->byval_arg;
    static auto* boneSide = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedNaming/BoneSide")->byval_arg;
    static auto* firstBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->this_arg;
    static auto* secondBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->this_arg;
    static auto* lastBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->this_arg;
    static auto* transforms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "DetectLimb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boneType, boneSide, firstBone, secondBone, lastBone, transforms});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::AddBoneToHierarchy
// Il2CppName: AddBoneToHierarchy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<UnityEngine::Transform*>>, UnityEngine::Transform*)>(&RootMotion::BipedReferences::AddBoneToHierarchy)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->this_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "AddBoneToHierarchy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, transform});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::LimbError
// Il2CppName: LimbError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, ByRef<::StringW>)>(&RootMotion::BipedReferences::LimbError)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "LimbError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2, bone3, errorMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::LimbWarning
// Il2CppName: LimbWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, ByRef<::StringW>)>(&RootMotion::BipedReferences::LimbWarning)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* warningMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "LimbWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2, bone3, warningMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::SpineError
// Il2CppName: SpineError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences*, ByRef<::StringW>)>(&RootMotion::BipedReferences::SpineError)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "SpineError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, errorMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::SpineWarning
// Il2CppName: SpineWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences*, ByRef<::StringW>)>(&RootMotion::BipedReferences::SpineWarning)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* warningMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "SpineWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, warningMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::EyesError
// Il2CppName: EyesError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences*, ByRef<::StringW>)>(&RootMotion::BipedReferences::EyesError)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "EyesError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, errorMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::EyesWarning
// Il2CppName: EyesWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences*, ByRef<::StringW>)>(&RootMotion::BipedReferences::EyesWarning)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* warningMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "EyesWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, warningMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::RootHeightWarning
// Il2CppName: RootHeightWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences*, ByRef<::StringW>)>(&RootMotion::BipedReferences::RootHeightWarning)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* warningMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "RootHeightWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, warningMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::FacingAxisWarning
// Il2CppName: FacingAxisWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences*, ByRef<::StringW>)>(&RootMotion::BipedReferences::FacingAxisWarning)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* warningMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "FacingAxisWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, warningMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::GetVerticalOffset
// Il2CppName: GetVerticalOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::BipedReferences::GetVerticalOffset)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BipedReferences*), "GetVerticalOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::BipedReferences::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
