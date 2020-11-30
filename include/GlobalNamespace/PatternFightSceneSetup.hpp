// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnControllerPlayerHeightSetter
  class BeatmapObjectSpawnControllerPlayerHeightSetter;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: PatternFightSceneSetupData
  class PatternFightSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PatternFightSceneSetup
  class PatternFightSceneSetup : public Zenject::MonoInstaller {
    public:
    // private UnityEngine.AudioClip _testAudioClip
    // Offset: 0x20
    UnityEngine::AudioClip* testAudioClip;
    // private System.Single _testAudioClipBPM
    // Offset: 0x28
    float testAudioClipBPM;
    // private BeatmapObjectSpawnControllerPlayerHeightSetter _beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab;
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Offset: 0x38
    GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // private AudioManagerSO _audioMixer
    // Offset: 0x40
    GlobalNamespace::AudioManagerSO* audioMixer;
    // private PatternFightSceneSetupData _sceneSetupData
    // Offset: 0x48
    GlobalNamespace::PatternFightSceneSetupData* sceneSetupData;
    // public override System.Void InstallBindings()
    // Offset: 0xF049A8
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xF0509C
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PatternFightSceneSetup* New_ctor();
  }; // PatternFightSceneSetup
  check_size<sizeof(PatternFightSceneSetup), 72 + sizeof(void*) + 8 - (72 + sizeof(void*)) % 8> __GlobalNamespace_PatternFightSceneSetupSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightSceneSetup*, "", "PatternFightSceneSetup");
#pragma pack(pop)