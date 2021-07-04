// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalActivePlayerInGameMenuViewController
  class MultiplayerLocalActivePlayerInGameMenuViewController;
  // Forward declaring type: IMenuButtonTrigger
  class IMenuButtonTrigger;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerInGameMenuController
  class MultiplayerLocalActivePlayerInGameMenuController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // [InjectAttribute] Offset: 0xE1C0BC
    // private readonly MultiplayerLocalActivePlayerInGameMenuViewController _inGameMenuViewController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController* inGameMenuViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C0CC
    // private readonly IMenuButtonTrigger _menuButtonTrigger
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMenuButtonTrigger* menuButtonTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMenuButtonTrigger*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C0DC
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C0EC
    // private readonly MultiplayerController _multiplayerController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerController* multiplayerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C0FC
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C10C
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C11C
    // private System.Action didGiveUpEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* didGiveUpEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C12C
    // private System.Action`1<System.Action`1<System.Boolean>> canShowInGameMenuEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<System::Action_1<bool>*>* canShowInGameMenuEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<System::Action_1<bool>*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C13C
    // private System.Action requestsDisconnectEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* requestsDisconnectEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _gameMenuIsShown
    // Size: 0x1
    // Offset: 0x60
    bool gameMenuIsShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerInGameMenuController
    MultiplayerLocalActivePlayerInGameMenuController(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController* inGameMenuViewController_ = {}, GlobalNamespace::IMenuButtonTrigger* menuButtonTrigger_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, GlobalNamespace::MultiplayerController* multiplayerController_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, System::Action* didGiveUpEvent_ = {}, System::Action_1<System::Action_1<bool>*>* canShowInGameMenuEvent_ = {}, System::Action* requestsDisconnectEvent_ = {}, bool gameMenuIsShown_ = {}) noexcept : inGameMenuViewController{inGameMenuViewController_}, menuButtonTrigger{menuButtonTrigger_}, vrPlatformHelper{vrPlatformHelper_}, multiplayerController{multiplayerController_}, saberManager{saberManager_}, beatmapObjectManager{beatmapObjectManager_}, didGiveUpEvent{didGiveUpEvent_}, canShowInGameMenuEvent{canShowInGameMenuEvent_}, requestsDisconnectEvent{requestsDisconnectEvent_}, gameMenuIsShown{gameMenuIsShown_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didGiveUpEvent(System.Action value)
    // Offset: 0x102B5C0
    void add_didGiveUpEvent(System::Action* value);
    // public System.Void remove_didGiveUpEvent(System.Action value)
    // Offset: 0x102BC30
    void remove_didGiveUpEvent(System::Action* value);
    // public System.Void add_canShowInGameMenuEvent(System.Action`1<System.Action`1<System.Boolean>> value)
    // Offset: 0x102C6A8
    void add_canShowInGameMenuEvent(System::Action_1<System::Action_1<bool>*>* value);
    // public System.Void remove_canShowInGameMenuEvent(System.Action`1<System.Action`1<System.Boolean>> value)
    // Offset: 0x102C74C
    void remove_canShowInGameMenuEvent(System::Action_1<System::Action_1<bool>*>* value);
    // public System.Void add_requestsDisconnectEvent(System.Action value)
    // Offset: 0x102B664
    void add_requestsDisconnectEvent(System::Action* value);
    // public System.Void remove_requestsDisconnectEvent(System.Action value)
    // Offset: 0x102BCD4
    void remove_requestsDisconnectEvent(System::Action* value);
    // public System.Boolean get_gameMenuIsShown()
    // Offset: 0x102C7F0
    bool get_gameMenuIsShown();
    // private System.Boolean get_canShowInGameMenu()
    // Offset: 0x102C7F8
    bool get_canShowInGameMenu();
    // protected System.Void Start()
    // Offset: 0x102C8E4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x102CDB8
    void OnDestroy();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x102D2B4
    void OnApplicationPause(bool pauseStatus);
    // public System.Void ShowInGameMenu()
    // Offset: 0x102D2C0
    void ShowInGameMenu();
    // private System.Void HideInGameMenu()
    // Offset: 0x102CB60
    void HideInGameMenu();
    // private System.Void HandleMenuButtonTriggered()
    // Offset: 0x102D3E8
    void HandleMenuButtonTriggered();
    // private System.Void HandleInputFocusWasCaptured()
    // Offset: 0x102D3EC
    void HandleInputFocusWasCaptured();
    // private System.Void HandleInGameMenuViewControllerDidPressResumeButton()
    // Offset: 0x102D3F0
    void HandleInGameMenuViewControllerDidPressResumeButton();
    // private System.Void HandleInGameMenuViewControllerDidPressGiveUpButton()
    // Offset: 0x102D3F4
    void HandleInGameMenuViewControllerDidPressGiveUpButton();
    // private System.Void HandleInGameMenuViewControllerDidPressDisconnectButton()
    // Offset: 0x102D438
    void HandleInGameMenuViewControllerDidPressDisconnectButton();
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x102D44C
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // public System.Void .ctor()
    // Offset: 0x102D5FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerInGameMenuController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerInGameMenuController*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerInGameMenuController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerInGameMenuController), 96 + sizeof(bool)> __GlobalNamespace_MultiplayerLocalActivePlayerInGameMenuControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerInGameMenuController) == 0x61);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*, "", "MultiplayerLocalActivePlayerInGameMenuController");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::add_didGiveUpEvent
// Il2CppName: add_didGiveUpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)(System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::add_didGiveUpEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "add_didGiveUpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::remove_didGiveUpEvent
// Il2CppName: remove_didGiveUpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)(System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::remove_didGiveUpEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "remove_didGiveUpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::add_canShowInGameMenuEvent
// Il2CppName: add_canShowInGameMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)(System::Action_1<System::Action_1<bool>*>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::add_canShowInGameMenuEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "add_canShowInGameMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<System::Action_1<bool>*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::remove_canShowInGameMenuEvent
// Il2CppName: remove_canShowInGameMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)(System::Action_1<System::Action_1<bool>*>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::remove_canShowInGameMenuEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "remove_canShowInGameMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<System::Action_1<bool>*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::add_requestsDisconnectEvent
// Il2CppName: add_requestsDisconnectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)(System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::add_requestsDisconnectEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "add_requestsDisconnectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::remove_requestsDisconnectEvent
// Il2CppName: remove_requestsDisconnectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)(System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::remove_requestsDisconnectEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "remove_requestsDisconnectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::get_gameMenuIsShown
// Il2CppName: get_gameMenuIsShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::get_gameMenuIsShown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "get_gameMenuIsShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::get_canShowInGameMenu
// Il2CppName: get_canShowInGameMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::get_canShowInGameMenu)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "get_canShowInGameMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)(bool)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::OnApplicationPause)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::ShowInGameMenu
// Il2CppName: ShowInGameMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::ShowInGameMenu)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "ShowInGameMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HideInGameMenu
// Il2CppName: HideInGameMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HideInGameMenu)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "HideInGameMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleMenuButtonTriggered
// Il2CppName: HandleMenuButtonTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleMenuButtonTriggered)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "HandleMenuButtonTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleInputFocusWasCaptured
// Il2CppName: HandleInputFocusWasCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleInputFocusWasCaptured)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "HandleInputFocusWasCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleInGameMenuViewControllerDidPressResumeButton
// Il2CppName: HandleInGameMenuViewControllerDidPressResumeButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleInGameMenuViewControllerDidPressResumeButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "HandleInGameMenuViewControllerDidPressResumeButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleInGameMenuViewControllerDidPressGiveUpButton
// Il2CppName: HandleInGameMenuViewControllerDidPressGiveUpButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleInGameMenuViewControllerDidPressGiveUpButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "HandleInGameMenuViewControllerDidPressGiveUpButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleInGameMenuViewControllerDidPressDisconnectButton
// Il2CppName: HandleInGameMenuViewControllerDidPressDisconnectButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleInGameMenuViewControllerDidPressDisconnectButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "HandleInGameMenuViewControllerDidPressDisconnectButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleStateChanged
// Il2CppName: HandleStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::*)(GlobalNamespace::MultiplayerController::State)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::HandleStateChanged)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*), "HandleStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MultiplayerController::State>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
