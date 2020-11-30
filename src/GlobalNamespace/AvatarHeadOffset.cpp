// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AvatarHeadOffset
#include "GlobalNamespace/AvatarHeadOffset.hpp"
// Including type: AvatarPoseController
#include "GlobalNamespace/AvatarPoseController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AvatarHeadOffset.Start
void GlobalNamespace::AvatarHeadOffset::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("AvatarHeadOffset").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: AvatarHeadOffset.OnDestroy
void GlobalNamespace::AvatarHeadOffset::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("AvatarHeadOffset").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: AvatarHeadOffset.HandleMultiplayerAvatarPoseControllerDidUpdatePose
void GlobalNamespace::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose(UnityEngine::Vector3 headLocalPosition) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("AvatarHeadOffset").WithContext("HandleMultiplayerAvatarPoseControllerDidUpdatePose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleMultiplayerAvatarPoseControllerDidUpdatePose", {}, ::il2cpp_utils::ExtractTypes(headLocalPosition)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, headLocalPosition);
}
// Autogenerated method: AvatarHeadOffset..ctor
GlobalNamespace::AvatarHeadOffset* GlobalNamespace::AvatarHeadOffset::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("AvatarHeadOffset").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<AvatarHeadOffset*>());
}