// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuRpcManager/SetStartGameTimeRpc
  class MenuRpcManager::SetStartGameTimeRpc : public GlobalNamespace::RemoteProcedureCall_1<float> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1E4923C
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuRpcManager::SetStartGameTimeRpc* New_ctor();
  }; // MenuRpcManager/SetStartGameTimeRpc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::SetStartGameTimeRpc*, "", "MenuRpcManager/SetStartGameTimeRpc");
#pragma pack(pop)