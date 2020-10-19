// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: LocalNetworkDiscoveryManager/InviteRequestPacket
  class LocalNetworkDiscoveryManager::InviteRequestPacket : public ::Il2CppObject, public LiteNetLib::Utils::INetSerializable {
    public:
    // public System.String userId
    // Offset: 0x10
    ::Il2CppString* userId;
    // public System.String userName
    // Offset: 0x18
    ::Il2CppString* userName;
    // public System.String secret
    // Offset: 0x20
    ::Il2CppString* secret;
    // public System.Int32 multiplayerPort
    // Offset: 0x28
    int multiplayerPort;
    // public System.Byte flags
    // Offset: 0x2C
    uint8_t flags;
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x20A5864
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x20A58D8
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x20A3A4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LocalNetworkDiscoveryManager::InviteRequestPacket* New_ctor();
  }; // LocalNetworkDiscoveryManager/InviteRequestPacket
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::InviteRequestPacket*, "", "LocalNetworkDiscoveryManager/InviteRequestPacket");
#pragma pack(pop)
