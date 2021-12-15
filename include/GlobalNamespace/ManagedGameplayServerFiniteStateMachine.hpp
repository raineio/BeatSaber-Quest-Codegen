// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayServerFiniteStateMachine
#include "GlobalNamespace/GameplayServerFiniteStateMachine.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IServerBeatmapProvider
  class IServerBeatmapProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ManagedGameplayServerFiniteStateMachine
  class ManagedGameplayServerFiniteStateMachine;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::ManagedGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ManagedGameplayServerFiniteStateMachine*, "", "ManagedGameplayServerFiniteStateMachine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: ManagedGameplayServerFiniteStateMachine
  // [TokenAttribute] Offset: FFFFFFFF
  class ManagedGameplayServerFiniteStateMachine : public GlobalNamespace::GameplayServerFiniteStateMachine {
    public:
    // public System.Void .ctor(MasterServer.ITimeProvider timeProvider, IMultiplayerSessionManager multiplayerSessionManager, System.String ownerUserId, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, IServerBeatmapProvider beatmapProvider)
    // Offset: 0x156A7A8
    // Implemented from: GameplayServerFiniteStateMachine
    // Base method: System.Void GameplayServerFiniteStateMachine::.ctor(MasterServer.ITimeProvider timeProvider, IMultiplayerSessionManager multiplayerSessionManager, System.String ownerUserId, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, IServerBeatmapProvider beatmapProvider)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManagedGameplayServerFiniteStateMachine* New_ctor(MasterServer::ITimeProvider* timeProvider, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::Il2CppString* ownerUserId, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, GlobalNamespace::IServerBeatmapProvider* beatmapProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ManagedGameplayServerFiniteStateMachine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManagedGameplayServerFiniteStateMachine*, creationType>(timeProvider, multiplayerSessionManager, ownerUserId, selectionMask, configuration, beatmapProvider)));
    }
  }; // ManagedGameplayServerFiniteStateMachine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ManagedGameplayServerFiniteStateMachine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
