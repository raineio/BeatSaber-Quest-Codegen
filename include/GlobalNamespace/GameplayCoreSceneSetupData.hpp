// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: BeatmapDataCache
  class BeatmapDataCache;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayCoreSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreSceneSetupData*, "", "GameplayCoreSceneSetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: GameplayCoreSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  // [ZenjectAllowDuringValidationAttribute] Offset: FFFFFFFF
  class GameplayCoreSceneSetupData : public ::GlobalNamespace::SceneSetupData {
    public:
    // Nested type: ::GlobalNamespace::GameplayCoreSceneSetupData::$LoadTransformedBeatmapDataAsync$d__14
    struct $LoadTransformedBeatmapDataAsync$d__14;
    // Nested type: ::GlobalNamespace::GameplayCoreSceneSetupData::$GetTransformedBeatmapDataAsync$d__15
    struct $GetTransformedBeatmapDataAsync$d__15;
    public:
    // public readonly IDifficultyBeatmap difficultyBeatmap
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    // public readonly PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // public readonly PracticeSettings practiceSettings
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PracticeSettings*) == 0x8);
    // public readonly System.Boolean useTestNoteCutSoundEffects
    // Size: 0x1
    // Offset: 0x38
    bool useTestNoteCutSoundEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTestNoteCutSoundEffects and: environmentInfo
    char __padding5[0x7] = {};
    // public readonly EnvironmentInfoSO environmentInfo
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // public readonly ColorScheme colorScheme
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorScheme*) == 0x8);
    // public readonly MainSettingsModelSO mainSettingsModel
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // public readonly BeatmapDataCache beatmapDataCache
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::BeatmapDataCache* beatmapDataCache;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCache*) == 0x8);
    // private IReadonlyBeatmapData _transformedBeatmapData
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    public:
    // Get instance field reference: public readonly IDifficultyBeatmap difficultyBeatmap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDifficultyBeatmap*& dyn_difficultyBeatmap();
    // Get instance field reference: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // Get instance field reference: public readonly GameplayModifiers gameplayModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiers*& dyn_gameplayModifiers();
    // Get instance field reference: public readonly PlayerSpecificSettings playerSpecificSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // Get instance field reference: public readonly PracticeSettings practiceSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PracticeSettings*& dyn_practiceSettings();
    // Get instance field reference: public readonly System.Boolean useTestNoteCutSoundEffects
    [[deprecated("Use field access instead!")]] bool& dyn_useTestNoteCutSoundEffects();
    // Get instance field reference: public readonly EnvironmentInfoSO environmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn_environmentInfo();
    // Get instance field reference: public readonly ColorScheme colorScheme
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorScheme*& dyn_colorScheme();
    // Get instance field reference: public readonly MainSettingsModelSO mainSettingsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainSettingsModelSO*& dyn_mainSettingsModel();
    // Get instance field reference: public readonly BeatmapDataCache beatmapDataCache
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCache*& dyn_beatmapDataCache();
    // Get instance field reference: private IReadonlyBeatmapData _transformedBeatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReadonlyBeatmapData*& dyn__transformedBeatmapData();
    // public IReadonlyBeatmapData get_transformedBeatmapData()
    // Offset: 0x145EA2C
    ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData();
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap, IPreviewBeatmapLevel previewBeatmapLevel, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.Boolean useTestNoteCutSoundEffects, EnvironmentInfoSO environmentInfo, ColorScheme colorScheme, MainSettingsModelSO mainSettingsModel, BeatmapDataCache beatmapDataCache)
    // Offset: 0x145EA34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayCoreSceneSetupData* New_ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel, ::GlobalNamespace::BeatmapDataCache* beatmapDataCache) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayCoreSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayCoreSceneSetupData*, creationType>(difficultyBeatmap, previewBeatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects, environmentInfo, colorScheme, mainSettingsModel, beatmapDataCache)));
    }
    // public System.Threading.Tasks.Task LoadTransformedBeatmapDataAsync()
    // Offset: 0x145EACC
    ::System::Threading::Tasks::Task* LoadTransformedBeatmapDataAsync();
    // private System.Threading.Tasks.Task`1<IReadonlyBeatmapData> GetTransformedBeatmapDataAsync()
    // Offset: 0x145EBBC
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetTransformedBeatmapDataAsync();
  }; // GameplayCoreSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(GameplayCoreSceneSetupData), 96 + sizeof(::GlobalNamespace::IReadonlyBeatmapData*)> __GlobalNamespace_GameplayCoreSceneSetupDataSizeCheck;
  static_assert(sizeof(GameplayCoreSceneSetupData) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayCoreSceneSetupData::get_transformedBeatmapData
// Il2CppName: get_transformedBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&GlobalNamespace::GameplayCoreSceneSetupData::get_transformedBeatmapData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayCoreSceneSetupData*), "get_transformedBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayCoreSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayCoreSceneSetupData::LoadTransformedBeatmapDataAsync
// Il2CppName: LoadTransformedBeatmapDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&GlobalNamespace::GameplayCoreSceneSetupData::LoadTransformedBeatmapDataAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayCoreSceneSetupData*), "LoadTransformedBeatmapDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayCoreSceneSetupData::GetTransformedBeatmapDataAsync
// Il2CppName: GetTransformedBeatmapDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (GlobalNamespace::GameplayCoreSceneSetupData::*)()>(&GlobalNamespace::GameplayCoreSceneSetupData::GetTransformedBeatmapDataAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayCoreSceneSetupData*), "GetTransformedBeatmapDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
