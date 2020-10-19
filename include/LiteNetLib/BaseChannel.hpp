// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.BaseChannel
  class BaseChannel : public ::Il2CppObject {
    public:
    // public LiteNetLib.BaseChannel Next
    // Offset: 0x10
    LiteNetLib::BaseChannel* Next;
    // protected readonly LiteNetLib.NetPeer Peer
    // Offset: 0x18
    LiteNetLib::NetPeer* Peer;
    // protected readonly System.Collections.Generic.Queue`1<LiteNetLib.NetPacket> OutgoingQueue
    // Offset: 0x20
    System::Collections::Generic::Queue_1<LiteNetLib::NetPacket*>* OutgoingQueue;
    // protected System.Void .ctor(LiteNetLib.NetPeer peer)
    // Offset: 0x18004AC
    static BaseChannel* New_ctor(LiteNetLib::NetPeer* peer);
    // public System.Int32 get_PacketsInQueue()
    // Offset: 0x1800548
    int get_PacketsInQueue();
    // public System.Void AddToQueue(LiteNetLib.NetPacket packet)
    // Offset: 0x1800598
    void AddToQueue(LiteNetLib::NetPacket* packet);
    // public System.Void SendNextPackets()
    // Offset: 0xFFFFFFFF
    void SendNextPackets();
    // public System.Boolean ProcessPacket(LiteNetLib.NetPacket packet)
    // Offset: 0xFFFFFFFF
    bool ProcessPacket(LiteNetLib::NetPacket* packet);
  }; // LiteNetLib.BaseChannel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::BaseChannel*, "LiteNetLib", "BaseChannel");
#pragma pack(pop)
