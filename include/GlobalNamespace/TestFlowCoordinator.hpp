// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestFlowCoordinator
  class TestFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // private HMUI.ViewController _viewController
    // Offset: 0xA8
    HMUI::ViewController* viewController;
    // private HMUI.ViewController _leftViewController
    // Offset: 0xB0
    HMUI::ViewController* leftViewController;
    // private HMUI.ViewController _rightViewController
    // Offset: 0xB8
    HMUI::ViewController* rightViewController;
    // private HMUI.ViewController _bottomScreenViewController
    // Offset: 0xC0
    HMUI::ViewController* bottomScreenViewController;
    // private HMUI.ViewController _topScreenViewController
    // Offset: 0xC8
    HMUI::ViewController* topScreenViewController;
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1F99270
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x1F9928C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TestFlowCoordinator* New_ctor();
  }; // TestFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestFlowCoordinator*, "", "TestFlowCoordinator");
#pragma pack(pop)
