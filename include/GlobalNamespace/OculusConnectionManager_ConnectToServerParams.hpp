// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusConnectionManager
#include "GlobalNamespace/OculusConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusNetworkPlayerModel
  class OculusNetworkPlayerModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusConnectionManager/ConnectToServerParams
  class OculusConnectionManager::ConnectToServerParams : public ::Il2CppObject, public GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*> {
    public:
    // public OculusNetworkPlayerModel oculusNetworkPlayerModel
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModel;
    // public System.UInt64 serverId
    // Offset: 0x18
    uint64_t serverId;
    // public System.Void .ctor()
    // Offset: 0x21036F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusConnectionManager::ConnectToServerParams* New_ctor();
  }; // OculusConnectionManager/ConnectToServerParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusConnectionManager::ConnectToServerParams*, "", "OculusConnectionManager/ConnectToServerParams");
#pragma pack(pop)
