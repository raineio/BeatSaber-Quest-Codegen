// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ConnectedPlayerManager/PlayerConnectedPacket
#include "GlobalNamespace/ConnectedPlayerManager_PlayerConnectedPacket.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ConnectedPlayerManager/PlayerConnectedPacket.get_pool
GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*>* GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::get_pool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerConnectedPacket").WithContext("get_pool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "ConnectedPlayerManager/PlayerConnectedPacket", il2cpp_utils::NoArgClass<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*>*>(), "get_pool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: ConnectedPlayerManager/PlayerConnectedPacket.Init
GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Init(uint8_t connectionId, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerConnectedPacket").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*>(), "Init", {}, ::il2cpp_utils::ExtractTypes(connectionId, userId, userName, isConnectionOwner)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*, false>(this, ___internal__method, connectionId, userId, userName, isConnectionOwner);
}
// Autogenerated method: ConnectedPlayerManager/PlayerConnectedPacket.Serialize
void GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerConnectedPacket").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Serialize", {}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer);
}
void GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Serialize(writer);
}
// Autogenerated method: ConnectedPlayerManager/PlayerConnectedPacket.Deserialize
void GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerConnectedPacket").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Deserialize", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader);
}
void GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Deserialize(reader);
}
// Autogenerated method: ConnectedPlayerManager/PlayerConnectedPacket.Release
void GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Release() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerConnectedPacket").WithContext("Release");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Release", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ConnectedPlayerManager/PlayerConnectedPacket..ctor
GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerConnectedPacket").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ConnectedPlayerManager::PlayerConnectedPacket*>());
}