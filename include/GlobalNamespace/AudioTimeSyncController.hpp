// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IAudioTimeSource
#include "GlobalNamespace/IAudioTimeSource.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: State because it is already included!
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTimeSyncController*, "", "AudioTimeSyncController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8D
  #pragma pack(push, 1)
  // Autogenerated type: AudioTimeSyncController
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioTimeSyncController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IAudioTimeSource*/ {
    public:
    // Nested type: ::GlobalNamespace::AudioTimeSyncController::InitData
    class InitData;
    // Nested type: ::GlobalNamespace::AudioTimeSyncController::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AudioTimeSyncController/State
    // [TokenAttribute] Offset: FFFFFFFF
    struct State/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public AudioTimeSyncController/State Playing
      static constexpr const int Playing = 0;
      // Get static field: static public AudioTimeSyncController/State Playing
      static ::GlobalNamespace::AudioTimeSyncController::State _get_Playing();
      // Set static field: static public AudioTimeSyncController/State Playing
      static void _set_Playing(::GlobalNamespace::AudioTimeSyncController::State value);
      // static field const value: static public AudioTimeSyncController/State Paused
      static constexpr const int Paused = 1;
      // Get static field: static public AudioTimeSyncController/State Paused
      static ::GlobalNamespace::AudioTimeSyncController::State _get_Paused();
      // Set static field: static public AudioTimeSyncController/State Paused
      static void _set_Paused(::GlobalNamespace::AudioTimeSyncController::State value);
      // static field const value: static public AudioTimeSyncController/State Stopped
      static constexpr const int Stopped = 2;
      // Get static field: static public AudioTimeSyncController/State Stopped
      static ::GlobalNamespace::AudioTimeSyncController::State _get_Stopped();
      // Set static field: static public AudioTimeSyncController/State Stopped
      static void _set_Stopped(::GlobalNamespace::AudioTimeSyncController::State value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // AudioTimeSyncController/State
    #pragma pack(pop)
    static check_size<sizeof(AudioTimeSyncController::State), 0 + sizeof(int)> __GlobalNamespace_AudioTimeSyncController_StateSizeCheck;
    static_assert(sizeof(AudioTimeSyncController::State) == 0x4);
    public:
    // private System.Single _audioSyncLerpSpeed
    // Size: 0x4
    // Offset: 0x18
    float audioSyncLerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _forcedSyncDeltaTime
    // Size: 0x4
    // Offset: 0x1C
    float forcedSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startSyncDeltaTime
    // Size: 0x4
    // Offset: 0x20
    float startSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _stopSyncDeltaTime
    // Size: 0x4
    // Offset: 0x24
    float stopSyncDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x111884C
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0x1118884
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FloatSO*) == 0x8);
    // [InjectAttribute] Offset: 0x11188BC
    // private readonly AudioTimeSyncController/InitData _initData
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::AudioTimeSyncController::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController::InitData*) == 0x8);
    // public System.Boolean forcedNoAudioSync
    // Size: 0x1
    // Offset: 0x40
    bool forcedNoAudioSync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forcedNoAudioSync and: stateChangedEvent
    char __padding7[0x7] = {};
    // private System.Action stateChangedEvent
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* stateChangedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _fixingAudioSyncError
    // Size: 0x1
    // Offset: 0x50
    bool fixingAudioSyncError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixingAudioSyncError and: audioStartTimeOffsetSinceStart
    char __padding9[0x3] = {};
    // private System.Single _audioStartTimeOffsetSinceStart
    // Size: 0x4
    // Offset: 0x54
    float audioStartTimeOffsetSinceStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _playbackLoopIndex
    // Size: 0x4
    // Offset: 0x58
    int playbackLoopIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _prevAudioSamplePos
    // Size: 0x4
    // Offset: 0x5C
    int prevAudioSamplePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _startSongTime
    // Size: 0x4
    // Offset: 0x60
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x64
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _audioStarted
    // Size: 0x1
    // Offset: 0x68
    bool audioStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: audioStarted and: timeScale
    char __padding15[0x3] = {};
    // private System.Single _timeScale
    // Size: 0x4
    // Offset: 0x6C
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTime
    // Size: 0x4
    // Offset: 0x70
    float songTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songTime and: dspTimeOffset
    char __padding17[0x4] = {};
    // private System.Double _dspTimeOffset
    // Size: 0x8
    // Offset: 0x78
    double dspTimeOffset;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private AudioTimeSyncController/State _state
    // Size: 0x4
    // Offset: 0x80
    ::GlobalNamespace::AudioTimeSyncController::State state;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController::State) == 0x4);
    // private System.Boolean _canStartSong
    // Size: 0x1
    // Offset: 0x84
    bool canStartSong;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isReady
    // Size: 0x1
    // Offset: 0x85
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isReady and: lastFrameDeltaSongTime
    char __padding21[0x2] = {};
    // private System.Single _lastFrameDeltaSongTime
    // Size: 0x4
    // Offset: 0x88
    float lastFrameDeltaSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _forceNoAudioSyncOrAudioSyncErrorFixing
    // Size: 0x1
    // Offset: 0x8C
    bool forceNoAudioSyncOrAudioSyncErrorFixing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IAudioTimeSource
    operator ::GlobalNamespace::IAudioTimeSource() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAudioTimeSource*>(this);
    }
    // Creating interface conversion operator: i_IAudioTimeSource
    inline ::GlobalNamespace::IAudioTimeSource* i_IAudioTimeSource() noexcept {
      return reinterpret_cast<::GlobalNamespace::IAudioTimeSource*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _audioSyncLerpSpeed
    [[deprecated("Use field access instead!")]] float& dyn__audioSyncLerpSpeed();
    // Get instance field reference: private System.Single _forcedSyncDeltaTime
    [[deprecated("Use field access instead!")]] float& dyn__forcedSyncDeltaTime();
    // Get instance field reference: private System.Single _startSyncDeltaTime
    [[deprecated("Use field access instead!")]] float& dyn__startSyncDeltaTime();
    // Get instance field reference: private System.Single _stopSyncDeltaTime
    [[deprecated("Use field access instead!")]] float& dyn__stopSyncDeltaTime();
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private FloatSO _audioLatency
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FloatSO*& dyn__audioLatency();
    // Get instance field reference: private readonly AudioTimeSyncController/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController::InitData*& dyn__initData();
    // Get instance field reference: public System.Boolean forcedNoAudioSync
    [[deprecated("Use field access instead!")]] bool& dyn_forcedNoAudioSync();
    // Get instance field reference: private System.Action stateChangedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_stateChangedEvent();
    // Get instance field reference: private System.Boolean _fixingAudioSyncError
    [[deprecated("Use field access instead!")]] bool& dyn__fixingAudioSyncError();
    // Get instance field reference: private System.Single _audioStartTimeOffsetSinceStart
    [[deprecated("Use field access instead!")]] float& dyn__audioStartTimeOffsetSinceStart();
    // Get instance field reference: private System.Int32 _playbackLoopIndex
    [[deprecated("Use field access instead!")]] int& dyn__playbackLoopIndex();
    // Get instance field reference: private System.Int32 _prevAudioSamplePos
    [[deprecated("Use field access instead!")]] int& dyn__prevAudioSamplePos();
    // Get instance field reference: private System.Single _startSongTime
    [[deprecated("Use field access instead!")]] float& dyn__startSongTime();
    // Get instance field reference: private System.Single _songTimeOffset
    [[deprecated("Use field access instead!")]] float& dyn__songTimeOffset();
    // Get instance field reference: private System.Boolean _audioStarted
    [[deprecated("Use field access instead!")]] bool& dyn__audioStarted();
    // Get instance field reference: private System.Single _timeScale
    [[deprecated("Use field access instead!")]] float& dyn__timeScale();
    // Get instance field reference: private System.Single _songTime
    [[deprecated("Use field access instead!")]] float& dyn__songTime();
    // Get instance field reference: private System.Double _dspTimeOffset
    [[deprecated("Use field access instead!")]] double& dyn__dspTimeOffset();
    // Get instance field reference: private AudioTimeSyncController/State _state
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController::State& dyn__state();
    // Get instance field reference: private System.Boolean _canStartSong
    [[deprecated("Use field access instead!")]] bool& dyn__canStartSong();
    // Get instance field reference: private System.Boolean _isReady
    [[deprecated("Use field access instead!")]] bool& dyn__isReady();
    // Get instance field reference: private System.Single _lastFrameDeltaSongTime
    [[deprecated("Use field access instead!")]] float& dyn__lastFrameDeltaSongTime();
    // Get instance field reference: private System.Boolean _forceNoAudioSyncOrAudioSyncErrorFixing
    [[deprecated("Use field access instead!")]] bool& dyn__forceNoAudioSyncOrAudioSyncErrorFixing();
    // public AudioTimeSyncController/State get_state()
    // Offset: 0x154786C
    ::GlobalNamespace::AudioTimeSyncController::State get_state();
    // public System.Single get_songTime()
    // Offset: 0x1547874
    float get_songTime();
    // public System.Single get_lastFrameDeltaSongTime()
    // Offset: 0x154787C
    float get_lastFrameDeltaSongTime();
    // public System.Single get_songLength()
    // Offset: 0x1547884
    float get_songLength();
    // public System.Boolean get_isAudioLoaded()
    // Offset: 0x154792C
    bool get_isAudioLoaded();
    // public System.Single get_songEndTime()
    // Offset: 0x1547960
    float get_songEndTime();
    // public System.Single get_timeScale()
    // Offset: 0x15479D4
    float get_timeScale();
    // public System.Double get_dspTimeOffset()
    // Offset: 0x15479DC
    double get_dspTimeOffset();
    // public UnityEngine.WaitUntil get_waitUntilAudioIsLoaded()
    // Offset: 0x15479E4
    ::UnityEngine::WaitUntil* get_waitUntilAudioIsLoaded();
    // public System.Boolean get_isReady()
    // Offset: 0x1547A7C
    bool get_isReady();
    // public System.Single get_songTimeOffset()
    // Offset: 0x1547A84
    float get_songTimeOffset();
    // public System.Boolean get_forceNoAudioSyncOrAudioSyncErrorFixing()
    // Offset: 0x1547A8C
    bool get_forceNoAudioSyncOrAudioSyncErrorFixing();
    // public System.Void set_forceNoAudioSyncOrAudioSyncErrorFixing(System.Boolean value)
    // Offset: 0x1547A94
    void set_forceNoAudioSyncOrAudioSyncErrorFixing(bool value);
    // private System.Single get_timeSinceStart()
    // Offset: 0x1547BE8
    float get_timeSinceStart();
    // public System.Void add_stateChangedEvent(System.Action value)
    // Offset: 0x1547AA0
    void add_stateChangedEvent(::System::Action* value);
    // public System.Void remove_stateChangedEvent(System.Action value)
    // Offset: 0x1547B44
    void remove_stateChangedEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x1548588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioTimeSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioTimeSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioTimeSyncController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1547C14
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1547C68
    void Start();
    // protected System.Void Update()
    // Offset: 0x1547D58
    void Update();
    // public System.Void StartSong(System.Single startTimeOffset)
    // Offset: 0x154813C
    void StartSong(float startTimeOffset);
    // public System.Void SeekTo(System.Single startTimeOffset)
    // Offset: 0x1548184
    void SeekTo(float startTimeOffset);
    // public System.Void StopSong()
    // Offset: 0x154834C
    void StopSong();
    // public System.Void Pause()
    // Offset: 0x154839C
    void Pause();
    // public System.Void Resume()
    // Offset: 0x15483FC
    void Resume();
    // public System.Void SetSongTimeIntoAudioTime()
    // Offset: 0x1548454
    void SetSongTimeIntoAudioTime();
    // private System.Boolean <get_waitUntilAudioIsLoaded>b__27_0()
    // Offset: 0x154859C
    bool $get_waitUntilAudioIsLoaded$b__27_0();
  }; // AudioTimeSyncController
  #pragma pack(pop)
  static check_size<sizeof(AudioTimeSyncController), 140 + sizeof(bool)> __GlobalNamespace_AudioTimeSyncControllerSizeCheck;
  static_assert(sizeof(AudioTimeSyncController) == 0x8D);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTimeSyncController::State, "", "AudioTimeSyncController/State");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_state
