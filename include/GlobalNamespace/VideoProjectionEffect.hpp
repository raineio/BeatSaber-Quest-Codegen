// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
// Including type: EnvironmentContext
#include "GlobalNamespace/EnvironmentContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VideoProjectionDataModelSO
  class VideoProjectionDataModelSO;
  // Forward declaring type: SongTimeSyncedVideoPlayer
  class SongTimeSyncedVideoPlayer;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VideoProjectionEffect
  class VideoProjectionEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect*, "", "VideoProjectionEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VideoProjectionEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoProjectionEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::VideoProjectionEffect::InitData
    class InitData;
    // Nested type: ::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior
    class VideoProjectionBehavior;
    // Nested type: ::GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior
    class BeatmapEditorVideoProjectionBehavior;
    // Nested type: ::GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior
    class GameplayVideoProjectionBehavior;
    public:
    // private VideoProjectionDataModelSO _videoProjectionDataModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::VideoProjectionDataModelSO* videoProjectionDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VideoProjectionDataModelSO*) == 0x8);
    // private SongTimeSyncedVideoPlayer _videoPlayer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongTimeSyncedVideoPlayer*) == 0x8);
    // private BasicBeatmapEventType _videoEventType
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::BasicBeatmapEventType videoEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // Padding between fields: videoEventType and: initData
    char __padding2[0x4] = {};
    // [InjectAttribute] Offset: 0x1120A54
    // private readonly VideoProjectionEffect/InitData _initData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::VideoProjectionEffect::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VideoProjectionEffect::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0x1120A64
    // private readonly EnvironmentContext _environmentContext
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::EnvironmentContext environmentContext;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentContext) == 0x4);
    // Padding between fields: environmentContext and: beatmapData
    char __padding4[0x4] = {};
    // [InjectAttribute] Offset: 0x1120A74
    // private readonly IReadonlyBeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // [InjectAttribute] Offset: 0x1120A84
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private VideoProjectionEffect/VideoProjectionBehavior _behavior
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior* behavior;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VideoProjectionDataModelSO _videoProjectionDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VideoProjectionDataModelSO*& dyn__videoProjectionDataModel();
    // Get instance field reference: private SongTimeSyncedVideoPlayer _videoPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongTimeSyncedVideoPlayer*& dyn__videoPlayer();
    // Get instance field reference: private BasicBeatmapEventType _videoEventType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__videoEventType();
    // Get instance field reference: private readonly VideoProjectionEffect/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VideoProjectionEffect::InitData*& dyn__initData();
    // Get instance field reference: private readonly EnvironmentContext _environmentContext
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentContext& dyn__environmentContext();
    // Get instance field reference: private readonly IReadonlyBeatmapData _beatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReadonlyBeatmapData*& dyn__beatmapData();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private VideoProjectionEffect/VideoProjectionBehavior _behavior
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior*& dyn__behavior();
    // public System.Void .ctor()
    // Offset: 0x165F440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoProjectionEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VideoProjectionEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoProjectionEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x165EFE0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x165F428
    void OnDestroy();
  }; // VideoProjectionEffect
  #pragma pack(pop)
  static check_size<sizeof(VideoProjectionEffect), 80 + sizeof(::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior*)> __GlobalNamespace_VideoProjectionEffectSizeCheck;
  static_assert(sizeof(VideoProjectionEffect) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VideoProjectionEffect::*)()>(&GlobalNamespace::VideoProjectionEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VideoProjectionEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VideoProjectionEffect::*)()>(&GlobalNamespace::VideoProjectionEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VideoProjectionEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
