// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: ConnectedPlayerHelpers
  class ConnectedPlayerHelpers : public ::Il2CppObject {
    public:
    // static public System.Boolean WantsToPlayNextLevel(IConnectedPlayer connectedPlayer)
    // Offset: 0x1B43FFC
    static bool WantsToPlayNextLevel(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean WasActiveAtLevelStart(IConnectedPlayer connectedPlayer)
    // Offset: 0x1B440BC
    static bool WasActiveAtLevelStart(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsActive(IConnectedPlayer connectedPlayer)
    // Offset: 0x1B4417C
    static bool IsActive(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean HasFinishedLevel(IConnectedPlayer connectedPlayer)
    // Offset: 0x1B4423C
    static bool HasFinishedLevel(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsActiveOrFinished(IConnectedPlayer connectedPlayer)
    // Offset: 0x1B442FC
    static bool IsActiveOrFinished(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsLeftHanded(IConnectedPlayer connectedPlayer)
    // Offset: 0x1B44334
    static bool IsLeftHanded(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsFailed(IConnectedPlayer connectedPlayer)
    // Offset: 0x1B443F4
    static bool IsFailed(GlobalNamespace::IConnectedPlayer* connectedPlayer);
  }; // ConnectedPlayerHelpers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerHelpers*, "", "ConnectedPlayerHelpers");
#pragma pack(pop)