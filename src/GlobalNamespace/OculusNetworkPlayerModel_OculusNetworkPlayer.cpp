// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusNetworkPlayerModel/OculusNetworkPlayer
#include "GlobalNamespace/OculusNetworkPlayerModel_OculusNetworkPlayer.hpp"
// Including type: Oculus.Platform.Models.Room
#include "Oculus/Platform/Models/Room.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_id
uint64_t GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_id() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_id");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<uint64_t>(), "get_id", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint64_t, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isPartyOwner
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isPartyOwner() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isPartyOwner");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isPartyOwner", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isRoomOwner
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isRoomOwner() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isRoomOwner");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isRoomOwner", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer..ctor
GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::New_ctor(GlobalNamespace::OculusNetworkPlayerModel* playerModel, uint64_t id, ::Il2CppString* userName, bool isMe) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<OculusNetworkPlayerModel::OculusNetworkPlayer*>(playerModel, id, userName, isMe));
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.set_isPlayer
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isPlayer(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("set_isPlayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_isPlayer", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.set_isSpectating
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isSpectating(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("set_isSpectating");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_isSpectating", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.set_isDedicatedServer
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isDedicatedServer(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("set_isDedicatedServer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_isDedicatedServer", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.set_isConnected
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isConnected(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("set_isConnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_isConnected", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.set_isWaitingOnJoin
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isWaitingOnJoin(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("set_isWaitingOnJoin");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_isWaitingOnJoin", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.set_isWaitingOnInvite
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isWaitingOnInvite(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("set_isWaitingOnInvite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_isWaitingOnInvite", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.SameRoomAs
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SameRoomAs(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("SameRoomAs");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "SameRoomAs", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.<Join>b__53_0
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::$Join$b__53_0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("<Join>b__53_0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<Join>b__53_0", {}, ::il2cpp_utils::ExtractTypes(result))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_userId
::Il2CppString* GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_userId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_userId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userId", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
::Il2CppString* GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::GlobalNamespace_INetworkPlayer_get_userId() {
  return GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_userId();
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_userName
::Il2CppString* GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_userName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_userName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
::Il2CppString* GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::GlobalNamespace_INetworkPlayer_get_userName() {
  return GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_userName();
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isMe
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isMe() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isMe");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isMe", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_currentPartySize
int GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_currentPartySize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_currentPartySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_currentPartySize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_maxPartySize
int GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_maxPartySize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_maxPartySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_maxPartySize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_difficulties
GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_difficulties() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_difficulties");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::BeatmapDifficultyMask>(), "get_difficulties", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::BeatmapDifficultyMask, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_modifiers
GlobalNamespace::GameplayModifierMask GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_modifiers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_modifiers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::GameplayModifierMask>(), "get_modifiers", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::GameplayModifierMask, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_songPacks
GlobalNamespace::SongPackMask GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_songPacks() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_songPacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::SongPackMask>(), "get_songPacks", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::SongPackMask, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isMyPartyOwner
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isMyPartyOwner() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isMyPartyOwner");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isMyPartyOwner", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isOpenParty
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isOpenParty() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isOpenParty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isOpenParty", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isPlayer
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isPlayer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isPlayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isPlayer", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isSpectating
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isSpectating() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isSpectating");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isSpectating", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isDedicatedServer
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isDedicatedServer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isDedicatedServer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isDedicatedServer", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isConnected
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isConnected() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isConnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isConnected", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_canJoin
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canJoin() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_canJoin");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_canJoin", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.Join
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Join() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("Join");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Join", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_requiresPassword
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_requiresPassword() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_requiresPassword");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_requiresPassword", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.Join
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Join(::Il2CppString* password) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("Join");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Join", {}, ::il2cpp_utils::ExtractTypes(password)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, password);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isWaitingOnJoin
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isWaitingOnJoin() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isWaitingOnJoin");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isWaitingOnJoin", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_canInvite
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canInvite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_canInvite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_canInvite", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.Invite
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Invite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("Invite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Invite", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_isWaitingOnInvite
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isWaitingOnInvite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_isWaitingOnInvite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isWaitingOnInvite", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_canKick
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canKick() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_canKick");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_canKick", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.Kick
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Kick() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("Kick");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Kick", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_canLeave
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canLeave() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_canLeave");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_canLeave", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.Leave
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Leave() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("Leave");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Leave", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_canBlock
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canBlock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_canBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_canBlock", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.Block
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Block() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("Block");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Block", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.get_canUnblock
bool GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canUnblock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("get_canUnblock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_canUnblock", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.Unblock
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Unblock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("Unblock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Unblock", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.SendJoinResponse
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SendJoinResponse(bool accept) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("SendJoinResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SendJoinResponse", {}, ::il2cpp_utils::ExtractTypes(accept)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, accept);
}
// Autogenerated method: OculusNetworkPlayerModel/OculusNetworkPlayer.SendInviteResponse
void GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SendInviteResponse(bool accept) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusNetworkPlayer").WithContext("SendInviteResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SendInviteResponse", {}, ::il2cpp_utils::ExtractTypes(accept)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, accept);
}