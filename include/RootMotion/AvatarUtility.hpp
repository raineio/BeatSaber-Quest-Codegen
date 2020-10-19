// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: RootMotion.AvatarUtility
  class AvatarUtility : public ::Il2CppObject {
    public:
    // static public UnityEngine.Quaternion GetPostRotation(UnityEngine.Avatar avatar, UnityEngine.AvatarIKGoal avatarIKGoal)
    // Offset: 0x185FC90
    static UnityEngine::Quaternion GetPostRotation(UnityEngine::Avatar* avatar, UnityEngine::AvatarIKGoal avatarIKGoal);
    // static public RootMotion.TQ GetIKGoalTQ(UnityEngine.Avatar avatar, System.Single humanScale, UnityEngine.AvatarIKGoal avatarIKGoal, RootMotion.TQ bodyPositionRotation, RootMotion.TQ boneTQ)
    // Offset: 0x185FEB0
    static RootMotion::TQ* GetIKGoalTQ(UnityEngine::Avatar* avatar, float humanScale, UnityEngine::AvatarIKGoal avatarIKGoal, RootMotion::TQ* bodyPositionRotation, RootMotion::TQ* boneTQ);
    // static public UnityEngine.HumanBodyBones HumanIDFromAvatarIKGoal(UnityEngine.AvatarIKGoal avatarIKGoal)
    // Offset: 0x185FE90
    static UnityEngine::HumanBodyBones HumanIDFromAvatarIKGoal(UnityEngine::AvatarIKGoal avatarIKGoal);
    // public System.Void .ctor()
    // Offset: 0x1860548
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AvatarUtility* New_ctor();
  }; // RootMotion.AvatarUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::AvatarUtility*, "RootMotion", "AvatarUtility");
#pragma pack(pop)
