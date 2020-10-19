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
// Including type: UnityEngine.UI.ILayoutIgnorer
#include "UnityEngine/UI/ILayoutIgnorer.hpp"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.LayoutElement
  class LayoutElement : public UnityEngine::EventSystems::UIBehaviour, public UnityEngine::UI::ILayoutElement, public UnityEngine::UI::ILayoutIgnorer {
    public:
    // private System.Boolean m_IgnoreLayout
    // Offset: 0x18
    bool m_IgnoreLayout;
    // private System.Single m_MinWidth
    // Offset: 0x1C
    float m_MinWidth;
    // private System.Single m_MinHeight
    // Offset: 0x20
    float m_MinHeight;
    // private System.Single m_PreferredWidth
    // Offset: 0x24
    float m_PreferredWidth;
    // private System.Single m_PreferredHeight
    // Offset: 0x28
    float m_PreferredHeight;
    // private System.Single m_FlexibleWidth
    // Offset: 0x2C
    float m_FlexibleWidth;
    // private System.Single m_FlexibleHeight
    // Offset: 0x30
    float m_FlexibleHeight;
    // private System.Int32 m_LayoutPriority
    // Offset: 0x34
    int m_LayoutPriority;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_ignoreLayout(System.Boolean value)
    // Offset: 0x15DB8AC
    void set_ignoreLayout(bool value);
    // public System.Void set_minWidth(System.Single value)
    // Offset: 0x15DB9F4
    void set_minWidth(float value);
    // public System.Void set_minHeight(System.Single value)
    // Offset: 0x15DBA78
    void set_minHeight(float value);
    // public System.Void set_preferredWidth(System.Single value)
    // Offset: 0x15DBAFC
    void set_preferredWidth(float value);
    // public System.Void set_preferredHeight(System.Single value)
    // Offset: 0x15DBB80
    void set_preferredHeight(float value);
    // public System.Void set_flexibleWidth(System.Single value)
    // Offset: 0x15DBC04
    void set_flexibleWidth(float value);
    // public System.Void set_flexibleHeight(System.Single value)
    // Offset: 0x15DBC88
    void set_flexibleHeight(float value);
    // public System.Void set_layoutPriority(System.Int32 value)
    // Offset: 0x15DBD0C
    void set_layoutPriority(int value);
    // protected System.Void SetDirty()
    // Offset: 0x15DB928
    void SetDirty();
    // public System.Boolean get_ignoreLayout()
    // Offset: 0x15DB8A4
    // Implemented from: UnityEngine.UI.ILayoutIgnorer
    // Base method: System.Boolean ILayoutIgnorer::get_ignoreLayout()
    bool get_ignoreLayout();
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x15DB9E4
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0x15DB9E8
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public System.Single get_minWidth()
    // Offset: 0x15DB9EC
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minWidth()
    float get_minWidth();
    // public System.Single get_minHeight()
    // Offset: 0x15DBA70
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minHeight()
    float get_minHeight();
    // public System.Single get_preferredWidth()
    // Offset: 0x15DBAF4
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredWidth()
    float get_preferredWidth();
    // public System.Single get_preferredHeight()
    // Offset: 0x15DBB78
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredHeight()
    float get_preferredHeight();
    // public System.Single get_flexibleWidth()
    // Offset: 0x15DBBFC
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleWidth()
    float get_flexibleWidth();
    // public System.Single get_flexibleHeight()
    // Offset: 0x15DBC80
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleHeight()
    float get_flexibleHeight();
    // public System.Int32 get_layoutPriority()
    // Offset: 0x15DBD04
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Int32 ILayoutElement::get_layoutPriority()
    int get_layoutPriority();
    // protected System.Void .ctor()
    // Offset: 0x15DBD88
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LayoutElement* New_ctor();
    // protected override System.Void OnEnable()
    // Offset: 0x15DBDAC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x15DBDD4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnDisable()
    // Offset: 0x15DBDD8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x15DBE00
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnBeforeTransformParentChanged()
    // Offset: 0x15DBE04
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnBeforeTransformParentChanged()
    void OnBeforeTransformParentChanged();
  }; // UnityEngine.UI.LayoutElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutElement*, "UnityEngine.UI", "LayoutElement");
#pragma pack(pop)
