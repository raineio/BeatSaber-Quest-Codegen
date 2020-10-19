// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerConnectedPlayerNoteController
#include "GlobalNamespace/MultiplayerConnectedPlayerNoteController.hpp"
// Including type: IGameNoteControllerInitializable`1
#include "GlobalNamespace/IGameNoteControllerInitializable_1.hpp"
// Including type: IGameNoteTypeProvider
#include "GlobalNamespace/IGameNoteTypeProvider.hpp"
// Including type: GameNoteController/GameNoteType
#include "GlobalNamespace/GameNoteController_GameNoteType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerGameNoteController
  class MultiplayerConnectedPlayerGameNoteController : public GlobalNamespace::MultiplayerConnectedPlayerNoteController, public GlobalNamespace::IGameNoteControllerInitializable_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>, public GlobalNamespace::IGameNoteTypeProvider {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::Pool
    class Pool;
    // private System.Action`1<MultiplayerConnectedPlayerGameNoteController> gameNoteControllerDidInitEvent
    // Offset: 0x88
    System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* gameNoteControllerDidInitEvent;
    // private GameNoteController/GameNoteType _gameNoteType
    // Offset: 0x90
    GlobalNamespace::GameNoteController_GameNoteType gameNoteType;
    // public System.Void add_gameNoteControllerDidInitEvent(System.Action`1<MultiplayerConnectedPlayerGameNoteController> value)
    // Offset: 0x20603BC
    void add_gameNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);
    // public System.Void remove_gameNoteControllerDidInitEvent(System.Action`1<MultiplayerConnectedPlayerGameNoteController> value)
    // Offset: 0x2060460
    void remove_gameNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, GameNoteController/GameNoteType gameNoteType, System.Single cutDirectionAngleOffset)
    // Offset: 0x205EF78
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, GlobalNamespace::GameNoteController_GameNoteType gameNoteType, float cutDirectionAngleOffset);
    // public GameNoteController/GameNoteType get_gameNoteType()
    // Offset: 0x2060504
    // Implemented from: IGameNoteTypeProvider
    // Base method: GameNoteController/GameNoteType IGameNoteTypeProvider::get_gameNoteType()
    GlobalNamespace::GameNoteController_GameNoteType get_gameNoteType();
    // public System.Void .ctor()
    // Offset: 0x206050C
    // Implemented from: MultiplayerConnectedPlayerNoteController
    // Base method: System.Void MultiplayerConnectedPlayerNoteController::.ctor()
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerConnectedPlayerGameNoteController* New_ctor();
  }; // MultiplayerConnectedPlayerGameNoteController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*, "", "MultiplayerConnectedPlayerGameNoteController");
#pragma pack(pop)
