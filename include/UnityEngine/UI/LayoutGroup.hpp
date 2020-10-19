// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
// Including type: UnityEngine.UI.ILayoutGroup
#include "UnityEngine/UI/ILayoutGroup.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectOffset
  class RectOffset;
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.LayoutGroup
  class LayoutGroup : public UnityEngine::EventSystems::UIBehaviour, public UnityEngine::UI::ILayoutElement, public UnityEngine::UI::ILayoutGroup {
    public:
    // Nested type: UnityEngine::UI::LayoutGroup::$DelayedSetDirty$d__56
    class $DelayedSetDirty$d__56;
    // protected UnityEngine.RectOffset m_Padding
    // Offset: 0x18
    UnityEngine::RectOffset* m_Padding;
    // protected UnityEngine.TextAnchor m_ChildAlignment
    // Offset: 0x20
    UnityEngine::TextAnchor m_ChildAlignment;
    // private UnityEngine.RectTransform m_Rect
    // Offset: 0x28
    UnityEngine::RectTransform* m_Rect;
    // protected UnityEngine.DrivenRectTransformTracker m_Tracker
    // Offset: 0x30
    UnityEngine::DrivenRectTransformTracker m_Tracker;
    // private UnityEngine.Vector2 m_TotalMinSize
    // Offset: 0x34
    UnityEngine::Vector2 m_TotalMinSize;
    // private UnityEngine.Vector2 m_TotalPreferredSize
    // Offset: 0x3C
    UnityEngine::Vector2 m_TotalPreferredSize;
    // private UnityEngine.Vector2 m_TotalFlexibleSize
    // Offset: 0x44
    UnityEngine::Vector2 m_TotalFlexibleSize;
    // private System.Collections.Generic.List`1<UnityEngine.RectTransform> m_RectChildren
    // Offset: 0x50
    System::Collections::Generic::List_1<UnityEngine::RectTransform*>* m_RectChildren;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.RectOffset get_padding()
    // Offset: 0x15DC1E8
    UnityEngine::RectOffset* get_padding();
    // public System.Void set_padding(UnityEngine.RectOffset value)
    // Offset: 0x15DC1F0
    void set_padding(UnityEngine::RectOffset* value);
    // public UnityEngine.TextAnchor get_childAlignment()
    // Offset: 0x15DC254
    UnityEngine::TextAnchor get_childAlignment();
    // public System.Void set_childAlignment(UnityEngine.TextAnchor value)
    // Offset: 0x15DC25C
    void set_childAlignment(UnityEngine::TextAnchor value);
    // protected UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x15DC2C0
    UnityEngine::RectTransform* get_rectTransform();
    // protected System.Collections.Generic.List`1<UnityEngine.RectTransform> get_rectChildren()
    // Offset: 0x15DC36C
    System::Collections::Generic::List_1<UnityEngine::RectTransform*>* get_rectChildren();
    // protected System.Single GetTotalMinSize(System.Int32 axis)
    // Offset: 0x15DC694
    float GetTotalMinSize(int axis);
    // protected System.Single GetTotalPreferredSize(System.Int32 axis)
    // Offset: 0x15DC6B0
    float GetTotalPreferredSize(int axis);
    // protected System.Single GetTotalFlexibleSize(System.Int32 axis)
    // Offset: 0x15DC6CC
    float GetTotalFlexibleSize(int axis);
    // protected System.Single GetStartOffset(System.Int32 axis, System.Single requiredSpaceWithoutPadding)
    // Offset: 0x15DC9EC
    float GetStartOffset(int axis, float requiredSpaceWithoutPadding);
    // protected System.Single GetAlignmentOnAxis(System.Int32 axis)
    // Offset: 0x15DCB10
    float GetAlignmentOnAxis(int axis);
    // protected System.Void SetLayoutInputForAxis(System.Single totalMin, System.Single totalPreferred, System.Single totalFlexible, System.Int32 axis)
    // Offset: 0x15DCB5C
    void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int axis);
    // protected System.Void SetChildAlongAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos)
    // Offset: 0x15DCBBC
    void SetChildAlongAxis(UnityEngine::RectTransform* rect, int axis, float pos);
    // protected System.Void SetChildAlongAxisWithScale(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single scaleFactor)
    // Offset: 0x15DCC74
    void SetChildAlongAxisWithScale(UnityEngine::RectTransform* rect, int axis, float pos, float scaleFactor);
    // protected System.Void SetChildAlongAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single size)
    // Offset: 0x15DCE34
    void SetChildAlongAxis(UnityEngine::RectTransform* rect, int axis, float pos, float size);
    // protected System.Void SetChildAlongAxisWithScale(UnityEngine.RectTransform rect, System.Int32 axis, System.Single pos, System.Single size, System.Single scaleFactor)
    // Offset: 0x15DCEF4
    void SetChildAlongAxisWithScale(UnityEngine::RectTransform* rect, int axis, float pos, float size, float scaleFactor);
    // private System.Boolean get_isRootLayoutGroup()
    // Offset: 0x15DD0C8
    bool get_isRootLayoutGroup();
    // protected System.Void OnTransformChildrenChanged()
    // Offset: 0x15DD254
    void OnTransformChildrenChanged();
    // protected System.Void SetProperty(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetProperty(T& currentValue, T newValue) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetProperty", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue));
    }
    // protected System.Void SetDirty()
    // Offset: 0x15DC86C
    void SetDirty();
    // private System.Collections.IEnumerator DelayedSetDirty(UnityEngine.RectTransform rectTransform)
    // Offset: 0x15DD258
    System::Collections::IEnumerator* DelayedSetDirty(UnityEngine::RectTransform* rectTransform);
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x15DC374
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public System.Single get_minWidth()
    // Offset: 0x15DC684
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minWidth()
    float get_minWidth();
    // public System.Single get_preferredWidth()
    // Offset: 0x15DC6A0
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredWidth()
    float get_preferredWidth();
    // public System.Single get_flexibleWidth()
    // Offset: 0x15DC6BC
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleWidth()
    float get_flexibleWidth();
    // public System.Single get_minHeight()
    // Offset: 0x15DC6D8
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minHeight()
    float get_minHeight();
    // public System.Single get_preferredHeight()
    // Offset: 0x15DC6E8
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredHeight()
    float get_preferredHeight();
    // public System.Single get_flexibleHeight()
    // Offset: 0x15DC6F8
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleHeight()
    float get_flexibleHeight();
    // public System.Int32 get_layoutPriority()
    // Offset: 0x15DC708
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Int32 ILayoutElement::get_layoutPriority()
    int get_layoutPriority();
    // public System.Void SetLayoutHorizontal()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutVertical()
    void SetLayoutVertical();
    // protected System.Void .ctor()
    // Offset: 0x15DC710
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LayoutGroup* New_ctor();
    // protected override System.Void OnEnable()
    // Offset: 0x15DC844
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x15DC95C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x15DC9E8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x15DD214
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
  }; // UnityEngine.UI.LayoutGroup
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutGroup*, "UnityEngine.UI", "LayoutGroup");
#pragma pack(pop)
