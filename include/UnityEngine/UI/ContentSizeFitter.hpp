// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutSelfController
#include "UnityEngine/UI/ILayoutSelfController.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Skipping declaration: FitMode because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.ContentSizeFitter
  class ContentSizeFitter : public UnityEngine::EventSystems::UIBehaviour, public UnityEngine::UI::ILayoutSelfController {
    public:
    // Nested type: UnityEngine::UI::ContentSizeFitter::FitMode
    struct FitMode;
    // Autogenerated type: UnityEngine.UI.ContentSizeFitter/FitMode
    struct FitMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: FitMode
      constexpr FitMode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.ContentSizeFitter/FitMode Unconstrained
      static constexpr const int Unconstrained = 0;
      // Get static field: static public UnityEngine.UI.ContentSizeFitter/FitMode Unconstrained
      static UnityEngine::UI::ContentSizeFitter::FitMode _get_Unconstrained();
      // Set static field: static public UnityEngine.UI.ContentSizeFitter/FitMode Unconstrained
      static void _set_Unconstrained(UnityEngine::UI::ContentSizeFitter::FitMode value);
      // static field const value: static public UnityEngine.UI.ContentSizeFitter/FitMode MinSize
      static constexpr const int MinSize = 1;
      // Get static field: static public UnityEngine.UI.ContentSizeFitter/FitMode MinSize
      static UnityEngine::UI::ContentSizeFitter::FitMode _get_MinSize();
      // Set static field: static public UnityEngine.UI.ContentSizeFitter/FitMode MinSize
      static void _set_MinSize(UnityEngine::UI::ContentSizeFitter::FitMode value);
      // static field const value: static public UnityEngine.UI.ContentSizeFitter/FitMode PreferredSize
      static constexpr const int PreferredSize = 2;
      // Get static field: static public UnityEngine.UI.ContentSizeFitter/FitMode PreferredSize
      static UnityEngine::UI::ContentSizeFitter::FitMode _get_PreferredSize();
      // Set static field: static public UnityEngine.UI.ContentSizeFitter/FitMode PreferredSize
      static void _set_PreferredSize(UnityEngine::UI::ContentSizeFitter::FitMode value);
    }; // UnityEngine.UI.ContentSizeFitter/FitMode
    // protected UnityEngine.UI.ContentSizeFitter/FitMode m_HorizontalFit
    // Offset: 0x18
    UnityEngine::UI::ContentSizeFitter::FitMode m_HorizontalFit;
    // protected UnityEngine.UI.ContentSizeFitter/FitMode m_VerticalFit
    // Offset: 0x1C
    UnityEngine::UI::ContentSizeFitter::FitMode m_VerticalFit;
    // private UnityEngine.RectTransform m_Rect
    // Offset: 0x20
    UnityEngine::RectTransform* m_Rect;
    // private UnityEngine.DrivenRectTransformTracker m_Tracker
    // Offset: 0x28
    UnityEngine::DrivenRectTransformTracker m_Tracker;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.UI.ContentSizeFitter/FitMode get_horizontalFit()
    // Offset: 0x1082CF4
    UnityEngine::UI::ContentSizeFitter::FitMode get_horizontalFit();
    // public System.Void set_horizontalFit(UnityEngine.UI.ContentSizeFitter/FitMode value)
    // Offset: 0x1082CFC
    void set_horizontalFit(UnityEngine::UI::ContentSizeFitter::FitMode value);
    // public UnityEngine.UI.ContentSizeFitter/FitMode get_verticalFit()
    // Offset: 0x1082E10
    UnityEngine::UI::ContentSizeFitter::FitMode get_verticalFit();
    // public System.Void set_verticalFit(UnityEngine.UI.ContentSizeFitter/FitMode value)
    // Offset: 0x1082E18
    void set_verticalFit(UnityEngine::UI::ContentSizeFitter::FitMode value);
    // private UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x1082E94
    UnityEngine::RectTransform* get_rectTransform();
    // private System.Void HandleSelfFittingAlongAxis(System.Int32 axis)
    // Offset: 0x1082FD4
    void HandleSelfFittingAlongAxis(int axis);
    // protected System.Void SetDirty()
    // Offset: 0x1082D78
    void SetDirty();
    // protected System.Void .ctor()
    // Offset: 0x1082F40
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ContentSizeFitter* New_ctor();
    // protected override System.Void OnEnable()
    // Offset: 0x1082F48
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1082F4C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x1082FD0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public System.Void SetLayoutHorizontal()
    // Offset: 0x10830A4
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0x10830D4
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutVertical()
    void SetLayoutVertical();
  }; // UnityEngine.UI.ContentSizeFitter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ContentSizeFitter*, "UnityEngine.UI", "ContentSizeFitter");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ContentSizeFitter::FitMode, "UnityEngine.UI", "ContentSizeFitter/FitMode");
#pragma pack(pop)
