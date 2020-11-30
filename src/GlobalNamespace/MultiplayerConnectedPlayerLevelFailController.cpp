// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MultiplayerConnectedPlayerLevelFailController
#include "GlobalNamespace/MultiplayerConnectedPlayerLevelFailController.hpp"
// Including type: VFXController
#include "GlobalNamespace/VFXController.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: BeatmapObjectSpawnController
#include "GlobalNamespace/BeatmapObjectSpawnController.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: System.Action
#include "System/Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerConnectedPlayerLevelFailController.add_playerDidFailEvent
void GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::add_playerDidFailEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerConnectedPlayerLevelFailController").WithContext("add_playerDidFailEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_playerDidFailEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerConnectedPlayerLevelFailController.remove_playerDidFailEvent
void GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::remove_playerDidFailEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerConnectedPlayerLevelFailController").WithContext("remove_playerDidFailEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_playerDidFailEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerConnectedPlayerLevelFailController.Start
void GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerConnectedPlayerLevelFailController").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerConnectedPlayerLevelFailController.OnDestroy
void GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerConnectedPlayerLevelFailController").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerConnectedPlayerLevelFailController.CheckIfPlayerFailed
void GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::CheckIfPlayerFailed(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerConnectedPlayerLevelFailController").WithContext("CheckIfPlayerFailed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "CheckIfPlayerFailed", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: MultiplayerConnectedPlayerLevelFailController.HandlePlayerDisconnected
void GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerConnectedPlayerLevelFailController").WithContext("HandlePlayerDisconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerDisconnected", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: MultiplayerConnectedPlayerLevelFailController.HandlePlayerStateChanged
void GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerConnectedPlayerLevelFailController").WithContext("HandlePlayerStateChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerStateChanged", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: MultiplayerConnectedPlayerLevelFailController..ctor
GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerConnectedPlayerLevelFailController").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerConnectedPlayerLevelFailController*>());
}