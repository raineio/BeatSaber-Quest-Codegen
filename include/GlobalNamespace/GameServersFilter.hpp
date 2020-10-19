// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameServersFilter
  class GameServersFilter : public ::Il2CppObject {
    public:
    // public System.Boolean filterByDifficulty
    // Offset: 0x10
    bool filterByDifficulty;
    // public BeatmapDifficultyMask filteredDifficulty
    // Offset: 0x11
    GlobalNamespace::BeatmapDifficultyMask filteredDifficulty;
    // public System.Boolean filterByModifiers
    // Offset: 0x12
    bool filterByModifiers;
    // public GameplayModifierMask filteredModifiers
    // Offset: 0x14
    GlobalNamespace::GameplayModifierMask filteredModifiers;
    // public System.Boolean filterBySongPacks
    // Offset: 0x16
    bool filterBySongPacks;
    // public SongPackMask filteredSongPacks
    // Offset: 0x18
    GlobalNamespace::SongPackMask filteredSongPacks;
    // public System.Boolean showFull
    // Offset: 0x28
    bool showFull;
    // public System.Boolean showProtected
    // Offset: 0x29
    bool showProtected;
    // public System.Boolean showInternetGames
    // Offset: 0x2A
    bool showInternetGames;
    // public System.Void .ctor()
    // Offset: 0x2004DCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GameServersFilter* New_ctor();
  }; // GameServersFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersFilter*, "", "GameServersFilter");
#pragma pack(pop)
