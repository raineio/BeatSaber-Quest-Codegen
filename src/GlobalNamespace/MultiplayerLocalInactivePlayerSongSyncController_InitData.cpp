// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MultiplayerLocalInactivePlayerSongSyncController/InitData
#include "GlobalNamespace/MultiplayerLocalInactivePlayerSongSyncController_InitData.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerLocalInactivePlayerSongSyncController/InitData..ctor
GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData::New_ctor(UnityEngine::AudioClip* audioClip, float startSongTime, float songTimeOffset, float timeScale) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("InitData").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerLocalInactivePlayerSongSyncController::InitData*>(audioClip, startSongTime, songTimeOffset, timeScale));
}