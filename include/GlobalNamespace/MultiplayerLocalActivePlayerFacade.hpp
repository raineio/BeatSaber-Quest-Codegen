// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: IMultiplayerLevelEndActionsListener
#include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
// Including type: IStartSeekSongControllerProvider
#include "GlobalNamespace/IStartSeekSongControllerProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStartSeekSongController
  class IStartSeekSongController;
  // Forward declaring type: MultiplayerLocalActivePlayerIntroAnimator
  class MultiplayerLocalActivePlayerIntroAnimator;
  // Forward declaring type: MultiplayerLocalActivePlayerOutroAnimator
  class MultiplayerLocalActivePlayerOutroAnimator;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLocalActivePlayerFacade
  class MultiplayerLocalActivePlayerFacade : public UnityEngine::MonoBehaviour, public GlobalNamespace::IMultiplayerLevelEndActionsPublisher, public GlobalNamespace::IMultiplayerLevelEndActionsListener, public GlobalNamespace::IStartSeekSongControllerProvider {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory
    class Factory;
    // private UnityEngine.GameObject[] _activeOnlyGameObjects
    // Offset: 0x18
    ::Array<UnityEngine::GameObject*>* activeOnlyGameObjects;
    // private readonly IStartSeekSongController _songController
    // Offset: 0x20
    GlobalNamespace::IStartSeekSongController* songController;
    // private readonly MultiplayerLocalActivePlayerIntroAnimator _introAnimator
    // Offset: 0x28
    GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* introAnimator;
    // private readonly MultiplayerLocalActivePlayerOutroAnimator _outroAnimator
    // Offset: 0x30
    GlobalNamespace::MultiplayerLocalActivePlayerOutroAnimator* outroAnimator;
    // private readonly GameSongController _gameSongController
    // Offset: 0x38
    GlobalNamespace::GameSongController* gameSongController;
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private readonly BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private System.Action`1<LevelCompletionResults> playerDidFinishEvent
    // Offset: 0x50
    System::Action_1<GlobalNamespace::LevelCompletionResults*>* playerDidFinishEvent;
    // private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    // Offset: 0x58
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MultiplayerLocalActivePlayerIntroAnimator get_introAnimator()
    // Offset: 0x20488C0
    GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* get_introAnimator();
    // public MultiplayerLocalActivePlayerOutroAnimator get_outroAnimator()
    // Offset: 0x20488C8
    GlobalNamespace::MultiplayerLocalActivePlayerOutroAnimator* get_outroAnimator();
    // public System.Void DisablePlayer()
    // Offset: 0x2048C50
    void DisablePlayer();
    // public System.Void PauseSpawning()
    // Offset: 0x2048CC0
    void PauseSpawning();
    // public System.Void ResumeSpawning()
    // Offset: 0x2048CDC
    void ResumeSpawning();
    // public System.Void __ForceStopSong()
    // Offset: 0x2048CF8
    void __ForceStopSong();
    // public IStartSeekSongController get_songController()
    // Offset: 0x20488D0
    // Implemented from: IStartSeekSongControllerProvider
    // Base method: IStartSeekSongController IStartSeekSongControllerProvider::get_songController()
    GlobalNamespace::IStartSeekSongController* get_songController();
    // public System.Void add_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    // Offset: 0x20488D8
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::add_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    // Offset: 0x204897C
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::remove_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x2048A20
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x2048AC4
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void ReportPlayerDidFinish(LevelCompletionResults results)
    // Offset: 0x2048B68
    // Implemented from: IMultiplayerLevelEndActionsListener
    // Base method: System.Void IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish(LevelCompletionResults results)
    void ReportPlayerDidFinish(GlobalNamespace::LevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0x2048BDC
    // Implemented from: IMultiplayerLevelEndActionsListener
    // Base method: System.Void IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    void ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // public System.Void .ctor()
    // Offset: 0x2048D40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLocalActivePlayerFacade* New_ctor();
  }; // MultiplayerLocalActivePlayerFacade
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerFacade*, "", "MultiplayerLocalActivePlayerFacade");
#pragma pack(pop)
