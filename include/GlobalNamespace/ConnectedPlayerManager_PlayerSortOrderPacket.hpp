// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ConnectedPlayerManager/PlayerSortOrderPacket
  class ConnectedPlayerManager::PlayerSortOrderPacket : public ::Il2CppObject, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket {
    public:
    // public System.String userId
    // Offset: 0x10
    ::Il2CppString* userId;
    // public System.Int32 sortIndex
    // Offset: 0x18
    int sortIndex;
    // static public PacketPool`1<ConnectedPlayerManager/PlayerSortOrderPacket> get_pool()
    // Offset: 0x2159494
    static GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*>* get_pool();
    // public ConnectedPlayerManager/PlayerSortOrderPacket Init(System.String userId, System.Int32 sortIndex)
    // Offset: 0x215BEFC
    GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket* Init(::Il2CppString* userId, int sortIndex);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x215C2F4
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x215C338
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x215B94C
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x215C38C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConnectedPlayerManager::PlayerSortOrderPacket* New_ctor();
  }; // ConnectedPlayerManager/PlayerSortOrderPacket
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerManager::PlayerSortOrderPacket*, "", "ConnectedPlayerManager/PlayerSortOrderPacket");
#pragma pack(pop)
