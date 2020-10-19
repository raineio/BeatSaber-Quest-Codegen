// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerReliableResponse
#include "MasterServer/IMasterServerReliableResponse.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: IMasterServerReliableRequest because it is already included!
  // Skipping declaration: IMasterServerResponse because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BaseMasterServerReliableResponse
  class BaseMasterServerReliableResponse : public ::Il2CppObject, public MasterServer::IMasterServerReliableResponse {
    public:
    // private System.UInt32 <requestId>k__BackingField
    // Offset: 0x10
    uint requestId;
    // private System.UInt32 <responseId>k__BackingField
    // Offset: 0x14
    uint responseId;
    // private System.Void set_requestId(System.UInt32 value)
    // Offset: 0x2155BC0
    void set_requestId(uint value);
    // private System.Void set_responseId(System.UInt32 value)
    // Offset: 0x2155BD0
    void set_responseId(uint value);
    // public System.UInt32 get_requestId()
    // Offset: 0x2155BB8
    // Implemented from: MasterServer.IMasterServerReliableRequest
    // Base method: System.UInt32 IMasterServerReliableRequest::get_requestId()
    uint get_requestId();
    // public System.UInt32 get_responseId()
    // Offset: 0x2155BC8
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.UInt32 IMasterServerResponse::get_responseId()
    uint get_responseId();
    // public System.Byte get_resultCode()
    // Offset: 0x2155BD8
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.Byte IMasterServerResponse::get_resultCode()
    uint8_t get_resultCode();
    // public System.String get_resultCodeString()
    // Offset: 0x2155BE0
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.String IMasterServerResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2155C28
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2155C6C
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
    // Offset: 0x2155CB4
    // Implemented from: MasterServer.IMasterServerReliableRequest
    // Base method: MasterServer.IMasterServerReliableRequest IMasterServerReliableRequest::WithRequestId(System.UInt32 requestId)
    MasterServer::IMasterServerReliableRequest* MasterServer_IMasterServerReliableRequest_WithRequestId(uint requestId);
    // private MasterServer.IMasterServerResponse MasterServer.IMasterServerResponse.WithResponseId(System.UInt32 responseId)
    // Offset: 0x2155CBC
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: MasterServer.IMasterServerResponse IMasterServerResponse::WithResponseId(System.UInt32 responseId)
    MasterServer::IMasterServerResponse* MasterServer_IMasterServerResponse_WithResponseId(uint responseId);
    // private MasterServer.IMasterServerReliableResponse MasterServer.IMasterServerReliableResponse.WithRequestAndResponseId(System.UInt32 requestId, System.UInt32 responseId)
    // Offset: 0x2155CC4
    // Implemented from: MasterServer.IMasterServerReliableResponse
    // Base method: MasterServer.IMasterServerReliableResponse IMasterServerReliableResponse::WithRequestAndResponseId(System.UInt32 requestId, System.UInt32 responseId)
    MasterServer::IMasterServerReliableResponse* MasterServer_IMasterServerReliableResponse_WithRequestAndResponseId(uint requestId, uint responseId);
    // protected System.Void .ctor()
    // Offset: 0x2155CCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseMasterServerReliableResponse* New_ctor();
  }; // BaseMasterServerReliableResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerReliableResponse*, "", "BaseMasterServerReliableResponse");
#pragma pack(pop)
