// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongStartHandler
#include "GlobalNamespace/SongStartHandler.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: IGameplayRpcManager
#include "GlobalNamespace/IGameplayRpcManager.hpp"
// Including type: PlayersAtGameStartModel
#include "GlobalNamespace/PlayersAtGameStartModel.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kFixedStartDelay
float GlobalNamespace::SongStartHandler::_get_kFixedStartDelay() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("_get_kFixedStartDelay");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "SongStartHandler", "kFixedStartDelay"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kFixedStartDelay
void GlobalNamespace::SongStartHandler::_set_kFixedStartDelay(float value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("_set_kFixedStartDelay");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SongStartHandler", "kFixedStartDelay", value));
}
// Autogenerated method: SongStartHandler.get_songStartSyncTime
float GlobalNamespace::SongStartHandler::get_songStartSyncTime() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("get_songStartSyncTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_songStartSyncTime", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: SongStartHandler.add_setSongStartSyncTimeEvent
void GlobalNamespace::SongStartHandler::add_setSongStartSyncTimeEvent(System::Action_1<float>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("add_setSongStartSyncTimeEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_setSongStartSyncTimeEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: SongStartHandler.remove_setSongStartSyncTimeEvent
void GlobalNamespace::SongStartHandler::remove_setSongStartSyncTimeEvent(System::Action_1<float>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("remove_setSongStartSyncTimeEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_setSongStartSyncTimeEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: SongStartHandler..ctor
GlobalNamespace::SongStartHandler* GlobalNamespace::SongStartHandler::New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SongStartHandler*>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel));
}
// Autogenerated method: SongStartHandler.GetLevelStartTimeOffset
void GlobalNamespace::SongStartHandler::GetLevelStartTimeOffset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("GetLevelStartTimeOffset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "GetLevelStartTimeOffset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: SongStartHandler.ForceStart
void GlobalNamespace::SongStartHandler::ForceStart() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("ForceStart");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ForceStart", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: SongStartHandler.StartSong
void GlobalNamespace::SongStartHandler::StartSong() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("StartSong");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "StartSong", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: SongStartHandler.HandleSetGameplaySongReady
void GlobalNamespace::SongStartHandler::HandleSetGameplaySongReady(::Il2CppString* user) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("HandleSetGameplaySongReady");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSetGameplaySongReady", {}, ::il2cpp_utils::ExtractTypes(user)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, user);
}
// Autogenerated method: SongStartHandler.HandleGetGameplaySongReady
void GlobalNamespace::SongStartHandler::HandleGetGameplaySongReady(::Il2CppString* user) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("HandleGetGameplaySongReady");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleGetGameplaySongReady", {}, ::il2cpp_utils::ExtractTypes(user)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, user);
}
// Autogenerated method: SongStartHandler.HandleSetSongStartTime
void GlobalNamespace::SongStartHandler::HandleSetSongStartTime(::Il2CppString* user, float time) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("HandleSetSongStartTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSetSongStartTime", {}, ::il2cpp_utils::ExtractTypes(user, time)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, user, time);
}
// Autogenerated method: SongStartHandler.Log
void GlobalNamespace::SongStartHandler::Log(::Il2CppString* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("Log");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Log", {}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}
// Autogenerated method: SongStartHandler.Dispose
void GlobalNamespace::SongStartHandler::Dispose() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SongStartHandler").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Dispose", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
void GlobalNamespace::SongStartHandler::System_IDisposable_Dispose() {
  GlobalNamespace::SongStartHandler::Dispose();
}