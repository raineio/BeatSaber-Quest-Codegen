// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Avatar
  class Avatar;
  // Forward declaring type: AvatarIKGoal
  struct AvatarIKGoal;
  // Forward declaring type: HumanBodyBones
  struct HumanBodyBones;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: TQ
  class TQ;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.AvatarUtility
  class AvatarUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AvatarUtility
    AvatarUtility() noexcept {}
    // static public UnityEngine.Quaternion GetPostRotation(UnityEngine.Avatar avatar, UnityEngine.AvatarIKGoal avatarIKGoal)
    // Offset: 0x1CA22F8
    static UnityEngine::Quaternion GetPostRotation(UnityEngine::Avatar* avatar, UnityEngine::AvatarIKGoal avatarIKGoal);
    // static public RootMotion.TQ GetIKGoalTQ(UnityEngine.Avatar avatar, System.Single humanScale, UnityEngine.AvatarIKGoal avatarIKGoal, RootMotion.TQ bodyPositionRotation, RootMotion.TQ boneTQ)
    // Offset: 0x1CA250C
    static RootMotion::TQ* GetIKGoalTQ(UnityEngine::Avatar* avatar, float humanScale, UnityEngine::AvatarIKGoal avatarIKGoal, RootMotion::TQ* bodyPositionRotation, RootMotion::TQ* boneTQ);
    // static public UnityEngine.HumanBodyBones HumanIDFromAvatarIKGoal(UnityEngine.AvatarIKGoal avatarIKGoal)
    // Offset: 0x1CA24EC
    static UnityEngine::HumanBodyBones HumanIDFromAvatarIKGoal(UnityEngine::AvatarIKGoal avatarIKGoal);
    // public System.Void .ctor()
    // Offset: 0x1CA2B8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarUtility* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::AvatarUtility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarUtility*, creationType>()));
    }
  }; // RootMotion.AvatarUtility
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::AvatarUtility*, "RootMotion", "AvatarUtility");
// Writing MetadataGetter for method: RootMotion::AvatarUtility::GetPostRotation
// Il2CppName: GetPostRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Avatar*, UnityEngine::AvatarIKGoal)>(&RootMotion::AvatarUtility::GetPostRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AvatarUtility*), "GetPostRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Avatar*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AvatarIKGoal>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AvatarUtility::GetIKGoalTQ
// Il2CppName: GetIKGoalTQ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::TQ* (*)(UnityEngine::Avatar*, float, UnityEngine::AvatarIKGoal, RootMotion::TQ*, RootMotion::TQ*)>(&RootMotion::AvatarUtility::GetIKGoalTQ)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AvatarUtility*), "GetIKGoalTQ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Avatar*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AvatarIKGoal>(), ::il2cpp_utils::ExtractIndependentType<RootMotion::TQ*>(), ::il2cpp_utils::ExtractIndependentType<RootMotion::TQ*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AvatarUtility::HumanIDFromAvatarIKGoal
// Il2CppName: HumanIDFromAvatarIKGoal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::HumanBodyBones (*)(UnityEngine::AvatarIKGoal)>(&RootMotion::AvatarUtility::HumanIDFromAvatarIKGoal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AvatarUtility*), "HumanIDFromAvatarIKGoal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::AvatarIKGoal>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AvatarUtility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
