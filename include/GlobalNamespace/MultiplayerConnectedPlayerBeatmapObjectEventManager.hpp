// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IConnectedPlayerBeatmapObjectEventManager
#include "GlobalNamespace/IConnectedPlayerBeatmapObjectEventManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: NoteSpawnInfoNetSerializable
  class NoteSpawnInfoNetSerializable;
  // Forward declaring type: ObstacleSpawnInfoNetSerializable
  class ObstacleSpawnInfoNetSerializable;
  // Forward declaring type: SliderSpawnInfoNetSerializable
  class SliderSpawnInfoNetSerializable;
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
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerBeatmapObjectEventManager
  class MultiplayerConnectedPlayerBeatmapObjectEventManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*, "", "MultiplayerConnectedPlayerBeatmapObjectEventManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerBeatmapObjectEventManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerBeatmapObjectEventManager : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*/ {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData
    struct TimestampedBeatmapObjectEventData;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct TimestampedBeatmapObjectEventData/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly System.Single time
      // Size: 0x4
      // Offset: 0x0
      float time;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: time and: beatmapObjectEventData
      char __padding0[0x4] = {};
      // public readonly LiteNetLib.Utils.INetSerializable beatmapObjectEventData
      // Size: 0x8
      // Offset: 0x8
      ::LiteNetLib::Utils::INetSerializable* beatmapObjectEventData;
      // Field size check
      static_assert(sizeof(::LiteNetLib::Utils::INetSerializable*) == 0x8);
      public:
      // Creating value type constructor for type: TimestampedBeatmapObjectEventData
      constexpr TimestampedBeatmapObjectEventData(float time_ = {}, ::LiteNetLib::Utils::INetSerializable* beatmapObjectEventData_ = {}) noexcept : time{time_}, beatmapObjectEventData{beatmapObjectEventData_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Single time
      [[deprecated("Use field access instead!")]] float& dyn_time();
      // Get instance field reference: public readonly LiteNetLib.Utils.INetSerializable beatmapObjectEventData
      [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::INetSerializable*& dyn_beatmapObjectEventData();
      // public System.Void .ctor(System.Single time, LiteNetLib.Utils.INetSerializable beatmapObjectEventData)
      // Offset: 0x13CDB2C
      // ABORTED: conflicts with another method.  TimestampedBeatmapObjectEventData(float time, ::LiteNetLib::Utils::INetSerializable* beatmapObjectEventData);
    }; // MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData), 8 + sizeof(::LiteNetLib::Utils::INetSerializable*)> __GlobalNamespace_MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventDataSizeCheck;
    static_assert(sizeof(MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData) == 0x10);
    public:
    // [InjectAttribute] Offset: 0x10D8364
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0x10D8374
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10D8384
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*) == 0x8);
    // private System.Action`1<NoteSpawnInfoNetSerializable> connectedPlayerNoteWasSpawnedEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* connectedPlayerNoteWasSpawnedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*) == 0x8);
    // private System.Action`1<ObstacleSpawnInfoNetSerializable> connectedPlayerObstacleWasSpawnedEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* connectedPlayerObstacleWasSpawnedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*) == 0x8);
    // private System.Action`1<SliderSpawnInfoNetSerializable> connectedPlayerSliderWasSpawnedEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* connectedPlayerSliderWasSpawnedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*) == 0x8);
    // private System.Action`1<NoteCutInfoNetSerializable> connectedPlayerNoteWasCutEvent
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* connectedPlayerNoteWasCutEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*) == 0x8);
    // private System.Action`1<NoteMissInfoNetSerializable> connectedPlayerNoteWasMissedEvent
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* connectedPlayerNoteWasMissedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*) == 0x8);
    // private readonly System.Collections.Generic.Queue`1<MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData> _beatmapObjectEventQueue
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Queue_1<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData>* beatmapObjectEventQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData>*) == 0x8);
    // private System.Boolean _paused
    // Size: 0x1
    // Offset: 0x60
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager
    operator ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private readonly IGameplayRpcManager _gameplayRpcManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IGameplayRpcManager*& dyn__gameplayRpcManager();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*& dyn__songTimeController();
    // Get instance field reference: private System.Action`1<NoteSpawnInfoNetSerializable> connectedPlayerNoteWasSpawnedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*& dyn_connectedPlayerNoteWasSpawnedEvent();
    // Get instance field reference: private System.Action`1<ObstacleSpawnInfoNetSerializable> connectedPlayerObstacleWasSpawnedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*& dyn_connectedPlayerObstacleWasSpawnedEvent();
    // Get instance field reference: private System.Action`1<SliderSpawnInfoNetSerializable> connectedPlayerSliderWasSpawnedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*& dyn_connectedPlayerSliderWasSpawnedEvent();
    // Get instance field reference: private System.Action`1<NoteCutInfoNetSerializable> connectedPlayerNoteWasCutEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*& dyn_connectedPlayerNoteWasCutEvent();
    // Get instance field reference: private System.Action`1<NoteMissInfoNetSerializable> connectedPlayerNoteWasMissedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*& dyn_connectedPlayerNoteWasMissedEvent();
    // Get instance field reference: private readonly System.Collections.Generic.Queue`1<MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData> _beatmapObjectEventQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData>*& dyn__beatmapObjectEventQueue();
    // Get instance field reference: private System.Boolean _paused
    [[deprecated("Use field access instead!")]] bool& dyn__paused();
    // public System.Void add_connectedPlayerNoteWasSpawnedEvent(System.Action`1<NoteSpawnInfoNetSerializable> value)
    // Offset: 0x13CCABC
    void add_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasSpawnedEvent(System.Action`1<NoteSpawnInfoNetSerializable> value)
    // Offset: 0x13CCB60
    void remove_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);
    // public System.Void add_connectedPlayerObstacleWasSpawnedEvent(System.Action`1<ObstacleSpawnInfoNetSerializable> value)
    // Offset: 0x13CCC04
    void add_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerObstacleWasSpawnedEvent(System.Action`1<ObstacleSpawnInfoNetSerializable> value)
    // Offset: 0x13CCCA8
    void remove_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);
    // public System.Void add_connectedPlayerSliderWasSpawnedEvent(System.Action`1<SliderSpawnInfoNetSerializable> value)
    // Offset: 0x13CCD4C
    void add_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerSliderWasSpawnedEvent(System.Action`1<SliderSpawnInfoNetSerializable> value)
    // Offset: 0x13CCDF0
    void remove_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);
    // public System.Void add_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0x13CCE94
    void add_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasCutEvent(System.Action`1<NoteCutInfoNetSerializable> value)
    // Offset: 0x13CCF38
    void remove_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value);
    // public System.Void add_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0x13CCFDC
    void add_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void remove_connectedPlayerNoteWasMissedEvent(System.Action`1<NoteMissInfoNetSerializable> value)
    // Offset: 0x13CD080
    void remove_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value);
    // public System.Void .ctor()
    // Offset: 0x13CDABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerBeatmapObjectEventManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerBeatmapObjectEventManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13CD124
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13CD4A8
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x13CD83C
    void Update();
    // public System.Void Pause()
    // Offset: 0x13CDAA8
    void Pause();
    // public System.Void Resume()
    // Offset: 0x13CDAB4
    void Resume();
    // private System.Void HandleBeatmapObjectEventData(System.String userId, System.Single syncTime, System.Single songTime, T beatmapObjectEventData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void HandleBeatmapObjectEventData(::StringW userId, float syncTime, float songTime, T beatmapObjectEventData) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::LiteNetLib::Utils::INetSerializable>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::HandleBeatmapObjectEventData");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleBeatmapObjectEventData", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(userId), ::il2cpp_utils::ExtractType(syncTime), ::il2cpp_utils::ExtractType(songTime), ::il2cpp_utils::ExtractType(beatmapObjectEventData)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, userId, syncTime, songTime, beatmapObjectEventData);
    }
    // private System.Void InvokeCallback(LiteNetLib.Utils.INetSerializable noteEventData)
    // Offset: 0x13CD8F4
    void InvokeCallback(::LiteNetLib::Utils::INetSerializable* noteEventData);
  }; // MultiplayerConnectedPlayerBeatmapObjectEventManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerBeatmapObjectEventManager), 96 + sizeof(bool)> __GlobalNamespace_MultiplayerConnectedPlayerBeatmapObjectEventManagerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerBeatmapObjectEventManager) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData, "", "MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasSpawnedEvent
// Il2CppName: add_connectedPlayerNoteWasSpawnedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasSpawnedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteSpawnInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "add_connectedPlayerNoteWasSpawnedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasSpawnedEvent
// Il2CppName: remove_connectedPlayerNoteWasSpawnedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasSpawnedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteSpawnInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "remove_connectedPlayerNoteWasSpawnedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerObstacleWasSpawnedEvent
// Il2CppName: add_connectedPlayerObstacleWasSpawnedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerObstacleWasSpawnedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleSpawnInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "add_connectedPlayerObstacleWasSpawnedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerObstacleWasSpawnedEvent
// Il2CppName: remove_connectedPlayerObstacleWasSpawnedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerObstacleWasSpawnedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleSpawnInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "remove_connectedPlayerObstacleWasSpawnedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerSliderWasSpawnedEvent
// Il2CppName: add_connectedPlayerSliderWasSpawnedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerSliderWasSpawnedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SliderSpawnInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "add_connectedPlayerSliderWasSpawnedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerSliderWasSpawnedEvent
// Il2CppName: remove_connectedPlayerSliderWasSpawnedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerSliderWasSpawnedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SliderSpawnInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "remove_connectedPlayerSliderWasSpawnedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasCutEvent
// Il2CppName: add_connectedPlayerNoteWasCutEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasCutEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteCutInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "add_connectedPlayerNoteWasCutEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasCutEvent
// Il2CppName: remove_connectedPlayerNoteWasCutEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasCutEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteCutInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "remove_connectedPlayerNoteWasCutEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasMissedEvent
// Il2CppName: add_connectedPlayerNoteWasMissedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasMissedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteMissInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "add_connectedPlayerNoteWasMissedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasMissedEvent
// Il2CppName: remove_connectedPlayerNoteWasMissedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasMissedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteMissInfoNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "remove_connectedPlayerNoteWasMissedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::HandleBeatmapObjectEventData
// Il2CppName: HandleBeatmapObjectEventData
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::InvokeCallback
// Il2CppName: InvokeCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::LiteNetLib::Utils::INetSerializable*)>(&GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::InvokeCallback)> {
  static const MethodInfo* get() {
    static auto* noteEventData = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "INetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*), "InvokeCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteEventData});
  }
};
