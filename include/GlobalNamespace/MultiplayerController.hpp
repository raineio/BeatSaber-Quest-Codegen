// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: SceneStartSyncController
  class SceneStartSyncController;
  // Forward declaring type: SongStartSyncController
  class SongStartSyncController;
  // Forward declaring type: MultiplayerLevelFinishedController
  class MultiplayerLevelFinishedController;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: LobbyGameState
  class LobbyGameState;
  // Forward declaring type: MultiplayerIntroAnimationController
  class MultiplayerIntroAnimationController;
  // Forward declaring type: MultiplayerOutroAnimationController
  class MultiplayerOutroAnimationController;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Skipping declaration: State because it is already included!
  // Forward declaring type: MultiplayerGameState
  struct MultiplayerGameState;
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerController
  class MultiplayerController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerController::State
    struct State;
    // Nested type: GlobalNamespace::MultiplayerController::$PerformSongStartSync$d__31
    class $PerformSongStartSync$d__31;
    // Nested type: GlobalNamespace::MultiplayerController::$$c__DisplayClass36_0
    class $$c__DisplayClass36_0;
    // Nested type: GlobalNamespace::MultiplayerController::$$c
    class $$c;
    // Autogenerated type: MultiplayerController/State
    struct State : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerController/State CheckingLobbyState
      static constexpr const int CheckingLobbyState = 0;
      // Get static field: static public MultiplayerController/State CheckingLobbyState
      static GlobalNamespace::MultiplayerController::State _get_CheckingLobbyState();
      // Set static field: static public MultiplayerController/State CheckingLobbyState
      static void _set_CheckingLobbyState(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State WaitingForPlayers
      static constexpr const int WaitingForPlayers = 1;
      // Get static field: static public MultiplayerController/State WaitingForPlayers
      static GlobalNamespace::MultiplayerController::State _get_WaitingForPlayers();
      // Set static field: static public MultiplayerController/State WaitingForPlayers
      static void _set_WaitingForPlayers(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State SongStartSync
      static constexpr const int SongStartSync = 2;
      // Get static field: static public MultiplayerController/State SongStartSync
      static GlobalNamespace::MultiplayerController::State _get_SongStartSync();
      // Set static field: static public MultiplayerController/State SongStartSync
      static void _set_SongStartSync(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State Intro
      static constexpr const int Intro = 3;
      // Get static field: static public MultiplayerController/State Intro
      static GlobalNamespace::MultiplayerController::State _get_Intro();
      // Set static field: static public MultiplayerController/State Intro
      static void _set_Intro(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State Gameplay
      static constexpr const int Gameplay = 4;
      // Get static field: static public MultiplayerController/State Gameplay
      static GlobalNamespace::MultiplayerController::State _get_Gameplay();
      // Set static field: static public MultiplayerController/State Gameplay
      static void _set_Gameplay(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State Outro
      static constexpr const int Outro = 5;
      // Get static field: static public MultiplayerController/State Outro
      static GlobalNamespace::MultiplayerController::State _get_Outro();
      // Set static field: static public MultiplayerController/State Outro
      static void _set_Outro(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State Finished
      static constexpr const int Finished = 6;
      // Get static field: static public MultiplayerController/State Finished
      static GlobalNamespace::MultiplayerController::State _get_Finished();
      // Set static field: static public MultiplayerController/State Finished
      static void _set_Finished(GlobalNamespace::MultiplayerController::State value);
    }; // MultiplayerController/State
    check_size<sizeof(MultiplayerController::State), 0 + sizeof(int) + 8 - (0 + sizeof(int)) % 8> __GlobalNamespace_MultiplayerController_StateSizeCheck;
    // private UnityEngine.GameObject _loadingEnvironment
    // Offset: 0x18
    UnityEngine::GameObject* loadingEnvironment;
    // private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelSceneSetupData
    // Offset: 0x20
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelSceneSetupData;
    // private readonly GameScenesManager _gameScenesManager
    // Offset: 0x28
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private readonly MultiplayerPlayersManager _playersManager
    // Offset: 0x30
    GlobalNamespace::MultiplayerPlayersManager* playersManager;
    // private readonly SceneStartSyncController _sceneStartSyncController
    // Offset: 0x38
    GlobalNamespace::SceneStartSyncController* sceneStartSyncController;
    // private readonly SongStartSyncController _songStartSyncController
    // Offset: 0x40
    GlobalNamespace::SongStartSyncController* songStartSyncController;
    // private readonly MultiplayerLevelFinishedController _multiplayerLevelFinishedController
    // Offset: 0x48
    GlobalNamespace::MultiplayerLevelFinishedController* multiplayerLevelFinishedController;
    // private readonly FadeInOutController _fadeInOutController
    // Offset: 0x50
    GlobalNamespace::FadeInOutController* fadeInOutController;
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x58
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly LobbyGameState _lobbyGameState
    // Offset: 0x60
    GlobalNamespace::LobbyGameState* lobbyGameState;
    // private readonly MultiplayerIntroAnimationController _introAnimationController
    // Offset: 0x68
    GlobalNamespace::MultiplayerIntroAnimationController* introAnimationController;
    // private readonly MultiplayerOutroAnimationController _outroAnimationController
    // Offset: 0x70
    GlobalNamespace::MultiplayerOutroAnimationController* outroAnimationController;
    // private readonly IMenuRpcManager _menuRpcManager
    // Offset: 0x78
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Offset: 0x80
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // private System.Action`1<MultiplayerController/State> stateChangedEvent
    // Offset: 0x88
    System::Action_1<GlobalNamespace::MultiplayerController::State>* stateChangedEvent;
    // private System.Single _startTime
    // Offset: 0x90
    float startTime;
    // private MultiplayerPlayerStartState _localPlayerSyncStartState
    // Offset: 0x94
    GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncStartState;
    // private MultiplayerController/State _state
    // Offset: 0x98
    GlobalNamespace::MultiplayerController::State state;
    // private System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> _otherPlayersCompletionResults
    // Offset: 0xA0
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayersCompletionResults;
    // private LevelCompletionResults _localPlayerResults
    // Offset: 0xA8
    GlobalNamespace::LevelCompletionResults* localPlayerResults;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSongTimeToSongStartSyncTimeOffset
    static constexpr const float kSongTimeToSongStartSyncTimeOffset = -0.6;
    // Get static field: static private System.Single kSongTimeToSongStartSyncTimeOffset
    static float _get_kSongTimeToSongStartSyncTimeOffset();
    // Set static field: static private System.Single kSongTimeToSongStartSyncTimeOffset
    static void _set_kSongTimeToSongStartSyncTimeOffset(float value);
    // static field const value: static private System.Single kMinAnimationDurationPercentage
    static constexpr const float kMinAnimationDurationPercentage = 0.75;
    // Get static field: static private System.Single kMinAnimationDurationPercentage
    static float _get_kMinAnimationDurationPercentage();
    // Set static field: static private System.Single kMinAnimationDurationPercentage
    static void _set_kMinAnimationDurationPercentage(float value);
    // public MultiplayerController/State get_state()
    // Offset: 0xFAE26C
    GlobalNamespace::MultiplayerController::State get_state();
    // public System.Void add_stateChangedEvent(System.Action`1<MultiplayerController/State> value)
    // Offset: 0xFAE274
    void add_stateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerController::State>* value);
    // public System.Void remove_stateChangedEvent(System.Action`1<MultiplayerController/State> value)
    // Offset: 0xFAE318
    void remove_stateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerController::State>* value);
    // protected System.Void Start()
    // Offset: 0xFAE3BC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFAE8A8
    void OnDestroy();
    // private System.Void HandleSetMultiplayerGameState(System.String userId, MultiplayerGameState gameState)
    // Offset: 0xFAEE90
    void HandleSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState gameState);
    // private System.Void StartSceneLoadSync()
    // Offset: 0xFAE788
    void StartSceneLoadSync();
    // private System.Collections.IEnumerator PerformSongStartSync(MultiplayerPlayerStartState localPlayerSyncState)
    // Offset: 0xFAF08C
    System::Collections::IEnumerator* PerformSongStartSync(GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState);
    // private System.Void HandleDidSwitchPlayerToInactive()
    // Offset: 0xFAF144
    void HandleDidSwitchPlayerToInactive();
    // private System.Void HandleSceneStartSyncControllerSyncStartDidSuccess()
    // Offset: 0xFAF3BC
    void HandleSceneStartSyncControllerSyncStartDidSuccess();
    // private System.Void HandleSceneStartSyncControllerSyncStartDidReceiveTooLate()
    // Offset: 0xFAF3EC
    void HandleSceneStartSyncControllerSyncStartDidReceiveTooLate();
    // private System.Void HandleSceneStartSyncControllerSyncStartDidFail()
    // Offset: 0xFAF41C
    void HandleSceneStartSyncControllerSyncStartDidFail();
    // private System.Void HandleSongStartSyncControllerSyncStartSuccess(System.Single introAnimationStartSyncTime)
    // Offset: 0xFAF43C
    void HandleSongStartSyncControllerSyncStartSuccess(float introAnimationStartSyncTime);
    // private System.Void HandleSongStartSyncControllerSyncResume(System.Single introAnimationStartSyncTime)
    // Offset: 0xFB02E8
    void HandleSongStartSyncControllerSyncResume(float introAnimationStartSyncTime);
    // private System.Void HandleSongStartSyncControllerSyncStartFailed()
    // Offset: 0xFB0758
    void HandleSongStartSyncControllerSyncStartFailed();
    // private System.Void StartGameplay(System.Single introAnimationStartSyncTime)
    // Offset: 0xFAFA88
    void StartGameplay(float introAnimationStartSyncTime);
    // private System.Void HandleAllResultsCollected(LevelCompletionResults localPlayerResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> otherPlayerResults)
    // Offset: 0xFB0778
    void HandleAllResultsCollected(GlobalNamespace::LevelCompletionResults* localPlayerResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayerResults);
    // private System.Void HandleOutroAnimationDidFinish()
    // Offset: 0xFB0AA0
    void HandleOutroAnimationDidFinish();
    // private System.Void HandleRpcReturnToMenu(System.String userId)
    // Offset: 0xFB0AD4
    void HandleRpcReturnToMenu(::Il2CppString* userId);
    // private System.Void HandleDisconnected(DisconnectedReason disconnectedReason)
    // Offset: 0xFB0B84
    void HandleDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void ChangeState(MultiplayerController/State newState)
    // Offset: 0xFAE710
    void ChangeState(GlobalNamespace::MultiplayerController::State newState);
    // private System.Single GetCurrentSongTime(System.Single songStartSyncTime)
    // Offset: 0xFAF2F4
    float GetCurrentSongTime(float songStartSyncTime);
    // private System.Single GetSongStartSyncTime(System.Single introAnimationStartSyncTime)
    // Offset: 0xFAF2B8
    float GetSongStartSyncTime(float introAnimationStartSyncTime);
    // public System.Void .ctor()
    // Offset: 0xFB0C34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerController* New_ctor();
  }; // MultiplayerController
  check_size<sizeof(MultiplayerController), 168 + sizeof(void*) + 8 - (168 + sizeof(void*)) % 8> __GlobalNamespace_MultiplayerControllerSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController*, "", "MultiplayerController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController::State, "", "MultiplayerController/State");
#pragma pack(pop)