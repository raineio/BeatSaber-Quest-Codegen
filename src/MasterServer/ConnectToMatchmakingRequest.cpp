// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.ConnectToMatchmakingRequest
#include "MasterServer/ConnectToMatchmakingRequest.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::ConnectToMatchmakingRequest*>* MasterServer::ConnectToMatchmakingRequest::get_pool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("ConnectToMatchmakingRequest").WithContext("get_pool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("MasterServer", "ConnectToMatchmakingRequest", il2cpp_utils::NoArgClass<GlobalNamespace::PacketPool_1<MasterServer::ConnectToMatchmakingRequest*>*>(), "get_pool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PacketPool_1<MasterServer::ConnectToMatchmakingRequest*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.Init
MasterServer::ConnectToMatchmakingRequest* MasterServer::ConnectToMatchmakingRequest::Init(::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("ConnectToMatchmakingRequest").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<MasterServer::ConnectToMatchmakingRequest*>(), "Init", {}, ::il2cpp_utils::ExtractTypes(userId, userName, configuration, secret)));
  return ::il2cpp_utils::RunMethodThrow<MasterServer::ConnectToMatchmakingRequest*, false>(this, ___internal__method, userId, userName, configuration, secret);
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.Serialize
void MasterServer::ConnectToMatchmakingRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("ConnectToMatchmakingRequest").WithContext("Serialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Serialize", {}, ::il2cpp_utils::ExtractTypes(writer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer);
}
void MasterServer::ConnectToMatchmakingRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::ConnectToMatchmakingRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.Deserialize
void MasterServer::ConnectToMatchmakingRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("ConnectToMatchmakingRequest").WithContext("Deserialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Deserialize", {}, ::il2cpp_utils::ExtractTypes(reader)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader);
}
void MasterServer::ConnectToMatchmakingRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::ConnectToMatchmakingRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest.Release
void MasterServer::ConnectToMatchmakingRequest::Release() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("ConnectToMatchmakingRequest").WithContext("Release");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Release", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.ConnectToMatchmakingRequest..ctor
MasterServer::ConnectToMatchmakingRequest* MasterServer::ConnectToMatchmakingRequest::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("ConnectToMatchmakingRequest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ConnectToMatchmakingRequest*>());
}