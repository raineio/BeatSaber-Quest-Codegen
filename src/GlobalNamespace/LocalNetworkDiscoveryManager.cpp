// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: LocalNetworkDiscoveryManager/BroadcastPacket
#include "GlobalNamespace/LocalNetworkDiscoveryManager_BroadcastPacket.hpp"
// Including type: LocalNetworkDiscoveryManager/JoinRequestPacket
#include "GlobalNamespace/LocalNetworkDiscoveryManager_JoinRequestPacket.hpp"
// Including type: LocalNetworkDiscoveryManager/JoinResponsePacket
#include "GlobalNamespace/LocalNetworkDiscoveryManager_JoinResponsePacket.hpp"
// Including type: LocalNetworkDiscoveryManager/InviteRequestPacket
#include "GlobalNamespace/LocalNetworkDiscoveryManager_InviteRequestPacket.hpp"
// Including type: LocalNetworkDiscoveryManager/InviteResponsePacket
#include "GlobalNamespace/LocalNetworkDiscoveryManager_InviteResponsePacket.hpp"
// Including type: LocalNetworkDiscoveryManager/PeerUpdatedDelegate
#include "GlobalNamespace/LocalNetworkDiscoveryManager_PeerUpdatedDelegate.hpp"
// Including type: LocalNetworkDiscoveryManager/JoinRequestedDelegate
#include "GlobalNamespace/LocalNetworkDiscoveryManager_JoinRequestedDelegate.hpp"
// Including type: LocalNetworkDiscoveryManager/JoinRespondedDelegate
#include "GlobalNamespace/LocalNetworkDiscoveryManager_JoinRespondedDelegate.hpp"
// Including type: LocalNetworkDiscoveryManager/InviteRequestedDelegate
#include "GlobalNamespace/LocalNetworkDiscoveryManager_InviteRequestedDelegate.hpp"
// Including type: LocalNetworkDiscoveryManager/InviteRespondedDelegate
#include "GlobalNamespace/LocalNetworkDiscoveryManager_InviteRespondedDelegate.hpp"
// Including type: LiteNetLib.NetManager
#include "LiteNetLib/NetManager.hpp"
// Including type: NetworkPacketSerializer`2
#include "GlobalNamespace/NetworkPacketSerializer_2.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Including type: System.Net.IPAddress
#include "System/Net/IPAddress.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: LiteNetLib.NetPacketReader
#include "LiteNetLib/NetPacketReader.hpp"
// Including type: LiteNetLib.UnconnectedMessageType
#include "LiteNetLib/UnconnectedMessageType.hpp"
// Including type: LiteNetLib.ConnectionRequest
#include "LiteNetLib/ConnectionRequest.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
// Including type: LiteNetLib.DisconnectInfo
#include "LiteNetLib/DisconnectInfo.hpp"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kBroadcastInterval
float GlobalNamespace::LocalNetworkDiscoveryManager::_get_kBroadcastInterval() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("_get_kBroadcastInterval");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "LocalNetworkDiscoveryManager", "kBroadcastInterval"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kBroadcastInterval
void GlobalNamespace::LocalNetworkDiscoveryManager::_set_kBroadcastInterval(float value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("_set_kBroadcastInterval");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LocalNetworkDiscoveryManager", "kBroadcastInterval", value));
}
// Autogenerated static field getter
// Get static field: static private System.UInt32 kSignature
uint GlobalNamespace::LocalNetworkDiscoveryManager::_get_kSignature() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("_get_kSignature");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>("", "LocalNetworkDiscoveryManager", "kSignature"));
}
// Autogenerated static field setter
// Set static field: static private System.UInt32 kSignature
void GlobalNamespace::LocalNetworkDiscoveryManager::_set_kSignature(uint value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("_set_kSignature");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LocalNetworkDiscoveryManager", "kSignature", value));
}
// Autogenerated static field getter
// Get static field: static private System.Byte kVersion
uint8_t GlobalNamespace::LocalNetworkDiscoveryManager::_get_kVersion() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("_get_kVersion");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint8_t>("", "LocalNetworkDiscoveryManager", "kVersion"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte kVersion
void GlobalNamespace::LocalNetworkDiscoveryManager::_set_kVersion(uint8_t value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("_set_kVersion");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LocalNetworkDiscoveryManager", "kVersion", value));
}
// Autogenerated method: LocalNetworkDiscoveryManager.add_peerUpdatedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::add_peerUpdatedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("add_peerUpdatedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_peerUpdatedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.remove_peerUpdatedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::remove_peerUpdatedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("remove_peerUpdatedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_peerUpdatedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.add_joinRequestedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRequestedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRequestedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("add_joinRequestedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_joinRequestedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.remove_joinRequestedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRequestedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRequestedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("remove_joinRequestedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_joinRequestedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.add_joinRespondedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRespondedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("add_joinRespondedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_joinRespondedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.remove_joinRespondedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRespondedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("remove_joinRespondedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_joinRespondedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.add_inviteRequestedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRequestedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("add_inviteRequestedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_inviteRequestedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.remove_inviteRequestedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRequestedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("remove_inviteRequestedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_inviteRequestedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.add_inviteRespondedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRespondedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("add_inviteRespondedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_inviteRespondedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.remove_inviteRespondedEvent
void GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRespondedEvent(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRespondedDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("remove_inviteRespondedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_inviteRespondedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.get_userId
::Il2CppString* GlobalNamespace::LocalNetworkDiscoveryManager::get_userId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("get_userId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userId", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.get_userName
::Il2CppString* GlobalNamespace::LocalNetworkDiscoveryManager::get_userName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("get_userName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.get_flags
uint8_t GlobalNamespace::LocalNetworkDiscoveryManager::get_flags() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("get_flags");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<uint8_t>(), "get_flags", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.set_flags
void GlobalNamespace::LocalNetworkDiscoveryManager::set_flags(uint8_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("set_flags");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_flags", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.get_currentPartySize
int GlobalNamespace::LocalNetworkDiscoveryManager::get_currentPartySize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("get_currentPartySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_currentPartySize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.set_currentPartySize
void GlobalNamespace::LocalNetworkDiscoveryManager::set_currentPartySize(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("set_currentPartySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_currentPartySize", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.get_maxPartySize
int GlobalNamespace::LocalNetworkDiscoveryManager::get_maxPartySize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("get_maxPartySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_maxPartySize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.set_maxPartySize
void GlobalNamespace::LocalNetworkDiscoveryManager::set_maxPartySize(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("set_maxPartySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_maxPartySize", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.get_configuration
GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LocalNetworkDiscoveryManager::get_configuration() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("get_configuration");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::GameplayServerConfiguration>(), "get_configuration", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.set_configuration
void GlobalNamespace::LocalNetworkDiscoveryManager::set_configuration(GlobalNamespace::GameplayServerConfiguration value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("set_configuration");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_configuration", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.get_enableBroadcasting
bool GlobalNamespace::LocalNetworkDiscoveryManager::get_enableBroadcasting() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("get_enableBroadcasting");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_enableBroadcasting", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.set_enableBroadcasting
void GlobalNamespace::LocalNetworkDiscoveryManager::set_enableBroadcasting(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("set_enableBroadcasting");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_enableBroadcasting", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LocalNetworkDiscoveryManager.Init
void GlobalNamespace::LocalNetworkDiscoveryManager::Init(int discoveryPort, ::Il2CppString* initUserId, ::Il2CppString* initUserName) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(discoveryPort, initUserId, initUserName)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, discoveryPort, initUserId, initUserName);
}
// Autogenerated method: LocalNetworkDiscoveryManager.OnEnable
void GlobalNamespace::LocalNetworkDiscoveryManager::OnEnable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("OnEnable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnEnable", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.OnDisable
void GlobalNamespace::LocalNetworkDiscoveryManager::OnDisable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("OnDisable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDisable", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.Update
void GlobalNamespace::LocalNetworkDiscoveryManager::Update() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Update", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkDiscoveryManager.SendJoinRequest
void GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinRequest(System::Net::IPAddress* ip) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("SendJoinRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SendJoinRequest", {}, ::il2cpp_utils::ExtractTypes(ip)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, ip);
}
// Autogenerated method: LocalNetworkDiscoveryManager.SendJoinResponse
void GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinResponse(System::Net::IPAddress* ip, ::Il2CppString* secret, int multiplayerPort, bool blocked) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("SendJoinResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SendJoinResponse", {}, ::il2cpp_utils::ExtractTypes(ip, secret, multiplayerPort, blocked)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, ip, secret, multiplayerPort, blocked);
}
// Autogenerated method: LocalNetworkDiscoveryManager.SendInviteRequest
void GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteRequest(System::Net::IPAddress* ip, ::Il2CppString* secret, int multiplayerPort) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("SendInviteRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SendInviteRequest", {}, ::il2cpp_utils::ExtractTypes(ip, secret, multiplayerPort)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, ip, secret, multiplayerPort);
}
// Autogenerated method: LocalNetworkDiscoveryManager.SendInviteResponse
void GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteResponse(System::Net::IPAddress* ip, bool accepted, bool blocked) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("SendInviteResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SendInviteResponse", {}, ::il2cpp_utils::ExtractTypes(ip, accepted, blocked)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, ip, accepted, blocked);
}
// Autogenerated method: LocalNetworkDiscoveryManager.<Init>b__56_0
void GlobalNamespace::LocalNetworkDiscoveryManager::$Init$b__56_0(GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket* packet, System::Net::IPEndPoint* endPoint) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("<Init>b__56_0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<Init>b__56_0", {}, ::il2cpp_utils::ExtractTypes(packet, endPoint))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, endPoint);
}
// Autogenerated method: LocalNetworkDiscoveryManager.<Init>b__56_1
void GlobalNamespace::LocalNetworkDiscoveryManager::$Init$b__56_1(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRequestPacket* packet, System::Net::IPEndPoint* endPoint) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("<Init>b__56_1");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<Init>b__56_1", {}, ::il2cpp_utils::ExtractTypes(packet, endPoint))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, endPoint);
}
// Autogenerated method: LocalNetworkDiscoveryManager.<Init>b__56_2
void GlobalNamespace::LocalNetworkDiscoveryManager::$Init$b__56_2(GlobalNamespace::LocalNetworkDiscoveryManager::JoinResponsePacket* packet, System::Net::IPEndPoint* endPoint) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("<Init>b__56_2");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<Init>b__56_2", {}, ::il2cpp_utils::ExtractTypes(packet, endPoint))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, endPoint);
}
// Autogenerated method: LocalNetworkDiscoveryManager.<Init>b__56_3
void GlobalNamespace::LocalNetworkDiscoveryManager::$Init$b__56_3(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket* packet, System::Net::IPEndPoint* endPoint) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("<Init>b__56_3");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<Init>b__56_3", {}, ::il2cpp_utils::ExtractTypes(packet, endPoint))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, endPoint);
}
// Autogenerated method: LocalNetworkDiscoveryManager.<Init>b__56_4
void GlobalNamespace::LocalNetworkDiscoveryManager::$Init$b__56_4(GlobalNamespace::LocalNetworkDiscoveryManager::InviteResponsePacket* packet, System::Net::IPEndPoint* endPoint) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("<Init>b__56_4");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<Init>b__56_4", {}, ::il2cpp_utils::ExtractTypes(packet, endPoint))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, endPoint);
}
// Autogenerated method: LocalNetworkDiscoveryManager.LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected
void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", {}, ::il2cpp_utils::ExtractTypes(remoteEndPoint, reader, messageType)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, remoteEndPoint, reader, messageType);
}
// Autogenerated method: LocalNetworkDiscoveryManager.LiteNetLib.INetEventListener.OnConnectionRequest
void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnConnectionRequest(LiteNetLib::ConnectionRequest* request) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("LiteNetLib.INetEventListener.OnConnectionRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LiteNetLib.INetEventListener.OnConnectionRequest", {}, ::il2cpp_utils::ExtractTypes(request)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, request);
}
// Autogenerated method: LocalNetworkDiscoveryManager.LiteNetLib.INetEventListener.OnNetworkError
void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkError(System::Net::IPEndPoint* endPoint, System::Net::Sockets::SocketError socketErrorCode) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("LiteNetLib.INetEventListener.OnNetworkError");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LiteNetLib.INetEventListener.OnNetworkError", {}, ::il2cpp_utils::ExtractTypes(endPoint, socketErrorCode)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, endPoint, socketErrorCode);
}
// Autogenerated method: LocalNetworkDiscoveryManager.LiteNetLib.INetEventListener.OnNetworkLatencyUpdate
void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(LiteNetLib::NetPeer* peer, int latency) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("LiteNetLib.INetEventListener.OnNetworkLatencyUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", {}, ::il2cpp_utils::ExtractTypes(peer, latency)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer, latency);
}
// Autogenerated method: LocalNetworkDiscoveryManager.LiteNetLib.INetEventListener.OnPeerConnected
void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerConnected(LiteNetLib::NetPeer* peer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("LiteNetLib.INetEventListener.OnPeerConnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LiteNetLib.INetEventListener.OnPeerConnected", {}, ::il2cpp_utils::ExtractTypes(peer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer);
}
// Autogenerated method: LocalNetworkDiscoveryManager.LiteNetLib.INetEventListener.OnPeerDisconnected
void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerDisconnected(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("LiteNetLib.INetEventListener.OnPeerDisconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LiteNetLib.INetEventListener.OnPeerDisconnected", {}, ::il2cpp_utils::ExtractTypes(peer, disconnectInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer, disconnectInfo);
}
// Autogenerated method: LocalNetworkDiscoveryManager.LiteNetLib.INetEventListener.OnNetworkReceive
void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceive(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext("LiteNetLib.INetEventListener.OnNetworkReceive");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LiteNetLib.INetEventListener.OnNetworkReceive", {}, ::il2cpp_utils::ExtractTypes(peer, reader, deliveryMethod)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, peer, reader, deliveryMethod);
}
// Autogenerated method: LocalNetworkDiscoveryManager..ctor
GlobalNamespace::LocalNetworkDiscoveryManager* GlobalNamespace::LocalNetworkDiscoveryManager::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkDiscoveryManager").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LocalNetworkDiscoveryManager*>());
}