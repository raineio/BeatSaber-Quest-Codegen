// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizedTextMeshProUGUI
  class LocalizedTextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectPromptView
  class DisconnectPromptView;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: LocalPlayerInGameMenuInitData
  class LocalPlayerInGameMenuInitData;
  // Forward declaring type: MultiplayerLocalPlayerDisconnectHelper
  class MultiplayerLocalPlayerDisconnectHelper;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween
  class Tween;
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
  // Autogenerated type: MultiplayerLocalInactivePlayerInGameMenuViewController
  class MultiplayerLocalInactivePlayerInGameMenuViewController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _disconnectButton
    // Offset: 0x18
    UnityEngine::UI::Button* disconnectButton;
    // private Polyglot.LocalizedTextMeshProUGUI _disconnectButtonLocalizedText
    // Offset: 0x20
    Polyglot::LocalizedTextMeshProUGUI* disconnectButtonLocalizedText;
    // private UnityEngine.UI.Toggle _detailsToggle
    // Offset: 0x28
    UnityEngine::UI::Toggle* detailsToggle;
    // private UnityEngine.CanvasGroup _globalCanvasGroup
    // Offset: 0x30
    UnityEngine::CanvasGroup* globalCanvasGroup;
    // private UnityEngine.GameObject _mainBar
    // Offset: 0x38
    UnityEngine::GameObject* mainBar;
    // private DisconnectPromptView _disconnectPromptView
    // Offset: 0x40
    GlobalNamespace::DisconnectPromptView* disconnectPromptView;
    // private LevelBar _levelBar
    // Offset: 0x48
    GlobalNamespace::LevelBar* levelBar;
    // private UnityEngine.GameObject _dontOwnSongGameObject
    // Offset: 0x50
    UnityEngine::GameObject* dontOwnSongGameObject;
    // private UnityEngine.GameObject _detailsGameObject
    // Offset: 0x58
    UnityEngine::GameObject* detailsGameObject;
    // private readonly LocalPlayerInGameMenuInitData _localPlayerInGameMenuInitData
    // Offset: 0x60
    GlobalNamespace::LocalPlayerInGameMenuInitData* localPlayerInGameMenuInitData;
    // private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    // Offset: 0x68
    GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper;
    // private readonly MultiplayerController _multiplayerController
    // Offset: 0x70
    GlobalNamespace::MultiplayerController* multiplayerController;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x78
    Tweening::TweeningManager* tweeningManager;
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Offset: 0x80
    HMUI::ButtonBinder* buttonBinder;
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Offset: 0x88
    HMUI::ToggleBinder* toggleBinder;
    // private Tweening.Tween _fadeOutTween
    // Offset: 0x90
    Tweening::Tween* fadeOutTween;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x204CDF8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x204CF24
    void OnDisable();
    // protected System.Void Start()
    // Offset: 0x204CFD8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x204D0E0
    void OnDestroy();
    // private System.Void DisconnectButtonPressed()
    // Offset: 0x204D210
    void DisconnectButtonPressed();
    // private System.Void DetailsToggleValueChanged(System.Boolean isOn)
    // Offset: 0x204D250
    void DetailsToggleValueChanged(bool isOn);
    // private System.Void HandleDisconnectPromptViewDidViewFinish(System.Boolean disconnect)
    // Offset: 0x204D270
    void HandleDisconnectPromptViewDidViewFinish(bool disconnect);
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x204D32C
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // private System.Void <HandleDisconnectPromptViewDidViewFinish>b__22_0()
    // Offset: 0x204D560
    void $HandleDisconnectPromptViewDidViewFinish$b__22_0();
    // private System.Void <HandleStateChanged>b__23_0(System.Single val)
    // Offset: 0x204D580
    void $HandleStateChanged$b__23_0(float val);
    // private System.Void <HandleStateChanged>b__23_1()
    // Offset: 0x204D59C
    void $HandleStateChanged$b__23_1();
    // public System.Void .ctor()
    // Offset: 0x204D4C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLocalInactivePlayerInGameMenuViewController* New_ctor();
  }; // MultiplayerLocalInactivePlayerInGameMenuViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*, "", "MultiplayerLocalInactivePlayerInGameMenuViewController");
#pragma pack(pop)
