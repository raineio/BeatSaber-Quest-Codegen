// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerFiniteStateMachine
  class GameplayServerFiniteStateMachine;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
  // Forward declaring type: IServerBeatmapProvider
  class IServerBeatmapProvider;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerFiniteStateMachineFactory
  class GameplayServerFiniteStateMachineFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::GameplayServerFiniteStateMachineFactory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFiniteStateMachineFactory*, "", "GameplayServerFiniteStateMachineFactory");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameplayServerFiniteStateMachineFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayServerFiniteStateMachineFactory : public ::Il2CppObject {
    public:
    // static public GameplayServerFiniteStateMachine Create(MasterServer.ITimeProvider timeProvider, IMultiplayerSessionManager multiplayerSessionManager, System.String creatorId, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, IServerBeatmapProvider beatmapProvider)
    // Offset: 0x156A568
    static GlobalNamespace::GameplayServerFiniteStateMachine* Create(MasterServer::ITimeProvider* timeProvider, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::StringW creatorId, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, GlobalNamespace::IServerBeatmapProvider* beatmapProvider);
  }; // GameplayServerFiniteStateMachineFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachineFactory::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFiniteStateMachine* (*)(MasterServer::ITimeProvider*, GlobalNamespace::IMultiplayerSessionManager*, ::StringW, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, GlobalNamespace::IServerBeatmapProvider*)>(&GlobalNamespace::GameplayServerFiniteStateMachineFactory::Create)> {
  static const MethodInfo* get() {
    static auto* timeProvider = &::il2cpp_utils::GetClassFromName("MasterServer", "ITimeProvider")->byval_arg;
    static auto* multiplayerSessionManager = &::il2cpp_utils::GetClassFromName("", "IMultiplayerSessionManager")->byval_arg;
    static auto* creatorId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* beatmapProvider = &::il2cpp_utils::GetClassFromName("", "IServerBeatmapProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachineFactory*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeProvider, multiplayerSessionManager, creatorId, selectionMask, configuration, beatmapProvider});
  }
};
