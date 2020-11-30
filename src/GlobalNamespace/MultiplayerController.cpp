// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: MultiplayerController/<PerformSongStartSync>d__31
#include "GlobalNamespace/MultiplayerController_-PerformSongStartSync-d__31.hpp"
// Including type: MultiplayerController/<>c__DisplayClass36_0
#include "GlobalNamespace/MultiplayerController_--c__DisplayClass36_0.hpp"
// Including type: MultiplayerController/<>c
#include "GlobalNamespace/MultiplayerController_--c.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: MultiplayerLevelScenesTransitionSetupDataSO
#include "GlobalNamespace/MultiplayerLevelScenesTransitionSetupDataSO.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
// Including type: MultiplayerPlayersManager
#include "GlobalNamespace/MultiplayerPlayersManager.hpp"
// Including type: SceneStartSyncController
#include "GlobalNamespace/SceneStartSyncController.hpp"
// Including type: SongStartSyncController
#include "GlobalNamespace/SongStartSyncController.hpp"
// Including type: MultiplayerLevelFinishedController
#include "GlobalNamespace/MultiplayerLevelFinishedController.hpp"
// Including type: FadeInOutController
#include "GlobalNamespace/FadeInOutController.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: LobbyGameState
#include "GlobalNamespace/LobbyGameState.hpp"
// Including type: MultiplayerIntroAnimationController
#include "GlobalNamespace/MultiplayerIntroAnimationController.hpp"
// Including type: MultiplayerOutroAnimationController
#include "GlobalNamespace/MultiplayerOutroAnimationController.hpp"
// Including type: IMenuRpcManager
#include "GlobalNamespace/IMenuRpcManager.hpp"
// Including type: IGameplayRpcManager
#include "GlobalNamespace/IGameplayRpcManager.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kSongTimeToSongStartSyncTimeOffset
float GlobalNamespace::MultiplayerController::_get_kSongTimeToSongStartSyncTimeOffset() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("_get_kSongTimeToSongStartSyncTimeOffset");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "MultiplayerController", "kSongTimeToSongStartSyncTimeOffset"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kSongTimeToSongStartSyncTimeOffset
void GlobalNamespace::MultiplayerController::_set_kSongTimeToSongStartSyncTimeOffset(float value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("_set_kSongTimeToSongStartSyncTimeOffset");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "MultiplayerController", "kSongTimeToSongStartSyncTimeOffset", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kMinAnimationDurationPercentage
float GlobalNamespace::MultiplayerController::_get_kMinAnimationDurationPercentage() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("_get_kMinAnimationDurationPercentage");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "MultiplayerController", "kMinAnimationDurationPercentage"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMinAnimationDurationPercentage
void GlobalNamespace::MultiplayerController::_set_kMinAnimationDurationPercentage(float value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("_set_kMinAnimationDurationPercentage");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "MultiplayerController", "kMinAnimationDurationPercentage", value));
}
// Autogenerated method: MultiplayerController.get_state
GlobalNamespace::MultiplayerController::State GlobalNamespace::MultiplayerController::get_state() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("get_state");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerController::State>(), "get_state", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerController::State, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.add_stateChangedEvent
void GlobalNamespace::MultiplayerController::add_stateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerController::State>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("add_stateChangedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_stateChangedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerController.remove_stateChangedEvent
void GlobalNamespace::MultiplayerController::remove_stateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerController::State>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("remove_stateChangedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_stateChangedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerController.Start
void GlobalNamespace::MultiplayerController::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.OnDestroy
void GlobalNamespace::MultiplayerController::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.HandleSetMultiplayerGameState
void GlobalNamespace::MultiplayerController::HandleSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState gameState) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleSetMultiplayerGameState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSetMultiplayerGameState", {}, ::il2cpp_utils::ExtractTypes(userId, gameState)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, gameState);
}
// Autogenerated method: MultiplayerController.StartSceneLoadSync
void GlobalNamespace::MultiplayerController::StartSceneLoadSync() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("StartSceneLoadSync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "StartSceneLoadSync", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.PerformSongStartSync
System::Collections::IEnumerator* GlobalNamespace::MultiplayerController::PerformSongStartSync(GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("PerformSongStartSync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IEnumerator*>(), "PerformSongStartSync", {}, ::il2cpp_utils::ExtractTypes(localPlayerSyncState)));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method, localPlayerSyncState);
}
// Autogenerated method: MultiplayerController.HandleDidSwitchPlayerToInactive
void GlobalNamespace::MultiplayerController::HandleDidSwitchPlayerToInactive() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleDidSwitchPlayerToInactive");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleDidSwitchPlayerToInactive", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.HandleSceneStartSyncControllerSyncStartDidSuccess
void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidSuccess() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleSceneStartSyncControllerSyncStartDidSuccess");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSceneStartSyncControllerSyncStartDidSuccess", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.HandleSceneStartSyncControllerSyncStartDidReceiveTooLate
void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidReceiveTooLate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleSceneStartSyncControllerSyncStartDidReceiveTooLate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSceneStartSyncControllerSyncStartDidReceiveTooLate", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.HandleSceneStartSyncControllerSyncStartDidFail
void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidFail() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleSceneStartSyncControllerSyncStartDidFail");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSceneStartSyncControllerSyncStartDidFail", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.HandleSongStartSyncControllerSyncStartSuccess
void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartSuccess(float introAnimationStartSyncTime) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleSongStartSyncControllerSyncStartSuccess");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSongStartSyncControllerSyncStartSuccess", {}, ::il2cpp_utils::ExtractTypes(introAnimationStartSyncTime)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, introAnimationStartSyncTime);
}
// Autogenerated method: MultiplayerController.HandleSongStartSyncControllerSyncResume
void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncResume(float introAnimationStartSyncTime) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleSongStartSyncControllerSyncResume");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSongStartSyncControllerSyncResume", {}, ::il2cpp_utils::ExtractTypes(introAnimationStartSyncTime)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, introAnimationStartSyncTime);
}
// Autogenerated method: MultiplayerController.HandleSongStartSyncControllerSyncStartFailed
void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartFailed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleSongStartSyncControllerSyncStartFailed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSongStartSyncControllerSyncStartFailed", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.StartGameplay
void GlobalNamespace::MultiplayerController::StartGameplay(float introAnimationStartSyncTime) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("StartGameplay");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "StartGameplay", {}, ::il2cpp_utils::ExtractTypes(introAnimationStartSyncTime)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, introAnimationStartSyncTime);
}
// Autogenerated method: MultiplayerController.HandleAllResultsCollected
void GlobalNamespace::MultiplayerController::HandleAllResultsCollected(GlobalNamespace::LevelCompletionResults* localPlayerResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayerResults) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleAllResultsCollected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleAllResultsCollected", {}, ::il2cpp_utils::ExtractTypes(localPlayerResults, otherPlayerResults)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, localPlayerResults, otherPlayerResults);
}
// Autogenerated method: MultiplayerController.HandleOutroAnimationDidFinish
void GlobalNamespace::MultiplayerController::HandleOutroAnimationDidFinish() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleOutroAnimationDidFinish");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleOutroAnimationDidFinish", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerController.HandleRpcReturnToMenu
void GlobalNamespace::MultiplayerController::HandleRpcReturnToMenu(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleRpcReturnToMenu");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleRpcReturnToMenu", {}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: MultiplayerController.HandleDisconnected
void GlobalNamespace::MultiplayerController::HandleDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("HandleDisconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleDisconnected", {}, ::il2cpp_utils::ExtractTypes(disconnectedReason)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, disconnectedReason);
}
// Autogenerated method: MultiplayerController.ChangeState
void GlobalNamespace::MultiplayerController::ChangeState(GlobalNamespace::MultiplayerController::State newState) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("ChangeState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ChangeState", {}, ::il2cpp_utils::ExtractTypes(newState)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, newState);
}
// Autogenerated method: MultiplayerController.GetCurrentSongTime
float GlobalNamespace::MultiplayerController::GetCurrentSongTime(float songStartSyncTime) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("GetCurrentSongTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "GetCurrentSongTime", {}, ::il2cpp_utils::ExtractTypes(songStartSyncTime)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method, songStartSyncTime);
}
// Autogenerated method: MultiplayerController.GetSongStartSyncTime
float GlobalNamespace::MultiplayerController::GetSongStartSyncTime(float introAnimationStartSyncTime) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext("GetSongStartSyncTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "GetSongStartSyncTime", {}, ::il2cpp_utils::ExtractTypes(introAnimationStartSyncTime)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method, introAnimationStartSyncTime);
}
// Autogenerated method: MultiplayerController..ctor
GlobalNamespace::MultiplayerController* GlobalNamespace::MultiplayerController::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerController").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerController*>());
}