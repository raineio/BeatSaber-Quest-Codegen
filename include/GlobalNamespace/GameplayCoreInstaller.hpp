// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatLineManager
  class BeatLineManager;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: BeatmapObjectSpawnControllerPlayerHeightSetter
  class BeatmapObjectSpawnControllerPlayerHeightSetter;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
  // Forward declaring type: NoteCutScoreSpawner
  class NoteCutScoreSpawner;
  // Forward declaring type: BadNoteCutEffectSpawner
  class BadNoteCutEffectSpawner;
  // Forward declaring type: MissedNoteEffectSpawner
  class MissedNoteEffectSpawner;
  // Forward declaring type: EffectPoolsManualInstaller
  class EffectPoolsManualInstaller;
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: SongTimeTweeningManager
  class SongTimeTweeningManager;
}
// Forward declaring namespace: DataModels::Levels
namespace DataModels::Levels {
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: GameplayCoreInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayCoreInstaller : public Zenject::MonoInstaller {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private BeatLineManager _beatLineManagerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatLineManager* beatLineManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatLineManager*) == 0x8);
    // private Tweening.SongTimeTweeningManager _songTimeTweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::SongTimeTweeningManager* songTimeTweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::SongTimeTweeningManager*) == 0x8);
    // [SpaceAttribute] Offset: 0xF0BF48
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // private BeatmapObjectSpawnControllerPlayerHeightSetter _beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*) == 0x8);
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // private NoteCutScoreSpawner _noteCutScoreSpawnerPrefab
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::NoteCutScoreSpawner* noteCutScoreSpawnerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutScoreSpawner*) == 0x8);
    // private BadNoteCutEffectSpawner _badNoteCutEffectSpawnerPrefab
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::BadNoteCutEffectSpawner* badNoteCutEffectSpawnerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BadNoteCutEffectSpawner*) == 0x8);
    // private MissedNoteEffectSpawner _missedNoteEffectSpawnerPrefab
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MissedNoteEffectSpawner* missedNoteEffectSpawnerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissedNoteEffectSpawner*) == 0x8);
    // [SpaceAttribute] Offset: 0xF0BFD0
    // private EffectPoolsManualInstaller _effectPoolsManualInstaller
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::EffectPoolsManualInstaller* effectPoolsManualInstaller;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EffectPoolsManualInstaller*) == 0x8);
    // [SpaceAttribute] Offset: 0xF0C008
    // private BoolSO _screenDisplacementEffectsEnabled
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::BoolSO* screenDisplacementEffectsEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // [InjectAttribute] Offset: 0xF0C040
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xF0C050
    // private readonly DataModels.Levels.PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    // Size: 0x8
    // Offset: 0x78
    DataModels::Levels::PerceivedLoudnessPerLevelModel* perceivedLoudnessPerLevelModel;
    // Field size check
    static_assert(sizeof(DataModels::Levels::PerceivedLoudnessPerLevelModel*) == 0x8);
    public:
    // Get instance field reference: private BeatLineManager _beatLineManagerPrefab
    GlobalNamespace::BeatLineManager*& dyn__beatLineManagerPrefab();
    // Get instance field reference: private Tweening.SongTimeTweeningManager _songTimeTweeningManager
    Tweening::SongTimeTweeningManager*& dyn__songTimeTweeningManager();
    // Get instance field reference: private AudioManagerSO _audioManager
    GlobalNamespace::AudioManagerSO*& dyn__audioManager();
    // Get instance field reference: private BeatmapObjectSpawnControllerPlayerHeightSetter _beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*& dyn__beatmapObjectSpawnControllerPlayerHeightSetterPrefab();
    // Get instance field reference: private PlayerHeightDetector _playerHeightDetectorPrefab
    GlobalNamespace::PlayerHeightDetector*& dyn__playerHeightDetectorPrefab();
    // Get instance field reference: private NoteCutScoreSpawner _noteCutScoreSpawnerPrefab
    GlobalNamespace::NoteCutScoreSpawner*& dyn__noteCutScoreSpawnerPrefab();
    // Get instance field reference: private BadNoteCutEffectSpawner _badNoteCutEffectSpawnerPrefab
    GlobalNamespace::BadNoteCutEffectSpawner*& dyn__badNoteCutEffectSpawnerPrefab();
    // Get instance field reference: private MissedNoteEffectSpawner _missedNoteEffectSpawnerPrefab
    GlobalNamespace::MissedNoteEffectSpawner*& dyn__missedNoteEffectSpawnerPrefab();
    // Get instance field reference: private EffectPoolsManualInstaller _effectPoolsManualInstaller
    GlobalNamespace::EffectPoolsManualInstaller*& dyn__effectPoolsManualInstaller();
    // Get instance field reference: private BoolSO _screenDisplacementEffectsEnabled
    GlobalNamespace::BoolSO*& dyn__screenDisplacementEffectsEnabled();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // Get instance field reference: private readonly DataModels.Levels.PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    DataModels::Levels::PerceivedLoudnessPerLevelModel*& dyn__perceivedLoudnessPerLevelModel();
    // public System.Void .ctor()
    // Offset: 0x11E4290
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayCoreInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayCoreInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayCoreInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x11E2B34
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // GameplayCoreInstaller
  #pragma pack(pop)
  static check_size<sizeof(GameplayCoreInstaller), 120 + sizeof(DataModels::Levels::PerceivedLoudnessPerLevelModel*)> __GlobalNamespace_GameplayCoreInstallerSizeCheck;
  static_assert(sizeof(GameplayCoreInstaller) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayCoreInstaller*, "", "GameplayCoreInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayCoreInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayCoreInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayCoreInstaller::*)()>(&GlobalNamespace::GameplayCoreInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayCoreInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
