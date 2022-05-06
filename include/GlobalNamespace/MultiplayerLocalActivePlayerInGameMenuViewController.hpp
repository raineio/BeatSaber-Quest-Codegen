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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizedTextMeshProUGUI
  class LocalizedTextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectPromptView
  class DisconnectPromptView;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: LocalPlayerInGameMenuInitData
  class LocalPlayerInGameMenuInitData;
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
  // Forward declaring type: MultiplayerLocalPlayerDisconnectHelper
  class MultiplayerLocalPlayerDisconnectHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalActivePlayerInGameMenuViewController
  class MultiplayerLocalActivePlayerInGameMenuViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*, "", "MultiplayerLocalActivePlayerInGameMenuViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerInGameMenuViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerInGameMenuViewController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.UI.Button _disconnectButton
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Button* disconnectButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private Polyglot.LocalizedTextMeshProUGUI _disconnectButtonLocalizedText
    // Size: 0x8
    // Offset: 0x20
    ::Polyglot::LocalizedTextMeshProUGUI* disconnectButtonLocalizedText;
    // Field size check
    static_assert(sizeof(::Polyglot::LocalizedTextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _giveUpButton
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Button* giveUpButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _resumeButton
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Button* resumeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D7848
    // private UnityEngine.GameObject _mainBar
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* mainBar;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private DisconnectPromptView _disconnectPromptView
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::DisconnectPromptView* disconnectPromptView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DisconnectPromptView*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D7890
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelBar*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D78C8
    // private UnityEngine.GameObject _menuWrapperGameObject
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* menuWrapperGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _menuControllersGameObject
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::GameObject* menuControllersGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0x10D7910
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0x10D7920
    // private readonly LocalPlayerInGameMenuInitData _localPlayerInGameMenuInitData
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::LocalPlayerInGameMenuInitData* localPlayerInGameMenuInitData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocalPlayerInGameMenuInitData*) == 0x8);
    // [InjectAttribute] Offset: 0x10D7930
    // private readonly VRControllersInputManager _vrControllersInputManager
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRControllersInputManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10D7940
    // private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*) == 0x8);
    // private System.Action didPressDisconnectButtonEvent
    // Size: 0x8
    // Offset: 0x80
    ::System::Action* didPressDisconnectButtonEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action didPressGiveUpButtonEvent
    // Size: 0x8
    // Offset: 0x88
    ::System::Action* didPressGiveUpButtonEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action didPressResumeButtonEvent
    // Size: 0x8
    // Offset: 0x90
    ::System::Action* didPressResumeButtonEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x98
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    // private System.Single _disabledInteractionRemainingTime
    // Size: 0x4
    // Offset: 0xA0
    float disabledInteractionRemainingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kDisabledInteractionDuration
    static constexpr const float kDisabledInteractionDuration = 0.2;
    // Get static field: static private System.Single kDisabledInteractionDuration
    static float _get_kDisabledInteractionDuration();
    // Set static field: static private System.Single kDisabledInteractionDuration
    static void _set_kDisabledInteractionDuration(float value);
    // Get instance field reference: private UnityEngine.UI.Button _disconnectButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__disconnectButton();
    // Get instance field reference: private Polyglot.LocalizedTextMeshProUGUI _disconnectButtonLocalizedText
    [[deprecated("Use field access instead!")]] ::Polyglot::LocalizedTextMeshProUGUI*& dyn__disconnectButtonLocalizedText();
    // Get instance field reference: private UnityEngine.UI.Button _giveUpButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__giveUpButton();
    // Get instance field reference: private UnityEngine.UI.Button _resumeButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__resumeButton();
    // Get instance field reference: private UnityEngine.GameObject _mainBar
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__mainBar();
    // Get instance field reference: private DisconnectPromptView _disconnectPromptView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DisconnectPromptView*& dyn__disconnectPromptView();
    // Get instance field reference: private LevelBar _levelBar
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private UnityEngine.GameObject _menuWrapperGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__menuWrapperGameObject();
    // Get instance field reference: private UnityEngine.GameObject _menuControllersGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__menuControllersGameObject();
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private readonly LocalPlayerInGameMenuInitData _localPlayerInGameMenuInitData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LocalPlayerInGameMenuInitData*& dyn__localPlayerInGameMenuInitData();
    // Get instance field reference: private readonly VRControllersInputManager _vrControllersInputManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRControllersInputManager*& dyn__vrControllersInputManager();
    // Get instance field reference: private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& dyn__disconnectHelper();
    // Get instance field reference: private System.Action didPressDisconnectButtonEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didPressDisconnectButtonEvent();
    // Get instance field reference: private System.Action didPressGiveUpButtonEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didPressGiveUpButtonEvent();
    // Get instance field reference: private System.Action didPressResumeButtonEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didPressResumeButtonEvent();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private System.Single _disabledInteractionRemainingTime
    [[deprecated("Use field access instead!")]] float& dyn__disabledInteractionRemainingTime();
    // public System.Void add_didPressDisconnectButtonEvent(System.Action value)
    // Offset: 0x140EB10
    void add_didPressDisconnectButtonEvent(::System::Action* value);
    // public System.Void remove_didPressDisconnectButtonEvent(System.Action value)
    // Offset: 0x140F008
    void remove_didPressDisconnectButtonEvent(::System::Action* value);
    // public System.Void add_didPressGiveUpButtonEvent(System.Action value)
    // Offset: 0x140EC58
    void add_didPressGiveUpButtonEvent(::System::Action* value);
    // public System.Void remove_didPressGiveUpButtonEvent(System.Action value)
    // Offset: 0x140F150
    void remove_didPressGiveUpButtonEvent(::System::Action* value);
    // public System.Void add_didPressResumeButtonEvent(System.Action value)
    // Offset: 0x140EBB4
    void add_didPressResumeButtonEvent(::System::Action* value);
    // public System.Void remove_didPressResumeButtonEvent(System.Action value)
    // Offset: 0x140F0AC
    void remove_didPressResumeButtonEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x140FAC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerInGameMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerInGameMenuViewController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x140F5F0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x140F77C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x140F810
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x140F8B4
    void Update();
    // public System.Void ShowMenu()
    // Offset: 0x140F310
    void ShowMenu();
    // public System.Void HideMenu()
    // Offset: 0x140F36C
    void HideMenu();
    // private System.Void DisconnectButtonPressed()
    // Offset: 0x140F964
    void DisconnectButtonPressed();
    // private System.Void HandleDisconnectPromptViewDidViewFinish(System.Boolean disconnect)
    // Offset: 0x140F9A4
    void HandleDisconnectPromptViewDidViewFinish(bool disconnect);
    // private System.Void GiveUpButtonPressed()
    // Offset: 0x140FA74
    void GiveUpButtonPressed();
    // private System.Void ResumeButtonPressed()
    // Offset: 0x140F924
    void ResumeButtonPressed();
    // private System.Void <HandleDisconnectPromptViewDidViewFinish>b__32_0()
    // Offset: 0x140FAD0
    void $HandleDisconnectPromptViewDidViewFinish$b__32_0();
  }; // MultiplayerLocalActivePlayerInGameMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerInGameMenuViewController), 160 + sizeof(float)> __GlobalNamespace_MultiplayerLocalActivePlayerInGameMenuViewControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerInGameMenuViewController) == 0xA4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::add_didPressDisconnectButtonEvent
