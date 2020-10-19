// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: EditAvatarViewController/AvatarEditPart
#include "GlobalNamespace/EditAvatarViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarVisualController
  class AvatarVisualController;
  // Forward declaring type: AvatarTweenController
  class AvatarTweenController;
  // Skipping declaration: EditAvatarViewController because it is already included!
  // Forward declaring type: EditColorController
  class EditColorController;
  // Forward declaring type: AvatarDataModel
  class AvatarDataModel;
  // Skipping declaration: EditAvatarType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EditAvatarFlowCoordinator
  class EditAvatarFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType
    struct EditAvatarType;
    // Autogenerated type: EditAvatarFlowCoordinator/EditAvatarType
    struct EditAvatarType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: EditAvatarType
      constexpr EditAvatarType(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public EditAvatarFlowCoordinator/EditAvatarType Create
      static constexpr const int Create = 0;
      // Get static field: static public EditAvatarFlowCoordinator/EditAvatarType Create
      static GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType _get_Create();
      // Set static field: static public EditAvatarFlowCoordinator/EditAvatarType Create
      static void _set_Create(GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType value);
      // static field const value: static public EditAvatarFlowCoordinator/EditAvatarType Edit
      static constexpr const int Edit = 1;
      // Get static field: static public EditAvatarFlowCoordinator/EditAvatarType Edit
      static GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType _get_Edit();
      // Set static field: static public EditAvatarFlowCoordinator/EditAvatarType Edit
      static void _set_Edit(GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType value);
    }; // EditAvatarFlowCoordinator/EditAvatarType
    // private AvatarVisualController _avatarVisualController
    // Offset: 0xA8
    GlobalNamespace::AvatarVisualController* avatarVisualController;
    // private AvatarTweenController _avatarTweenController
    // Offset: 0xB0
    GlobalNamespace::AvatarTweenController* avatarTweenController;
    // private UnityEngine.GameObject _avatarContainerGameObject
    // Offset: 0xB8
    UnityEngine::GameObject* avatarContainerGameObject;
    // private readonly EditAvatarViewController _editAvatarViewController
    // Offset: 0xC0
    GlobalNamespace::EditAvatarViewController* editAvatarViewController;
    // private readonly EditColorController _editColorViewController
    // Offset: 0xC8
    GlobalNamespace::EditColorController* editColorViewController;
    // private readonly AvatarDataModel _avatarDataModel
    // Offset: 0xD0
    GlobalNamespace::AvatarDataModel* avatarDataModel;
    // private System.Collections.Generic.Dictionary`2<EditAvatarViewController/AvatarEditPart,System.Action> _parameterChangedAnimationCallbacks
    // Offset: 0xD8
    System::Collections::Generic::Dictionary_2<GlobalNamespace::EditAvatarViewController::AvatarEditPart, System::Action*>* parameterChangedAnimationCallbacks;
    // private EditAvatarFlowCoordinator/EditAvatarType _editAvatarType
    // Offset: 0xE0
    GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType editAvatarType;
    // private System.Action`2<EditAvatarFlowCoordinator,EditAvatarFlowCoordinator/EditAvatarType> didFinishEvent
    // Offset: 0xE8
    System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator*, GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`2<EditAvatarFlowCoordinator,EditAvatarFlowCoordinator/EditAvatarType> value)
    // Offset: 0x2018F94
    void add_didFinishEvent(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator*, GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<EditAvatarFlowCoordinator,EditAvatarFlowCoordinator/EditAvatarType> value)
    // Offset: 0x2019038
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::EditAvatarFlowCoordinator*, GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType>* value);
    // public System.Void Setup(EditAvatarFlowCoordinator/EditAvatarType editAvatarType)
    // Offset: 0x20190DC
    void Setup(GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType editAvatarType);
    // private System.Void HandleEditAvatarViewControllerDidRequestColorChange(System.Action`1<UnityEngine.Color> colorCallback, UnityEngine.Color currentColor, EditAvatarViewController/AvatarEditPart editPart, System.Int32 uvSegment)
    // Offset: 0x2019DE0
    void HandleEditAvatarViewControllerDidRequestColorChange(System::Action_1<UnityEngine::Color>* colorCallback, UnityEngine::Color currentColor, GlobalNamespace::EditAvatarViewController::AvatarEditPart editPart, int uvSegment);
    // private System.Void HandleEditAvatarViewControllerChangedAvatarPart(EditAvatarViewController/AvatarEditPart avatarPart)
    // Offset: 0x2019ED8
    void HandleEditAvatarViewControllerChangedAvatarPart(GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarPart);
    // private System.Void HandleEditAvatarViewControllerDidFinished()
    // Offset: 0x2019F78
    void HandleEditAvatarViewControllerDidFinished();
    // private System.Void HandleEditColorViewControllerDidChangedColor(UnityEngine.Color color)
    // Offset: 0x2019FE0
    void HandleEditColorViewControllerDidChangedColor(UnityEngine::Color color);
    // private System.Void HandleEditColorViewControllerDidFinish(System.Boolean apply)
    // Offset: 0x201A00C
    void HandleEditColorViewControllerDidFinish(bool apply);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x201918C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x20198E8
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x201A09C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EditAvatarFlowCoordinator* New_ctor();
  }; // EditAvatarFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditAvatarFlowCoordinator*, "", "EditAvatarFlowCoordinator");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType, "", "EditAvatarFlowCoordinator/EditAvatarType");
#pragma pack(pop)
