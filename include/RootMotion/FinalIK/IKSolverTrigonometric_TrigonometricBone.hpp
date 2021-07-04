// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverTrigonometric
#include "RootMotion/FinalIK/IKSolverTrigonometric.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Bone
#include "RootMotion/FinalIK/IKSolver_Bone.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone
  class IKSolverTrigonometric::TrigonometricBone : public RootMotion::FinalIK::IKSolver::Bone {
    public:
    // Writing base type padding for base size: 0x71 to desired offset: 0x74
    char ___base_padding[0x3] = {};
    // private UnityEngine.Quaternion targetToLocalSpace
    // Size: 0x10
    // Offset: 0x74
    UnityEngine::Quaternion targetToLocalSpace;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 defaultLocalBendNormal
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 defaultLocalBendNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: TrigonometricBone
    TrigonometricBone(UnityEngine::Quaternion targetToLocalSpace_ = {}, UnityEngine::Vector3 defaultLocalBendNormal_ = {}) noexcept : targetToLocalSpace{targetToLocalSpace_}, defaultLocalBendNormal{defaultLocalBendNormal_} {}
    // public System.Void Initiate(UnityEngine.Vector3 childPosition, UnityEngine.Vector3 bendNormal)
    // Offset: 0x1C03C18
    void Initiate(UnityEngine::Vector3 childPosition, UnityEngine::Vector3 bendNormal);
    // public UnityEngine.Quaternion GetRotation(UnityEngine.Vector3 direction, UnityEngine.Vector3 bendNormal)
    // Offset: 0x1C047D0
    UnityEngine::Quaternion GetRotation(UnityEngine::Vector3 direction, UnityEngine::Vector3 bendNormal);
    // public UnityEngine.Vector3 GetBendNormalFromCurrentRotation()
    // Offset: 0x1BFE7CC
    UnityEngine::Vector3 GetBendNormalFromCurrentRotation();
    // public System.Void .ctor()
    // Offset: 0x1C04898
    // Implemented from: RootMotion.FinalIK.IKSolver/Bone
    // Base method: System.Void Bone::.ctor()
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverTrigonometric::TrigonometricBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverTrigonometric::TrigonometricBone*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone
  #pragma pack(pop)
  static check_size<sizeof(IKSolverTrigonometric::TrigonometricBone), 132 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverTrigonometric_TrigonometricBoneSizeCheck;
  static_assert(sizeof(IKSolverTrigonometric::TrigonometricBone) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*, "RootMotion.FinalIK", "IKSolverTrigonometric/TrigonometricBone");
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::Initiate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetBendNormalFromCurrentRotation
// Il2CppName: GetBendNormalFromCurrentRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetBendNormalFromCurrentRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*), "GetBendNormalFromCurrentRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
