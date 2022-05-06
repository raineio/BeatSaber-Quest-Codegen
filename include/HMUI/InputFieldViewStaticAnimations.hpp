// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.InputFieldView
#include "HMUI/InputFieldView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldViewStaticAnimations
  class InputFieldViewStaticAnimations;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::InputFieldViewStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldViewStaticAnimations*, "HMUI", "InputFieldViewStaticAnimations");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.InputFieldViewStaticAnimations
  // [TokenAttribute] Offset: FFFFFFFF
  class InputFieldViewStaticAnimations : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private HMUI.InputFieldView _inputFieldView
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::InputFieldView* inputFieldView;
    // Field size check
    static_assert(sizeof(::HMUI::InputFieldView*) == 0x8);
    // [SpaceAttribute] Offset: 0x10C0674
    // private UnityEngine.AnimationClip _normalClip
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationClip* normalClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _highlightedClip
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationClip* highlightedClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _pressedClip
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationClip* pressedClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _disabledClip
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationClip* disabledClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationClip*) == 0x8);
    // private UnityEngine.AnimationClip _selectedClip
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationClip* selectedClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationClip*) == 0x8);
    // private System.Boolean _didStart
    // Size: 0x1
    // Offset: 0x48
    bool didStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.InputFieldView _inputFieldView
    [[deprecated("Use field access instead!")]] ::HMUI::InputFieldView*& dyn__inputFieldView();
    // Get instance field reference: private UnityEngine.AnimationClip _normalClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationClip*& dyn__normalClip();
    // Get instance field reference: private UnityEngine.AnimationClip _highlightedClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationClip*& dyn__highlightedClip();
    // Get instance field reference: private UnityEngine.AnimationClip _pressedClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationClip*& dyn__pressedClip();
    // Get instance field reference: private UnityEngine.AnimationClip _disabledClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationClip*& dyn__disabledClip();
    // Get instance field reference: private UnityEngine.AnimationClip _selectedClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationClip*& dyn__selectedClip();
    // Get instance field reference: private System.Boolean _didStart
    [[deprecated("Use field access instead!")]] bool& dyn__didStart();
    // public System.Void .ctor()
    // Offset: 0x16B96D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldViewStaticAnimations* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::InputFieldViewStaticAnimations::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldViewStaticAnimations*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x16B9414
    void Awake();
    // protected System.Void Start()
    // Offset: 0x16B94A4
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x16B95E0
    void OnEnable();
    // protected System.Void OnDestroy()
    // Offset: 0x16B95FC
    void OnDestroy();
    // private System.Void HandleInputFieldViewSelectionStateDidChange(HMUI.InputFieldView/HMUI.SelectionState state)
    // Offset: 0x16B94C8
    void HandleInputFieldViewSelectionStateDidChange(::HMUI::InputFieldView::SelectionState state);
  }; // HMUI.InputFieldViewStaticAnimations
  #pragma pack(pop)
  static check_size<sizeof(InputFieldViewStaticAnimations), 72 + sizeof(bool)> __HMUI_InputFieldViewStaticAnimationsSizeCheck;
  static_assert(sizeof(InputFieldViewStaticAnimations) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::InputFieldViewStaticAnimations::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::InputFieldViewStaticAnimations::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewStaticAnimations::*)()>(&HMUI::InputFieldViewStaticAnimations::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewStaticAnimations*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewStaticAnimations::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewStaticAnimations::*)()>(&HMUI::InputFieldViewStaticAnimations::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewStaticAnimations*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewStaticAnimations::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewStaticAnimations::*)()>(&HMUI::InputFieldViewStaticAnimations::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewStaticAnimations*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewStaticAnimations::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewStaticAnimations::*)()>(&HMUI::InputFieldViewStaticAnimations::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewStaticAnimations*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewStaticAnimations::HandleInputFieldViewSelectionStateDidChange
// Il2CppName: HandleInputFieldViewSelectionStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewStaticAnimations::*)(::HMUI::InputFieldView::SelectionState)>(&HMUI::InputFieldViewStaticAnimations::HandleInputFieldViewSelectionStateDidChange)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView/SelectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewStaticAnimations*), "HandleInputFieldViewSelectionStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
