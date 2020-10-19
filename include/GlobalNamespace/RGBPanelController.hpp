// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ColorGradientSlider
  class ColorGradientSlider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RGBPanelController
  class RGBPanelController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.ColorGradientSlider _redSlider
    // Offset: 0x18
    HMUI::ColorGradientSlider* redSlider;
    // private HMUI.ColorGradientSlider _greenSlider
    // Offset: 0x20
    HMUI::ColorGradientSlider* greenSlider;
    // private HMUI.ColorGradientSlider _blueSlider
    // Offset: 0x28
    HMUI::ColorGradientSlider* blueSlider;
    // private System.Action`2<UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    // Offset: 0x30
    System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;
    // private UnityEngine.Color _color
    // Offset: 0x38
    UnityEngine::Color color;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_colorDidChangeEvent(System.Action`2<UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x206E0DC
    void add_colorDidChangeEvent(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorDidChangeEvent(System.Action`2<UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x206E180
    void remove_colorDidChangeEvent(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x206E224
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x206E230
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0x206E430
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x206E534
    void OnDestroy();
    // private System.Void HandleSliderColorDidChange(HMUI.ColorGradientSlider slider, UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x206E708
    void HandleSliderColorDidChange(HMUI::ColorGradientSlider* slider, UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void RefreshSlidersValues()
    // Offset: 0x206E3D8
    void RefreshSlidersValues();
    // private System.Void RefreshSlidersColors()
    // Offset: 0x206E25C
    void RefreshSlidersColors();
    // public System.Void .ctor()
    // Offset: 0x206E7AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RGBPanelController* New_ctor();
  }; // RGBPanelController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RGBPanelController*, "", "RGBPanelController");
#pragma pack(pop)
