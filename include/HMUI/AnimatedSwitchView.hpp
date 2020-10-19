// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ToggleWithCallbacks
#include "HMUI/ToggleWithCallbacks.hpp"
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
  // Autogenerated type: HMUI.AnimatedSwitchView
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
    // Autogenerated type: HMUI.AnimatedSwitchView/AnimationState
    struct AnimationState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: AnimationState
      constexpr AnimationState(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.AnimatedSwitchView/AnimationState Idle
      static constexpr const int Idle = 0;
      // Get static field: static public HMUI.AnimatedSwitchView/AnimationState Idle
      static HMUI::AnimatedSwitchView::AnimationState _get_Idle();
      // Set static field: static public HMUI.AnimatedSwitchView/AnimationState Idle
      static void _set_Idle(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/AnimationState SwitchingOn
      static constexpr const int SwitchingOn = 1;
      // Get static field: static public HMUI.AnimatedSwitchView/AnimationState SwitchingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_SwitchingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/AnimationState SwitchingOn
      static void _set_SwitchingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/AnimationState SwitchingOff
      static constexpr const int SwitchingOff = 2;
      // Get static field: static public HMUI.AnimatedSwitchView/AnimationState SwitchingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_SwitchingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/AnimationState SwitchingOff
      static void _set_SwitchingOff(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/AnimationState HighlightingOn
      static constexpr const int HighlightingOn = 4;
      // Get static field: static public HMUI.AnimatedSwitchView/AnimationState HighlightingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_HighlightingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/AnimationState HighlightingOn
      static void _set_HighlightingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/AnimationState HighlightingOff
      static constexpr const int HighlightingOff = 8;
      // Get static field: static public HMUI.AnimatedSwitchView/AnimationState HighlightingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_HighlightingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/AnimationState HighlightingOff
      static void _set_HighlightingOff(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/AnimationState DisablingOn
      static constexpr const int DisablingOn = 16;
      // Get static field: static public HMUI.AnimatedSwitchView/AnimationState DisablingOn
      static HMUI::AnimatedSwitchView::AnimationState _get_DisablingOn();
      // Set static field: static public HMUI.AnimatedSwitchView/AnimationState DisablingOn
      static void _set_DisablingOn(HMUI::AnimatedSwitchView::AnimationState value);
      // static field const value: static public HMUI.AnimatedSwitchView/AnimationState DisablingOff
      static constexpr const int DisablingOff = 32;
      // Get static field: static public HMUI.AnimatedSwitchView/AnimationState DisablingOff
      static HMUI::AnimatedSwitchView::AnimationState _get_DisablingOff();
      // Set static field: static public HMUI.AnimatedSwitchView/AnimationState DisablingOff
      static void _set_DisablingOff(HMUI::AnimatedSwitchView::AnimationState value);
    }; // HMUI.AnimatedSwitchView/AnimationState
    // private UnityEngine.RectTransform _knobRectTransform
    // Offset: 0x18
    UnityEngine::RectTransform* knobRectTransform;
    // private HMUI.ImageView _backgroundImage
    // Offset: 0x20
    HMUI::ImageView* backgroundImage;
    // private HMUI.ImageView _knobImage
    // Offset: 0x28
    HMUI::ImageView* knobImage;
    // private TMPro.TextMeshProUGUI _onText
    // Offset: 0x30
    TMPro::TextMeshProUGUI* onText;
    // private TMPro.TextMeshProUGUI _offText
    // Offset: 0x38
    TMPro::TextMeshProUGUI* offText;
    // private System.Single _switchAnimationSmooth
    // Offset: 0x40
    float switchAnimationSmooth;
    // private System.Single _disableAnimationDuration
    // Offset: 0x44
    float disableAnimationDuration;
    // private System.Single _highlightAnimationDuration
    // Offset: 0x48
    float highlightAnimationDuration;
    // private System.Single _horizontalStretchAmount
    // Offset: 0x4C
    float horizontalStretchAmount;
    // private System.Single _verticalStretchAmount
    // Offset: 0x50
    float verticalStretchAmount;
    // private HMUI.AnimatedSwitchView/ColorBlock _onColors
    // Offset: 0x58
    HMUI::AnimatedSwitchView::ColorBlock* onColors;
    // private HMUI.AnimatedSwitchView/ColorBlock _offColors
    // Offset: 0x60
    HMUI::AnimatedSwitchView::ColorBlock* offColors;
    // private HMUI.AnimatedSwitchView/ColorBlock _onHighlightedColors
    // Offset: 0x68
    HMUI::AnimatedSwitchView::ColorBlock* onHighlightedColors;
    // private HMUI.AnimatedSwitchView/ColorBlock _offHighlightedColors
    // Offset: 0x70
    HMUI::AnimatedSwitchView::ColorBlock* offHighlightedColors;
    // private HMUI.AnimatedSwitchView/ColorBlock _disabledColors
    // Offset: 0x78
    HMUI::AnimatedSwitchView::ColorBlock* disabledColors;
    // private HMUI.AnimatedSwitchView/AnimationState _animationState
    // Offset: 0x80
    HMUI::AnimatedSwitchView::AnimationState animationState;
    // private System.Single _switchAmount
    // Offset: 0x84
    float switchAmount;
    // private System.Single _highlightAmount
    // Offset: 0x88
    float highlightAmount;
    // private System.Single _disabledAmount
    // Offset: 0x8C
    float disabledAmount;
    // private System.Single _originalKnobWidth
    // Offset: 0x90
    float originalKnobWidth;
    // private System.Single _originalKnobHeight
    // Offset: 0x94
    float originalKnobHeight;
    // private HMUI.ToggleWithCallbacks _toggle
    // Offset: 0x98
    HMUI::ToggleWithCallbacks* toggle;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x217DE08
    void Awake();
    // protected System.Void Start()
    // Offset: 0x217DE68
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x217E608
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x217E740
    void Update();
    // private System.Void LerpPosition(System.Single switchAmount)
    // Offset: 0x217E598
    void LerpPosition(float switchAmount);
    // private System.Void LerpStretch(System.Single switchAmount)
    // Offset: 0x217EBA0
    void LerpStretch(float switchAmount);
    // private System.Void LerpColors(System.Single switchAmount, System.Single highlightAmount, System.Single disabledAmount)
    // Offset: 0x217DFF0
    void LerpColors(float switchAmount, float highlightAmount, float disabledAmount);
    // private UnityEngine.Color LerpColor(System.Single switchAmount, System.Single highlightAmount, System.Single disabledAmount, HMUI.AnimatedSwitchView/GetColorDelegate getColorDelegate)
    // Offset: 0x217EC88
    UnityEngine::Color LerpColor(float switchAmount, float highlightAmount, float disabledAmount, HMUI::AnimatedSwitchView::GetColorDelegate* getColorDelegate);
    // private System.Void HandleOnValueChanged(System.Boolean value)
    // Offset: 0x217F220
    void HandleOnValueChanged(bool value);
    // private System.Void HandleStateDidChange(HMUI.ToggleWithCallbacks/SelectionState selectionState)
    // Offset: 0x217F248
    void HandleStateDidChange(HMUI::ToggleWithCallbacks::SelectionState selectionState);
    // public System.Void .ctor()
    // Offset: 0x217F344
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AnimatedSwitchView* New_ctor();
  }; // HMUI.AnimatedSwitchView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView*, "HMUI", "AnimatedSwitchView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView::AnimationState, "HMUI", "AnimatedSwitchView/AnimationState");
#pragma pack(pop)
