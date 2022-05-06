// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.Slider2D
#include "HMUI/Slider2D.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorSaturationValueSlider
  class ColorSaturationValueSlider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorSaturationValueSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSaturationValueSlider*, "", "ColorSaturationValueSlider");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ColorSaturationValueSlider
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSaturationValueSlider : public ::HMUI::Slider2D {
    public:
    public:
    // private System.Single _hue
    // Size: 0x4
    // Offset: 0x124
    float hue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.UI.Graphic[] _graphics
    // Size: 0x8
    // Offset: 0x128
    ::ArrayW<::UnityEngine::UI::Graphic*> graphics;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::UI::Graphic*>) == 0x8);
    // private UnityEngine.Color _darkColor
    // Size: 0x10
    // Offset: 0x130
    ::UnityEngine::Color darkColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _lightColor
    // Size: 0x10
    // Offset: 0x140
    ::UnityEngine::Color lightColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> colorSaturationOrValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x150
    ::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* colorSaturationOrValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*) == 0x8);
    public:
    // Get instance field reference: private System.Single _hue
    [[deprecated("Use field access instead!")]] float& dyn__hue();
    // Get instance field reference: private UnityEngine.UI.Graphic[] _graphics
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::UI::Graphic*>& dyn__graphics();
    // Get instance field reference: private UnityEngine.Color _darkColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__darkColor();
    // Get instance field reference: private UnityEngine.Color _lightColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__lightColor();
    // Get instance field reference: private System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> colorSaturationOrValueDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*& dyn_colorSaturationOrValueDidChangeEvent();
    // public System.Void add_colorSaturationOrValueDidChangeEvent(System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> value)
    // Offset: 0x133FACC
    void add_colorSaturationOrValueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorSaturationOrValueDidChangeEvent(System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> value)
    // Offset: 0x133FB74
    void remove_colorSaturationOrValueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void .ctor()
    // Offset: 0x133FF78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSaturationValueSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorSaturationValueSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSaturationValueSlider*, creationType>()));
    }
    // public System.Void SetHue(System.Single hue)
    // Offset: 0x133FD34
    void SetHue(float hue);
    // private System.Void HandleNormalizedValueDidChange(HMUI.Slider2D slider, UnityEngine.Vector2 normalizedValue)
    // Offset: 0x133FE64
    void HandleNormalizedValueDidChange(::HMUI::Slider2D* slider, ::UnityEngine::Vector2 normalizedValue);
    // protected override System.Void Awake()
    // Offset: 0x133FC1C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x133FCA8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void UpdateVisuals()
    // Offset: 0x133FD48
    // Implemented from: HMUI.Slider2D
    // Base method: System.Void Slider2D::UpdateVisuals()
    void UpdateVisuals();
    // public override System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x133FEE8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);
  }; // ColorSaturationValueSlider
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::add_colorSaturationOrValueDidChangeEvent
// Il2CppName: add_colorSaturationOrValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*)>(&GlobalNamespace::ColorSaturationValueSlider::add_colorSaturationOrValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorSaturationValueSlider"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "add_colorSaturationOrValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::remove_colorSaturationOrValueDidChangeEvent
// Il2CppName: remove_colorSaturationOrValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType>*)>(&GlobalNamespace::ColorSaturationValueSlider::remove_colorSaturationOrValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorSaturationValueSlider"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "remove_colorSaturationOrValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::SetHue
// Il2CppName: SetHue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(float)>(&GlobalNamespace::ColorSaturationValueSlider::SetHue)> {
  static const MethodInfo* get() {
    static auto* hue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "SetHue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::HandleNormalizedValueDidChange
// Il2CppName: HandleNormalizedValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(::HMUI::Slider2D*, ::UnityEngine::Vector2)>(&GlobalNamespace::ColorSaturationValueSlider::HandleNormalizedValueDidChange)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("HMUI", "Slider2D")->byval_arg;
    static auto* normalizedValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "HandleNormalizedValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, normalizedValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)()>(&GlobalNamespace::ColorSaturationValueSlider::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)()>(&GlobalNamespace::ColorSaturationValueSlider::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)()>(&GlobalNamespace::ColorSaturationValueSlider::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::OnPointerUp
// Il2CppName: OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::ColorSaturationValueSlider::OnPointerUp)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
