// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.ReliableChannel/PendingPacket
#include "LiteNetLib/ReliableChannel_PendingPacket.hpp"
// Including type: LiteNetLib.NetPacket
#include "LiteNetLib/NetPacket.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.ReliableChannel/PendingPacket.Init
void LiteNetLib::ReliableChannel::PendingPacket::Init(LiteNetLib::NetPacket* packet) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("PendingPacket").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(packet)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, packet);
}
// Autogenerated method: LiteNetLib.ReliableChannel/PendingPacket.TrySend
void LiteNetLib::ReliableChannel::PendingPacket::TrySend(int64_t currentTime, LiteNetLib::NetPeer* peer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("PendingPacket").WithContext("TrySend");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<void>(), "TrySend", {}, ::il2cpp_utils::ExtractTypes(currentTime, peer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, currentTime, peer);
}
// Autogenerated method: LiteNetLib.ReliableChannel/PendingPacket.Clear
bool LiteNetLib::ReliableChannel::PendingPacket::Clear(LiteNetLib::NetPeer* peer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("PendingPacket").WithContext("Clear");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<bool>(), "Clear", {}, ::il2cpp_utils::ExtractTypes(peer)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, peer);
}
// Autogenerated method: LiteNetLib.ReliableChannel/PendingPacket.ToString
::Il2CppString* LiteNetLib::ReliableChannel::PendingPacket::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("PendingPacket").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "ToString", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
}