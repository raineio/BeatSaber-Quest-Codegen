// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerScoreRingManager
#include "GlobalNamespace/MultiplayerScoreRingManager.hpp"
// Including type: MultiplayerScoreRingItem/Pool
#include "GlobalNamespace/MultiplayerScoreRingItem_Pool.hpp"
// Including type: MultiplayerPlayersManager
#include "GlobalNamespace/MultiplayerPlayersManager.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: BeatmapObjectSpawnCenter
#include "GlobalNamespace/BeatmapObjectSpawnCenter.hpp"
// Including type: MultiplayerLayoutProvider
#include "GlobalNamespace/MultiplayerLayoutProvider.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
// Including type: MultiplayerController/State
#include "GlobalNamespace/MultiplayerController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerScoreRingManager.Start
void GlobalNamespace::MultiplayerScoreRingManager::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerScoreRingManager.OnDestroy
void GlobalNamespace::MultiplayerScoreRingManager::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerScoreRingManager.Update
void GlobalNamespace::MultiplayerScoreRingManager::Update() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Update", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerScoreRingManager.UpdateScore
void GlobalNamespace::MultiplayerScoreRingManager::UpdateScore(GlobalNamespace::IConnectedPlayer* playerToUpdate) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("UpdateScore");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "UpdateScore", {}, ::il2cpp_utils::ExtractTypes(playerToUpdate)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, playerToUpdate);
}
// Autogenerated method: MultiplayerScoreRingManager.AnimateColorsForPlayer
void GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer(::Il2CppString* userId, UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float duration, Tweening::EaseType easeType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("AnimateColorsForPlayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AnimateColorsForPlayer", {}, ::il2cpp_utils::ExtractTypes(userId, nameColor, scoreColor, duration, easeType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, nameColor, scoreColor, duration, easeType);
}
// Autogenerated method: MultiplayerScoreRingManager.AnimateColorsForAllPlayers
void GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers(UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float duration, Tweening::EaseType easeType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("AnimateColorsForAllPlayers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AnimateColorsForAllPlayers", {}, ::il2cpp_utils::ExtractTypes(nameColor, scoreColor, duration, easeType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, nameColor, scoreColor, duration, easeType);
}
// Autogenerated method: MultiplayerScoreRingManager.SetPlayerToFailedState
void GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("SetPlayerToFailedState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetPlayerToFailedState", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: MultiplayerScoreRingManager.TrySpawnTexts
void GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("TrySpawnTexts");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "TrySpawnTexts", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerScoreRingManager.SpawnTexts
void GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("SpawnTexts");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SpawnTexts", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerScoreRingManager.HandleStateChanged
void GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged(GlobalNamespace::MultiplayerController::State state) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("HandleStateChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleStateChanged", {}, ::il2cpp_utils::ExtractTypes(state)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, state);
}
// Autogenerated method: MultiplayerScoreRingManager.HandleSpawnCenterDistanceWasFound
void GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound(float spawnCenterDistance) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("HandleSpawnCenterDistanceWasFound");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSpawnCenterDistanceWasFound", {}, ::il2cpp_utils::ExtractTypes(spawnCenterDistance)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, spawnCenterDistance);
}
// Autogenerated method: MultiplayerScoreRingManager.HandlePlayerSpawningDidFinish
void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("HandlePlayerSpawningDidFinish");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerSpawningDidFinish", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerScoreRingManager.HandlePlayerStateChanged
void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("HandlePlayerStateChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerStateChanged", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: MultiplayerScoreRingManager.HandlePlayerDisconnected
void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext("HandlePlayerDisconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerDisconnected", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: MultiplayerScoreRingManager..ctor
GlobalNamespace::MultiplayerScoreRingManager* GlobalNamespace::MultiplayerScoreRingManager::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerScoreRingManager").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerScoreRingManager*>());
}