// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MasterServer.DedicatedServerMessageReceivedAcknowledge
#include "MasterServer/DedicatedServerMessageReceivedAcknowledge.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.DedicatedServerMessageReceivedAcknowledge.get_pool
GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerMessageReceivedAcknowledge*>* MasterServer::DedicatedServerMessageReceivedAcknowledge::get_pool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerMessageReceivedAcknowledge").WithContext("get_pool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("MasterServer", "DedicatedServerMessageReceivedAcknowledge", il2cpp_utils::NoArgClass<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerMessageReceivedAcknowledge*>*>(), "get_pool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerMessageReceivedAcknowledge*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: MasterServer.DedicatedServerMessageReceivedAcknowledge.Release
void MasterServer::DedicatedServerMessageReceivedAcknowledge::Release() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerMessageReceivedAcknowledge").WithContext("Release");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Release", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.DedicatedServerMessageReceivedAcknowledge..ctor
MasterServer::DedicatedServerMessageReceivedAcknowledge* MasterServer::DedicatedServerMessageReceivedAcknowledge::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("DedicatedServerMessageReceivedAcknowledge").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DedicatedServerMessageReceivedAcknowledge*>());
}