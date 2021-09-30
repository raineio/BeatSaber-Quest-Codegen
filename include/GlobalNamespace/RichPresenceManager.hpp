// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: IRichPresencePlatformHandler
  class IRichPresencePlatformHandler;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: LobbyGameStateModel
  class LobbyGameStateModel;
  // Forward declaring type: IUnifiedNetworkPlayerModel
  class IUnifiedNetworkPlayerModel;
  // Forward declaring type: LobbyPlayerPermissionsModel
  class LobbyPlayerPermissionsModel;
  // Forward declaring type: BrowsingMenusRichPresenceData
  class BrowsingMenusRichPresenceData;
  // Forward declaring type: InMultiplayerRichPresenceData
  class InMultiplayerRichPresenceData;
  // Forward declaring type: PlayingCampaignRichPresenceData
  class PlayingCampaignRichPresenceData;
  // Forward declaring type: PlayingTutorialPresenceData
  class PlayingTutorialPresenceData;
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
  // Forward declaring type: MultiplayerGameState
  struct MultiplayerGameState;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: RichPresenceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RichPresenceManager : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xF0410C
    // private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xF0411C
    // private readonly IRichPresencePlatformHandler _richPresencePlatformHandler
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IRichPresencePlatformHandler* richPresencePlatformHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IRichPresencePlatformHandler*) == 0x8);
    // [InjectAttribute] Offset: 0xF0412C
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF0413C
    // private readonly LobbyGameStateModel _lobbyGameStateModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::LobbyGameStateModel* lobbyGameStateModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyGameStateModel*) == 0x8);
    // [InjectAttribute] Offset: 0xF0414C
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IUnifiedNetworkPlayerModel*) == 0x8);
    // [InjectAttribute] Offset: 0xF0415C
    // private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::LobbyPlayerPermissionsModel* lobbyPlayerPermissionsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyPlayerPermissionsModel*) == 0x8);
    // private System.Boolean _menuWasLoaded
    // Size: 0x1
    // Offset: 0x68
    bool menuWasLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isInMultiplayerLobby
    // Size: 0x1
    // Offset: 0x69
    bool isInMultiplayerLobby;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInMultiplayerLobby and: browsingMenusRichPresenceData
    char __padding11[0x6] = {};
    // private BrowsingMenusRichPresenceData _browsingMenusRichPresenceData
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BrowsingMenusRichPresenceData* browsingMenusRichPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BrowsingMenusRichPresenceData*) == 0x8);
    // private InMultiplayerRichPresenceData _inMultiplayerRichPresenceData
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::InMultiplayerRichPresenceData* inMultiplayerRichPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::InMultiplayerRichPresenceData*) == 0x8);
    // private PlayingCampaignRichPresenceData _playingCampaignRichPresenceData
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::PlayingCampaignRichPresenceData* playingCampaignRichPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayingCampaignRichPresenceData*) == 0x8);
    // private PlayingTutorialPresenceData _playingTutorialPresenceData
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::PlayingTutorialPresenceData* playingTutorialPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayingTutorialPresenceData*) == 0x8);
    // private IRichPresenceData _currentPresenceData
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::IRichPresenceData* currentPresenceData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IRichPresenceData*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__standardLevelScenesTransitionSetupData();
    // Get instance field reference: private ScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    GlobalNamespace::ScenesTransitionSetupDataSO*& dyn__tutorialScenesTransitionSetupData();
    // Get instance field reference: private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& dyn__missionLevelScenesTransitionSetupData();
    // Get instance field reference: private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*& dyn__multiplayerLevelScenesTransitionSetupData();
    // Get instance field reference: private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    GlobalNamespace::MenuScenesTransitionSetupDataSO*& dyn__menuScenesTransitionSetupData();
    // Get instance field reference: private readonly IRichPresencePlatformHandler _richPresencePlatformHandler
    GlobalNamespace::IRichPresencePlatformHandler*& dyn__richPresencePlatformHandler();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private readonly LobbyGameStateModel _lobbyGameStateModel
    GlobalNamespace::LobbyGameStateModel*& dyn__lobbyGameStateModel();
    // Get instance field reference: private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    GlobalNamespace::IUnifiedNetworkPlayerModel*& dyn__unifiedNetworkPlayerModel();
    // Get instance field reference: private readonly LobbyPlayerPermissionsModel _lobbyPlayerPermissionsModel
    GlobalNamespace::LobbyPlayerPermissionsModel*& dyn__lobbyPlayerPermissionsModel();
    // Get instance field reference: private System.Boolean _menuWasLoaded
    bool& dyn__menuWasLoaded();
    // Get instance field reference: private System.Boolean _isInMultiplayerLobby
    bool& dyn__isInMultiplayerLobby();
    // Get instance field reference: private BrowsingMenusRichPresenceData _browsingMenusRichPresenceData
    GlobalNamespace::BrowsingMenusRichPresenceData*& dyn__browsingMenusRichPresenceData();
    // Get instance field reference: private InMultiplayerRichPresenceData _inMultiplayerRichPresenceData
    GlobalNamespace::InMultiplayerRichPresenceData*& dyn__inMultiplayerRichPresenceData();
    // Get instance field reference: private PlayingCampaignRichPresenceData _playingCampaignRichPresenceData
    GlobalNamespace::PlayingCampaignRichPresenceData*& dyn__playingCampaignRichPresenceData();
    // Get instance field reference: private PlayingTutorialPresenceData _playingTutorialPresenceData
    GlobalNamespace::PlayingTutorialPresenceData*& dyn__playingTutorialPresenceData();
    // Get instance field reference: private IRichPresenceData _currentPresenceData
    GlobalNamespace::IRichPresenceData*& dyn__currentPresenceData();
    // protected System.Void Awake()
    // Offset: 0x11C35C8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11C37F8
    void OnDestroy();
    // private System.Void HandleLobbyGameStateModelDidChange(MultiplayerGameState newGameState)
    // Offset: 0x11C3A10
    void HandleLobbyGameStateModelDidChange(GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void SetMenuPresence()
    // Offset: 0x11C3A2C
    void SetMenuPresence();
    // private System.Void HandleGameScenesManagerTransitionDidFinish(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer diContainer)
    // Offset: 0x11C3D2C
    void HandleGameScenesManagerTransitionDidFinish(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* diContainer);
    // private System.Void HandleMultiplayerPartySizeChanged(System.Int32 currentPartySize)
    // Offset: 0x11C4138
    void HandleMultiplayerPartySizeChanged(int currentPartySize);
    // private System.Void HandleLobbyPlayerPermissionChanged()
    // Offset: 0x11C431C
    void HandleLobbyPlayerPermissionChanged();
    // private System.Void SetPresence(IRichPresenceData presenceData)
    // Offset: 0x11C3C68
    void SetPresence(GlobalNamespace::IRichPresenceData* presenceData);
    // private System.Void Clear()
    // Offset: 0x11C4080
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x11C4494
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RichPresenceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RichPresenceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RichPresenceManager*, creationType>()));
    }
  }; // RichPresenceManager
  #pragma pack(pop)
  static check_size<sizeof(RichPresenceManager), 144 + sizeof(GlobalNamespace::IRichPresenceData*)> __GlobalNamespace_RichPresenceManagerSizeCheck;
  static_assert(sizeof(RichPresenceManager) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RichPresenceManager*, "", "RichPresenceManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange
// Il2CppName: HandleLobbyGameStateModelDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)(GlobalNamespace::MultiplayerGameState)>(&GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange)> {
  static const MethodInfo* get() {
    static auto* newGameState = &::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "HandleLobbyGameStateModelDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newGameState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::SetMenuPresence
// Il2CppName: SetMenuPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::SetMenuPresence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "SetMenuPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish
// Il2CppName: HandleGameScenesManagerTransitionDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)(GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*)>(&GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish)> {
  static const MethodInfo* get() {
    static auto* scenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "ScenesTransitionSetupDataSO")->byval_arg;
    static auto* diContainer = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "HandleGameScenesManagerTransitionDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scenesTransitionSetupData, diContainer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::HandleMultiplayerPartySizeChanged
// Il2CppName: HandleMultiplayerPartySizeChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)(int)>(&GlobalNamespace::RichPresenceManager::HandleMultiplayerPartySizeChanged)> {
  static const MethodInfo* get() {
    static auto* currentPartySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "HandleMultiplayerPartySizeChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentPartySize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::HandleLobbyPlayerPermissionChanged
// Il2CppName: HandleLobbyPlayerPermissionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::HandleLobbyPlayerPermissionChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "HandleLobbyPlayerPermissionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::SetPresence
// Il2CppName: SetPresence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)(GlobalNamespace::IRichPresenceData*)>(&GlobalNamespace::RichPresenceManager::SetPresence)> {
  static const MethodInfo* get() {
    static auto* presenceData = &::il2cpp_utils::GetClassFromName("", "IRichPresenceData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "SetPresence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{presenceData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RichPresenceManager::*)()>(&GlobalNamespace::RichPresenceManager::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RichPresenceManager*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RichPresenceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
