// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuDestination
#include "GlobalNamespace/MenuDestination.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SelectLevelDestination
  class SelectLevelDestination : public GlobalNamespace::MenuDestination {
    public:
    // public readonly IBeatmapLevelPack beatmapLevelPack
    // Offset: 0x10
    GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Offset: 0x18
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // public System.Void .ctor(IBeatmapLevelPack beatmapLevelPack, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1FE9F0C
    static SelectLevelDestination* New_ctor(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
  }; // SelectLevelDestination
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelDestination*, "", "SelectLevelDestination");
#pragma pack(pop)
