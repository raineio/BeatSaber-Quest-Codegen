// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
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
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, "", "MultiplayerLevelScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLevelScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private SceneInfo _multiplayerLevelSceneInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SceneInfo* multiplayerLevelSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private EnvironmentInfoSO _multiplayerEnvironmentInfo
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::EnvironmentInfoSO* multiplayerEnvironmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*) == 0x8);
    // private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> didDisconnectEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* didDisconnectEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>*) == 0x8);
    // private System.String <gameMode>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::StringW gameMode;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private IPreviewBeatmapLevel <previewBeatmapLevel>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private BeatmapDifficulty <beatmapDifficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x60
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: difficultyBeatmap
    char __padding7[0x4] = {};
    // private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private System.Boolean <usingOverrideColorScheme>k__BackingField
    // Size: 0x1
    // Offset: 0x78
    bool usingOverrideColorScheme;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usingOverrideColorScheme and: colorScheme
    char __padding10[0x7] = {};
    // private ColorScheme <colorScheme>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    public:
    // Get instance field reference: private SceneInfo _multiplayerLevelSceneInfo
    GlobalNamespace::SceneInfo*& dyn__multiplayerLevelSceneInfo();
    // Get instance field reference: private SceneInfo _gameCoreSceneInfo
    GlobalNamespace::SceneInfo*& dyn__gameCoreSceneInfo();
    // Get instance field reference: private EnvironmentInfoSO _multiplayerEnvironmentInfo
    GlobalNamespace::EnvironmentInfoSO*& dyn__multiplayerEnvironmentInfo();
    // Get instance field reference: private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> didFinishEvent
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*& dyn_didFinishEvent();
    // Get instance field reference: private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> didDisconnectEvent
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>*& dyn_didDisconnectEvent();
    // Get instance field reference: private System.String <gameMode>k__BackingField
    ::StringW& dyn_$gameMode$k__BackingField();
    // Get instance field reference: private IPreviewBeatmapLevel <previewBeatmapLevel>k__BackingField
    GlobalNamespace::IPreviewBeatmapLevel*& dyn_$previewBeatmapLevel$k__BackingField();
    // Get instance field reference: private BeatmapDifficulty <beatmapDifficulty>k__BackingField
    GlobalNamespace::BeatmapDifficulty& dyn_$beatmapDifficulty$k__BackingField();
    // Get instance field reference: private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    GlobalNamespace::IDifficultyBeatmap*& dyn_$difficultyBeatmap$k__BackingField();
    // Get instance field reference: private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    GlobalNamespace::BeatmapCharacteristicSO*& dyn_$beatmapCharacteristic$k__BackingField();
    // Get instance field reference: private System.Boolean <usingOverrideColorScheme>k__BackingField
    bool& dyn_$usingOverrideColorScheme$k__BackingField();
    // Get instance field reference: private ColorScheme <colorScheme>k__BackingField
    GlobalNamespace::ColorScheme*& dyn_$colorScheme$k__BackingField();
    // public System.String get_gameMode()
    // Offset: 0x1298BF4
    ::StringW get_gameMode();
    // private System.Void set_gameMode(System.String value)
    // Offset: 0x1298BFC
    void set_gameMode(::StringW value);
    // public IPreviewBeatmapLevel get_previewBeatmapLevel()
    // Offset: 0x1298C04
    GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();
    // private System.Void set_previewBeatmapLevel(IPreviewBeatmapLevel value)
    // Offset: 0x1298C0C
    void set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel* value);
    // public BeatmapDifficulty get_beatmapDifficulty()
    // Offset: 0x1298C14
    GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();
    // private System.Void set_beatmapDifficulty(BeatmapDifficulty value)
    // Offset: 0x1298C1C
    void set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0x1298C24
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // private System.Void set_difficultyBeatmap(IDifficultyBeatmap value)
    // Offset: 0x1298C2C
    void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x1298C34
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // private System.Void set_beatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0x1298C3C
    void set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // public System.Boolean get_usingOverrideColorScheme()
    // Offset: 0x1298C44
    bool get_usingOverrideColorScheme();
    // private System.Void set_usingOverrideColorScheme(System.Boolean value)
    // Offset: 0x1298C4C
    void set_usingOverrideColorScheme(bool value);
    // public ColorScheme get_colorScheme()
    // Offset: 0x1298C58
    GlobalNamespace::ColorScheme* get_colorScheme();
    // private System.Void set_colorScheme(ColorScheme value)
    // Offset: 0x1298C60
    void set_colorScheme(GlobalNamespace::ColorScheme* value);
    // public System.Void add_didFinishEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> value)
    // Offset: 0x1296D24
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> value)
    // Offset: 0x1296E58
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* value);
    // public System.Void add_didDisconnectEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> value)
    // Offset: 0x1298AAC
    void add_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_didDisconnectEvent(System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,DisconnectedReason> value)
    // Offset: 0x1298B50
    void remove_didDisconnectEvent(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void Init(System.String gameMode, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.Boolean useTestNoteCutSoundEffects)
    // Offset: 0x1298C68
    void Init(::StringW gameMode, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects);
    // public System.Void Finish(MultiplayerResultsData resultsData)
    // Offset: 0x1298F80
    void Finish(GlobalNamespace::MultiplayerResultsData* resultsData);
    // public System.Void FinishWithDisconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x1298FF8
    void FinishWithDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public System.Void .ctor()
    // Offset: 0x1299070
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // MultiplayerLevelScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelScenesTransitionSetupDataSO), 128 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_MultiplayerLevelScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(MultiplayerLevelScenesTransitionSetupDataSO) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_gameMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_gameMode
// Il2CppName: set_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(::StringW)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_gameMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_previewBeatmapLevel
// Il2CppName: get_previewBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IPreviewBeatmapLevel* (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_previewBeatmapLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_previewBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_previewBeatmapLevel
// Il2CppName: set_previewBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_previewBeatmapLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_previewBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_beatmapDifficulty
// Il2CppName: get_beatmapDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_beatmapDifficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_beatmapDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_beatmapDifficulty
// Il2CppName: set_beatmapDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_beatmapDifficulty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_beatmapDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_difficultyBeatmap
// Il2CppName: get_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap* (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_difficultyBeatmap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_difficultyBeatmap
// Il2CppName: set_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_difficultyBeatmap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_beatmapCharacteristic
// Il2CppName: set_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_usingOverrideColorScheme
// Il2CppName: get_usingOverrideColorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_usingOverrideColorScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_usingOverrideColorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_usingOverrideColorScheme
// Il2CppName: set_usingOverrideColorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(bool)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_usingOverrideColorScheme)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_usingOverrideColorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_colorScheme
// Il2CppName: get_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorScheme* (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::get_colorScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "get_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_colorScheme
// Il2CppName: set_colorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::ColorScheme*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::set_colorScheme)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "set_colorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::add_didDisconnectEvent
// Il2CppName: add_didDisconnectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::add_didDisconnectEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "DisconnectedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "add_didDisconnectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::remove_didDisconnectEvent
// Il2CppName: remove_didDisconnectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::DisconnectedReason>*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::remove_didDisconnectEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "DisconnectedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "remove_didDisconnectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(::StringW, GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::ColorScheme*, GlobalNamespace::GameplayModifiers*, GlobalNamespace::PlayerSpecificSettings*, GlobalNamespace::PracticeSettings*, bool)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    static auto* gameMode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* overrideColorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    static auto* practiceSettings = &::il2cpp_utils::GetClassFromName("", "PracticeSettings")->byval_arg;
    static auto* useTestNoteCutSoundEffects = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, useTestNoteCutSoundEffects});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::MultiplayerResultsData*)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::Finish)> {
  static const MethodInfo* get() {
    static auto* resultsData = &::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::FinishWithDisconnect
// Il2CppName: FinishWithDisconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::FinishWithDisconnect)> {
  static const MethodInfo* get() {
    static auto* disconnectedReason = &::il2cpp_utils::GetClassFromName("", "DisconnectedReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*), "FinishWithDisconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disconnectedReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
