// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: MultiplayerConnectedPlayerIntroAnimator
  class MultiplayerConnectedPlayerIntroAnimator;
  // Forward declaring type: IMultiplayerConnectedPlayerOutroAnimator
  class IMultiplayerConnectedPlayerOutroAnimator;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: MultiplayerConnectedPlayerScoreDiffText
  class MultiplayerConnectedPlayerScoreDiffText;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerFacade
  class MultiplayerConnectedPlayerFacade : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory
    class Factory;
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeSyncController
    // Offset: 0x18
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeSyncController;
    // private readonly MultiplayerConnectedPlayerIntroAnimator _introAnimator
    // Offset: 0x20
    GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* introAnimator;
    // private readonly IMultiplayerConnectedPlayerOutroAnimator _outroAnimator
    // Offset: 0x28
    GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator* outroAnimator;
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private readonly MultiplayerConnectedPlayerScoreDiffText _scoreDiffText
    // Offset: 0x38
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* scoreDiffText;
    // private readonly BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MultiplayerConnectedPlayerIntroAnimator get_introAnimator()
    // Offset: 0x2060188
    GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* get_introAnimator();
    // public IMultiplayerConnectedPlayerOutroAnimator get_outroAnimator()
    // Offset: 0x2060190
    GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator* get_outroAnimator();
    // public MultiplayerConnectedPlayerScoreDiffText get_scoreDiffText()
    // Offset: 0x2060198
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* get_scoreDiffText();
    // public System.Void SetSongStartSyncTime(System.Single songStartSyncTime)
    // Offset: 0x20601A0
    void SetSongStartSyncTime(float songStartSyncTime);
    // public System.Void PauseSpawning()
    // Offset: 0x20602D8
    void PauseSpawning();
    // public System.Void ResumeSpawning()
    // Offset: 0x20602F4
    void ResumeSpawning();
    // public System.Void __ForceStopSong()
    // Offset: 0x2060310
    void __ForceStopSong();
    // public System.Void .ctor()
    // Offset: 0x2060364
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerConnectedPlayerFacade* New_ctor();
  }; // MultiplayerConnectedPlayerFacade
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerFacade*, "", "MultiplayerConnectedPlayerFacade");
#pragma pack(pop)
