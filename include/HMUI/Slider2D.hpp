// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IBeginDragHandler
#include "UnityEngine/EventSystems/IBeginDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Color because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: Slider2D
  class Slider2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::Slider2D);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Slider2D*, "HMUI", "Slider2D");
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.Slider2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10C041C
  class Slider2D : public ::UnityEngine::UI::Selectable/*, public ::UnityEngine::EventSystems::IBeginDragHandler, public ::UnityEngine::EventSystems::IDragHandler, public ::UnityEngine::EventSystems::IInitializePotentialDragHandler, public ::UnityEngine::UI::ICanvasElement*/ {
    public:
    public:
    // private UnityEngine.RectTransform _handleRect
    // Size: 0x8
    // Offset: 0xF8
    ::UnityEngine::RectTransform* handleRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0x10C161C
    // private UnityEngine.Vector2 _normalizedValue
    // Size: 0x8
    // Offset: 0x100
    ::UnityEngine::Vector2 normalizedValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Action`2<HMUI.Slider2D,UnityEngine.Vector2> normalizedValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x108
    ::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>* normalizedValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>*) == 0x8);
    // private UnityEngine.RectTransform _containerRect
    // Size: 0x8
    // Offset: 0x110
    ::UnityEngine::RectTransform* containerRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Graphic _handleGraphic
    // Size: 0x8
    // Offset: 0x118
    ::UnityEngine::UI::Graphic* handleGraphic;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Graphic*) == 0x8);
    // private UnityEngine.DrivenRectTransformTracker _tracker
    // Size: 0x1
    // Offset: 0x120
    ::UnityEngine::DrivenRectTransformTracker tracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::DrivenRectTransformTracker) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IBeginDragHandler
    operator ::UnityEngine::EventSystems::IBeginDragHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(this);
    }
    // Creating interface conversion operator: i_IBeginDragHandler
    inline ::UnityEngine::EventSystems::IBeginDragHandler* i_IBeginDragHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IDragHandler
    operator ::UnityEngine::EventSystems::IDragHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IDragHandler*>(this);
    }
    // Creating interface conversion operator: i_IDragHandler
    inline ::UnityEngine::EventSystems::IDragHandler* i_IDragHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IDragHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler
    operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(this);
    }
    // Creating interface conversion operator: i_IInitializePotentialDragHandler
    inline ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i_IInitializePotentialDragHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UI::ICanvasElement
    operator ::UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ICanvasElement*>(this);
    }
    // Creating interface conversion operator: i_ICanvasElement
    inline ::UnityEngine::UI::ICanvasElement* i_ICanvasElement() noexcept {
      return reinterpret_cast<::UnityEngine::UI::ICanvasElement*>(this);
    }
    // Get instance field reference: private UnityEngine.RectTransform _handleRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__handleRect();
    // Get instance field reference: private UnityEngine.Vector2 _normalizedValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__normalizedValue();
    // Get instance field reference: private System.Action`2<HMUI.Slider2D,UnityEngine.Vector2> normalizedValueDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>*& dyn_normalizedValueDidChangeEvent();
    // Get instance field reference: private UnityEngine.RectTransform _containerRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__containerRect();
    // Get instance field reference: private UnityEngine.UI.Graphic _handleGraphic
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Graphic*& dyn__handleGraphic();
    // Get instance field reference: private UnityEngine.DrivenRectTransformTracker _tracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::DrivenRectTransformTracker& dyn__tracker();
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x16C3BD4
    ::UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x16C3BDC
    void set_handleRect(::UnityEngine::RectTransform* value);
    // public System.Void set_handleColor(UnityEngine.Color value)
    // Offset: 0x16C3DB4
    void set_handleColor(::UnityEngine::Color value);
    // public UnityEngine.Vector2 get_normalizedValue()
    // Offset: 0x16C3E88
    ::UnityEngine::Vector2 get_normalizedValue();
    // public System.Void set_normalizedValue(UnityEngine.Vector2 value)
    // Offset: 0x16C3E94
    void set_normalizedValue(::UnityEngine::Vector2 value);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x16C48C4
    ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
    // public System.Void add_normalizedValueDidChangeEvent(System.Action`2<HMUI.Slider2D,UnityEngine.Vector2> value)
    // Offset: 0x16C3FDC
    void add_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>* value);
    // public System.Void remove_normalizedValueDidChangeEvent(System.Action`2<HMUI.Slider2D,UnityEngine.Vector2> value)
    // Offset: 0x16C4084
    void remove_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>* value);
    // public System.Void .ctor()
    // Offset: 0x16C485C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Slider2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::Slider2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Slider2D*, creationType>()));
    }
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x16C412C
    void Rebuild(::UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x16C4130
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x16C4134
    void GraphicUpdateComplete();
    // private System.Void UpdateCachedReferences()
    // Offset: 0x16C3C6C
    void UpdateCachedReferences();
    // private System.Void SetNormalizedValue(UnityEngine.Vector2 input)
    // Offset: 0x16C41B8
    void SetNormalizedValue(::UnityEngine::Vector2 input);
    // private System.Void SetNormalizedValue(UnityEngine.Vector2 input, System.Boolean sendCallback)
    // Offset: 0x16C3E9C
    void SetNormalizedValue(::UnityEngine::Vector2 input, bool sendCallback);
    // protected System.Void UpdateVisuals()
    // Offset: 0x16C4214
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16C43E0
    void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16C45C4
    bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16C462C
    void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16C46C8
    void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16C4844
    void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // protected override System.Void OnEnable()
    // Offset: 0x16C4138
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x16C4188
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x16C41C0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16C4774
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16C4830
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // protected override System.Void DoStateTransition(UnityEngine.UI.Selectable/UnityEngine.UI.SelectionState state, System.Boolean instant)
    // Offset: 0x16C4838
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::DoStateTransition(UnityEngine.UI.Selectable/UnityEngine.UI.SelectionState state, System.Boolean instant)
    void DoStateTransition(::UnityEngine::UI::Selectable::SelectionState state, bool instant);
  }; // HMUI.Slider2D
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::Slider2D::get_handleRect
// Il2CppName: get_handleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (HMUI::Slider2D::*)()>(&HMUI::Slider2D::get_handleRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "get_handleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::set_handleRect
// Il2CppName: set_handleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::RectTransform*)>(&HMUI::Slider2D::set_handleRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "set_handleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::set_handleColor
// Il2CppName: set_handleColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::Color)>(&HMUI::Slider2D::set_handleColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "set_handleColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::get_normalizedValue
// Il2CppName: get_normalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (HMUI::Slider2D::*)()>(&HMUI::Slider2D::get_normalizedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "get_normalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::set_normalizedValue
// Il2CppName: set_normalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::Vector2)>(&HMUI::Slider2D::set_normalizedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "set_normalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::UnityEngine_UI_ICanvasElement_get_transform
// Il2CppName: UnityEngine.UI.ICanvasElement.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (HMUI::Slider2D::*)()>(&HMUI::Slider2D::UnityEngine_UI_ICanvasElement_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::add_normalizedValueDidChangeEvent
// Il2CppName: add_normalizedValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>*)>(&HMUI::Slider2D::add_normalizedValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "Slider2D"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "add_normalizedValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::remove_normalizedValueDidChangeEvent
// Il2CppName: remove_normalizedValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::System::Action_2<::HMUI::Slider2D*, ::UnityEngine::Vector2>*)>(&HMUI::Slider2D::remove_normalizedValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "Slider2D"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "remove_normalizedValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::Slider2D::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::UI::CanvasUpdate)>(&HMUI::Slider2D::Rebuild)> {
  static const MethodInfo* get() {
    static auto* executing = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "CanvasUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{executing});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::LayoutComplete
// Il2CppName: LayoutComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)()>(&HMUI::Slider2D::LayoutComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "LayoutComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::GraphicUpdateComplete
// Il2CppName: GraphicUpdateComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)()>(&HMUI::Slider2D::GraphicUpdateComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "GraphicUpdateComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::UpdateCachedReferences
// Il2CppName: UpdateCachedReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)()>(&HMUI::Slider2D::UpdateCachedReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "UpdateCachedReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::SetNormalizedValue
// Il2CppName: SetNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::Vector2)>(&HMUI::Slider2D::SetNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "SetNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::SetNormalizedValue
// Il2CppName: SetNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::Vector2, bool)>(&HMUI::Slider2D::SetNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* sendCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "SetNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, sendCallback});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)()>(&HMUI::Slider2D::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::UpdateDrag
// Il2CppName: UpdateDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::Slider2D::UpdateDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "UpdateDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::MayDrag
// Il2CppName: MayDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::Slider2D::MayDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "MayDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::OnBeginDrag
// Il2CppName: OnBeginDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::Slider2D::OnBeginDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "OnBeginDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::OnDrag
// Il2CppName: OnDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::Slider2D::OnDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "OnDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::OnInitializePotentialDrag
// Il2CppName: OnInitializePotentialDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::Slider2D::OnInitializePotentialDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "OnInitializePotentialDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)()>(&HMUI::Slider2D::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)()>(&HMUI::Slider2D::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)()>(&HMUI::Slider2D::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::Slider2D::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::Slider2D::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::Slider2D::DoStateTransition
// Il2CppName: DoStateTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Slider2D::*)(::UnityEngine::UI::Selectable::SelectionState, bool)>(&HMUI::Slider2D::DoStateTransition)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable/SelectionState")->byval_arg;
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Slider2D*), "DoStateTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, instant});
  }
};