// Il2CppName: add_didPressDisconnectButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)(::System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::add_didPressDisconnectButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "add_didPressDisconnectButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::remove_didPressDisconnectButtonEvent
// Il2CppName: remove_didPressDisconnectButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)(::System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::remove_didPressDisconnectButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "remove_didPressDisconnectButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::add_didPressGiveUpButtonEvent
// Il2CppName: add_didPressGiveUpButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)(::System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::add_didPressGiveUpButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "add_didPressGiveUpButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::remove_didPressGiveUpButtonEvent
// Il2CppName: remove_didPressGiveUpButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)(::System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::remove_didPressGiveUpButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "remove_didPressGiveUpButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::add_didPressResumeButtonEvent
// Il2CppName: add_didPressResumeButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)(::System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::add_didPressResumeButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "add_didPressResumeButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::remove_didPressResumeButtonEvent
// Il2CppName: remove_didPressResumeButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)(::System::Action*)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::remove_didPressResumeButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "remove_didPressResumeButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::ShowMenu
// Il2CppName: ShowMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::ShowMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "ShowMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::HideMenu
// Il2CppName: HideMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::HideMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "HideMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::DisconnectButtonPressed
// Il2CppName: DisconnectButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::DisconnectButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "DisconnectButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::HandleDisconnectPromptViewDidViewFinish
// Il2CppName: HandleDisconnectPromptViewDidViewFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)(bool)>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::HandleDisconnectPromptViewDidViewFinish)> {
  static const MethodInfo* get() {
    static auto* disconnect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "HandleDisconnectPromptViewDidViewFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disconnect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::GiveUpButtonPressed
// Il2CppName: GiveUpButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::GiveUpButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "GiveUpButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::ResumeButtonPressed
// Il2CppName: ResumeButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::ResumeButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "ResumeButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::$HandleDisconnectPromptViewDidViewFinish$b__32_0
// Il2CppName: <HandleDisconnectPromptViewDidViewFinish>b__32_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::$HandleDisconnectPromptViewDidViewFinish$b__32_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*), "<HandleDisconnectPromptViewDidViewFinish>b__32_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
