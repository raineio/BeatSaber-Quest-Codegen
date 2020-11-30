// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ClientGameServerLobbyFlowCoordinator
#include "GlobalNamespace/ClientGameServerLobbyFlowCoordinator.hpp"
// Including type: ClientGameServerLobbyFlowCoordinator/<>c__DisplayClass14_0
#include "GlobalNamespace/ClientGameServerLobbyFlowCoordinator_--c__DisplayClass14_0.hpp"
// Including type: ClientLobbySetupViewController
#include "GlobalNamespace/ClientLobbySetupViewController.hpp"
// Including type: IUnifiedNetworkPlayerModel
#include "GlobalNamespace/IUnifiedNetworkPlayerModel.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: MultiplayerLevelScenesTransitionSetupDataSO
#include "GlobalNamespace/MultiplayerLevelScenesTransitionSetupDataSO.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: HMUI.ViewController/AnimationType
#include "HMUI/ViewController_AnimationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.add_didFinishedEvent
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::add_didFinishedEvent(System::Action_1<GlobalNamespace::ClientGameServerLobbyFlowCoordinator*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("add_didFinishedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_didFinishedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.remove_didFinishedEvent
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::remove_didFinishedEvent(System::Action_1<GlobalNamespace::ClientGameServerLobbyFlowCoordinator*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("remove_didFinishedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_didFinishedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbyPlayersDataModelDidChange
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbyPlayersDataModelDidChange(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbyPlayersDataModelDidChange");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbyPlayersDataModelDidChange", {}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.SetServerLevelGameplaySetupDataToViews
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::SetServerLevelGameplaySetupDataToViews(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("SetServerLevelGameplaySetupDataToViews");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetServerLevelGameplaySetupDataToViews", {}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.SetLocalPlayerDataModelToViews
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::SetLocalPlayerDataModelToViews(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("SetLocalPlayerDataModelToViews");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetLocalPlayerDataModelToViews", {}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleMenuRpcManagerSetMultiplayerGameState
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleMenuRpcManagerSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState gameState) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleMenuRpcManagerSetMultiplayerGameState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleMenuRpcManagerSetMultiplayerGameState", {}, ::il2cpp_utils::ExtractTypes(userId, gameState)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, gameState);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleClientLobbySetupViewControllerClientSetReady
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleClientLobbySetupViewControllerClientSetReady(bool isReady) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleClientLobbySetupViewControllerClientSetReady");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleClientLobbySetupViewControllerClientSetReady", {}, ::il2cpp_utils::ExtractTypes(isReady)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, isReady);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleClientLobbySetupViewControllerPlayerActiveStateChanged
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleClientLobbySetupViewControllerPlayerActiveStateChanged(bool isActive) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleClientLobbySetupViewControllerPlayerActiveStateChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleClientLobbySetupViewControllerPlayerActiveStateChanged", {}, ::il2cpp_utils::ExtractTypes(isActive)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, isActive);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleServerPlayerListControllerSelectSuggestedLevel
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleServerPlayerListControllerSelectSuggestedLevel(::Il2CppString* levelId, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleServerPlayerListControllerSelectSuggestedLevel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleServerPlayerListControllerSelectSuggestedLevel", {}, ::il2cpp_utils::ExtractTypes(levelId, beatmapCharacteristic, beatmapDifficulty)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, levelId, beatmapCharacteristic, beatmapDifficulty);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleServerPlayerListControllerSelectSuggestedGameplayModifiers
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleServerPlayerListControllerSelectSuggestedGameplayModifiers(GlobalNamespace::GameplayModifiers* modifiers) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleServerPlayerListControllerSelectSuggestedGameplayModifiers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleServerPlayerListControllerSelectSuggestedGameplayModifiers", {}, ::il2cpp_utils::ExtractTypes(modifiers)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, modifiers);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleClientLobbySetupViewControllerClearSelectedBeatmap
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleClientLobbySetupViewControllerClearSelectedBeatmap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleClientLobbySetupViewControllerClearSelectedBeatmap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleClientLobbySetupViewControllerClearSelectedBeatmap", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleClientLobbySetupViewControllerClearSelectedModifiers
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleClientLobbySetupViewControllerClearSelectedModifiers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleClientLobbySetupViewControllerClearSelectedModifiers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleClientLobbySetupViewControllerClearSelectedModifiers", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerStartTimeChanged
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerStartTimeChanged() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbyGameStateControllerStartTimeChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbyGameStateControllerStartTimeChanged", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStartCancelled
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStartCancelled() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbyGameStateControllerGameStartCancelled");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbyGameStateControllerGameStartCancelled", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStarted
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStarted() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbyGameStateControllerGameStarted");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbyGameStateControllerGameStarted", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerGameStartedPresentView
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerGameStartedPresentView() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbyGameStateControllerGameStartedPresentView");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbyGameStateControllerGameStartedPresentView", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerSongStillDownloading
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerSongStillDownloading() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbyGameStateControllerSongStillDownloading");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbyGameStateControllerSongStillDownloading", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbyGameBeforeSceneSwitchCallback
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbyGameBeforeSceneSwitchCallback() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbyGameBeforeSceneSwitchCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbyGameBeforeSceneSwitchCallback", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.SetupGameStarting
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::SetupGameStarting() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("SetupGameStarting");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetupGameStarting", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.DismissViewControllersAndCoordinators
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::DismissViewControllersAndCoordinators() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("DismissViewControllersAndCoordinators");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DismissViewControllersAndCoordinators", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.DidActivate
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("DidActivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DidActivate", {}, ::il2cpp_utils::ExtractTypes(firstActivation, addedToHierarchy, screenSystemEnabling)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.DidDeactivate
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("DidDeactivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DidDeactivate", {}, ::il2cpp_utils::ExtractTypes(removedFromHierarchy, screenSystemDisabling)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, removedFromHierarchy, screenSystemDisabling);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.TopViewControllerWillChange
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("TopViewControllerWillChange");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "TopViewControllerWillChange", {}, ::il2cpp_utils::ExtractTypes(oldViewController, newViewController, animationType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, oldViewController, newViewController, animationType);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.BackButtonWasPressed
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::BackButtonWasPressed(HMUI::ViewController* topViewController) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("BackButtonWasPressed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "BackButtonWasPressed", {}, ::il2cpp_utils::ExtractTypes(topViewController)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, topViewController);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.InitialViewControllerWasPresented
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::InitialViewControllerWasPresented() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("InitialViewControllerWasPresented");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "InitialViewControllerWasPresented", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.TransitionDidStart
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::TransitionDidStart() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("TransitionDidStart");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "TransitionDidStart", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.TransitionDidFinish
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::TransitionDidFinish() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("TransitionDidFinish");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "TransitionDidFinish", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbySetupViewControllerSelectBeatmap
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbySetupViewControllerSelectBeatmap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbySetupViewControllerSelectBeatmap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbySetupViewControllerSelectBeatmap", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.HandleLobbyGameStateControllerLevelFinished
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::HandleLobbyGameStateControllerLevelFinished(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* myCompletionResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* othersCompletionResults) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("HandleLobbyGameStateControllerLevelFinished");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLobbyGameStateControllerLevelFinished", {}, ::il2cpp_utils::ExtractTypes(multiplayerLevelScenesTransitionSetupData, myCompletionResults, othersCompletionResults)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, multiplayerLevelScenesTransitionSetupData, myCompletionResults, othersCompletionResults);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator.Finish
void GlobalNamespace::ClientGameServerLobbyFlowCoordinator::Finish(System::Action* finishedCallback, bool withFadeOut) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext("Finish");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Finish", {}, ::il2cpp_utils::ExtractTypes(finishedCallback, withFadeOut)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, finishedCallback, withFadeOut);
}
// Autogenerated method: ClientGameServerLobbyFlowCoordinator..ctor
GlobalNamespace::ClientGameServerLobbyFlowCoordinator* GlobalNamespace::ClientGameServerLobbyFlowCoordinator::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ClientGameServerLobbyFlowCoordinator").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ClientGameServerLobbyFlowCoordinator*>());
}