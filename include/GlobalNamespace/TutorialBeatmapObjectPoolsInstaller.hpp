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
  // Forward declaring type: TutorialNoteController
  class TutorialNoteController;
  // Forward declaring type: BombNoteController
  class BombNoteController;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: NoteLineConnectionController
  class NoteLineConnectionController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialBeatmapObjectPoolsInstaller
  class TutorialBeatmapObjectPoolsInstaller : public Zenject::MonoInstaller {
    public:
    // private TutorialNoteController _basicNotePrefab
    // Offset: 0x20
    GlobalNamespace::TutorialNoteController* basicNotePrefab;
    // private BombNoteController _bombNotePrefab
    // Offset: 0x28
    GlobalNamespace::BombNoteController* bombNotePrefab;
    // private ObstacleController _obstaclePrefab
    // Offset: 0x30
    GlobalNamespace::ObstacleController* obstaclePrefab;
    // private NoteLineConnectionController _noteLineConnectionControllerPrefab
    // Offset: 0x38
    GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab;
    // public override System.Void InstallBindings()
    // Offset: 0x1F9F264
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1F9F3A4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TutorialBeatmapObjectPoolsInstaller* New_ctor();
  }; // TutorialBeatmapObjectPoolsInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*, "", "TutorialBeatmapObjectPoolsInstaller");
#pragma pack(pop)
