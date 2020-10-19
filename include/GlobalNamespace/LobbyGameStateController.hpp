// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyHostGameStateController
#include "GlobalNamespace/ILobbyHostGameStateController.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
// Including type: MultiplayerLobbyState
#include "GlobalNamespace/MultiplayerLobbyState.hpp"
// Including type: MultiplayerGameType
#include "GlobalNamespace/MultiplayerGameType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLevelLoader
  class MultiplayerLevelLoader;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: LobbyGameState
  class LobbyGameState;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
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
  // Autogenerated type: LobbyGameStateController
  class LobbyGameStateController : public ::Il2CppObject, public GlobalNamespace::ILobbyHostGameStateController, public System::IDisposable {
    public:
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Offset: 0x10
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // private readonly PlayerDataModel _playerDataModel
    // Offset: 0x18
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private readonly IMenuRpcManager _menuRpcManager
    // Offset: 0x20
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x28
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly MultiplayerLevelLoader _multiplayerLevelLoader
    // Offset: 0x30
    GlobalNamespace::MultiplayerLevelLoader* multiplayerLevelLoader;
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Offset: 0x38
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // private readonly LobbyGameState _lobbyGameState
    // Offset: 0x40
    GlobalNamespace::LobbyGameState* lobbyGameState;
    // private System.Action gameStartedEvent
    // Offset: 0x48
    System::Action* gameStartedEvent;
    // private System.Action gameStartCancelledEvent
    // Offset: 0x50
    System::Action* gameStartCancelledEvent;
    // private System.Action countdownStartedEvent
    // Offset: 0x58
    System::Action* countdownStartedEvent;
    // private System.Action countdownCancelledEvent
    // Offset: 0x60
    System::Action* countdownCancelledEvent;
    // private System.Action songStillDownloadingEvent
    // Offset: 0x68
    System::Action* songStillDownloadingEvent;
    // private System.Action startTimeChangedEvent
    // Offset: 0x70
    System::Action* startTimeChangedEvent;
    // private System.Action`1<MultiplayerGameState> multiplayerGameStateChangedEvent
    // Offset: 0x78
    System::Action_1<GlobalNamespace::MultiplayerGameState>* multiplayerGameStateChangedEvent;
    // private System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> levelFinishedEvent
    // Offset: 0x80
    System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* levelFinishedEvent;
    // private System.Action`1<DisconnectedReason> levelDidGetDisconnectedEvent
    // Offset: 0x88
    System::Action_1<GlobalNamespace::DisconnectedReason>* levelDidGetDisconnectedEvent;
    // private System.Action lobbyDisconnectedEvent
    // Offset: 0x90
    System::Action* lobbyDisconnectedEvent;
    // private System.Action beforeSceneSwitchCallback
    // Offset: 0x98
    System::Action* beforeSceneSwitchCallback;
    // private System.Boolean <levelStartInitiated>k__BackingField
    // Offset: 0xA0
    bool levelStartInitiated;
    // private BeatmapIdentifierNetSerializable <startedBeatmapId>k__BackingField
    // Offset: 0xA8
    GlobalNamespace::BeatmapIdentifierNetSerializable* startedBeatmapId;
    // private System.Boolean <countdownStarted>k__BackingField
    // Offset: 0xB0
    bool countdownStarted;
    // private System.Single <countdownEndTime>k__BackingField
    // Offset: 0xB4
    float countdownEndTime;
    // private MultiplayerLobbyState <state>k__BackingField
    // Offset: 0xB8
    GlobalNamespace::MultiplayerLobbyState state;
    // private MultiplayerGameType <gameType>k__BackingField
    // Offset: 0xBC
    GlobalNamespace::MultiplayerGameType gameType;
    // private System.Boolean <isDisconnected>k__BackingField
    // Offset: 0xC0
    bool isDisconnected;
    // private DisconnectedReason <disconnectedReason>k__BackingField
    // Offset: 0xC4
    GlobalNamespace::DisconnectedReason disconnectedReason;
    // private System.Single _startTime
    // Offset: 0xC8
    float startTime;
    // private System.Boolean _levelStartedOnTime
    // Offset: 0xCC
    bool levelStartedOnTime;
    // public System.Void add_multiplayerGameStateChangedEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x209791C
    void add_multiplayerGameStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_multiplayerGameStateChangedEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x20979C0
    void remove_multiplayerGameStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // private System.Void set_levelStartInitiated(System.Boolean value)
    // Offset: 0x20980F8
    void set_levelStartInitiated(bool value);
    // private System.Void set_startedBeatmapId(BeatmapIdentifierNetSerializable value)
    // Offset: 0x209810C
    void set_startedBeatmapId(GlobalNamespace::BeatmapIdentifierNetSerializable* value);
    // private System.Void set_countdownStarted(System.Boolean value)
    // Offset: 0x209811C
    void set_countdownStarted(bool value);
    // private System.Void set_countdownEndTime(System.Single value)
    // Offset: 0x2098130
    void set_countdownEndTime(float value);
    // private System.Void set_state(MultiplayerLobbyState value)
    // Offset: 0x2098140
    void set_state(GlobalNamespace::MultiplayerLobbyState value);
    // private System.Void set_gameType(MultiplayerGameType value)
    // Offset: 0x2098150
    void set_gameType(GlobalNamespace::MultiplayerGameType value);
    // private System.Void set_isDisconnected(System.Boolean value)
    // Offset: 0x2098160
    void set_isDisconnected(bool value);
    // private System.Void set_disconnectedReason(DisconnectedReason value)
    // Offset: 0x2098174
    void set_disconnectedReason(GlobalNamespace::DisconnectedReason value);
    // private System.Void HandleMultiplayerSessionManagerDisconnected(DisconnectedReason disconnectedReason)
    // Offset: 0x2099CE8
    void HandleMultiplayerSessionManagerDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void HandleGameStateDidChange(MultiplayerGameState newGameState)
    // Offset: 0x2099D0C
    void HandleGameStateDidChange(GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void HandleMenuRpcManagerGetMultiplayerGameState(System.String userId)
    // Offset: 0x2099E08
    void HandleMenuRpcManagerGetMultiplayerGameState(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetMultiplayerGameState(System.String userId, MultiplayerGameState newGameState)
    // Offset: 0x2099F50
    void HandleMenuRpcManagerSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void StopListeningToGameStart()
    // Offset: 0x2099FE0
    void StopListeningToGameStart();
    // private System.Void HandleMenuRpcManagerGetStartedLevel(System.String userId)
    // Offset: 0x209A224
    void HandleMenuRpcManagerGetStartedLevel(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerStartedLevel(System.String userId, BeatmapIdentifierNetSerializable beatmapId, GameplayModifiers gameplayModifiers, System.Single startTime)
    // Offset: 0x209A4E8
    void HandleMenuRpcManagerStartedLevel(::Il2CppString* userId, GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayModifiers* gameplayModifiers, float startTime);
    // private System.Void HandleMenuRpcManagerCancelledLevelStart(System.String userId)
    // Offset: 0x209A6E4
    void HandleMenuRpcManagerCancelledLevelStart(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetCountdownEndTime(System.String userId, System.Single countdownTime)
    // Offset: 0x209A748
    void HandleMenuRpcManagerSetCountdownEndTime(::Il2CppString* userId, float countdownTime);
    // private System.Void HandleMenuRpcManagerCancelCountdown(System.String userId)
    // Offset: 0x209A938
    void HandleMenuRpcManagerCancelCountdown(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetStartGameTime(System.String userId, System.Single startTime)
    // Offset: 0x209AB18
    void HandleMenuRpcManagerSetStartGameTime(::Il2CppString* userId, float startTime);
    // private System.Void HandleStartTimeChanged()
    // Offset: 0x209AB54
    void HandleStartTimeChanged();
    // private System.Void HandleMultiplayerLevelLoaderStillDownloadingSong()
    // Offset: 0x209AB74
    void HandleMultiplayerLevelLoaderStillDownloadingSong();
    // private System.Void HandleMultiplayerLevelLoaderCountdownFinished(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers)
    // Offset: 0x209AB88
    void HandleMultiplayerLevelLoaderCountdownFinished(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // private System.Void StartMultiplayerLevel(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Action beforeSceneSwitchCallback)
    // Offset: 0x209AF68
    void StartMultiplayerLevel(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, System::Action* beforeSceneSwitchCallback);
    // private System.Void HandleMultiplayerLevelDidFinish(MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, LevelCompletionResults myCompletionResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> othersCompletionResults)
    // Offset: 0x209B100
    void HandleMultiplayerLevelDidFinish(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* myCompletionResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* othersCompletionResults);
    // private System.Void HandleMultiplayerLevelDidDisconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x209B1B0
    void HandleMultiplayerLevelDidDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void StopLoading()
    // Offset: 0x2099C00
    void StopLoading();
    // public System.Void add_gameStartedEvent(System.Action value)
    // Offset: 0x209716C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_gameStartedEvent(System.Action value)
    void add_gameStartedEvent(System::Action* value);
    // public System.Void remove_gameStartedEvent(System.Action value)
    // Offset: 0x2097210
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_gameStartedEvent(System.Action value)
    void remove_gameStartedEvent(System::Action* value);
    // public System.Void add_gameStartCancelledEvent(System.Action value)
    // Offset: 0x20972B4
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_gameStartCancelledEvent(System.Action value)
    void add_gameStartCancelledEvent(System::Action* value);
    // public System.Void remove_gameStartCancelledEvent(System.Action value)
    // Offset: 0x2097358
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_gameStartCancelledEvent(System.Action value)
    void remove_gameStartCancelledEvent(System::Action* value);
    // public System.Void add_countdownStartedEvent(System.Action value)
    // Offset: 0x20973FC
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_countdownStartedEvent(System.Action value)
    void add_countdownStartedEvent(System::Action* value);
    // public System.Void remove_countdownStartedEvent(System.Action value)
    // Offset: 0x20974A0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_countdownStartedEvent(System.Action value)
    void remove_countdownStartedEvent(System::Action* value);
    // public System.Void add_countdownCancelledEvent(System.Action value)
    // Offset: 0x2097544
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_countdownCancelledEvent(System.Action value)
    void add_countdownCancelledEvent(System::Action* value);
    // public System.Void remove_countdownCancelledEvent(System.Action value)
    // Offset: 0x20975E8
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_countdownCancelledEvent(System.Action value)
    void remove_countdownCancelledEvent(System::Action* value);
    // public System.Void add_songStillDownloadingEvent(System.Action value)
    // Offset: 0x209768C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_songStillDownloadingEvent(System.Action value)
    void add_songStillDownloadingEvent(System::Action* value);
    // public System.Void remove_songStillDownloadingEvent(System.Action value)
    // Offset: 0x2097730
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_songStillDownloadingEvent(System.Action value)
    void remove_songStillDownloadingEvent(System::Action* value);
    // public System.Void add_startTimeChangedEvent(System.Action value)
    // Offset: 0x20977D4
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_startTimeChangedEvent(System.Action value)
    void add_startTimeChangedEvent(System::Action* value);
    // public System.Void remove_startTimeChangedEvent(System.Action value)
    // Offset: 0x2097878
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_startTimeChangedEvent(System.Action value)
    void remove_startTimeChangedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    // Offset: 0x2097A64
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_levelFinishedEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    void add_levelFinishedEvent(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* value);
    // public System.Void remove_levelFinishedEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    // Offset: 0x2097B08
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_levelFinishedEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    void remove_levelFinishedEvent(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* value);
    // public System.Void add_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x2097BAC
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    void add_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x2097C50
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    void remove_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void add_lobbyDisconnectedEvent(System.Action value)
    // Offset: 0x2097CF4
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_lobbyDisconnectedEvent(System.Action value)
    void add_lobbyDisconnectedEvent(System::Action* value);
    // public System.Void remove_lobbyDisconnectedEvent(System.Action value)
    // Offset: 0x2097D98
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_lobbyDisconnectedEvent(System.Action value)
    void remove_lobbyDisconnectedEvent(System::Action* value);
    // public System.Void add_beforeSceneSwitchCallback(System.Action value)
    // Offset: 0x2097E3C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_beforeSceneSwitchCallback(System.Action value)
    void add_beforeSceneSwitchCallback(System::Action* value);
    // public System.Void remove_beforeSceneSwitchCallback(System.Action value)
    // Offset: 0x2097EE0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_beforeSceneSwitchCallback(System.Action value)
    void remove_beforeSceneSwitchCallback(System::Action* value);
    // public System.Single get_startTime()
    // Offset: 0x2097F84
    // Implemented from: ILobbyGameStateController
    // Base method: System.Single ILobbyGameStateController::get_startTime()
    float get_startTime();
    // public System.Void set_startTime(System.Single value)
    // Offset: 0x2097F8C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::set_startTime(System.Single value)
    void set_startTime(float value);
    // public System.Boolean get_levelStartInitiated()
    // Offset: 0x20980F0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Boolean ILobbyGameStateController::get_levelStartInitiated()
    bool get_levelStartInitiated();
    // public BeatmapIdentifierNetSerializable get_startedBeatmapId()
    // Offset: 0x2098104
    // Implemented from: ILobbyGameStateController
    // Base method: BeatmapIdentifierNetSerializable ILobbyGameStateController::get_startedBeatmapId()
    GlobalNamespace::BeatmapIdentifierNetSerializable* get_startedBeatmapId();
    // public System.Boolean get_countdownStarted()
    // Offset: 0x2098114
    // Implemented from: ILobbyGameStateController
    // Base method: System.Boolean ILobbyGameStateController::get_countdownStarted()
    bool get_countdownStarted();
    // public System.Single get_countdownEndTime()
    // Offset: 0x2098128
    // Implemented from: ILobbyGameStateController
    // Base method: System.Single ILobbyGameStateController::get_countdownEndTime()
    float get_countdownEndTime();
    // public MultiplayerLobbyState get_state()
    // Offset: 0x2098138
    // Implemented from: ILobbyGameStateController
    // Base method: MultiplayerLobbyState ILobbyGameStateController::get_state()
    GlobalNamespace::MultiplayerLobbyState get_state();
    // public MultiplayerGameType get_gameType()
    // Offset: 0x2098148
    // Implemented from: ILobbyGameStateController
    // Base method: MultiplayerGameType ILobbyGameStateController::get_gameType()
    GlobalNamespace::MultiplayerGameType get_gameType();
    // public System.Boolean get_isDisconnected()
    // Offset: 0x2098158
    // Implemented from: ILobbyGameStateController
    // Base method: System.Boolean ILobbyGameStateController::get_isDisconnected()
    bool get_isDisconnected();
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0x209816C
    // Implemented from: ILobbyGameStateController
    // Base method: DisconnectedReason ILobbyGameStateController::get_disconnectedReason()
    GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // public System.Void Activate()
    // Offset: 0x209817C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::Activate()
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x2098628
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::Deactivate()
    void Deactivate();
    // public System.Void Dispose()
    // Offset: 0x2098CD0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void StartListeningToGameStart()
    // Offset: 0x2098CD4
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::StartListeningToGameStart()
    void StartListeningToGameStart();
    // public System.Void GetCurrentLevelIfGameStarted()
    // Offset: 0x209941C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::GetCurrentLevelIfGameStarted()
    void GetCurrentLevelIfGameStarted();
    // public System.Void SetMultiplayerGameType(MultiplayerGameType multiplayerGameType)
    // Offset: 0x20994D0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::SetMultiplayerGameType(MultiplayerGameType multiplayerGameType)
    void SetMultiplayerGameType(GlobalNamespace::MultiplayerGameType multiplayerGameType);
    // public System.Void ClearDisconnectedState()
    // Offset: 0x2098CC0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::ClearDisconnectedState()
    void ClearDisconnectedState();
    // public System.Void StartGame()
    // Offset: 0x20994D8
    // Implemented from: ILobbyHostGameStateController
    // Base method: System.Void ILobbyHostGameStateController::StartGame()
    void StartGame();
    // public System.Void CancelGame()
    // Offset: 0x2099AB4
    // Implemented from: ILobbyHostGameStateController
    // Base method: System.Void ILobbyHostGameStateController::CancelGame()
    void CancelGame();
    // public System.Void .ctor()
    // Offset: 0x209B244
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LobbyGameStateController* New_ctor();
  }; // LobbyGameStateController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameStateController*, "", "LobbyGameStateController");
#pragma pack(pop)
