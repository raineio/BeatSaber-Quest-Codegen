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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PauseAnimationController
  class PauseAnimationController;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PauseMenuManager
  class PauseMenuManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::PauseMenuManager::InitData
    class InitData;
    // private PauseAnimationController _pauseAnimationController
    // Offset: 0x18
    GlobalNamespace::PauseAnimationController* pauseAnimationController;
    // private LevelBar _levelBar
    // Offset: 0x20
    GlobalNamespace::LevelBar* levelBar;
    // private UnityEngine.UI.Button _continueButton
    // Offset: 0x28
    UnityEngine::UI::Button* continueButton;
    // private UnityEngine.UI.Button _restartButton
    // Offset: 0x30
    UnityEngine::UI::Button* restartButton;
    // private UnityEngine.UI.Button _backButton
    // Offset: 0x38
    UnityEngine::UI::Button* backButton;
    // private TMPro.TextMeshProUGUI _backButtonText
    // Offset: 0x40
    TMPro::TextMeshProUGUI* backButtonText;
    // private UnityEngine.Transform _pauseContainerTransform
    // Offset: 0x48
    UnityEngine::Transform* pauseContainerTransform;
    // private readonly PauseMenuManager/InitData _initData
    // Offset: 0x50
    GlobalNamespace::PauseMenuManager::InitData* initData;
    // private readonly VRControllersInputManager _vrControllersInputManager
    // Offset: 0x58
    GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    // Offset: 0x60
    GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation;
    // private System.Action didPressContinueButtonEvent
    // Offset: 0x68
    System::Action* didPressContinueButtonEvent;
    // private System.Action didPressMenuButtonEvent
    // Offset: 0x70
    System::Action* didPressMenuButtonEvent;
    // private System.Action didPressRestartButtonEvent
    // Offset: 0x78
    System::Action* didPressRestartButtonEvent;
    // private System.Action didFinishResumeAnimationEvent
    // Offset: 0x80
    System::Action* didFinishResumeAnimationEvent;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x88
    HMUI::ButtonBinder* buttonBinder;
    // private System.Single _disabledInteractionRemainingTime
    // Offset: 0x90
    float disabledInteractionRemainingTime;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kDisabledInteractionDuration
    static constexpr const float kDisabledInteractionDuration = 0.2;
    // Get static field: static private System.Single kDisabledInteractionDuration
    static float _get_kDisabledInteractionDuration();
    // Set static field: static private System.Single kDisabledInteractionDuration
    static void _set_kDisabledInteractionDuration(float value);
    // public System.Void add_didPressContinueButtonEvent(System.Action value)
    // Offset: 0x2082228
    void add_didPressContinueButtonEvent(System::Action* value);
    // public System.Void remove_didPressContinueButtonEvent(System.Action value)
    // Offset: 0x2082818
    void remove_didPressContinueButtonEvent(System::Action* value);
    // public System.Void add_didPressMenuButtonEvent(System.Action value)
    // Offset: 0x2082370
    void add_didPressMenuButtonEvent(System::Action* value);
    // public System.Void remove_didPressMenuButtonEvent(System.Action value)
    // Offset: 0x2082960
    void remove_didPressMenuButtonEvent(System::Action* value);
    // public System.Void add_didPressRestartButtonEvent(System.Action value)
    // Offset: 0x20822CC
    void add_didPressRestartButtonEvent(System::Action* value);
    // public System.Void remove_didPressRestartButtonEvent(System.Action value)
    // Offset: 0x20828BC
    void remove_didPressRestartButtonEvent(System::Action* value);
    // public System.Void add_didFinishResumeAnimationEvent(System.Action value)
    // Offset: 0x2082184
    void add_didFinishResumeAnimationEvent(System::Action* value);
    // public System.Void remove_didFinishResumeAnimationEvent(System.Action value)
    // Offset: 0x2082774
    void remove_didFinishResumeAnimationEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x2082ED4
    void Awake();
    // protected System.Void Start()
    // Offset: 0x208306C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x20831AC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x208328C
    void Update();
    // public System.Void ShowMenu()
    // Offset: 0x2082B38
    void ShowMenu();
    // public System.Void StartResumeAnimation()
    // Offset: 0x2082D10
    void StartResumeAnimation();
    // private System.Void HandleResumeFromPauseAnimationDidFinish()
    // Offset: 0x208333C
    void HandleResumeFromPauseAnimationDidFinish();
    // private System.Void MenuButtonPressed()
    // Offset: 0x2083350
    void MenuButtonPressed();
    // private System.Void RestartButtonPressed()
    // Offset: 0x2083390
    void RestartButtonPressed();
    // private System.Void ContinueButtonPressed()
    // Offset: 0x20832FC
    void ContinueButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x20833E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PauseMenuManager* New_ctor();
  }; // PauseMenuManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseMenuManager*, "", "PauseMenuManager");
#pragma pack(pop)
