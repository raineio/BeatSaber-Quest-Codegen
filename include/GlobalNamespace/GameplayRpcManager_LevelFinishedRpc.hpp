// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayRpcManager/LevelFinishedRpc
  class GameplayRpcManager::LevelFinishedRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::LevelCompletionResults*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x215F4E4
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayRpcManager::LevelFinishedRpc* New_ctor();
  }; // GameplayRpcManager/LevelFinishedRpc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::LevelFinishedRpc*, "", "GameplayRpcManager/LevelFinishedRpc");
#pragma pack(pop)
