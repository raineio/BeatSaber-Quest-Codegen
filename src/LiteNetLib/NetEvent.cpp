// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NetEvent
#include "LiteNetLib/NetEvent.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: LiteNetLib.ConnectionRequest
#include "LiteNetLib/ConnectionRequest.hpp"
// Including type: LiteNetLib.NetPacketReader
#include "LiteNetLib/NetPacketReader.hpp"
// Including type: LiteNetLib.NetManager
#include "LiteNetLib/NetManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.NetEvent..ctor
LiteNetLib::NetEvent* LiteNetLib::NetEvent::New_ctor(LiteNetLib::NetManager* manager) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("LiteNetLib").WithContext("NetEvent").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NetEvent*>(manager));
}