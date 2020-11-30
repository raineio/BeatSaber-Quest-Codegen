// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PartyMessageHandler/ServerStatusUpdateMessage
#include "GlobalNamespace/PartyMessageHandler_ServerStatusUpdateMessage.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PartyMessageHandler/ServerStatusUpdateMessage.get_pool
GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*>* GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::get_pool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ServerStatusUpdateMessage").WithContext("get_pool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "PartyMessageHandler/ServerStatusUpdateMessage", il2cpp_utils::NoArgClass<GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*>*>(), "get_pool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: PartyMessageHandler/ServerStatusUpdateMessage.Init
GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage* GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Init(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ServerStatusUpdateMessage").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*>(), "Init", {}, ::il2cpp_utils::ExtractTypes(serverName, password, discoveryPolicy, invitePolicy, maxPlayerCount, configuration)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*, false>(this, ___internal__method, serverName, password, discoveryPolicy, invitePolicy, maxPlayerCount, configuration);
}
// Autogenerated method: PartyMessageHandler/ServerStatusUpdateMessage.Serialize
void GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ServerStatusUpdateMessage").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Serialize", {}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer);
}
void GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Serialize(writer);
}
// Autogenerated method: PartyMessageHandler/ServerStatusUpdateMessage.Deserialize
void GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ServerStatusUpdateMessage").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Deserialize", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader);
}
void GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Deserialize(reader);
}
// Autogenerated method: PartyMessageHandler/ServerStatusUpdateMessage.Release
void GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Release() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ServerStatusUpdateMessage").WithContext("Release");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Release", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: PartyMessageHandler/ServerStatusUpdateMessage..ctor
GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage* GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ServerStatusUpdateMessage").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<PartyMessageHandler::ServerStatusUpdateMessage*>());
}