// Il2CppName: get_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AudioTimeSyncController::State (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_state)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songTime
// Il2CppName: get_songTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_songTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_songTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_lastFrameDeltaSongTime
// Il2CppName: get_lastFrameDeltaSongTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_lastFrameDeltaSongTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_lastFrameDeltaSongTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songLength
// Il2CppName: get_songLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_songLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_songLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded
// Il2CppName: get_isAudioLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_isAudioLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songEndTime
// Il2CppName: get_songEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_songEndTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_songEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_timeScale
// Il2CppName: get_timeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_timeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_timeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset
// Il2CppName: get_dspTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_dspTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded
// Il2CppName: get_waitUntilAudioIsLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_waitUntilAudioIsLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_isReady
// Il2CppName: get_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_isReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_songTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_forceNoAudioSyncOrAudioSyncErrorFixing
// Il2CppName: get_forceNoAudioSyncOrAudioSyncErrorFixing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_forceNoAudioSyncOrAudioSyncErrorFixing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_forceNoAudioSyncOrAudioSyncErrorFixing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::set_forceNoAudioSyncOrAudioSyncErrorFixing
// Il2CppName: set_forceNoAudioSyncOrAudioSyncErrorFixing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)(bool)>(&GlobalNamespace::AudioTimeSyncController::set_forceNoAudioSyncOrAudioSyncErrorFixing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "set_forceNoAudioSyncOrAudioSyncErrorFixing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::get_timeSinceStart
// Il2CppName: get_timeSinceStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::get_timeSinceStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "get_timeSinceStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::add_stateChangedEvent
// Il2CppName: add_stateChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)(::System::Action*)>(&GlobalNamespace::AudioTimeSyncController::add_stateChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "add_stateChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::remove_stateChangedEvent
// Il2CppName: remove_stateChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)(::System::Action*)>(&GlobalNamespace::AudioTimeSyncController::remove_stateChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "remove_stateChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)(float)>(&GlobalNamespace::AudioTimeSyncController::StartSong)> {
  static const MethodInfo* get() {
    static auto* startTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTimeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)(float)>(&GlobalNamespace::AudioTimeSyncController::SeekTo)> {
  static const MethodInfo* get() {
    static auto* startTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTimeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::StopSong
// Il2CppName: StopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::StopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "StopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::SetSongTimeIntoAudioTime
// Il2CppName: SetSongTimeIntoAudioTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::SetSongTimeIntoAudioTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "SetSongTimeIntoAudioTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioTimeSyncController::$get_waitUntilAudioIsLoaded$b__27_0
// Il2CppName: <get_waitUntilAudioIsLoaded>b__27_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AudioTimeSyncController::*)()>(&GlobalNamespace::AudioTimeSyncController::$get_waitUntilAudioIsLoaded$b__27_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTimeSyncController*), "<get_waitUntilAudioIsLoaded>b__27_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
