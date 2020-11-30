// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NetPacketPool
#include "LiteNetLib/NetPacketPool.hpp"
// Including type: LiteNetLib.NetPacket
#include "LiteNetLib/NetPacket.hpp"
// Including type: System.Threading.ReaderWriterLockSlim
#include "System/Threading/ReaderWriterLockSlim.hpp"
// Including type: LiteNetLib.PacketProperty
#include "LiteNetLib/PacketProperty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.NetPacketPool.GetWithData
LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithData(LiteNetLib::PacketProperty property, ::Array<uint8_t>* data, int start, int length) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("NetPacketPool").WithContext("GetWithData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<LiteNetLib::NetPacket*>(), "GetWithData", {}, ::il2cpp_utils::ExtractTypes(property, data, start, length)));
  return ::il2cpp_utils::RunMethodThrow<LiteNetLib::NetPacket*, false>(this, ___internal__method, property, data, start, length);
}
// Autogenerated method: LiteNetLib.NetPacketPool.GetWithProperty
LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithProperty(LiteNetLib::PacketProperty property, int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("NetPacketPool").WithContext("GetWithProperty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<LiteNetLib::NetPacket*>(), "GetWithProperty", {}, ::il2cpp_utils::ExtractTypes(property, size)));
  return ::il2cpp_utils::RunMethodThrow<LiteNetLib::NetPacket*, false>(this, ___internal__method, property, size);
}
// Autogenerated method: LiteNetLib.NetPacketPool.GetWithProperty
LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetWithProperty(LiteNetLib::PacketProperty property) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("NetPacketPool").WithContext("GetWithProperty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<LiteNetLib::NetPacket*>(), "GetWithProperty", {}, ::il2cpp_utils::ExtractTypes(property)));
  return ::il2cpp_utils::RunMethodThrow<LiteNetLib::NetPacket*, false>(this, ___internal__method, property);
}
// Autogenerated method: LiteNetLib.NetPacketPool.GetPacket
LiteNetLib::NetPacket* LiteNetLib::NetPacketPool::GetPacket(int size) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("NetPacketPool").WithContext("GetPacket");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<LiteNetLib::NetPacket*>(), "GetPacket", {}, ::il2cpp_utils::ExtractTypes(size)));
  return ::il2cpp_utils::RunMethodThrow<LiteNetLib::NetPacket*, false>(this, ___internal__method, size);
}
// Autogenerated method: LiteNetLib.NetPacketPool.Recycle
void LiteNetLib::NetPacketPool::Recycle(LiteNetLib::NetPacket* packet) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("NetPacketPool").WithContext("Recycle");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Recycle", {}, ::il2cpp_utils::ExtractTypes(packet)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet);
}
// Autogenerated method: LiteNetLib.NetPacketPool..ctor
LiteNetLib::NetPacketPool* LiteNetLib::NetPacketPool::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("NetPacketPool").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NetPacketPool*>());
}