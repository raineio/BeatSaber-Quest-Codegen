// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FireworkItemController
  class FireworkItemController;
  // Forward declaring type: MultiplayerLobbyAvatarController
  class MultiplayerLobbyAvatarController;
  // Forward declaring type: MultiplayerLobbyAvatarPlace
  class MultiplayerLobbyAvatarPlace;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuInstaller
  class MenuInstaller : public Zenject::MonoInstaller {
    public:
    // private FireworkItemController _fireworkItemControllerPrefab
    // Offset: 0x20
    GlobalNamespace::FireworkItemController* fireworkItemControllerPrefab;
    // private MultiplayerLobbyAvatarController _multiplayerLobbyAvatarControllerPrefab
    // Offset: 0x28
    GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerLobbyAvatarControllerPrefab;
    // private MultiplayerLobbyAvatarPlace _multiplayerAvatarPlacePrefab
    // Offset: 0x30
    GlobalNamespace::MultiplayerLobbyAvatarPlace* multiplayerAvatarPlacePrefab;
    // public override System.Void InstallBindings()
    // Offset: 0x1FC28A4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1FC29A8
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuInstaller* New_ctor();
  }; // MenuInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuInstaller*, "", "MenuInstaller");
#pragma pack(pop)
