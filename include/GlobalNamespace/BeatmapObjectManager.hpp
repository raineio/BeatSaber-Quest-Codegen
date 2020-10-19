// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapObjectSpawner
#include "GlobalNamespace/IBeatmapObjectSpawner.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectManager
  class BeatmapObjectManager : public ::Il2CppObject, public GlobalNamespace::IBeatmapObjectSpawner {
    public:
    // private System.Action`1<NoteController> noteWasSpawnedEvent
    // Offset: 0x10
    System::Action_1<GlobalNamespace::NoteController*>* noteWasSpawnedEvent;
    // private System.Action`1<NoteController> noteWasMissedEvent
    // Offset: 0x18
    System::Action_1<GlobalNamespace::NoteController*>* noteWasMissedEvent;
    // private System.Action`2<NoteController,NoteCutInfo> noteWasCutEvent
    // Offset: 0x20
    System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* noteWasCutEvent;
    // private System.Action`1<NoteController> noteDidStartJumpEvent
    // Offset: 0x28
    System::Action_1<GlobalNamespace::NoteController*>* noteDidStartJumpEvent;
    // private System.Action`1<ObstacleController> obstacleWasSpawnedEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::ObstacleController*>* obstacleWasSpawnedEvent;
    // private System.Action`1<ObstacleController> obstacleDidPassThreeQuartersOfMove2Event
    // Offset: 0x38
    System::Action_1<GlobalNamespace::ObstacleController*>* obstacleDidPassThreeQuartersOfMove2Event;
    // private System.Action`1<ObstacleController> obstacleDidPassAvoidedMarkEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::ObstacleController*>* obstacleDidPassAvoidedMarkEvent;
    // private System.Boolean <spawnHidden>k__BackingField
    // Offset: 0x48
    bool spawnHidden;
    // public System.Void add_noteWasSpawnedEvent(System.Action`1<NoteController> value)
    // Offset: 0x20D744C
    void add_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteWasSpawnedEvent(System.Action`1<NoteController> value)
    // Offset: 0x20D74F0
    void remove_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteWasMissedEvent(System.Action`1<NoteController> value)
    // Offset: 0x20D7594
    void add_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`1<NoteController> value)
    // Offset: 0x20D7638
    void remove_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteWasCutEvent(System.Action`2<NoteController,NoteCutInfo> value)
    // Offset: 0x20D76DC
    void add_noteWasCutEvent(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void remove_noteWasCutEvent(System.Action`2<NoteController,NoteCutInfo> value)
    // Offset: 0x20D7780
    void remove_noteWasCutEvent(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void add_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0x20D7824
    void add_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0x20D78C8
    void remove_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_obstacleWasSpawnedEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20D796C
    void add_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_obstacleWasSpawnedEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20D7A10
    void remove_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_obstacleDidPassThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x20D7AB4
    void add_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_obstacleDidPassThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x20D7B58
    void remove_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_obstacleDidPassAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20D62FC
    void add_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_obstacleDidPassAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20D6558
    void remove_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Collections.Generic.HashSet`1<ObstacleController> get_activeObstacleControllers()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();
    // protected ObstacleController SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ObstacleController* SpawnObstacleInternal(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // protected NoteController SpawnBombNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteController* SpawnBombNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // protected NoteController SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::NoteController* SpawnBasicNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
    // protected System.Void DespawnInternal(NoteController noteController)
    // Offset: 0xFFFFFFFF
    void DespawnInternal(GlobalNamespace::NoteController* noteController);
    // protected System.Void DespawnInternal(ObstacleController obstacleController)
    // Offset: 0xFFFFFFFF
    void DespawnInternal(GlobalNamespace::ObstacleController* obstacleController);
    // public System.Boolean get_spawnHidden()
    // Offset: 0x20D7BFC
    bool get_spawnHidden();
    // public System.Void set_spawnHidden(System.Boolean value)
    // Offset: 0x20D7C04
    void set_spawnHidden(bool value);
    // private System.Void SetNoteControllerEventCallbacks(NoteController noteController)
    // Offset: 0x20D7FC0
    void SetNoteControllerEventCallbacks(GlobalNamespace::NoteController* noteController);
    // private System.Void RemoveNoteControllerEventCallbacks(NoteController noteController)
    // Offset: 0x20D8244
    void RemoveNoteControllerEventCallbacks(GlobalNamespace::NoteController* noteController);
    // private System.Void SetObstacleEventCallbacks(ObstacleController obstacleController)
    // Offset: 0x20D7D50
    void SetObstacleEventCallbacks(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void RemoveObstacleEventCallbacks(ObstacleController obstacleController)
    // Offset: 0x20D83C0
    void RemoveObstacleEventCallbacks(GlobalNamespace::ObstacleController* obstacleController);
    // protected System.Void Despawn(NoteController noteController)
    // Offset: 0x20D84F8
    void Despawn(GlobalNamespace::NoteController* noteController);
    // private System.Void Despawn(ObstacleController obstacleController)
    // Offset: 0x20D852C
    void Despawn(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleNoteDidStartJump(NoteController noteController)
    // Offset: 0x20D8560
    void HandleNoteDidStartJump(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x20D85D4
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidFinishJump(NoteController noteController)
    // Offset: 0x20D8648
    void HandleNoteDidFinishJump(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidDissolve(NoteController noteController)
    // Offset: 0x20D867C
    void HandleNoteDidDissolve(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0x20D86B0
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleObstaclePassedThreeQuartersOfMove2(ObstacleController obstacleController)
    // Offset: 0x20D873C
    void HandleObstaclePassedThreeQuartersOfMove2(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstaclePassedAvoidedMark(ObstacleController obstacleController)
    // Offset: 0x20D87B0
    void HandleObstaclePassedAvoidedMark(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstacleFinishedMovement(ObstacleController obstacleController)
    // Offset: 0x20D8824
    void HandleObstacleFinishedMovement(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstacleDidDissolve(ObstacleController obstacleController)
    // Offset: 0x20D8858
    void HandleObstacleDidDissolve(GlobalNamespace::ObstacleController* obstacleController);
    // public System.Void DissolveAllObjects()
    // Offset: 0xFFFFFFFF
    void DissolveAllObjects();
    // public System.Void HideAllBeatmapObjects(System.Boolean hide)
    // Offset: 0xFFFFFFFF
    void HideAllBeatmapObjects(bool hide);
    // public System.Void PauseAllBeatmapObjects(System.Boolean pause)
    // Offset: 0xFFFFFFFF
    void PauseAllBeatmapObjects(bool pause);
    // public ObstacleController SpawnObstacle(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x20D7C10
    // Implemented from: IBeatmapObjectSpawner
    // Base method: ObstacleController IBeatmapObjectSpawner::SpawnObstacle(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    GlobalNamespace::ObstacleController* SpawnObstacle(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // public NoteController SpawnBombNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0x20D7E88
    // Implemented from: IBeatmapObjectSpawner
    // Base method: NoteController IBeatmapObjectSpawner::SpawnBombNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    GlobalNamespace::NoteController* SpawnBombNote(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // public NoteController SpawnBasicNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0x20D813C
    // Implemented from: IBeatmapObjectSpawner
    // Base method: NoteController IBeatmapObjectSpawner::SpawnBasicNote(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    GlobalNamespace::NoteController* SpawnBasicNote(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
    // protected System.Void .ctor()
    // Offset: 0x20D888C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectManager* New_ctor();
  }; // BeatmapObjectManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectManager*, "", "BeatmapObjectManager");
#pragma pack(pop)
