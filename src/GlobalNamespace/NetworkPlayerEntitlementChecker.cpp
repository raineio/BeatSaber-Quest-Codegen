// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayerEntitlementChecker
#include "GlobalNamespace/NetworkPlayerEntitlementChecker.hpp"
// Including type: NetworkPlayerEntitlementChecker/CachedTcs
#include "GlobalNamespace/NetworkPlayerEntitlementChecker_CachedTcs.hpp"
// Including type: NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__15
#include "GlobalNamespace/NetworkPlayerEntitlementChecker_-HandleGetIsEntitledToLevel-d__15.hpp"
// Including type: NetworkPlayerEntitlementChecker/<GetPlayerLevelEntitlementsAsync>d__17
#include "GlobalNamespace/NetworkPlayerEntitlementChecker_-GetPlayerLevelEntitlementsAsync-d__17.hpp"
// Including type: NetworkPlayerEntitlementChecker/<GetCanPlayLevelAsync>d__18
#include "GlobalNamespace/NetworkPlayerEntitlementChecker_-GetCanPlayLevelAsync-d__18.hpp"
// Including type: NetworkPlayerEntitlementChecker/<GetEntitlementStatus>d__20
#include "GlobalNamespace/NetworkPlayerEntitlementChecker_-GetEntitlementStatus-d__20.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: IMenuRpcManager
#include "GlobalNamespace/IMenuRpcManager.hpp"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NetworkPlayerEntitlementChecker.add_didInvalidateDataEvent
void GlobalNamespace::NetworkPlayerEntitlementChecker::add_didInvalidateDataEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("add_didInvalidateDataEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_didInvalidateDataEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.remove_didInvalidateDataEvent
void GlobalNamespace::NetworkPlayerEntitlementChecker::remove_didInvalidateDataEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("remove_didInvalidateDataEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_didInvalidateDataEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.Start
void GlobalNamespace::NetworkPlayerEntitlementChecker::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.OnDestroy
void GlobalNamespace::NetworkPlayerEntitlementChecker::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.InvalidateData
void GlobalNamespace::NetworkPlayerEntitlementChecker::InvalidateData() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("InvalidateData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "InvalidateData", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.HandleDataInvalidated
void GlobalNamespace::NetworkPlayerEntitlementChecker::HandleDataInvalidated() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("HandleDataInvalidated");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleDataInvalidated", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.HandleLevelEntitlementStatusesInvalidated
void GlobalNamespace::NetworkPlayerEntitlementChecker::HandleLevelEntitlementStatusesInvalidated(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("HandleLevelEntitlementStatusesInvalidated");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleLevelEntitlementStatusesInvalidated", {}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.HandlePlayerDisconnected
void GlobalNamespace::NetworkPlayerEntitlementChecker::HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("HandlePlayerDisconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerDisconnected", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.HandlePlayerConnected
void GlobalNamespace::NetworkPlayerEntitlementChecker::HandlePlayerConnected(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("HandlePlayerConnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePlayerConnected", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.HandleGetIsEntitledToLevel
void GlobalNamespace::NetworkPlayerEntitlementChecker::HandleGetIsEntitledToLevel(::Il2CppString* userId, ::Il2CppString* levelId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("HandleGetIsEntitledToLevel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleGetIsEntitledToLevel", {}, ::il2cpp_utils::ExtractTypes(userId, levelId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, levelId);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.HandleSetIsEntitledToLevel
void GlobalNamespace::NetworkPlayerEntitlementChecker::HandleSetIsEntitledToLevel(::Il2CppString* userId, ::Il2CppString* levelId, GlobalNamespace::EntitlementsStatus status) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("HandleSetIsEntitledToLevel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleSetIsEntitledToLevel", {}, ::il2cpp_utils::ExtractTypes(userId, levelId, status)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, levelId, status);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.GetPlayerLevelEntitlementsAsync
System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>* GlobalNamespace::NetworkPlayerEntitlementChecker::GetPlayerLevelEntitlementsAsync(GlobalNamespace::IConnectedPlayer* player, ::Il2CppString* levelId, System::Threading::CancellationToken token) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("GetPlayerLevelEntitlementsAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>(), "GetPlayerLevelEntitlementsAsync", {}, ::il2cpp_utils::ExtractTypes(player, levelId, token)));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*, false>(this, ___internal__method, player, levelId, token);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.GetCanPlayLevelAsync
System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NetworkPlayerEntitlementChecker::GetCanPlayLevelAsync(::Il2CppString* levelId, System::Threading::CancellationToken token) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("GetCanPlayLevelAsync");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Threading::Tasks::Task_1<bool>*>(), "GetCanPlayLevelAsync", {}, ::il2cpp_utils::ExtractTypes(levelId, token)));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal__method, levelId, token);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.GetTcsTaskCanPlayerPlayLevel
System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>* GlobalNamespace::NetworkPlayerEntitlementChecker::GetTcsTaskCanPlayerPlayLevel(GlobalNamespace::IConnectedPlayer* player, ::Il2CppString* levelId, System::Threading::CancellationToken token, bool& rpcRequired) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("GetTcsTaskCanPlayerPlayLevel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>(), "GetTcsTaskCanPlayerPlayLevel", {}, ::il2cpp_utils::ExtractTypes(player, levelId, token, rpcRequired)));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*, false>(this, ___internal__method, player, levelId, token, rpcRequired);
}
// Autogenerated method: NetworkPlayerEntitlementChecker.GetEntitlementStatus
System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>* GlobalNamespace::NetworkPlayerEntitlementChecker::GetEntitlementStatus(::Il2CppString* levelId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext("GetEntitlementStatus");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>(), "GetEntitlementStatus", {}, ::il2cpp_utils::ExtractTypes(levelId)));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*, false>(this, ___internal__method, levelId);
}
// Autogenerated method: NetworkPlayerEntitlementChecker..ctor
GlobalNamespace::NetworkPlayerEntitlementChecker* GlobalNamespace::NetworkPlayerEntitlementChecker::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayerEntitlementChecker").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NetworkPlayerEntitlementChecker*>());
}