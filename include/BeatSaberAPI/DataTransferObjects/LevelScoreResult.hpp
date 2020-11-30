// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
}
// Completed forward declares
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.LevelScoreResult
  class LevelScoreResult : public ::Il2CppObject {
    public:
    // Nested type: BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers
    struct GameplayModifiers;
    // public System.String leaderboardId
    // Offset: 0x10
    ::Il2CppString* leaderboardId;
    // public System.Int32 rawScore
    // Offset: 0x18
    int rawScore;
    // public System.Int32 modifiedScore
    // Offset: 0x1C
    int modifiedScore;
    // public System.Boolean fullCombo
    // Offset: 0x20
    bool fullCombo;
    // public System.Int32 goodCutsCount
    // Offset: 0x24
    int goodCutsCount;
    // public System.Int32 badCutsCount
    // Offset: 0x28
    int badCutsCount;
    // public System.Int32 missedCount
    // Offset: 0x2C
    int missedCount;
    // public System.Int32 maxCombo
    // Offset: 0x30
    int maxCombo;
    // public BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers[] gameplayModifiers
    // Offset: 0x38
    ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiers;
    // public System.String deviceModel
    // Offset: 0x40
    ::Il2CppString* deviceModel;
    // public System.String extraDataBase64
    // Offset: 0x48
    ::Il2CppString* extraDataBase64;
    // public System.Void .ctor()
    // Offset: 0x1A78D90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LevelScoreResult* New_ctor();
  }; // BeatSaberAPI.DataTransferObjects.LevelScoreResult
  check_size<sizeof(LevelScoreResult), 72 + sizeof(void*) + 8 - (72 + sizeof(void*)) % 8> __BeatSaberAPI_DataTransferObjects_LevelScoreResultSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LevelScoreResult*, "BeatSaberAPI.DataTransferObjects", "LevelScoreResult");
#pragma pack(pop)