// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerHeightDetector);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightDetector*, "", "PlayerHeightDetector");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHeightDetector
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerHeightDetector : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::PlayerHeightDetector::InitData
    class InitData;
    public:
    // [InjectAttribute] Offset: 0x1124AD4
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0x1124AE4
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // [InjectAttribute] Offset: 0x1124AF4
    // private readonly IAudioTimeSource _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IAudioTimeSource* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0x1124B04
    // private readonly PlayerHeightDetector/InitData _initData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PlayerHeightDetector::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeightDetector::InitData*) == 0x8);
    // private System.Action`1<System.Single> playerHeightDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<float>* playerHeightDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapObjectCallbackWrapper
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapObjectCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    // private System.Single _noTopObstaclesStartTime
    // Size: 0x4
    // Offset: 0x48
    float noTopObstaclesStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _computedPlayerHeight
    // Size: 0x4
    // Offset: 0x4C
    float computedPlayerHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _changeWeight
    // Size: 0x4
    // Offset: 0x50
    float changeWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastReportedHeight
    // Size: 0x4
    // Offset: 0x54
    float lastReportedHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly PlayerHeightDetector/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeightDetector::InitData*& dyn__initData();
    // Get instance field reference: private System.Action`1<System.Single> playerHeightDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<float>*& dyn_playerHeightDidChangeEvent();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapObjectCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapObjectCallbackWrapper();
    // Get instance field reference: private System.Single _noTopObstaclesStartTime
    [[deprecated("Use field access instead!")]] float& dyn__noTopObstaclesStartTime();
    // Get instance field reference: private System.Single _computedPlayerHeight
    [[deprecated("Use field access instead!")]] float& dyn__computedPlayerHeight();
    // Get instance field reference: private System.Single _changeWeight
    [[deprecated("Use field access instead!")]] float& dyn__changeWeight();
    // Get instance field reference: private System.Single _lastReportedHeight
    [[deprecated("Use field access instead!")]] float& dyn__lastReportedHeight();
    // public System.Single get_playerHeight()
    // Offset: 0x1588E08
    float get_playerHeight();
    // public System.Void add_playerHeightDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1588CC0
    void add_playerHeightDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void remove_playerHeightDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1588D64
    void remove_playerHeightDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void .ctor()
    // Offset: 0x15891BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHeightDetector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerHeightDetector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHeightDetector*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1588E10
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1588EF8
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x1588F14
    void LateUpdate();
    // private System.Void BeatmapObjectSpawnCallback(ObstacleData obstacleData)
    // Offset: 0x1589104
    void BeatmapObjectSpawnCallback(::GlobalNamespace::ObstacleData* obstacleData);
  }; // PlayerHeightDetector
  #pragma pack(pop)
  static check_size<sizeof(PlayerHeightDetector), 84 + sizeof(float)> __GlobalNamespace_PlayerHeightDetectorSizeCheck;
  static_assert(sizeof(PlayerHeightDetector) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::get_playerHeight
// Il2CppName: get_playerHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::get_playerHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightDetector*), "get_playerHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent
// Il2CppName: add_playerHeightDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)(::System::Action_1<float>*)>(&GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightDetector*), "add_playerHeightDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent
// Il2CppName: remove_playerHeightDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)(::System::Action_1<float>*)>(&GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightDetector*), "remove_playerHeightDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightDetector*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightDetector*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightDetector*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback
// Il2CppName: BeatmapObjectSpawnCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)(::GlobalNamespace::ObstacleData*)>(&GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightDetector*), "BeatmapObjectSpawnCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData});
  }
};
