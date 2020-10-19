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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuRpcManager/SelectGameplayModifiersRpc
  class MenuRpcManager::SelectGameplayModifiersRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::GameplayModifiers*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x21EEF08
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuRpcManager::SelectGameplayModifiersRpc* New_ctor();
  }; // MenuRpcManager/SelectGameplayModifiersRpc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::SelectGameplayModifiersRpc*, "", "MenuRpcManager/SelectGameplayModifiersRpc");
#pragma pack(pop)
