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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*, "", "MultiplayerConnectedPlayerSongTimeSyncController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerSongTimeSyncController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerSongTimeSyncController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IAudioTimeSource*/ {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData
    class InitData;
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
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FloatSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10D8808
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController/InitData _initData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0x10D8818
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    // private System.Single <songTime>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    float songTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <lastFrameDeltaSongTime>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    float lastFrameDeltaSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timeScale
    // Size: 0x4
    // Offset: 0x48
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startSongSyncTime
    // Size: 0x4
    // Offset: 0x4C
    float startSongSyncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _fixingAudioSyncError
    // Size: 0x1
    // Offset: 0x50
    bool fixingAudioSyncError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isReady
    // Size: 0x1
    // Offset: 0x51
    bool isReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IAudioTimeSource
    operator ::GlobalNamespace::IAudioTimeSource() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAudioTimeSource*>(this);
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
    // Get instance field reference: private FloatSO _audioLatency
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FloatSO*& dyn__audioLatency();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerSongTimeSyncController/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData*& dyn__initData();
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private System.Single <songTime>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$songTime$k__BackingField();
    // Get instance field reference: private System.Single <lastFrameDeltaSongTime>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$lastFrameDeltaSongTime$k__BackingField();
    // Get instance field reference: private System.Single _timeScale
    [[deprecated("Use field access instead!")]] float& dyn__timeScale();
    // Get instance field reference: private System.Single _startSongSyncTime
    [[deprecated("Use field access instead!")]] float& dyn__startSongSyncTime();
    // Get instance field reference: private System.Boolean _fixingAudioSyncError
    [[deprecated("Use field access instead!")]] bool& dyn__fixingAudioSyncError();
    // Get instance field reference: private System.Boolean _isReady
    [[deprecated("Use field access instead!")]] bool& dyn__isReady();
    // public System.Single get_songTime()
    // Offset: 0x13D2740
    float get_songTime();
    // private System.Void set_songTime(System.Single value)
    // Offset: 0x13D2748
    void set_songTime(float value);
    // public System.Single get_lastFrameDeltaSongTime()
    // Offset: 0x13D2750
    float get_lastFrameDeltaSongTime();
    // private System.Void set_lastFrameDeltaSongTime(System.Single value)
    // Offset: 0x13D2758
    void set_lastFrameDeltaSongTime(float value);
    // public System.Single get_songEndTime()
    // Offset: 0x13D2760
    float get_songEndTime();
    // public System.Single get_songLength()
    // Offset: 0x13D276C
    float get_songLength();
    // public System.Boolean get_isReady()
    // Offset: 0x13D2778
    bool get_isReady();
    // public System.Void .ctor()
    // Offset: 0x13D2934
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerSongTimeSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerSongTimeSyncController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13D2780
    void Start();
    // protected System.Void Update()
    // Offset: 0x13D278C
    void Update();
    // public System.Void StartSong(System.Single songStartSyncTime)
    // Offset: 0x13CFAF0
    void StartSong(float songStartSyncTime);
    // public System.Void SetConnectedPlayerSongTime(System.Single syncTime, System.Single songTime)
    // Offset: 0x13D2920
    void SetConnectedPlayerSongTime(float syncTime, float songTime);
    // public System.Void StopSong()
    // Offset: 0x13CFDC0
    void StopSong();
  }; // MultiplayerConnectedPlayerSongTimeSyncController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerSongTimeSyncController), 81 + sizeof(bool)> __GlobalNamespace_MultiplayerConnectedPlayerSongTimeSyncControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerSongTimeSyncController) == 0x52);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime
// Il2CppName: get_songTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "get_songTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime
// Il2CppName: set_songTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float)>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "set_songTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime
// Il2CppName: get_lastFrameDeltaSongTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "get_lastFrameDeltaSongTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime
// Il2CppName: set_lastFrameDeltaSongTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float)>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "set_lastFrameDeltaSongTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime
// Il2CppName: get_songEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "get_songEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength
// Il2CppName: get_songLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "get_songLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady
// Il2CppName: get_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "get_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float)>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong)> {
  static const MethodInfo* get() {
    static auto* songStartSyncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songStartSyncTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime
// Il2CppName: SetConnectedPlayerSongTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float, float)>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime)> {
  static const MethodInfo* get() {
    static auto* syncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "SetConnectedPlayerSongTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncTime, songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong
// Il2CppName: StopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*), "StopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
