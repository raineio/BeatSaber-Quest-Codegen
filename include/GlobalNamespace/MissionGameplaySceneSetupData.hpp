// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionGameplaySceneSetupData
  class MissionGameplaySceneSetupData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionGameplaySceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionGameplaySceneSetupData*, "", "MissionGameplaySceneSetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MissionGameplaySceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionGameplaySceneSetupData : public ::GlobalNamespace::SceneSetupData {
    public:
    public:
    // public readonly MissionObjective[] missionObjectives
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MissionObjective*>) == 0x8);
    // public readonly System.Boolean autoRestart
    // Size: 0x1
    // Offset: 0x18
    bool autoRestart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoRestart and: previewBeatmapLevel
    char __padding1[0x7] = {};
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: beatmapCharacteristic
    char __padding3[0x4] = {};
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    // public readonly System.String backButtonText
    // Size: 0x8
    // Offset: 0x40
    ::StringW backButtonText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly MissionObjective[] missionObjectives
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MissionObjective*>& dyn_missionObjectives();
    // Get instance field reference: public readonly System.Boolean autoRestart
    [[deprecated("Use field access instead!")]] bool& dyn_autoRestart();
    // Get instance field reference: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // Get instance field reference: public readonly BeatmapDifficulty beatmapDifficulty
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_beatmapDifficulty();
    // Get instance field reference: public readonly BeatmapCharacteristicSO beatmapCharacteristic
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicSO*& dyn_beatmapCharacteristic();
    // Get instance field reference: public readonly GameplayModifiers gameplayModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiers*& dyn_gameplayModifiers();
    // Get instance field reference: public readonly System.String backButtonText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_backButtonText();
    // public System.Void .ctor(MissionObjective[] missionObjectives, System.Boolean autoRestart, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, GameplayModifiers gameplayModifiers, System.String backButtonText)
    // Offset: 0x1301824
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionGameplaySceneSetupData* New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives, bool autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::StringW backButtonText) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionGameplaySceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionGameplaySceneSetupData*, creationType>(missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, backButtonText)));
    }
  }; // MissionGameplaySceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(MissionGameplaySceneSetupData), 64 + sizeof(::StringW)> __GlobalNamespace_MissionGameplaySceneSetupDataSizeCheck;
  static_assert(sizeof(MissionGameplaySceneSetupData) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionGameplaySceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
