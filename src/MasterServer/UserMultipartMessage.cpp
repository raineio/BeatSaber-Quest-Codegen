// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MasterServer.UserMultipartMessage
#include "MasterServer/UserMultipartMessage.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.UserMultipartMessage.get_pool
GlobalNamespace::PacketPool_1<MasterServer::UserMultipartMessage*>* MasterServer::UserMultipartMessage::get_pool() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMultipartMessage").WithContext("get_pool");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("MasterServer", "UserMultipartMessage", il2cpp_utils::NoArgClass<GlobalNamespace::PacketPool_1<MasterServer::UserMultipartMessage*>*>(), "get_pool", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PacketPool_1<MasterServer::UserMultipartMessage*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: MasterServer.UserMultipartMessage.Release
void MasterServer::UserMultipartMessage::Release() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMultipartMessage").WithContext("Release");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Release", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.UserMultipartMessage..ctor
MasterServer::UserMultipartMessage* MasterServer::UserMultipartMessage::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMultipartMessage").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<UserMultipartMessage*>());
}