// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
#include "GlobalNamespace/MasterServerConnectionManager_MasterServerConnectionManagerParamsBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MasterServerConnectionManager/ConnectToServerParams
  class MasterServerConnectionManager::ConnectToServerParams : public GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase {
    public:
    // public System.String secret
    // Offset: 0x30
    ::Il2CppString* secret;
    // public System.String code
    // Offset: 0x38
    ::Il2CppString* code;
    // public System.String password
    // Offset: 0x40
    ::Il2CppString* password;
    // public System.Net.IPEndPoint endPoint
    // Offset: 0x48
    System::Net::IPEndPoint* endPoint;
    // public System.String serverUserId
    // Offset: 0x50
    ::Il2CppString* serverUserId;
    // public System.String serverUserName
    // Offset: 0x58
    ::Il2CppString* serverUserName;
    // public System.Void .ctor()
    // Offset: 0x21304C0
    // Implemented from: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
    // Base method: System.Void MasterServerConnectionManagerParamsBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static MasterServerConnectionManager::ConnectToServerParams* New_ctor();
  }; // MasterServerConnectionManager/ConnectToServerParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams*, "", "MasterServerConnectionManager/ConnectToServerParams");
#pragma pack(pop)
