// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IStartSeekSongController
#include "GlobalNamespace/IStartSeekSongController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CrossFadeAudioSource
  class CrossFadeAudioSource;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalInactivePlayerSongSyncController
  class MultiplayerLocalInactivePlayerSongSyncController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, "", "MultiplayerLocalInactivePlayerSongSyncController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerSongSyncController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerSongSyncController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IStartSeekSongController*/ {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData
    class InitData;
    public:
    // private CrossFadeAudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::CrossFadeAudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CrossFadeAudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0x11230B0
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FloatSO*) == 0x8);
    // [InjectAttribute] Offset: 0x11230E8
    // private readonly MultiplayerLocalInactivePlayerSongSyncController/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0x11230F8
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0x1123108
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private System.Single _timeScale
    // Size: 0x4
    // Offset: 0x40
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startSongTime
    // Size: 0x4
    // Offset: 0x44
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x48
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTime
    // Size: 0x4
    // Offset: 0x4C
    float songTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _audioStarted
    // Size: 0x1
    // Offset: 0x50
    bool audioStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _currentObservableIsFailed
    // Size: 0x1
    // Offset: 0x51
    bool currentObservableIsFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: currentObservableIsFailed and: observable
    char __padding10[0x6] = {};
    // private IMultiplayerObservable _observable
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::IMultiplayerObservable* observable;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerObservable*) == 0x8);
    // private System.Single _lastLatencyOffsetTime
    // Size: 0x4
    // Offset: 0x60
    float lastLatencyOffsetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IStartSeekSongController
    operator ::GlobalNamespace::IStartSeekSongController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IStartSeekSongController*>(this);
    }
    // Creating interface conversion operator: i_IStartSeekSongController
    inline ::GlobalNamespace::IStartSeekSongController* i_IStartSeekSongController() noexcept {
      return reinterpret_cast<::GlobalNamespace::IStartSeekSongController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kReSyncThreshold
    static constexpr const float kReSyncThreshold = 0.05;
    // Get static field: static private System.Single kReSyncThreshold
    static float _get_kReSyncThreshold();
    // Set static field: static private System.Single kReSyncThreshold
    static void _set_kReSyncThreshold(float value);
    // Get instance field reference: private CrossFadeAudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CrossFadeAudioSource*& dyn__audioSource();
    // Get instance field reference: private FloatSO _audioLatency
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FloatSO*& dyn__audioLatency();
    // Get instance field reference: private readonly MultiplayerLocalInactivePlayerSongSyncController/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData*& dyn__initData();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private System.Single _timeScale
    [[deprecated("Use field access instead!")]] float& dyn__timeScale();
    // Get instance field reference: private System.Single _startSongTime
    [[deprecated("Use field access instead!")]] float& dyn__startSongTime();
    // Get instance field reference: private System.Single _songTimeOffset
    [[deprecated("Use field access instead!")]] float& dyn__songTimeOffset();
    // Get instance field reference: private System.Single _songTime
    [[deprecated("Use field access instead!")]] float& dyn__songTime();
    // Get instance field reference: private System.Boolean _audioStarted
    [[deprecated("Use field access instead!")]] bool& dyn__audioStarted();
    // Get instance field reference: private System.Boolean _currentObservableIsFailed
    [[deprecated("Use field access instead!")]] bool& dyn__currentObservableIsFailed();
    // Get instance field reference: private IMultiplayerObservable _observable
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerObservable*& dyn__observable();
    // Get instance field reference: private System.Single _lastLatencyOffsetTime
    [[deprecated("Use field access instead!")]] float& dyn__lastLatencyOffsetTime();
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0x13EA7A0
    ::UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();
    // private System.Boolean get_isAudioLoaded()
    // Offset: 0x13EA838
    bool get_isAudioLoaded();
    // public System.Void .ctor()
    // Offset: 0x13EB4F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerSongSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerSongSyncController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x13EA8E4
    void Awake();
    // protected System.Void Start()
    // Offset: 0x13EAA00
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13EAAEC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x13EABE4
    void Update();
    // public System.Void StartSong(System.Single offsetTime)
    // Offset: 0x13EB00C
    void StartSong(float offsetTime);
    // public System.Void FollowOffsetSyncTime(IMultiplayerObservable observable, System.Boolean crossFade, System.Boolean forceUpdate)
    // Offset: 0x13EB2D4
    void FollowOffsetSyncTime(::GlobalNamespace::IMultiplayerObservable* observable, bool crossFade, bool forceUpdate);
    // private System.Void UpdateOffsetSyncTime(System.Single offsetSyncTime, System.Boolean crossFade, System.Boolean forceUpdate)
    // Offset: 0x13EAEAC
    void UpdateOffsetSyncTime(float offsetSyncTime, bool crossFade, bool forceUpdate);
    // public System.Void SeekTo(System.Single offsetTime)
    // Offset: 0x13EB4E4
    void SeekTo(float offsetTime);
    // private System.Void SeekTo(System.Single offsetTime, System.Boolean crossFade, System.Single toVolume)
    // Offset: 0x13EB108
    void SeekTo(float offsetTime, bool crossFade, float toVolume);
    // private System.Void HandleVrFocusWasReleased()
    // Offset: 0x13EB4F0
    void HandleVrFocusWasReleased();
    // private System.Boolean <get_waitUntilIsReadyToStartTheSong>b__7_0()
    // Offset: 0x13EB4FC
    bool $get_waitUntilIsReadyToStartTheSong$b__7_0();
  }; // MultiplayerLocalInactivePlayerSongSyncController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerSongSyncController), 96 + sizeof(float)> __GlobalNamespace_MultiplayerLocalInactivePlayerSongSyncControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerSongSyncController) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong
// Il2CppName: get_waitUntilIsReadyToStartTheSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded
// Il2CppName: get_isAudioLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "get_isAudioLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong)> {
  static const MethodInfo* get() {
    static auto* offsetTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime
// Il2CppName: FollowOffsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(::GlobalNamespace::IMultiplayerObservable*, bool, bool)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime)> {
  static const MethodInfo* get() {
    static auto* observable = &::il2cpp_utils::GetClassFromName("", "IMultiplayerObservable")->byval_arg;
    static auto* crossFade = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* forceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "FollowOffsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{observable, crossFade, forceUpdate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime
// Il2CppName: UpdateOffsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float, bool, bool)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime)> {
  static const MethodInfo* get() {
    static auto* offsetSyncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* crossFade = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* forceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "UpdateOffsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetSyncTime, crossFade, forceUpdate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  static const MethodInfo* get() {
    static auto* offsetTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float, bool, float)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  static const MethodInfo* get() {
    static auto* offsetTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* crossFade = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* toVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetTime, crossFade, toVolume});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::HandleVrFocusWasReleased
// Il2CppName: HandleVrFocusWasReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::HandleVrFocusWasReleased)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "HandleVrFocusWasReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::$get_waitUntilIsReadyToStartTheSong$b__7_0
// Il2CppName: <get_waitUntilIsReadyToStartTheSong>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::$get_waitUntilIsReadyToStartTheSong$b__7_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "<get_waitUntilIsReadyToStartTheSong>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
