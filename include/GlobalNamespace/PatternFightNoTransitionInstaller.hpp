// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PatternFightScenesTransitionSetupDataSO
  class PatternFightScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PatternFightNoTransitionInstaller
  class PatternFightNoTransitionInstaller : public Zenject::NoTransitionInstaller {
    public:
    // private PlayerSpecificSettings _playerSpecificSettings
    // Offset: 0x18
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // private PatternFightScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Offset: 0x20
    GlobalNamespace::PatternFightScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0xF046C4
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xF049A0
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PatternFightNoTransitionInstaller* New_ctor();
  }; // PatternFightNoTransitionInstaller
  check_size<sizeof(PatternFightNoTransitionInstaller), 32 + sizeof(void*) + 8 - (32 + sizeof(void*)) % 8> __GlobalNamespace_PatternFightNoTransitionInstallerSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightNoTransitionInstaller*, "", "PatternFightNoTransitionInstaller");
#pragma pack(pop)