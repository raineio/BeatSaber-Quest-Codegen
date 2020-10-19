// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private SceneInfo _multiplayerLevelSceneInfo
    // Offset: 0x28
    GlobalNamespace::SceneInfo* multiplayerLevelSceneInfo;
    // private SceneInfo _gameCoreSceneInfo
    // Offset: 0x30
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // private EnvironmentInfoSO _multiplayerEnvironmentInfo
    // Offset: 0x38
    GlobalNamespace::EnvironmentInfoSO* multiplayerEnvironmentInfo;
    // private System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> didFinishEvent
    // Offset: 0x40
    System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* didFinishEvent;
    // private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> didDisconnectEvent
    // Offset: 0x48
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* didDisconnectEvent;
    // private System.String <gameMode>k__BackingField
    // Offset: 0x50
    ::Il2CppString* gameMode;
    // private IPreviewBeatmapLevel <previewBeatmapLevel>k__BackingField
    // Offset: 0x58
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // private BeatmapDifficulty <beatmapDifficulty>k__BackingField
    // Offset: 0x60
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    // Offset: 0x68
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    // Offset: 0x70
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // public System.Void add_didFinishEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    // Offset: 0x2040DFC
    void add_didFinishEvent(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* value);
    // public System.Void remove_didFinishEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    // Offset: 0x2040F30
    void remove_didFinishEvent(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* value);
    // public System.Void add_didDisconnectEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> value)
    // Offset: 0x2042F58
    void add_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_didDisconnectEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> value)
    // Offset: 0x2042FFC
    void remove_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* value);
    // public System.String get_gameMode()
    // Offset: 0x20430A0
    ::Il2CppString* get_gameMode();
    // private System.Void set_gameMode(System.String value)
    // Offset: 0x20430A8
    void set_gameMode(::Il2CppString* value);
    // public IPreviewBeatmapLevel get_previewBeatmapLevel()
    // Offset: 0x20430B0
    GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();
    // private System.Void set_previewBeatmapLevel(IPreviewBeatmapLevel value)
    // Offset: 0x20430B8
    void set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel* value);
    // public BeatmapDifficulty get_beatmapDifficulty()
    // Offset: 0x20430C0
    GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();
    // private System.Void set_beatmapDifficulty(BeatmapDifficulty value)
    // Offset: 0x20430C8
    void set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0x20430D0
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // private System.Void set_difficultyBeatmap(IDifficultyBeatmap value)
    // Offset: 0x20430D8
    void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x20430E0
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // private System.Void set_beatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0x20430E8
    void set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // public System.Void Init(System.String gameMode, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.Boolean useTestNoteCutSoundEffects)
    // Offset: 0x2042B58
    void Init(::Il2CppString* gameMode, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects);
    // public System.Void Finish(LevelCompletionResults levelCompletionResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> otherPlayersLevelCompletionResults)
    // Offset: 0x20430F0
    void Finish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayersLevelCompletionResults);
    // public System.Void FinishWithDisconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x2043170
    void FinishWithDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public System.Void .ctor()
    // Offset: 0x20431E8
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLevelScenesTransitionSetupDataSO* New_ctor();
  }; // MultiplayerLevelScenesTransitionSetupDataSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, "", "MultiplayerLevelScenesTransitionSetupDataSO");
#pragma pack(pop)
