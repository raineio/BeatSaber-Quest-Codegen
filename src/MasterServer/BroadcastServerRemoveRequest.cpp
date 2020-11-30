// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BroadcastServerRemoveRequest
#include "MasterServer/BroadcastServerRemoveRequest.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerRemoveRequest*>* MasterServer::BroadcastServerRemoveRequest::get_pool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("get_pool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("MasterServer", "BroadcastServerRemoveRequest", il2cpp_utils::NoArgClass<GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerRemoveRequest*>*>(), "get_pool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PacketPool_1<MasterServer::BroadcastServerRemoveRequest*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.set_userId
void MasterServer::BroadcastServerRemoveRequest::set_userId(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("set_userId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_userId", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.set_userName
void MasterServer::BroadcastServerRemoveRequest::set_userName(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("set_userName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_userName", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.Init
MasterServer::BroadcastServerRemoveRequest* MasterServer::BroadcastServerRemoveRequest::Init(::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<MasterServer::BroadcastServerRemoveRequest*>(), "Init", {}, ::il2cpp_utils::ExtractTypes(userId, userName, secret)));
  return ::il2cpp_utils::RunMethodThrow<MasterServer::BroadcastServerRemoveRequest*, false>(this, ___internal__method, userId, userName, secret);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.get_userId
::Il2CppString* MasterServer::BroadcastServerRemoveRequest::get_userId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("get_userId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userId", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.get_userName
::Il2CppString* MasterServer::BroadcastServerRemoveRequest::get_userName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("get_userName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.Serialize
void MasterServer::BroadcastServerRemoveRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Serialize", {}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer);
}
void MasterServer::BroadcastServerRemoveRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::BroadcastServerRemoveRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.Deserialize
void MasterServer::BroadcastServerRemoveRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Deserialize", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader);
}
void MasterServer::BroadcastServerRemoveRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::BroadcastServerRemoveRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest.Release
void MasterServer::BroadcastServerRemoveRequest::Release() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext("Release");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Release", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.BroadcastServerRemoveRequest..ctor
MasterServer::BroadcastServerRemoveRequest* MasterServer::BroadcastServerRemoveRequest::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BroadcastServerRemoveRequest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<BroadcastServerRemoveRequest*>());
}