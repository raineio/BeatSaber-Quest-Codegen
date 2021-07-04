// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RagdollUtility
#include "RootMotion/FinalIK/RagdollUtility.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RagdollUtility/Child
  class RagdollUtility::Child : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform t
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* t;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 localPosition
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 localPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion localRotation
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Quaternion localRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: Child
    Child(UnityEngine::Transform* t_ = {}, UnityEngine::Vector3 localPosition_ = {}, UnityEngine::Quaternion localRotation_ = {}) noexcept : t{t_}, localPosition{localPosition_}, localRotation{localRotation_} {}
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1AA2EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RagdollUtility::Child* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::RagdollUtility::Child::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RagdollUtility::Child*, creationType>(transform)));
    }
    // public System.Void FixTransform(System.Single weight)
    // Offset: 0x1AA3B38
    void FixTransform(float weight);
    // public System.Void StoreLocalState()
    // Offset: 0x1AA3AE8
    void StoreLocalState();
  }; // RootMotion.FinalIK.RagdollUtility/Child
  #pragma pack(pop)
  static check_size<sizeof(RagdollUtility::Child), 36 + sizeof(UnityEngine::Quaternion)> __RootMotion_FinalIK_RagdollUtility_ChildSizeCheck;
  static_assert(sizeof(RagdollUtility::Child) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RagdollUtility::Child*, "RootMotion.FinalIK", "RagdollUtility/Child");
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Child::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Child::FixTransform
// Il2CppName: FixTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::Child::*)(float)>(&RootMotion::FinalIK::RagdollUtility::Child::FixTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility::Child*), "FixTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Child::StoreLocalState
// Il2CppName: StoreLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::Child::*)()>(&RootMotion::FinalIK::RagdollUtility::Child::StoreLocalState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility::Child*), "StoreLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
