// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayersViewController
#include "GlobalNamespace/NetworkPlayersViewController.hpp"
// Including type: NetworkPlayersTableView
#include "GlobalNamespace/NetworkPlayersTableView.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: INetworkPlayerModel
#include "GlobalNamespace/INetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NetworkPlayersViewController.get_myPartyTitle
::Il2CppString* GlobalNamespace::NetworkPlayersViewController::get_myPartyTitle() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("get_myPartyTitle");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_myPartyTitle", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayersViewController.get_otherPlayersTitle
::Il2CppString* GlobalNamespace::NetworkPlayersViewController::get_otherPlayersTitle() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("get_otherPlayersTitle");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_otherPlayersTitle", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayersViewController.get_networkPlayerModel
GlobalNamespace::INetworkPlayerModel* GlobalNamespace::NetworkPlayersViewController::get_networkPlayerModel() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("get_networkPlayerModel");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::INetworkPlayerModel*>(), "get_networkPlayerModel", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::INetworkPlayerModel*, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayersViewController.add_onJoinRequestEvent
void GlobalNamespace::NetworkPlayersViewController::add_onJoinRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("add_onJoinRequestEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_onJoinRequestEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NetworkPlayersViewController.remove_onJoinRequestEvent
void GlobalNamespace::NetworkPlayersViewController::remove_onJoinRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("remove_onJoinRequestEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_onJoinRequestEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NetworkPlayersViewController.add_onInviteRequestEvent
void GlobalNamespace::NetworkPlayersViewController::add_onInviteRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("add_onInviteRequestEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_onInviteRequestEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NetworkPlayersViewController.remove_onInviteRequestEvent
void GlobalNamespace::NetworkPlayersViewController::remove_onInviteRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("remove_onInviteRequestEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_onInviteRequestEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NetworkPlayersViewController.NetworkPlayersViewControllerDidActivate
void GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("NetworkPlayersViewControllerDidActivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "NetworkPlayersViewControllerDidActivate", {}, ::il2cpp_utils::ExtractTypes(firstActivation, addedToHierarchy)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, firstActivation, addedToHierarchy);
}
// Autogenerated method: NetworkPlayersViewController.NetworkPlayersViewControllerDidDeactivate
void GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidDeactivate(bool removedFromHierarchy) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("NetworkPlayersViewControllerDidDeactivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "NetworkPlayersViewControllerDidDeactivate", {}, ::il2cpp_utils::ExtractTypes(removedFromHierarchy)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, removedFromHierarchy);
}
// Autogenerated method: NetworkPlayersViewController.HandlePartyChanged
void GlobalNamespace::NetworkPlayersViewController::HandlePartyChanged(GlobalNamespace::INetworkPlayerModel* playerModel) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("HandlePartyChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandlePartyChanged", {}, ::il2cpp_utils::ExtractTypes(playerModel)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, playerModel);
}
// Autogenerated method: NetworkPlayersViewController.HandleJoinRequest
void GlobalNamespace::NetworkPlayersViewController::HandleJoinRequest(GlobalNamespace::INetworkPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("HandleJoinRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleJoinRequest", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: NetworkPlayersViewController.HandleInviteRequest
void GlobalNamespace::NetworkPlayersViewController::HandleInviteRequest(GlobalNamespace::INetworkPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("HandleInviteRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleInviteRequest", {}, ::il2cpp_utils::ExtractTypes(player)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
}
// Autogenerated method: NetworkPlayersViewController.Refresh
void GlobalNamespace::NetworkPlayersViewController::Refresh() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("Refresh");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Refresh", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayersViewController.DidActivate
void GlobalNamespace::NetworkPlayersViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("DidActivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DidActivate", {}, ::il2cpp_utils::ExtractTypes(firstActivation, addedToHierarchy, screenSystemEnabling)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Autogenerated method: NetworkPlayersViewController.DidDeactivate
void GlobalNamespace::NetworkPlayersViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("DidDeactivate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DidDeactivate", {}, ::il2cpp_utils::ExtractTypes(removedFromHierarchy, screenSystemDisabling)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, removedFromHierarchy, screenSystemDisabling);
}
// Autogenerated method: NetworkPlayersViewController.OnDestroy
void GlobalNamespace::NetworkPlayersViewController::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NetworkPlayersViewController..ctor
GlobalNamespace::NetworkPlayersViewController* GlobalNamespace::NetworkPlayersViewController::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetworkPlayersViewController").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NetworkPlayersViewController*>());
}