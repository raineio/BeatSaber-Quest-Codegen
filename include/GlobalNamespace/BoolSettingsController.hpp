// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SwitchSettingsController
#include "GlobalNamespace/SwitchSettingsController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BoolSettingsController
  class BoolSettingsController : public GlobalNamespace::SwitchSettingsController {
    public:
    // private BoolSO _settingsValue
    // Offset: 0x28
    GlobalNamespace::BoolSO* settingsValue;
    // protected override System.Boolean GetInitValue()
    // Offset: 0x1FAEC9C
    // Implemented from: SwitchSettingsController
    // Base method: System.Boolean SwitchSettingsController::GetInitValue()
    bool GetInitValue();
    // protected override System.Void ApplyValue(System.Boolean value)
    // Offset: 0x1FAECEC
    // Implemented from: SwitchSettingsController
    // Base method: System.Void SwitchSettingsController::ApplyValue(System.Boolean value)
    void ApplyValue(bool value);
    // public System.Void .ctor()
    // Offset: 0x1FAED54
    // Implemented from: SwitchSettingsController
    // Base method: System.Void SwitchSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BoolSettingsController* New_ctor();
  }; // BoolSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolSettingsController*, "", "BoolSettingsController");
#pragma pack(pop)
