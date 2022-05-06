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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: ResultsTableView
  class ResultsTableView;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
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
  // Forward declaring type: MultiplayerResultsViewController
  class MultiplayerResultsViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsViewController*, "", "MultiplayerResultsViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerResultsViewController : public ::HMUI::ViewController {
    public:
    public:
    // private UnityEngine.GameObject _levelClearedGO
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* levelClearedGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _levelFailedGO
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* levelFailedGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _levelResultsGO
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GameObject* levelResultsGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelBar*) == 0x8);
    // private ResultsTableView _resultsTableView
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::ResultsTableView* resultsTableView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ResultsTableView*) == 0x8);
    // private UnityEngine.UI.Button _backToLobbyButton
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::UI::Button* backToLobbyButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _backToMenuButton
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UI::Button* backToMenuButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action`1<MultiplayerResultsViewController> backToLobbyPressedEvent
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>* backToLobbyPressedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*) == 0x8);
    // private System.Action`1<MultiplayerResultsViewController> backToMenuPressedEvent
    // Size: 0x8
    // Offset: 0xB0
    ::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>* backToMenuPressedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject _levelClearedGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__levelClearedGO();
    // Get instance field reference: private UnityEngine.GameObject _levelFailedGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__levelFailedGO();
    // Get instance field reference: private UnityEngine.GameObject _levelResultsGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__levelResultsGO();
    // Get instance field reference: private LevelBar _levelBar
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private ResultsTableView _resultsTableView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ResultsTableView*& dyn__resultsTableView();
    // Get instance field reference: private UnityEngine.UI.Button _backToLobbyButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__backToLobbyButton();
    // Get instance field reference: private UnityEngine.UI.Button _backToMenuButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__backToMenuButton();
    // Get instance field reference: private System.Action`1<MultiplayerResultsViewController> backToLobbyPressedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*& dyn_backToLobbyPressedEvent();
    // Get instance field reference: private System.Action`1<MultiplayerResultsViewController> backToMenuPressedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*& dyn_backToMenuPressedEvent();
    // public System.Void add_backToLobbyPressedEvent(System.Action`1<MultiplayerResultsViewController> value)
    // Offset: 0x13A475C
    void add_backToLobbyPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>* value);
    // public System.Void remove_backToLobbyPressedEvent(System.Action`1<MultiplayerResultsViewController> value)
    // Offset: 0x13A4800
    void remove_backToLobbyPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>* value);
    // public System.Void add_backToMenuPressedEvent(System.Action`1<MultiplayerResultsViewController> value)
    // Offset: 0x13A48A4
    void add_backToMenuPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>* value);
    // public System.Void remove_backToMenuPressedEvent(System.Action`1<MultiplayerResultsViewController> value)
    // Offset: 0x13A4948
    void remove_backToMenuPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>* value);
    // public System.Void .ctor()
    // Offset: 0x13A4D34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerResultsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsViewController*, creationType>()));
    }
    // public System.Void Init(MultiplayerResultsData multiplayerResultsData, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.Boolean showBackToLobbyButton, System.Boolean showBackToMenuButton)
    // Offset: 0x13A49EC
    void Init(::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool showBackToLobbyButton, bool showBackToMenuButton);
    // private System.Void BackToLobbyPressed()
    // Offset: 0x13A4C6C
    void BackToLobbyPressed();
    // private System.Void BackToMenuPressed()
    // Offset: 0x13A4CD0
    void BackToMenuPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13A4B70
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // MultiplayerResultsViewController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsViewController), 176 + sizeof(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*)> __GlobalNamespace_MultiplayerResultsViewControllerSizeCheck;
  static_assert(sizeof(MultiplayerResultsViewController) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::add_backToLobbyPressedEvent
// Il2CppName: add_backToLobbyPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsViewController::*)(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*)>(&GlobalNamespace::MultiplayerResultsViewController::add_backToLobbyPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsViewController*), "add_backToLobbyPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::remove_backToLobbyPressedEvent
// Il2CppName: remove_backToLobbyPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsViewController::*)(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*)>(&GlobalNamespace::MultiplayerResultsViewController::remove_backToLobbyPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsViewController*), "remove_backToLobbyPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::add_backToMenuPressedEvent
// Il2CppName: add_backToMenuPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsViewController::*)(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*)>(&GlobalNamespace::MultiplayerResultsViewController::add_backToMenuPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsViewController*), "add_backToMenuPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::remove_backToMenuPressedEvent
// Il2CppName: remove_backToMenuPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsViewController::*)(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*)>(&GlobalNamespace::MultiplayerResultsViewController::remove_backToMenuPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerResultsViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsViewController*), "remove_backToMenuPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsViewController::*)(::GlobalNamespace::MultiplayerResultsData*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, bool, bool)>(&GlobalNamespace::MultiplayerResultsViewController::Init)> {
  static const MethodInfo* get() {
    static auto* multiplayerResultsData = &::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")->byval_arg;
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* showBackToLobbyButton = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* showBackToMenuButton = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerResultsData, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, showBackToLobbyButton, showBackToMenuButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::BackToLobbyPressed
// Il2CppName: BackToLobbyPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsViewController::*)()>(&GlobalNamespace::MultiplayerResultsViewController::BackToLobbyPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsViewController*), "BackToLobbyPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::BackToMenuPressed
// Il2CppName: BackToMenuPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsViewController::*)()>(&GlobalNamespace::MultiplayerResultsViewController::BackToMenuPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsViewController*), "BackToMenuPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerResultsViewController::*)(bool, bool, bool)>(&GlobalNamespace::MultiplayerResultsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
