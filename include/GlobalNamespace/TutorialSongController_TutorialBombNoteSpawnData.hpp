// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
// Including type: TutorialSongController/TutorialJumpingNoteSpawnData
#include "GlobalNamespace/TutorialSongController_TutorialJumpingNoteSpawnData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
  // Skipping declaration: NoteLineLayer because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialSongController/TutorialBombNoteSpawnData
  class TutorialSongController::TutorialBombNoteSpawnData : public GlobalNamespace::TutorialSongController::TutorialJumpingNoteSpawnData {
    public:
    // public System.Void .ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0xFF354C
    // Implemented from: TutorialSongController/TutorialJumpingNoteSpawnData
    // Base method: System.Void TutorialJumpingNoteSpawnData::.ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex, NoteLineLayer noteLineLayer)
    static TutorialSongController::TutorialBombNoteSpawnData* New_ctor(GlobalNamespace::Signal* signal, int firstTimeBeatOffset, int beatOffset, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
  }; // TutorialSongController/TutorialBombNoteSpawnData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::TutorialBombNoteSpawnData*, "", "TutorialSongController/TutorialBombNoteSpawnData");
#pragma pack(pop)