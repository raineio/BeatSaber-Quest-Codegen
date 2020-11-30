// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.DedicatedServerHeartbeatRequest
#include "MasterServer/DedicatedServerHeartbeatRequest.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerHeartbeatRequest*>* MasterServer::DedicatedServerHeartbeatRequest::get_pool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("get_pool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("MasterServer", "DedicatedServerHeartbeatRequest", il2cpp_utils::NoArgClass<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerHeartbeatRequest*>*>(), "get_pool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerHeartbeatRequest*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.set_dedicatedServerId
void MasterServer::DedicatedServerHeartbeatRequest::set_dedicatedServerId(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("set_dedicatedServerId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_dedicatedServerId", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.set_dedicatedServerCreationTime
void MasterServer::DedicatedServerHeartbeatRequest::set_dedicatedServerCreationTime(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("set_dedicatedServerCreationTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_dedicatedServerCreationTime", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.Init
MasterServer::DedicatedServerHeartbeatRequest* MasterServer::DedicatedServerHeartbeatRequest::Init(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, int cpuUtilization, int occupiedServerSlots, int unoccupiedServerSlots) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<MasterServer::DedicatedServerHeartbeatRequest*>(), "Init", {}, ::il2cpp_utils::ExtractTypes(dedicatedServerId, dedicatedServerCreationTime, cpuUtilization, occupiedServerSlots, unoccupiedServerSlots)));
  return ::il2cpp_utils::RunMethodThrow<MasterServer::DedicatedServerHeartbeatRequest*, false>(this, ___internal__method, dedicatedServerId, dedicatedServerCreationTime, cpuUtilization, occupiedServerSlots, unoccupiedServerSlots);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.get_dedicatedServerId
::Il2CppString* MasterServer::DedicatedServerHeartbeatRequest::get_dedicatedServerId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("get_dedicatedServerId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_dedicatedServerId", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.get_dedicatedServerCreationTime
int64_t MasterServer::DedicatedServerHeartbeatRequest::get_dedicatedServerCreationTime() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("get_dedicatedServerCreationTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "get_dedicatedServerCreationTime", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.Serialize
void MasterServer::DedicatedServerHeartbeatRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Serialize", {}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer);
}
void MasterServer::DedicatedServerHeartbeatRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::DedicatedServerHeartbeatRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.Deserialize
void MasterServer::DedicatedServerHeartbeatRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Deserialize", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader);
}
void MasterServer::DedicatedServerHeartbeatRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::DedicatedServerHeartbeatRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest.Release
void MasterServer::DedicatedServerHeartbeatRequest::Release() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext("Release");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Release", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.DedicatedServerHeartbeatRequest..ctor
MasterServer::DedicatedServerHeartbeatRequest* MasterServer::DedicatedServerHeartbeatRequest::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerHeartbeatRequest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DedicatedServerHeartbeatRequest*>());
}