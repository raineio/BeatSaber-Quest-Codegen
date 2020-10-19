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
  // Forward declaring type: ScoreController
  class ScoreController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder
  class BeatmapObjectExecutionRatingsRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler
    class CutScoreHandler;
    // private readonly ScoreController _scoreController
    // Offset: 0x18
    GlobalNamespace::ScoreController* scoreController;
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Offset: 0x28
    GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x30
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private readonly System.Collections.Generic.List`1<BeatmapObjectExecutionRating> _beatmapObjectExecutionRatings
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings;
    // private readonly System.Collections.Generic.HashSet`1<ObstacleData> _hitObstacles
    // Offset: 0x40
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleData*>* hitObstacles;
    // private readonly System.Collections.Generic.List`1<ObstacleController> _prevIntersectingObstacles
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* prevIntersectingObstacles;
    // private readonly System.Collections.Generic.List`1<BeatmapObjectExecutionRatingsRecorder/CutScoreHandler> _cutScoreHandlers
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler*>* cutScoreHandlers;
    // private readonly System.Collections.Generic.List`1<BeatmapObjectExecutionRatingsRecorder/CutScoreHandler> _unusedCutScoreHandlers
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler*>* unusedCutScoreHandlers;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Collections.Generic.List`1<BeatmapObjectExecutionRating> get_beatmapObjectExecutionRatings()
    // Offset: 0x20D60FC
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* get_beatmapObjectExecutionRatings();
    // protected System.Void Start()
    // Offset: 0x20D6104
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x20D63E8
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x20D65FC
    void Update();
    // private System.Void HandleCutScoreHandlerDidFinish(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler cutScoreHandler)
    // Offset: 0x20D6818
    void HandleCutScoreHandlerDidFinish(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* cutScoreHandler);
    // private System.Void HandleScoreControllerNoteWasCut(NoteData noteData, NoteCutInfo noteCutInfo, System.Int32 multiplier)
    // Offset: 0x20D689C
    void HandleScoreControllerNoteWasCut(GlobalNamespace::NoteData* noteData, GlobalNamespace::NoteCutInfo* noteCutInfo, int multiplier);
    // private System.Void HandleScoreControllerNoteWasMissed(NoteData noteData, System.Int32 multiplier)
    // Offset: 0x20D6BEC
    void HandleScoreControllerNoteWasMissed(GlobalNamespace::NoteData* noteData, int multiplier);
    // private System.Void HandleObstacleDidPassAvoidedMark(ObstacleController obstacleController)
    // Offset: 0x20D6CC8
    void HandleObstacleDidPassAvoidedMark(GlobalNamespace::ObstacleController* obstacleController);
    // public System.Void .ctor()
    // Offset: 0x20D6DBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectExecutionRatingsRecorder* New_ctor();
  }; // BeatmapObjectExecutionRatingsRecorder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, "", "BeatmapObjectExecutionRatingsRecorder");
#pragma pack(pop)
