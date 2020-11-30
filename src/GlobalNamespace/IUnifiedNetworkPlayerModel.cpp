// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IUnifiedNetworkPlayerModel
#include "GlobalNamespace/IUnifiedNetworkPlayerModel.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: GameplayServerFilter
#include "GlobalNamespace/GameplayServerFilter.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IUnifiedNetworkPlayerModel.add_partyRefreshingEvent
void GlobalNamespace::IUnifiedNetworkPlayerModel::add_partyRefreshingEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("add_partyRefreshingEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_partyRefreshingEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.remove_partyRefreshingEvent
void GlobalNamespace::IUnifiedNetworkPlayerModel::remove_partyRefreshingEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("remove_partyRefreshingEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_partyRefreshingEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_localPlayer
GlobalNamespace::INetworkPlayer* GlobalNamespace::IUnifiedNetworkPlayerModel::get_localPlayer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_localPlayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::INetworkPlayer*>(), "get_localPlayer", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::INetworkPlayer*, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_enableLocalNetwork
bool GlobalNamespace::IUnifiedNetworkPlayerModel::get_enableLocalNetwork() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_enableLocalNetwork");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_enableLocalNetwork", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.set_enableLocalNetwork
void GlobalNamespace::IUnifiedNetworkPlayerModel::set_enableLocalNetwork(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("set_enableLocalNetwork");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_enableLocalNetwork", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_publicServers
System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GlobalNamespace::IUnifiedNetworkPlayerModel::get_publicServers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_publicServers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*>(), "get_publicServers", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_localNetworkPlayers
System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GlobalNamespace::IUnifiedNetworkPlayerModel::get_localNetworkPlayers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_localNetworkPlayers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*>(), "get_localNetworkPlayers", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_serverFilter
GlobalNamespace::GameplayServerFilter GlobalNamespace::IUnifiedNetworkPlayerModel::get_serverFilter() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_serverFilter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::GameplayServerFilter>(), "get_serverFilter", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::GameplayServerFilter, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.SetServerFilter
void GlobalNamespace::IUnifiedNetworkPlayerModel::SetServerFilter(GlobalNamespace::GameplayServerFilter filter) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("SetServerFilter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetServerFilter", {}, ::il2cpp_utils::ExtractTypes(filter)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, filter);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.JoinMatchmaking
void GlobalNamespace::IUnifiedNetworkPlayerModel::JoinMatchmaking(GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("JoinMatchmaking");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "JoinMatchmaking", {}, ::il2cpp_utils::ExtractTypes(configuration, secret)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, configuration, secret);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.ConnectToServerWithCode
void GlobalNamespace::IUnifiedNetworkPlayerModel::ConnectToServerWithCode(::Il2CppString* serverCode, ::Il2CppString* serverPassword) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("ConnectToServerWithCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ConnectToServerWithCode", {}, ::il2cpp_utils::ExtractTypes(serverCode, serverPassword)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, serverCode, serverPassword);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.ResetMasterServerReachability
void GlobalNamespace::IUnifiedNetworkPlayerModel::ResetMasterServerReachability() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("ResetMasterServerReachability");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ResetMasterServerReachability", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_userId
::Il2CppString* GlobalNamespace::IUnifiedNetworkPlayerModel::get_userId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_userId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userId", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_userName
::Il2CppString* GlobalNamespace::IUnifiedNetworkPlayerModel::get_userName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_userName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_secret
::Il2CppString* GlobalNamespace::IUnifiedNetworkPlayerModel::get_secret() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_secret");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_secret", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: IUnifiedNetworkPlayerModel.get_code
::Il2CppString* GlobalNamespace::IUnifiedNetworkPlayerModel::get_code() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("IUnifiedNetworkPlayerModel").WithContext("get_code");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_code", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}