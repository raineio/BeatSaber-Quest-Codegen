// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IMultiplayerLevelEndActionsListener
  class IMultiplayerLevelEndActionsListener;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: MultiplayerLocalActivePlayerInGameMenuController
  class MultiplayerLocalActivePlayerInGameMenuController;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: MultiplayerLocalPlayerDisconnectHelper
  class MultiplayerLocalPlayerDisconnectHelper;
  // Forward declaring type: SaberManager
  class SaberManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalActivePlayerGameplayManager
  class MultiplayerLocalActivePlayerGameplayManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*, "", "MultiplayerLocalActivePlayerGameplayManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerGameplayManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData
    class InitData;
    public:
    // [InjectAttribute] Offset: 0x10DB8E4
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB8F4
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB904
    // private readonly IMultiplayerLevelEndActionsListener _multiplayerLevelEndActions
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IMultiplayerLevelEndActionsListener* multiplayerLevelEndActions;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerLevelEndActionsListener*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB914
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB924
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB934
    // private readonly MultiplayerLocalActivePlayerInGameMenuController _inGameMenuController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* inGameMenuController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB944
    // private readonly IVRPlatformHelper _platformHelper
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::IVRPlatformHelper* platformHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB954
    // private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB964
    // private readonly MultiplayerLocalActivePlayerGameplayManager/InitData _initData
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0x10DB974
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberManager*) == 0x8);
    // private System.Boolean _levelFinishedOrFailed
    // Size: 0x1
    // Offset: 0x68
    bool levelFinishedOrFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly GameSongController _gameSongController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameSongController*& dyn__gameSongController();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly IMultiplayerLevelEndActionsListener _multiplayerLevelEndActions
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerLevelEndActionsListener*& dyn__multiplayerLevelEndActions();
    // Get instance field reference: private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // Get instance field reference: private readonly GameEnergyCounter _gameEnergyCounter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameEnergyCounter*& dyn__gameEnergyCounter();
    // Get instance field reference: private readonly MultiplayerLocalActivePlayerInGameMenuController _inGameMenuController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*& dyn__inGameMenuController();
    // Get instance field reference: private readonly IVRPlatformHelper _platformHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IVRPlatformHelper*& dyn__platformHelper();
    // Get instance field reference: private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& dyn__disconnectHelper();
    // Get instance field reference: private readonly MultiplayerLocalActivePlayerGameplayManager/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData*& dyn__initData();
    // Get instance field reference: private readonly SaberManager _saberManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private System.Boolean _levelFinishedOrFailed
    [[deprecated("Use field access instead!")]] bool& dyn__levelFinishedOrFailed();
    // public System.Void .ctor()
    // Offset: 0x1426D18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerGameplayManager*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x1425AA0
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x1426028
    void OnDisable();
    // private System.Void PerformPlayerFail()
    // Offset: 0x14265CC
    void PerformPlayerFail();
    // private System.Void PerformPlayerGivenUp()
    // Offset: 0x14267F8
    void PerformPlayerGivenUp();
    // private System.Void HandleGameEnergyDidReach0()
    // Offset: 0x1426A24
    void HandleGameEnergyDidReach0();
    // private System.Void HandleInGameMenuControllerDidGiveUp()
    // Offset: 0x1426A48
    void HandleInGameMenuControllerDidGiveUp();
    // private System.Void HandleInGameMenuControllerRequestsDisconnect()
    // Offset: 0x1426A4C
    void HandleInGameMenuControllerRequestsDisconnect();
    // private System.Void HandleSongDidFinish()
    // Offset: 0x1426A9C
    void HandleSongDidFinish();
    // private System.Void HandleHmdUnmounted()
    // Offset: 0x1426CC8
    void HandleHmdUnmounted();
    // private System.Void HandleVrFocusWasCapturedEvent()
    // Offset: 0x1426CCC
    void HandleVrFocusWasCapturedEvent();
    // private System.Void HandleInputFocusCaptured()
    // Offset: 0x1426008
    void HandleInputFocusCaptured();
    // private System.Void HandleInputFocusReleased()
    // Offset: 0x1426CD0
    void HandleInputFocusReleased();
    // private System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x1426D0C
    void OnApplicationFocus(bool hasFocus);
  }; // MultiplayerLocalActivePlayerGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerGameplayManager), 104 + sizeof(bool)> __GlobalNamespace_MultiplayerLocalActivePlayerGameplayManagerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerGameplayManager) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerFail
// Il2CppName: PerformPlayerFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "PerformPlayerFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerGivenUp
// Il2CppName: PerformPlayerGivenUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerGivenUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "PerformPlayerGivenUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleGameEnergyDidReach0
// Il2CppName: HandleGameEnergyDidReach0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleGameEnergyDidReach0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleGameEnergyDidReach0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerDidGiveUp
// Il2CppName: HandleInGameMenuControllerDidGiveUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerDidGiveUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleInGameMenuControllerDidGiveUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerRequestsDisconnect
// Il2CppName: HandleInGameMenuControllerRequestsDisconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerRequestsDisconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleInGameMenuControllerRequestsDisconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleSongDidFinish
// Il2CppName: HandleSongDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleSongDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleSongDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleHmdUnmounted
// Il2CppName: HandleHmdUnmounted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleHmdUnmounted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleHmdUnmounted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleVrFocusWasCapturedEvent
// Il2CppName: HandleVrFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleVrFocusWasCapturedEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleVrFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusCaptured
// Il2CppName: HandleInputFocusCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusCaptured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleInputFocusCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusReleased
// Il2CppName: HandleInputFocusReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusReleased)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "HandleInputFocusReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)(bool)>(&GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
