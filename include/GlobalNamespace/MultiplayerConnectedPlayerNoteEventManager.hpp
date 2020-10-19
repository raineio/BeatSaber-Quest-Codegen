// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IConnectedPlayerNoteEventManager
#include "GlobalNamespace/IConnectedPlayerNoteEventManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
  // Forward declaring type: NoteMissInfoNetSerializable
  class NoteMissInfoNetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager
  class MultiplayerConnectedPlayerNoteEventManager : public UnityEngine::MonoBehaviour, public GlobalNamespace::IConnectedPlayerNoteEventManager {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent
    struct NoteCutEvent;
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent
    struct NoteMissEvent;
    // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent
    struct NoteCutEvent : public System::ValueType {
      public:
      // public readonly System.Single time
      // Offset: 0x0
      float time;
      // public readonly NoteCutInfoNetSerializable noteCutInfo
      // Offset: 0x8
      GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo;
      // Creating value type constructor for type: NoteCutEvent
      constexpr NoteCutEvent(float time_ = {}, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo_ = {}) noexcept : time{time_}, noteCutInfo{noteCutInfo_} {}
      // public System.Void .ctor(System.Single time, NoteCutInfoNetSerializable noteCutInfo)
      // Offset: 0xE4E0C0
      // ABORTED: conflicts with another method.  NoteCutEvent(float time, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    }; // MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent
    // Autogenerated type: MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent
    struct NoteMissEvent : public System::ValueType {
      public:
      // public readonly System.Single time
      // Offset: 0x0
      float time;
      // public readonly NoteMissInfoNetSerializable noteMissInfo
      // Offset: 0x8
      GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo;
      // Creating value type constructor for type: NoteMissEvent
      constexpr NoteMissEvent(float time_ = {}, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo_ = {}) noexcept : time{time_}, noteMissInfo{noteMissInfo_} {}
      // public System.Void .ctor(System.Single time, NoteMissInfoNetSerializable noteMissInfo)
      // Offset: 0xE4E108
      // ABORTED: conflicts with another method.  NoteMissEvent(float time, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);
    }; // MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent
    // private readonly IConnectedPlayer _connectedPlayer
    // Offset: 0x18
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeController
    // Offset: 0x28
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeController;
    // private System.Action`1<NoteCutInfoNetSerializable> connectedPlayerNoteWasCutEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* connectedPlayerNoteWasCutEvent;
    // private System.Action`1<NoteMissInfoNetSerializable> connectedPlayerNoteWasMissedEvent
    // Offset: 0x38
    System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* connectedPlayerNoteWasMissedEvent;
    // private readonly System.Collections.Generic.List`1<MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent> _noteCutQueue
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent>* noteCutQueue;
    // private readonly System.Collections.Generic.List`1<MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent> _noteMissQueue
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent>* noteMissQueue;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x20626B8
    void Start();
    // protected System.Void Update()
    // Offset: 0x2062850
    void Update();
    // private System.Void HandleNoteWasCut(System.String userId, System.Single syncTime, System.Single songTime, NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x2062A58
    void HandleNoteWasCut(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // private System.Void HandleNoteWasMissed(System.String userId, System.Single syncTime, System.Single songTime, NoteMissInfoNetSerializable noteMissInfo)
    // Offset: 0x2062C04
    void HandleNoteWasMissed(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);
    // public System.Void add_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0x2062428
    // Implemented from: IConnectedPlayerNoteEventManager
    // Base method: System.Void IConnectedPlayerNoteEventManager::add_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    void add_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0x20624CC
    // Implemented from: IConnectedPlayerNoteEventManager
    // Base method: System.Void IConnectedPlayerNoteEventManager::remove_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    void remove_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void add_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0x2062570
    // Implemented from: IConnectedPlayerNoteEventManager
    // Base method: System.Void IConnectedPlayerNoteEventManager::add_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    void add_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0x2062614
    // Implemented from: IConnectedPlayerNoteEventManager
    // Base method: System.Void IConnectedPlayerNoteEventManager::remove_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    void remove_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void .ctor()
    // Offset: 0x2062D9C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerConnectedPlayerNoteEventManager* New_ctor();
  }; // MultiplayerConnectedPlayerNoteEventManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager*, "", "MultiplayerConnectedPlayerNoteEventManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteCutEvent, "", "MultiplayerConnectedPlayerNoteEventManager/NoteCutEvent");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerNoteEventManager::NoteMissEvent, "", "MultiplayerConnectedPlayerNoteEventManager/NoteMissEvent");
#pragma pack(pop)
