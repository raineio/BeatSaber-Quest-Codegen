// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ToggleWithCallbacks
#include "HMUI/ToggleWithCallbacks.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Color because it is already included!
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: AnimatedSwitchView
  class AnimatedSwitchView;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::AnimatedSwitchView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView*, "HMUI", "AnimatedSwitchView");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.AnimatedSwitchView
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [RequireComponent] Offset: F24248
  class AnimatedSwitchView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::AnimatedSwitchView::ColorBlock
    class ColorBlock;
    // Nested type: HMUI::AnimatedSwitchView::AnimationState
    struct AnimationState;
    // Nested type: HMUI::AnimatedSwitchView::GetColorDelegate
    class GetColorDelegate;
    // Nested type: HMUI::AnimatedSwitchView::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.AnimatedSwitchView/HMUI.AnimationState
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct AnimationState/*, public System::Enum*/ {
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
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AnimationState
      constexpr AnimationState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState Idle
      static constexpr const int Idle = 0;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState Idle
      static HMUI::AnimatedSwitchView::AnimationState _get_Idle();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState Idle
      static void _set_Idle(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOn
      static constexpr const int SwitchingOn = 1;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_SwitchingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOn
      static void _set_SwitchingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOff
      static constexpr const int SwitchingOff = 2;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_SwitchingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState SwitchingOff
      static void _set_SwitchingOff(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOn
      static constexpr const int HighlightingOn = 4;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_HighlightingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOn
      static void _set_HighlightingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOff
      static constexpr const int HighlightingOff = 8;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_HighlightingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState HighlightingOff
      static void _set_HighlightingOff(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOn
      static constexpr const int DisablingOn = 16;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_DisablingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOn
      static void _set_DisablingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOff
      static constexpr const int DisablingOff = 32;
      // Get static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_DisablingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/HMUI.AnimationState DisablingOff
      static void _set_DisablingOff(HMUI::AnimatedSwitchView::AnimationState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HMUI.AnimatedSwitchView/HMUI.AnimationState
    #pragma pack(pop)
    static check_size<sizeof(AnimatedSwitchView::AnimationState), 0 + sizeof(int)> __HMUI_AnimatedSwitchView_AnimationStateSizeCheck;
    static_assert(sizeof(AnimatedSwitchView::AnimationState) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.RectTransform _knobRectTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* knobRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0xF256C0
    // private HMUI.ImageView _backgroundImage
    // Size: 0x8
    // Offset: 0x20
    HMUI::ImageView* backgroundImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private HMUI.ImageView _knobImage
    // Size: 0x8
    // Offset: 0x28
    HMUI::ImageView* knobImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private TMPro.TextMeshProUGUI _onText
    // Size: 0x8
    // Offset: 0x30
    TMPro::TextMeshProUGUI* onText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _offText
    // Size: 0x8
    // Offset: 0x38
    TMPro::TextMeshProUGUI* offText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xF25728
    // private System.Single _switchAnimationSmooth
    // Size: 0x4
    // Offset: 0x40
    float switchAnimationSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disableAnimationDuration
    // Size: 0x4
    // Offset: 0x44
    float disableAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _highlightAnimationDuration
    // Size: 0x4
    // Offset: 0x48
    float highlightAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xF25780
    // private System.Single _horizontalStretchAmount
    // Size: 0x4
    // Offset: 0x4C
    float horizontalStretchAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _verticalStretchAmount
    // Size: 0x4
    // Offset: 0x50
    float verticalStretchAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: verticalStretchAmount and: onColors
    char __padding9[0x4] = {};
    // [SpaceAttribute] Offset: 0xF257C8
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onColors
    // Size: 0x8
    // Offset: 0x58
    HMUI::AnimatedSwitchView::ColorBlock* onColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offColors
    // Size: 0x8
    // Offset: 0x60
    HMUI::AnimatedSwitchView::ColorBlock* offColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onHighlightedColors
    // Size: 0x8
    // Offset: 0x68
    HMUI::AnimatedSwitchView::ColorBlock* onHighlightedColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offHighlightedColors
    // Size: 0x8
    // Offset: 0x70
    HMUI::AnimatedSwitchView::ColorBlock* offHighlightedColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.ColorBlock _disabledColors
    // Size: 0x8
    // Offset: 0x78
    HMUI::AnimatedSwitchView::ColorBlock* disabledColors;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::ColorBlock*) == 0x8);
    // private HMUI.AnimatedSwitchView/HMUI.AnimationState _animationState
    // Size: 0x4
    // Offset: 0x80
    HMUI::AnimatedSwitchView::AnimationState animationState;
    // Field size check
    static_assert(sizeof(HMUI::AnimatedSwitchView::AnimationState) == 0x4);
    // private System.Single _switchAmount
    // Size: 0x4
    // Offset: 0x84
    float switchAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _highlightAmount
    // Size: 0x4
    // Offset: 0x88
    float highlightAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disabledAmount
    // Size: 0x4
    // Offset: 0x8C
    float disabledAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _originalKnobWidth
    // Size: 0x4
    // Offset: 0x90
    float originalKnobWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _originalKnobHeight
    // Size: 0x4
    // Offset: 0x94
    float originalKnobHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private HMUI.ToggleWithCallbacks _toggle
    // Size: 0x8
    // Offset: 0x98
    HMUI::ToggleWithCallbacks* toggle;
    // Field size check
    static_assert(sizeof(HMUI::ToggleWithCallbacks*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _knobRectTransform
    UnityEngine::RectTransform*& dyn__knobRectTransform();
    // Get instance field reference: private HMUI.ImageView _backgroundImage
    HMUI::ImageView*& dyn__backgroundImage();
    // Get instance field reference: private HMUI.ImageView _knobImage
    HMUI::ImageView*& dyn__knobImage();
    // Get instance field reference: private TMPro.TextMeshProUGUI _onText
    TMPro::TextMeshProUGUI*& dyn__onText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _offText
    TMPro::TextMeshProUGUI*& dyn__offText();
    // Get instance field reference: private System.Single _switchAnimationSmooth
    float& dyn__switchAnimationSmooth();
    // Get instance field reference: private System.Single _disableAnimationDuration
    float& dyn__disableAnimationDuration();
    // Get instance field reference: private System.Single _highlightAnimationDuration
    float& dyn__highlightAnimationDuration();
    // Get instance field reference: private System.Single _horizontalStretchAmount
    float& dyn__horizontalStretchAmount();
    // Get instance field reference: private System.Single _verticalStretchAmount
    float& dyn__verticalStretchAmount();
    // Get instance field reference: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onColors
    HMUI::AnimatedSwitchView::ColorBlock*& dyn__onColors();
    // Get instance field reference: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offColors
    HMUI::AnimatedSwitchView::ColorBlock*& dyn__offColors();
    // Get instance field reference: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _onHighlightedColors
    HMUI::AnimatedSwitchView::ColorBlock*& dyn__onHighlightedColors();
    // Get instance field reference: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _offHighlightedColors
    HMUI::AnimatedSwitchView::ColorBlock*& dyn__offHighlightedColors();
    // Get instance field reference: private HMUI.AnimatedSwitchView/HMUI.ColorBlock _disabledColors
    HMUI::AnimatedSwitchView::ColorBlock*& dyn__disabledColors();
    // Get instance field reference: private HMUI.AnimatedSwitchView/HMUI.AnimationState _animationState
    HMUI::AnimatedSwitchView::AnimationState& dyn__animationState();
    // Get instance field reference: private System.Single _switchAmount
    float& dyn__switchAmount();
    // Get instance field reference: private System.Single _highlightAmount
    float& dyn__highlightAmount();
    // Get instance field reference: private System.Single _disabledAmount
    float& dyn__disabledAmount();
    // Get instance field reference: private System.Single _originalKnobWidth
    float& dyn__originalKnobWidth();
    // Get instance field reference: private System.Single _originalKnobHeight
    float& dyn__originalKnobHeight();
    // Get instance field reference: private HMUI.ToggleWithCallbacks _toggle
    HMUI::ToggleWithCallbacks*& dyn__toggle();
    // protected System.Void Awake()
    // Offset: 0x14962C0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1496318
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1496A20
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1496B58
    void Update();
    // private System.Void LerpPosition(System.Single switchAmount)
    // Offset: 0x14969B0
    void LerpPosition(float switchAmount);
    // private System.Void LerpStretch(System.Single switchAmount)
    // Offset: 0x1496FB8
    void LerpStretch(float switchAmount);
    // private System.Void LerpColors(System.Single switchAmount, System.Single highlightAmount, System.Single disabledAmount)
    // Offset: 0x14964A0
    void LerpColors(float switchAmount, float highlightAmount, float disabledAmount);
    // private UnityEngine.Color LerpColor(System.Single switchAmount, System.Single highlightAmount, System.Single disabledAmount, HMUI.AnimatedSwitchView/HMUI.GetColorDelegate getColorDelegate)
    // Offset: 0x149709C
    UnityEngine::Color LerpColor(float switchAmount, float highlightAmount, float disabledAmount, HMUI::AnimatedSwitchView::GetColorDelegate* getColorDelegate);
    // private System.Void HandleOnValueChanged(System.Boolean value)
    // Offset: 0x1497610
    void HandleOnValueChanged(bool value);
    // private System.Void HandleStateDidChange(HMUI.ToggleWithCallbacks/HMUI.SelectionState selectionState)
    // Offset: 0x1497638
    void HandleStateDidChange(HMUI::ToggleWithCallbacks::SelectionState selectionState);
    // public System.Void .ctor()
    // Offset: 0x1497734
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedSwitchView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::AnimatedSwitchView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedSwitchView*, creationType>()));
    }
  }; // HMUI.AnimatedSwitchView
  #pragma pack(pop)
  static check_size<sizeof(AnimatedSwitchView), 152 + sizeof(HMUI::ToggleWithCallbacks*)> __HMUI_AnimatedSwitchViewSizeCheck;
  static_assert(sizeof(AnimatedSwitchView) == 0xA0);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView::AnimationState, "HMUI", "AnimatedSwitchView/AnimationState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)()>(&HMUI::AnimatedSwitchView::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)()>(&HMUI::AnimatedSwitchView::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)()>(&HMUI::AnimatedSwitchView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)()>(&HMUI::AnimatedSwitchView::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::LerpPosition
// Il2CppName: LerpPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(float)>(&HMUI::AnimatedSwitchView::LerpPosition)> {
  static const MethodInfo* get() {
    static auto* switchAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "LerpPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{switchAmount});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::LerpStretch
// Il2CppName: LerpStretch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(float)>(&HMUI::AnimatedSwitchView::LerpStretch)> {
  static const MethodInfo* get() {
    static auto* switchAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "LerpStretch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{switchAmount});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::LerpColors
// Il2CppName: LerpColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(float, float, float)>(&HMUI::AnimatedSwitchView::LerpColors)> {
  static const MethodInfo* get() {
    static auto* switchAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highlightAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* disabledAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "LerpColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{switchAmount, highlightAmount, disabledAmount});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::LerpColor
// Il2CppName: LerpColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (HMUI::AnimatedSwitchView::*)(float, float, float, HMUI::AnimatedSwitchView::GetColorDelegate*)>(&HMUI::AnimatedSwitchView::LerpColor)> {
  static const MethodInfo* get() {
    static auto* switchAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highlightAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* disabledAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* getColorDelegate = &::il2cpp_utils::GetClassFromName("HMUI", "AnimatedSwitchView/GetColorDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "LerpColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{switchAmount, highlightAmount, disabledAmount, getColorDelegate});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::HandleOnValueChanged
// Il2CppName: HandleOnValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(bool)>(&HMUI::AnimatedSwitchView::HandleOnValueChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "HandleOnValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::HandleStateDidChange
// Il2CppName: HandleStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AnimatedSwitchView::*)(HMUI::ToggleWithCallbacks::SelectionState)>(&HMUI::AnimatedSwitchView::HandleStateDidChange)> {
  static const MethodInfo* get() {
    static auto* selectionState = &::il2cpp_utils::GetClassFromName("HMUI", "ToggleWithCallbacks/SelectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AnimatedSwitchView*), "HandleStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionState});
  }
};
// Writing MetadataGetter for method: HMUI::AnimatedSwitchView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
