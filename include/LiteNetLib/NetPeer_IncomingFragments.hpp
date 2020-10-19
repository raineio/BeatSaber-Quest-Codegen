// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.NetPeer/IncomingFragments
  class NetPeer::IncomingFragments : public ::Il2CppObject {
    public:
    // public LiteNetLib.NetPacket[] Fragments
    // Offset: 0x10
    ::Array<LiteNetLib::NetPacket*>* Fragments;
    // public System.Int32 ReceivedCount
    // Offset: 0x18
    int ReceivedCount;
    // public System.Int32 TotalSize
    // Offset: 0x1C
    int TotalSize;
    // public System.Byte ChannelId
    // Offset: 0x20
    uint8_t ChannelId;
    // public System.Void .ctor()
    // Offset: 0x180FA0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NetPeer::IncomingFragments* New_ctor();
  }; // LiteNetLib.NetPeer/IncomingFragments
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPeer::IncomingFragments*, "LiteNetLib", "NetPeer/IncomingFragments");
#pragma pack(pop)
