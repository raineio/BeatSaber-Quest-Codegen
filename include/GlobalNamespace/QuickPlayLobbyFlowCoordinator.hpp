// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: MultiplayerLevelSelectionFlowCoordinator
  class MultiplayerLevelSelectionFlowCoordinator;
  // Forward declaring type: QuickPlaySetupViewController
  class QuickPlaySetupViewController;
  // Forward declaring type: GameplaySetupViewController
  class GameplaySetupViewController;
  // Forward declaring type: ServerPlayerListController
  class ServerPlayerListController;
  // Forward declaring type: MultiplayerResultsViewController
  class MultiplayerResultsViewController;
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
  // Forward declaring type: ConnectionErrorDialogViewController
  class ConnectionErrorDialogViewController;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLobbyController
  class MultiplayerLobbyController;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: ILobbyGameStateController
  class ILobbyGameStateController;
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: IUnifiedNetworkPlayerModel
  class IUnifiedNetworkPlayerModel;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel;
  // Forward declaring type: CenterStageScreenController
  class CenterStageScreenController;
  // Skipping declaration: BeatmapLevelsModel because it is already included!
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: MultiplayerGameState
  struct MultiplayerGameState;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScreenModeSO
  class ScreenModeSO;
  // Forward declaring type: ScreenModeController
  class ScreenModeController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
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
  // Autogenerated type: QuickPlayLobbyFlowCoordinator
  class QuickPlayLobbyFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::QuickPlayLobbyFlowCoordinator::$$c__DisplayClass55_0
    class $$c__DisplayClass55_0;
    // private HMUI.ScreenModeSO _screenMode
    // Offset: 0xA8
    HMUI::ScreenModeSO* screenMode;
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Offset: 0xB0
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // private readonly MultiplayerLevelSelectionFlowCoordinator _multiplayerLevelSelectionFlowCoordinator
    // Offset: 0xB8
    GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* multiplayerLevelSelectionFlowCoordinator;
    // private readonly QuickPlaySetupViewController _quickPlaySetupViewController
    // Offset: 0xC0
    GlobalNamespace::QuickPlaySetupViewController* quickPlaySetupViewController;
    // private readonly GameplaySetupViewController _gameplaySetupViewController
    // Offset: 0xC8
    GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController;
    // private readonly ServerPlayerListController _serverPlayerListController
    // Offset: 0xD0
    GlobalNamespace::ServerPlayerListController* serverPlayerListController;
    // private readonly MultiplayerResultsViewController _multiplayerResultsViewController
    // Offset: 0xD8
    GlobalNamespace::MultiplayerResultsViewController* multiplayerResultsViewController;
    // private readonly SimpleDialogPromptViewController _simpleDialogPromptViewController
    // Offset: 0xE0
    GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController;
    // private readonly ConnectionErrorDialogViewController _connectionErrorDialogViewController
    // Offset: 0xE8
    GlobalNamespace::ConnectionErrorDialogViewController* connectionErrorDialogViewController;
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0xF0
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly MultiplayerLobbyController _multiplayerLobbyController
    // Offset: 0xF8
    GlobalNamespace::MultiplayerLobbyController* multiplayerLobbyController;
    // private readonly FadeInOutController _fadeInOutController
    // Offset: 0x100
    GlobalNamespace::FadeInOutController* fadeInOutController;
    // private readonly HMUI.ScreenModeController _screenModeController
    // Offset: 0x108
    HMUI::ScreenModeController* screenModeController;
    // private readonly ILobbyGameStateController _lobbyGameStateController
    // Offset: 0x110
    GlobalNamespace::ILobbyGameStateController* lobbyGameStateController;
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Offset: 0x118
    GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Offset: 0x120
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Offset: 0x128
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // private readonly IMenuRpcManager _menuRpcManager
    // Offset: 0x130
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // private readonly PlayerDataModel _playerDataModel
    // Offset: 0x138
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private readonly PlatformLeaderboardsModel _platformLeaderboardsModel
    // Offset: 0x140
    GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel;
    // private readonly CenterStageScreenController _centerStageScreenController
    // Offset: 0x148
    GlobalNamespace::CenterStageScreenController* centerStageScreenController;
    // private readonly BeatmapLevelsModel _beatmapLevelsModel
    // Offset: 0x150
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // private System.Action didFinishedEvent
    // Offset: 0x158
    System::Action* didFinishedEvent;
    // private LevelSelectionFlowCoordinator/State _lastSimpleLevelSelectionFlowCoordinatorState
    // Offset: 0x160
    GlobalNamespace::LevelSelectionFlowCoordinator::State* lastSimpleLevelSelectionFlowCoordinatorState;
    // private System.Boolean _isAlreadyFinishing
    // Offset: 0x168
    bool isAlreadyFinishing;
    // public System.Void add_didFinishedEvent(System.Action value)
    // Offset: 0x2069B08
    void add_didFinishedEvent(System::Action* value);
    // public System.Void remove_didFinishedEvent(System.Action value)
    // Offset: 0x2069BB0
    void remove_didFinishedEvent(System::Action* value);
    // private System.Void HandleLobbyPlayersDataModelDidChange(System.String userId)
    // Offset: 0x206C384
    void HandleLobbyPlayersDataModelDidChange(::Il2CppString* userId);
    // private System.Void HandleQuickPlaySetupViewControllerSetPlayerReady(System.Boolean isReady)
    // Offset: 0x206C388
    void HandleQuickPlaySetupViewControllerSetPlayerReady(bool isReady);
    // private System.Void HandleQuickPlaySetupViewControllerSuggestBeatmap()
    // Offset: 0x206C44C
    void HandleQuickPlaySetupViewControllerSuggestBeatmap();
    // private System.Void HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel(LevelSelectionFlowCoordinator/State state)
    // Offset: 0x206C620
    void HandleMultiplayerLevelSelectionFlowCoordinatorDidSelectLevel(GlobalNamespace::LevelSelectionFlowCoordinator::State* state);
    // private System.Void HandleMultiplayerLevelSelectionFlowCoordinatorDidFinish()
    // Offset: 0x206C96C
    void HandleMultiplayerLevelSelectionFlowCoordinatorDidFinish();
    // private System.Void HandleQuickPlaySetupViewControllerDeleteSuggestedBeatmap()
    // Offset: 0x206C9B0
    void HandleQuickPlaySetupViewControllerDeleteSuggestedBeatmap();
    // private System.Void HandleServerPlayerListControllerSelectSuggestedBeatmap(System.String levelId, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x206CA64
    void HandleServerPlayerListControllerSelectSuggestedBeatmap(::Il2CppString* levelId, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // private System.Void HandleLobbyGameStateControllerLobbyDisconnected()
    // Offset: 0x206CB40
    void HandleLobbyGameStateControllerLobbyDisconnected();
    // private System.Void HandleLobbyGameStateControllerGameStarted()
    // Offset: 0x206CC00
    void HandleLobbyGameStateControllerGameStarted();
    // private System.Void HandleLobbyGameStateControllerGameStartedPresentView()
    // Offset: 0x206CE34
    void HandleLobbyGameStateControllerGameStartedPresentView();
    // private System.Void HandleLobbyGameStateControllerCountdownStarted()
    // Offset: 0x206CEFC
    void HandleLobbyGameStateControllerCountdownStarted();
    // private System.Void HandleLobbyGameStateControllerCountdownCancelled()
    // Offset: 0x206CFC4
    void HandleLobbyGameStateControllerCountdownCancelled();
    // private System.Void HandleLobbyGameStateControllerSongStillDownloading()
    // Offset: 0x206CFE4
    void HandleLobbyGameStateControllerSongStillDownloading();
    // private System.Void HandleMenuRpcManagerSetMultiplayerGameState(System.String userId, MultiplayerGameState gameState)
    // Offset: 0x206CFE8
    void HandleMenuRpcManagerSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState gameState);
    // private System.Void HandleLobbyGameStateControllerLevelFinished(MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, LevelCompletionResults myCompletionResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> othersCompletionResults)
    // Offset: 0x206D1F8
    void HandleLobbyGameStateControllerLevelFinished(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* myCompletionResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* othersCompletionResults);
    // private System.Void HandleLobbyGameStateControllerLevelDidGetDisconnected(DisconnectedReason disconnectedReason)
    // Offset: 0x206D794
    void HandleLobbyGameStateControllerLevelDidGetDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void HandleLobbyGameStateControllerBeforeSceneSwitch()
    // Offset: 0x206D798
    void HandleLobbyGameStateControllerBeforeSceneSwitch();
    // private System.Void HandleMultiplayerResultsViewControllerBackToLobbyPressed(MultiplayerResultsViewController multiplayerResultsViewController)
    // Offset: 0x206D874
    void HandleMultiplayerResultsViewControllerBackToLobbyPressed(GlobalNamespace::MultiplayerResultsViewController* multiplayerResultsViewController);
    // private System.Void SetupGameStarting()
    // Offset: 0x206CC04
    void SetupGameStarting();
    // private System.Void SetLocalPlayerDataModelToViews(System.String userId)
    // Offset: 0x206A80C
    void SetLocalPlayerDataModelToViews(::Il2CppString* userId);
    // private System.Void PresentBackButtonConfirmationDialog()
    // Offset: 0x206B71C
    void PresentBackButtonConfirmationDialog();
    // private System.Void Finish(System.Action finishedCallback, System.Boolean withFadeOut)
    // Offset: 0x206D5E8
    void Finish(System::Action* finishedCallback, bool withFadeOut);
    // private System.Void DismissViewControllersAndCoordinators()
    // Offset: 0x206DADC
    void DismissViewControllersAndCoordinators();
    // private System.Void ShowDisconnectDialogAndFinish(DisconnectedReason disconnectedReason)
    // Offset: 0x206C23C
    void ShowDisconnectDialogAndFinish(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void <PresentBackButtonConfirmationDialog>b__54_0(System.Int32 btnIndex)
    // Offset: 0x206DBF4
    void $PresentBackButtonConfirmationDialog$b__54_0(int btnIndex);
    // private System.Void <ShowDisconnectDialogAndFinish>b__57_0()
    // Offset: 0x206DD38
    void $ShowDisconnectDialogAndFinish$b__57_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x2069C58
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x206AABC
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x206B518
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x206B66C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // protected override System.Void InitialViewControllerWasPresented()
    // Offset: 0x206B920
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::InitialViewControllerWasPresented()
    void InitialViewControllerWasPresented();
    // protected override System.Void TransitionDidStart()
    // Offset: 0x206BB24
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TransitionDidStart()
    void TransitionDidStart();
    // protected override System.Void TransitionDidFinish()
    // Offset: 0x206BD74
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TransitionDidFinish()
    void TransitionDidFinish();
    // public System.Void .ctor()
    // Offset: 0x206DBEC
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static QuickPlayLobbyFlowCoordinator* New_ctor();
  }; // QuickPlayLobbyFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlayLobbyFlowCoordinator*, "", "QuickPlayLobbyFlowCoordinator");
#pragma pack(pop)
