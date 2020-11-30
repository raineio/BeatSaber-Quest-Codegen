// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager/NetPeerConnection
#include "GlobalNamespace/LiteNetLibConnectionManager_NetPeerConnection.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection..ctor
GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::New_ctor(LiteNetLib::NetPeer* netPeer, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LiteNetLibConnectionManager::NetPeerConnection*>(netPeer, userId, userName, isConnectionOwner));
}
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection.get_userId
::Il2CppString* GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_userId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext("get_userId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userId", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection.get_userName
::Il2CppString* GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_userName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext("get_userName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_userName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection.get_isConnectionOwner
bool GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::get_isConnectionOwner() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext("get_isConnectionOwner");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isConnectionOwner", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection.Send
void GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Send(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext("Send");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Send", {}, ::il2cpp_utils::ExtractTypes(writer, deliveryMethod)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer, deliveryMethod);
}
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection.Equals
bool GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Equals(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
}
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection.Equals
bool GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
}
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection.GetHashCode
int GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetHashCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: LiteNetLibConnectionManager/NetPeerConnection.Disconnect
void GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection::Disconnect() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext("Disconnect");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Disconnect", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}