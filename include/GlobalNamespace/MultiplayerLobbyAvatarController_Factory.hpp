// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerLobbyAvatarController
#include "GlobalNamespace/MultiplayerLobbyAvatarController.hpp"
// Including type: Zenject.PlaceholderFactory`2
#include "Zenject/PlaceholderFactory_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLobbyAvatarController/Factory
  class MultiplayerLobbyAvatarController::Factory : public Zenject::PlaceholderFactory_2<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::MultiplayerLobbyAvatarController*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2043B10
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: System.Void PlaceholderFactory_2::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLobbyAvatarController::Factory* New_ctor();
  }; // MultiplayerLobbyAvatarController/Factory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAvatarController::Factory*, "", "MultiplayerLobbyAvatarController/Factory");
#pragma pack(pop)
