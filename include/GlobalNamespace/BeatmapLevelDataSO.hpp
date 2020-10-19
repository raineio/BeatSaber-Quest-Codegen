// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataSO
  class BeatmapLevelDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // private UnityEngine.AudioClip _audioClip
    // Offset: 0x18
    UnityEngine::AudioClip* audioClip;
    // private BeatmapLevelDataSO/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Offset: 0x20
    ::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // private BeatmapLevelDataSO/DifficultyBeatmapSet[] _no360MovementDifficultyBeatmapSets
    // Offset: 0x28
    ::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* no360MovementDifficultyBeatmapSets;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x20CE890
    UnityEngine::AudioClip* get_audioClip();
    // public BeatmapLevelDataSO/DifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x20CE898
    ::Array<GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor()
    // Offset: 0x20CE8A0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelDataSO* New_ctor();
  }; // BeatmapLevelDataSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataSO*, "", "BeatmapLevelDataSO");
#pragma pack(pop)
