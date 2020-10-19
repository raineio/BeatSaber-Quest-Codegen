// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SpawnRotationChevron
  class SpawnRotationChevron;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SpawnChevronObjectPoolsInstaller
  class SpawnChevronObjectPoolsInstaller : public Zenject::MonoInstaller {
    public:
    // private SpawnRotationChevron _spawnRotationChevronPrefab
    // Offset: 0x20
    GlobalNamespace::SpawnRotationChevron* spawnRotationChevronPrefab;
    // public override System.Void InstallBindings()
    // Offset: 0x1FF50E0
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1FF5160
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SpawnChevronObjectPoolsInstaller* New_ctor();
  }; // SpawnChevronObjectPoolsInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnChevronObjectPoolsInstaller*, "", "SpawnChevronObjectPoolsInstaller");
#pragma pack(pop)
