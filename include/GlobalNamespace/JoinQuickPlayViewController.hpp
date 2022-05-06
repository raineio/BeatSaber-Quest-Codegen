// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown;
  // Forward declaring type: QuickPlaySongPacksDropdown
  class QuickPlaySongPacksDropdown;
  // Forward declaring type: MultiplayerModeSettings
  class MultiplayerModeSettings;
  // Forward declaring type: QuickPlaySetupData
  class QuickPlaySetupData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: JoinQuickPlayViewController
  class JoinQuickPlayViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::JoinQuickPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoinQuickPlayViewController*, "", "JoinQuickPlayViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: JoinQuickPlayViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class JoinQuickPlayViewController : public ::HMUI::ViewController {
    public:
    public:
    // private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficultyDropdown*) == 0x8);
    // private QuickPlaySongPacksDropdown _songPacksDropdown
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::QuickPlaySongPacksDropdown* songPacksDropdown;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuickPlaySongPacksDropdown*) == 0x8);
    // private UnityEngine.UI.Toggle _levelSelectionToggle
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Toggle* levelSelectionToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Button _joinButton
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::UI::Button* joinButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelJoinButton
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::UI::Button* cancelJoinButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action`1<System.Boolean> didFinishEvent
    // Size: 0x8
    // Offset: 0x98
    ::System::Action_1<bool>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // private MultiplayerModeSettings _multiplayerModeSettings
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerModeSettings*) == 0x8);
    public:
    // Get instance field reference: private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficultyDropdown*& dyn__beatmapDifficultyDropdown();
    // Get instance field reference: private QuickPlaySongPacksDropdown _songPacksDropdown
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuickPlaySongPacksDropdown*& dyn__songPacksDropdown();
    // Get instance field reference: private UnityEngine.UI.Toggle _levelSelectionToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__levelSelectionToggle();
    // Get instance field reference: private UnityEngine.UI.Button _joinButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__joinButton();
    // Get instance field reference: private UnityEngine.UI.Button _cancelJoinButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__cancelJoinButton();
    // Get instance field reference: private System.Action`1<System.Boolean> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_didFinishEvent();
    // Get instance field reference: private MultiplayerModeSettings _multiplayerModeSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerModeSettings*& dyn__multiplayerModeSettings();
    // public MultiplayerModeSettings get_multiplayerModeSettings()
    // Offset: 0x13B13A4
    ::GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();
    // public System.Void add_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x13B125C
    void add_didFinishEvent(::System::Action_1<bool>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x13B1300
    void remove_didFinishEvent(::System::Action_1<bool>* value);
    // public System.Void .ctor()
    // Offset: 0x13B1624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JoinQuickPlayViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::JoinQuickPlayViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JoinQuickPlayViewController*, creationType>()));
    }
    // public System.Void Setup(QuickPlaySetupData quickPlaySetupData, MultiplayerModeSettings multiplayerModeSettings)
    // Offset: 0x13B13AC
    void Setup(::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData, ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);
    // private System.Void ButtonPressed(System.Boolean success)
    // Offset: 0x13B1564
    void ButtonPressed(bool success);
    // private System.Void <DidActivate>b__12_0()
    // Offset: 0x13B162C
    void $DidActivate$b__12_0();
    // private System.Void <DidActivate>b__12_1()
    // Offset: 0x13B1634
    void $DidActivate$b__12_1();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13B1448
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // JoinQuickPlayViewController
  #pragma pack(pop)
  static check_size<sizeof(JoinQuickPlayViewController), 160 + sizeof(::GlobalNamespace::MultiplayerModeSettings*)> __GlobalNamespace_JoinQuickPlayViewControllerSizeCheck;
  static_assert(sizeof(JoinQuickPlayViewController) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::get_multiplayerModeSettings
// Il2CppName: get_multiplayerModeSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerModeSettings* (GlobalNamespace::JoinQuickPlayViewController::*)()>(&GlobalNamespace::JoinQuickPlayViewController::get_multiplayerModeSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "get_multiplayerModeSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::JoinQuickPlayViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::JoinQuickPlayViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(::GlobalNamespace::QuickPlaySetupData*, ::GlobalNamespace::MultiplayerModeSettings*)>(&GlobalNamespace::JoinQuickPlayViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* quickPlaySetupData = &::il2cpp_utils::GetClassFromName("", "QuickPlaySetupData")->byval_arg;
    static auto* multiplayerModeSettings = &::il2cpp_utils::GetClassFromName("", "MultiplayerModeSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{quickPlaySetupData, multiplayerModeSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::ButtonPressed
// Il2CppName: ButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(bool)>(&GlobalNamespace::JoinQuickPlayViewController::ButtonPressed)> {
  static const MethodInfo* get() {
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "ButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{success});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::$DidActivate$b__12_0
// Il2CppName: <DidActivate>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)()>(&GlobalNamespace::JoinQuickPlayViewController::$DidActivate$b__12_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "<DidActivate>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::$DidActivate$b__12_1
// Il2CppName: <DidActivate>b__12_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)()>(&GlobalNamespace::JoinQuickPlayViewController::$DidActivate$b__12_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "<DidActivate>b__12_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinQuickPlayViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinQuickPlayViewController::*)(bool, bool, bool)>(&GlobalNamespace::JoinQuickPlayViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinQuickPlayViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
