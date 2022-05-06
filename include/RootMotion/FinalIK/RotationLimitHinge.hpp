// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RotationLimitHinge
  class RotationLimitHinge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitHinge);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitHinge*, "RootMotion.FinalIK", "RotationLimitHinge");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimitHinge
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 10F7280
  // [AddComponentMenu] Offset: 10F7280
  class RotationLimitHinge : public ::RootMotion::FinalIK::RotationLimit {
    public:
    public:
    // public System.Boolean useLimits
    // Size: 0x1
    // Offset: 0x38
    bool useLimits;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useLimits and: min
    char __padding0[0x3] = {};
    // public System.Single min
    // Size: 0x4
    // Offset: 0x3C
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single max
    // Size: 0x4
    // Offset: 0x40
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single zeroAxisDisplayOffset
    // Size: 0x4
    // Offset: 0x44
    float zeroAxisDisplayOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion lastRotation
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Quaternion lastRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Single lastAngle
    // Size: 0x4
    // Offset: 0x58
    float lastAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean useLimits
    [[deprecated("Use field access instead!")]] bool& dyn_useLimits();
    // Get instance field reference: public System.Single min
    [[deprecated("Use field access instead!")]] float& dyn_min();
    // Get instance field reference: public System.Single max
    [[deprecated("Use field access instead!")]] float& dyn_max();
    // Get instance field reference: public System.Single zeroAxisDisplayOffset
    [[deprecated("Use field access instead!")]] float& dyn_zeroAxisDisplayOffset();
    // Get instance field reference: private UnityEngine.Quaternion lastRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_lastRotation();
    // Get instance field reference: private System.Single lastAngle
    [[deprecated("Use field access instead!")]] float& dyn_lastAngle();
    // private System.Void OpenUserManual()
    // Offset: 0x1FC1A90
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1FC1ADC
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1FC1B28
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1FC1B74
    void ASThread();
    // private UnityEngine.Quaternion LimitHinge(UnityEngine.Quaternion rotation)
    // Offset: 0x1FC1BE8
    ::UnityEngine::Quaternion LimitHinge(::UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x1FC1EE8
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: System.Void RotationLimit::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimitHinge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::RotationLimitHinge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimitHinge*, creationType>()));
    }
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1FC1BC0
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);
  }; // RootMotion.FinalIK.RotationLimitHinge
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitHinge), 88 + sizeof(float)> __RootMotion_FinalIK_RotationLimitHingeSizeCheck;
  static_assert(sizeof(RotationLimitHinge) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitHinge::*)()>(&RootMotion::FinalIK::RotationLimitHinge::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitHinge::*)()>(&RootMotion::FinalIK::RotationLimitHinge::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitHinge::*)()>(&RootMotion::FinalIK::RotationLimitHinge::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitHinge::*)()>(&RootMotion::FinalIK::RotationLimitHinge::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::LimitHinge
// Il2CppName: LimitHinge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitHinge::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitHinge::LimitHinge)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "LimitHinge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitHinge::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitHinge::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitHinge::LimitRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitHinge*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
