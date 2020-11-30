// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LobbyGameState
  class LobbyGameState : public ::Il2CppObject {
    public:
    // private System.Action`1<MultiplayerGameState> gameStateDidChangeEvent
    // Offset: 0x10
    System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeEvent;
    // private MultiplayerGameState _gameState
    // Offset: 0x18
    GlobalNamespace::MultiplayerGameState gameState;
    // public MultiplayerGameState get_gameState()
    // Offset: 0x1AC92A4
    GlobalNamespace::MultiplayerGameState get_gameState();
    // public System.Void add_gameStateDidChangeEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x1AC92AC
    void add_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_gameStateDidChangeEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x1AC9350
    void remove_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void SetGameState(MultiplayerGameState newGameState)
    // Offset: 0x1AC93F4
    void SetGameState(GlobalNamespace::MultiplayerGameState newGameState);
    // public System.Void SetGameStateWithoutNotification(MultiplayerGameState newGameState)
    // Offset: 0x1AC9478
    void SetGameStateWithoutNotification(GlobalNamespace::MultiplayerGameState newGameState);
    // public System.Void .ctor()
    // Offset: 0x1AC9480
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LobbyGameState* New_ctor();
  }; // LobbyGameState
  check_size<sizeof(LobbyGameState), 24 + sizeof(GlobalNamespace::MultiplayerGameState) + 8 - (24 + sizeof(GlobalNamespace::MultiplayerGameState)) % 8> __GlobalNamespace_LobbyGameStateSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameState*, "", "LobbyGameState");
#pragma pack(pop)