// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
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
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.RelayServerStatusUpdateRequest
  class RelayServerStatusUpdateRequest : public GlobalNamespace::BaseMasterServerReliableRequest, public MasterServer::IDedicatedServerClientToServerMessage {
    public:
    // private System.String <dedicatedServerId>k__BackingField
    // Offset: 0x18
    ::Il2CppString* dedicatedServerId;
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Offset: 0x20
    int64_t dedicatedServerCreationTime;
    // public System.String id
    // Offset: 0x28
    ::Il2CppString* id;
    // public System.Int32 currentPlayerCount
    // Offset: 0x30
    int currentPlayerCount;
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.RelayServerStatusUpdateRequest> get_pool()
    // Offset: 0x2123428
    static GlobalNamespace::PacketPool_1<MasterServer::RelayServerStatusUpdateRequest*>* get_pool();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x2128734
    void set_dedicatedServerId(::Il2CppString* value);
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x2128744
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.RelayServerStatusUpdateRequest Init(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, System.Int32 currentPlayerCount)
    // Offset: 0x212889C
    MasterServer::RelayServerStatusUpdateRequest* Init(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, int currentPlayerCount);
    // public System.String get_dedicatedServerId()
    // Offset: 0x212872C
    // Implemented from: MasterServer.IDedicatedServerClientToServerMessage
    // Base method: System.String IDedicatedServerClientToServerMessage::get_dedicatedServerId()
    ::Il2CppString* get_dedicatedServerId();
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x212873C
    // Implemented from: MasterServer.IDedicatedServerClientToServerMessage
    // Base method: System.Int64 IDedicatedServerClientToServerMessage::get_dedicatedServerCreationTime()
    int64_t get_dedicatedServerCreationTime();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x212874C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x21287B8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x2128840
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x21288F0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    static RelayServerStatusUpdateRequest* New_ctor();
  }; // MasterServer.RelayServerStatusUpdateRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::RelayServerStatusUpdateRequest*, "MasterServer", "RelayServerStatusUpdateRequest");
#pragma pack(pop)
