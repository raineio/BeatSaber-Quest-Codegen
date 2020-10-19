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
    // Offset: 0x2156524
    static bool WantsToPlayNextLevel(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean WasActiveAtLevelStart(IConnectedPlayer connectedPlayer)
    // Offset: 0x21565E4
    static bool WasActiveAtLevelStart(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsActive(IConnectedPlayer connectedPlayer)
    // Offset: 0x21566A4
    static bool IsActive(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean HasFinishedLevel(IConnectedPlayer connectedPlayer)
    // Offset: 0x2156764
    static bool HasFinishedLevel(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsActiveOrFinished(IConnectedPlayer connectedPlayer)
    // Offset: 0x2156824
    static bool IsActiveOrFinished(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsLeftHanded(IConnectedPlayer connectedPlayer)
    // Offset: 0x215685C
    static bool IsLeftHanded(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // static public System.Boolean IsFailed(IConnectedPlayer connectedPlayer)
    // Offset: 0x215691C
    static bool IsFailed(GlobalNamespace::IConnectedPlayer* connectedPlayer);
  }; // ConnectedPlayerHelpers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerHelpers*, "", "ConnectedPlayerHelpers");
#pragma pack(pop)
