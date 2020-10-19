// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AutoSetupData
  class AutoSetupData;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AutoSetupController
  class AutoSetupController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _closeButton
    // Offset: 0x18
    UnityEngine::UI::Button* closeButton;
    // private UnityEngine.UI.Toggle _selectBasedOnSuggestionsToggle
    // Offset: 0x20
    UnityEngine::UI::Toggle* selectBasedOnSuggestionsToggle;
    // private UnityEngine.UI.Toggle _autoStartWhenAllReadyToggle
    // Offset: 0x28
    UnityEngine::UI::Toggle* autoStartWhenAllReadyToggle;
    // private UnityEngine.UI.Toggle _forceAutoStartAfterSongSelectionToggle
    // Offset: 0x30
    UnityEngine::UI::Toggle* forceAutoStartAfterSongSelectionToggle;
    // private UnityEngine.UI.Toggle _randomSongIfNoneSuggestedToggle
    // Offset: 0x38
    UnityEngine::UI::Toggle* randomSongIfNoneSuggestedToggle;
    // private System.Action`1<AutoSetupData> didFinishEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::AutoSetupData*>* didFinishEvent;
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Offset: 0x48
    HMUI::ButtonBinder* buttonBinder;
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Offset: 0x50
    HMUI::ToggleBinder* toggleBinder;
    // private AutoSetupData _autoSetupData
    // Offset: 0x58
    GlobalNamespace::AutoSetupData* autoSetupData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action`1<AutoSetupData> value)
    // Offset: 0x2030D00
    void add_didFinishEvent(System::Action_1<GlobalNamespace::AutoSetupData*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<AutoSetupData> value)
    // Offset: 0x2030DA4
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::AutoSetupData*>* value);
    // public System.Void Setup(AutoSetupData autoSetupData)
    // Offset: 0x2030E48
    void Setup(GlobalNamespace::AutoSetupData* autoSetupData);
    // protected System.Void OnEnable()
    // Offset: 0x2030E50
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x203100C
    void OnDisable();
    // private System.Void <OnEnable>b__12_0()
    // Offset: 0x20310FC
    void $OnEnable$b__12_0();
    // private System.Void <OnEnable>b__12_1(System.Boolean isOn)
    // Offset: 0x2031160
    void $OnEnable$b__12_1(bool isOn);
    // private System.Void <OnEnable>b__12_2(System.Boolean isOn)
    // Offset: 0x2031180
    void $OnEnable$b__12_2(bool isOn);
    // private System.Void <OnEnable>b__12_3(System.Boolean isOn)
    // Offset: 0x20311A0
    void $OnEnable$b__12_3(bool isOn);
    // private System.Void <OnEnable>b__12_4(System.Boolean isOn)
    // Offset: 0x20311C0
    void $OnEnable$b__12_4(bool isOn);
    // public System.Void .ctor()
    // Offset: 0x2031028
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AutoSetupController* New_ctor();
  }; // AutoSetupController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutoSetupController*, "", "AutoSetupController");
#pragma pack(pop)
