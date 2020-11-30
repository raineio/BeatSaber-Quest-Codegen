// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CreateServerFormController
  class CreateServerFormController;
  // Skipping declaration: IUnifiedNetworkPlayerModel because it is already included!
  // Forward declaring type: MultiplayerModeSettings
  class MultiplayerModeSettings;
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
  // Autogenerated type: CreateServerViewController
  class CreateServerViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _createServerButton
    // Offset: 0x70
    UnityEngine::UI::Button* createServerButton;
    // private UnityEngine.UI.Button _cancelCreateServerButton
    // Offset: 0x78
    UnityEngine::UI::Button* cancelCreateServerButton;
    // private CreateServerFormController _createServerFormController
    // Offset: 0x80
    GlobalNamespace::CreateServerFormController* createServerFormController;
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Offset: 0x88
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // private System.Action`2<System.Boolean,UnifiedNetworkPlayerModel/CreatePartyConfig> didFinishEvent
    // Offset: 0x90
    System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>* didFinishEvent;
    // private MultiplayerModeSettings _multiplayerModeSettings
    // Offset: 0x98
    GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;
    // public System.Void add_didFinishEvent(System.Action`2<System.Boolean,UnifiedNetworkPlayerModel/CreatePartyConfig> value)
    // Offset: 0x1A5510C
    void add_didFinishEvent(System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<System.Boolean,UnifiedNetworkPlayerModel/CreatePartyConfig> value)
    // Offset: 0x1A551B0
    void remove_didFinishEvent(System::Action_2<bool, GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig*>* value);
    // public MultiplayerModeSettings get_multiplayerModeSettings()
    // Offset: 0x1A55254
    GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();
    // public System.Void Setup(MultiplayerModeSettings multiplayerModeSettings)
    // Offset: 0x1A5525C
    void Setup(GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);
    // private UnifiedNetworkPlayerModel/CreatePartyConfig CreatePartyConfig()
    // Offset: 0x1A553BC
    GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig* CreatePartyConfig();
    // private System.Void <DidActivate>b__11_0()
    // Offset: 0x1A5562C
    void $DidActivate$b__11_0();
    // private System.Void <DidActivate>b__11_1()
    // Offset: 0x1A556A0
    void $DidActivate$b__11_1();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A552C0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x1A55624
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CreateServerViewController* New_ctor();
  }; // CreateServerViewController
  check_size<sizeof(CreateServerViewController), 152 + sizeof(void*) + 8 - (152 + sizeof(void*)) % 8> __GlobalNamespace_CreateServerViewControllerSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateServerViewController*, "", "CreateServerViewController");
#pragma pack(pop)