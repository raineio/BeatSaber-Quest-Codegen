// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerConnectedPlayerSongTimeSyncController
#include "GlobalNamespace/MultiplayerConnectedPlayerSongTimeSyncController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerSongTimeSyncController/InitData
  class MultiplayerConnectedPlayerSongTimeSyncController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single startSongTime
    // Offset: 0x10
    float startSongTime;
    // public readonly System.Single songTimeOffset
    // Offset: 0x14
    float songTimeOffset;
    // public readonly System.Single timeScale
    // Offset: 0x18
    float timeScale;
    // public System.Void .ctor(System.Single startSongTime, System.Single songTimeOffset, System.Single timeScale)
    // Offset: 0x20619D4
    static MultiplayerConnectedPlayerSongTimeSyncController::InitData* New_ctor(float startSongTime, float songTimeOffset, float timeScale);
  }; // MultiplayerConnectedPlayerSongTimeSyncController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData*, "", "MultiplayerConnectedPlayerSongTimeSyncController/InitData");
#pragma pack(pop)
