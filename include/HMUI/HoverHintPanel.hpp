// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHintPanel
  class HoverHintPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::HoverHintPanel);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHintPanel*, "HMUI", "HoverHintPanel");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverHintPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class HoverHintPanel : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Vector2 _padding
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 padding;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _containerPadding
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Vector2 containerPadding;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Single _separator
    // Size: 0x4
    // Offset: 0x30
    float separator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _zOffset
    // Size: 0x4
    // Offset: 0x34
    float zOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <isShown>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool isShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private UnityEngine.Vector2 _padding
    UnityEngine::Vector2& dyn__padding();
    // Get instance field reference: private UnityEngine.Vector2 _containerPadding
    UnityEngine::Vector2& dyn__containerPadding();
    // Get instance field reference: private System.Single _separator
    float& dyn__separator();
    // Get instance field reference: private System.Single _zOffset
    float& dyn__zOffset();
    // Get instance field reference: private System.Boolean <isShown>k__BackingField
    bool& dyn_$isShown$k__BackingField();
    // public System.Boolean get_isShown()
    // Offset: 0x14A540C
    bool get_isShown();
    // private System.Void set_isShown(System.Boolean value)
    // Offset: 0x14A5414
    void set_isShown(bool value);
    // protected System.Void Awake()
    // Offset: 0x14A5420
    void Awake();
    // public System.Void Show(System.String text, UnityEngine.Transform parent, UnityEngine.Vector2 containerSize, UnityEngine.Rect spawnRect)
    // Offset: 0x14A4EC0
    void Show(::StringW text, UnityEngine::Transform* parent, UnityEngine::Vector2 containerSize, UnityEngine::Rect spawnRect);
    // public System.Void Hide()
    // Offset: 0x14A49F8
    void Hide();
    // private UnityEngine.Vector2 CalculatePanelPosition(UnityEngine.Vector2 containerSize, UnityEngine.Rect spawnRect, UnityEngine.Vector2 panelSize)
    // Offset: 0x14A5528
    UnityEngine::Vector2 CalculatePanelPosition(UnityEngine::Vector2 containerSize, UnityEngine::Rect spawnRect, UnityEngine::Vector2 panelSize);
    // public System.Void .ctor()
    // Offset: 0x14A5654
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverHintPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HoverHintPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverHintPanel*, creationType>()));
    }
  }; // HMUI.HoverHintPanel
  #pragma pack(pop)
  static check_size<sizeof(HoverHintPanel), 56 + sizeof(bool)> __HMUI_HoverHintPanelSizeCheck;
  static_assert(sizeof(HoverHintPanel) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::HoverHintPanel::get_isShown
// Il2CppName: get_isShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::HoverHintPanel::*)()>(&HMUI::HoverHintPanel::get_isShown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintPanel*), "get_isShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintPanel::set_isShown
// Il2CppName: set_isShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintPanel::*)(bool)>(&HMUI::HoverHintPanel::set_isShown)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintPanel*), "set_isShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintPanel::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintPanel::*)()>(&HMUI::HoverHintPanel::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintPanel*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintPanel::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintPanel::*)(::StringW, UnityEngine::Transform*, UnityEngine::Vector2, UnityEngine::Rect)>(&HMUI::HoverHintPanel::Show)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* containerSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* spawnRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintPanel*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, parent, containerSize, spawnRect});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintPanel::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverHintPanel::*)()>(&HMUI::HoverHintPanel::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintPanel*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintPanel::CalculatePanelPosition
// Il2CppName: CalculatePanelPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (HMUI::HoverHintPanel::*)(UnityEngine::Vector2, UnityEngine::Rect, UnityEngine::Vector2)>(&HMUI::HoverHintPanel::CalculatePanelPosition)> {
  static const MethodInfo* get() {
    static auto* containerSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* spawnRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* panelSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverHintPanel*), "CalculatePanelPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{containerSize, spawnRect, panelSize});
  }
};
// Writing MetadataGetter for method: HMUI::HoverHintPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
