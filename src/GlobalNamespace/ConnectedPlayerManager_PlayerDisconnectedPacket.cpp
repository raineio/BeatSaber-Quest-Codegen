// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ConnectedPlayerManager/PlayerDisconnectedPacket
#include "GlobalNamespace/ConnectedPlayerManager_PlayerDisconnectedPacket.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ConnectedPlayerManager/PlayerDisconnectedPacket.get_pool
GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket*>* GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::get_pool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerDisconnectedPacket").WithContext("get_pool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "ConnectedPlayerManager/PlayerDisconnectedPacket", il2cpp_utils::NoArgClass<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket*>*>(), "get_pool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: ConnectedPlayerManager/PlayerDisconnectedPacket.Init
GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket* GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::Init(GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerDisconnectedPacket").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket*>(), "Init", {}, ::il2cpp_utils::ExtractTypes(disconnectedReason)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket*, false>(this, ___internal__method, disconnectedReason);
}
// Autogenerated method: ConnectedPlayerManager/PlayerDisconnectedPacket.Serialize
void GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerDisconnectedPacket").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Serialize", {}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer);
}
void GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::Serialize(writer);
}
// Autogenerated method: ConnectedPlayerManager/PlayerDisconnectedPacket.Deserialize
void GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerDisconnectedPacket").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Deserialize", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader);
}
void GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::Deserialize(reader);
}
// Autogenerated method: ConnectedPlayerManager/PlayerDisconnectedPacket.Release
void GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::Release() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerDisconnectedPacket").WithContext("Release");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Release", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ConnectedPlayerManager/PlayerDisconnectedPacket..ctor
GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket* GlobalNamespace::ConnectedPlayerManager::PlayerDisconnectedPacket::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerDisconnectedPacket").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ConnectedPlayerManager::PlayerDisconnectedPacket*>());
}