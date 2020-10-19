// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FloorAdjustViewController
  class FloorAdjustViewController : public HMUI::ViewController {
    public:
    // private Vector3SO _roomCenter
    // Offset: 0x70
    GlobalNamespace::Vector3SO* roomCenter;
    // private UnityEngine.UI.Button _yIncButton
    // Offset: 0x78
    UnityEngine::UI::Button* yIncButton;
    // private UnityEngine.UI.Button _yDecButton
    // Offset: 0x80
    UnityEngine::UI::Button* yDecButton;
    // private TMPro.TextMeshProUGUI _playerHeightText
    // Offset: 0x88
    TMPro::TextMeshProUGUI* playerHeightText;
    // private IVRPlatformHelper _vrPlatformHelper
    // Offset: 0x90
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // private System.Single _playerHeight
    // Offset: 0x98
    float playerHeight;
    // static field const value: static private System.Single kMoveStep
    static constexpr const float kMoveStep = 0.05;
    // Get static field: static private System.Single kMoveStep
    static float _get_kMoveStep();
    // Set static field: static private System.Single kMoveStep
    static void _set_kMoveStep(float value);
    // static field const value: static private System.Single kMinPlayerHeight
    static constexpr const float kMinPlayerHeight = 0.5;
    // Get static field: static private System.Single kMinPlayerHeight
    static float _get_kMinPlayerHeight();
    // Set static field: static private System.Single kMinPlayerHeight
    static void _set_kMinPlayerHeight(float value);
    // static field const value: static private System.Single kMaxPlayerHeight
    static constexpr const float kMaxPlayerHeight = 3;
    // Get static field: static private System.Single kMaxPlayerHeight
    static float _get_kMaxPlayerHeight();
    // Set static field: static private System.Single kMaxPlayerHeight
    static void _set_kMaxPlayerHeight(float value);
    // protected System.Void Update()
    // Offset: 0x20243C8
    void Update();
    // private System.Void <DidActivate>b__9_0()
    // Offset: 0x20245E8
    void $DidActivate$b__9_0();
    // private System.Void <DidActivate>b__9_1()
    // Offset: 0x2024660
    void $DidActivate$b__9_1();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x20242CC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x20245E0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FloorAdjustViewController* New_ctor();
  }; // FloorAdjustViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloorAdjustViewController*, "", "FloorAdjustViewController");
#pragma pack(pop)
