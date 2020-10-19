// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
  // Forward declaring type: IServerBeatmapProvider
  class IServerBeatmapProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayServerFiniteStateMachine
  class GameplayServerFiniteStateMachine : public ::Il2CppObject, public System::IDisposable {
    public:
    // Nested type: GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType
    struct GameStateType;
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, GameplayServerConfiguration configuration, IServerBeatmapProvider beatmapProvider)
    // Offset: 0x2160054
    static GameplayServerFiniteStateMachine* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::GameplayServerConfiguration configuration, GlobalNamespace::IServerBeatmapProvider* beatmapProvider);
    // public System.Void Dispose()
    // Offset: 0x216005C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // GameplayServerFiniteStateMachine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFiniteStateMachine*, "", "GameplayServerFiniteStateMachine");
#pragma pack(pop)
