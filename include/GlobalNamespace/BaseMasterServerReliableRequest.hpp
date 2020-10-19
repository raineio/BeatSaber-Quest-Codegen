// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerReliableRequest
#include "MasterServer/IMasterServerReliableRequest.hpp"
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
  // Autogenerated type: BaseMasterServerReliableRequest
  class BaseMasterServerReliableRequest : public ::Il2CppObject, public MasterServer::IMasterServerReliableRequest {
    public:
    // private System.UInt32 <requestId>k__BackingField
    // Offset: 0x10
    uint requestId;
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return requestId;
    }
    // private System.Void set_requestId(System.UInt32 value)
    // Offset: 0x2155B48
    void set_requestId(uint value);
    // public System.UInt32 get_requestId()
    // Offset: 0x2155B40
    // Implemented from: MasterServer.IMasterServerReliableRequest
    // Base method: System.UInt32 IMasterServerReliableRequest::get_requestId()
    uint get_requestId();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2155B50
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2155B74
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0xFFFFFFFF
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // private MasterServer.IMasterServerReliableRequest MasterServer.IMasterServerReliableRequest.WithRequestId(System.UInt32 requestId)
    // Offset: 0x2155BA8
    // Implemented from: MasterServer.IMasterServerReliableRequest
    // Base method: MasterServer.IMasterServerReliableRequest IMasterServerReliableRequest::WithRequestId(System.UInt32 requestId)
    MasterServer::IMasterServerReliableRequest* MasterServer_IMasterServerReliableRequest_WithRequestId(uint requestId);
    // protected System.Void .ctor()
    // Offset: 0x2155BB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseMasterServerReliableRequest* New_ctor();
  }; // BaseMasterServerReliableRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerReliableRequest*, "", "BaseMasterServerReliableRequest");
#pragma pack(pop)
