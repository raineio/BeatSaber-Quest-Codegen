// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IHandshakeServerToClientMessage
#include "MasterServer/IHandshakeServerToClientMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.ChangeCipherSpecRequest
  class ChangeCipherSpecRequest : public GlobalNamespace::BaseMasterServerReliableResponse, public MasterServer::IHandshakeServerToClientMessage {
    public:
    // static public PacketPool`1<MasterServer.ChangeCipherSpecRequest> get_pool()
    // Offset: 0x211D85C
    static GlobalNamespace::PacketPool_1<MasterServer::ChangeCipherSpecRequest*>* get_pool();
    // public override System.Void Release()
    // Offset: 0x211D8A4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x211D900
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    static ChangeCipherSpecRequest* New_ctor();
  }; // MasterServer.ChangeCipherSpecRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ChangeCipherSpecRequest*, "MasterServer", "ChangeCipherSpecRequest");
#pragma pack(pop)
