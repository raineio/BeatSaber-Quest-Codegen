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
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: ObjectiveListItemsList
  class ObjectiveListItemsList;
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
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
  // Forward declaring type: MissionLevelDetailViewController
  class MissionLevelDetailViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionLevelDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelDetailViewController*, "", "MissionLevelDetailViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelDetailViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelDetailViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::MissionLevelDetailViewController::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    public:
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10E0BE0
    // private UnityEngine.UI.Button _playButton
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Button* playButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelBar*) == 0x8);
    // private ObjectiveListItemsList _objectiveListItems
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::ObjectiveListItemsList* objectiveListItems;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ObjectiveListItemsList*) == 0x8);
    // private GameplayModifierInfoListItemsList _gameplayModifierInfoListItemsList
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::GameplayModifierInfoListItemsList* gameplayModifierInfoListItemsList;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifierInfoListItemsList*) == 0x8);
    // private UnityEngine.GameObject _modifiersPanelGO
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::GameObject* modifiersPanelGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Action`1<MissionLevelDetailViewController> didPressPlayButtonEvent
    // Size: 0x8
    // Offset: 0xA0
    ::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* didPressPlayButtonEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*) == 0x8);
    // private MissionNode _missionNode
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::MissionNode* missionNode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNode*) == 0x8);
    public:
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private UnityEngine.UI.Button _playButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__playButton();
    // Get instance field reference: private LevelBar _levelBar
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private ObjectiveListItemsList _objectiveListItems
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ObjectiveListItemsList*& dyn__objectiveListItems();
    // Get instance field reference: private GameplayModifierInfoListItemsList _gameplayModifierInfoListItemsList
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifierInfoListItemsList*& dyn__gameplayModifierInfoListItemsList();
    // Get instance field reference: private UnityEngine.GameObject _modifiersPanelGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__modifiersPanelGO();
    // Get instance field reference: private System.Action`1<MissionLevelDetailViewController> didPressPlayButtonEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*& dyn_didPressPlayButtonEvent();
    // Get instance field reference: private MissionNode _missionNode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNode*& dyn__missionNode();
    // public MissionNode get_missionNode()
    // Offset: 0x1302094
    ::GlobalNamespace::MissionNode* get_missionNode();
    // public System.Void add_didPressPlayButtonEvent(System.Action`1<MissionLevelDetailViewController> value)
    // Offset: 0x1301F4C
    void add_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* value);
    // public System.Void remove_didPressPlayButtonEvent(System.Action`1<MissionLevelDetailViewController> value)
    // Offset: 0x1301FF0
    void remove_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* value);
    // public System.Void .ctor()
    // Offset: 0x130238C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelDetailViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionLevelDetailViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelDetailViewController*, creationType>()));
    }
    // public System.Void Setup(MissionNode missionNode)
    // Offset: 0x130209C
    void Setup(::GlobalNamespace::MissionNode* missionNode);
    // public System.Void RefreshContent()
    // Offset: 0x13020D8
    void RefreshContent();
    // private System.Void PlayButtonPressed()
    // Offset: 0x1302328
    void PlayButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x130227C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // MissionLevelDetailViewController
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelDetailViewController), 168 + sizeof(::GlobalNamespace::MissionNode*)> __GlobalNamespace_MissionLevelDetailViewControllerSizeCheck;
  static_assert(sizeof(MissionLevelDetailViewController) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::get_missionNode
// Il2CppName: get_missionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionNode* (GlobalNamespace::MissionLevelDetailViewController::*)()>(&GlobalNamespace::MissionLevelDetailViewController::get_missionNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "get_missionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent
// Il2CppName: add_didPressPlayButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*)>(&GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionLevelDetailViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "add_didPressPlayButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent
// Il2CppName: remove_didPressPlayButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*)>(&GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionLevelDetailViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "remove_didPressPlayButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)(::GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionLevelDetailViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::RefreshContent
// Il2CppName: RefreshContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)()>(&GlobalNamespace::MissionLevelDetailViewController::RefreshContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "RefreshContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed
// Il2CppName: PlayButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)()>(&GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "PlayButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelDetailViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelDetailViewController::*)(bool, bool, bool)>(&GlobalNamespace::MissionLevelDetailViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelDetailViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
