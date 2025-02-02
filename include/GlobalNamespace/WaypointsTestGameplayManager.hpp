// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterSpawnController
  class BTSCharacterSpawnController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: StandardGameplaySceneSetupData
  class StandardGameplaySceneSetupData;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: WaypointsTestGameplayManager
  class WaypointsTestGameplayManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WaypointsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestGameplayManager*, "", "WaypointsTestGameplayManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: WaypointsTestGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class WaypointsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Vector3 _outerCapsuleStart
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 outerCapsuleStart;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _outerCapsuleEnd
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 outerCapsuleEnd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _outerCapsuleRadius
    // Size: 0x4
    // Offset: 0x30
    float outerCapsuleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x1121920
    // private UnityEngine.Vector3 _innerSphereOffset
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 innerSphereOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _innerSphereRadius
    // Size: 0x4
    // Offset: 0x40
    float innerSphereRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x1121968
    // private UnityEngine.LayerMask _layersToColliderWith
    // Size: 0x4
    // Offset: 0x44
    ::UnityEngine::LayerMask layersToColliderWith;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // [InjectAttribute] Offset: 0x11219A0
    // private readonly BTSCharacterSpawnController _characterSpawnController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BTSCharacterSpawnController* characterSpawnController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BTSCharacterSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0x11219B0
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0x11219C0
    // private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::StandardGameplaySceneSetupData* standardSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardGameplaySceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0x11219D0
    // private readonly GameplayCoreSceneSetupData _levelSceneSetupData
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::GameplayCoreSceneSetupData* levelSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // private UnityEngine.Transform _target
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean _firstPosSaved
    // Size: 0x1
    // Offset: 0x70
    bool firstPosSaved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _speedSaved
    // Size: 0x1
    // Offset: 0x71
    bool speedSaved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: speedSaved and: lastFramePos
    char __padding12[0x2] = {};
    // private UnityEngine.Vector3 _lastFramePos
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 lastFramePos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _lastFrameSpeed
    // Size: 0x4
    // Offset: 0x80
    float lastFrameSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestFrameSpeed
    // Size: 0x4
    // Offset: 0x84
    float biggestFrameSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestFrameSpeedSongTime
    // Size: 0x4
    // Offset: 0x88
    float biggestFrameSpeedSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestAcceleration
    // Size: 0x4
    // Offset: 0x8C
    float biggestAcceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _biggestAccelerationSongTime
    // Size: 0x4
    // Offset: 0x90
    float biggestAccelerationSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 _outerCapsuleStart
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__outerCapsuleStart();
    // Get instance field reference: private UnityEngine.Vector3 _outerCapsuleEnd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__outerCapsuleEnd();
    // Get instance field reference: private System.Single _outerCapsuleRadius
    [[deprecated("Use field access instead!")]] float& dyn__outerCapsuleRadius();
    // Get instance field reference: private UnityEngine.Vector3 _innerSphereOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__innerSphereOffset();
    // Get instance field reference: private System.Single _innerSphereRadius
    [[deprecated("Use field access instead!")]] float& dyn__innerSphereRadius();
    // Get instance field reference: private UnityEngine.LayerMask _layersToColliderWith
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn__layersToColliderWith();
    // Get instance field reference: private readonly BTSCharacterSpawnController _characterSpawnController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BTSCharacterSpawnController*& dyn__characterSpawnController();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardGameplaySceneSetupData*& dyn__standardSceneSetupData();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _levelSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayCoreSceneSetupData*& dyn__levelSceneSetupData();
    // Get instance field reference: private UnityEngine.Transform _target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__target();
    // Get instance field reference: private System.Boolean _firstPosSaved
    [[deprecated("Use field access instead!")]] bool& dyn__firstPosSaved();
    // Get instance field reference: private System.Boolean _speedSaved
    [[deprecated("Use field access instead!")]] bool& dyn__speedSaved();
    // Get instance field reference: private UnityEngine.Vector3 _lastFramePos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__lastFramePos();
    // Get instance field reference: private System.Single _lastFrameSpeed
    [[deprecated("Use field access instead!")]] float& dyn__lastFrameSpeed();
    // Get instance field reference: private System.Single _biggestFrameSpeed
    [[deprecated("Use field access instead!")]] float& dyn__biggestFrameSpeed();
    // Get instance field reference: private System.Single _biggestFrameSpeedSongTime
    [[deprecated("Use field access instead!")]] float& dyn__biggestFrameSpeedSongTime();
    // Get instance field reference: private System.Single _biggestAcceleration
    [[deprecated("Use field access instead!")]] float& dyn__biggestAcceleration();
    // Get instance field reference: private System.Single _biggestAccelerationSongTime
    [[deprecated("Use field access instead!")]] float& dyn__biggestAccelerationSongTime();
    // public System.Void .ctor()
    // Offset: 0x166207C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointsTestGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WaypointsTestGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointsTestGameplayManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x16602B4
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0x16602F4
    void LateUpdate();
    // protected System.Void OnDestroy()
    // Offset: 0x166184C
    void OnDestroy();
    // private System.String GetBar(System.Single songTime)
    // Offset: 0x1661644
    ::StringW GetBar(float songTime);
    // protected System.Void OnDrawGizmos()
    // Offset: 0x1661D90
    void OnDrawGizmos();
  }; // WaypointsTestGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(WaypointsTestGameplayManager), 144 + sizeof(float)> __GlobalNamespace_WaypointsTestGameplayManagerSizeCheck;
  static_assert(sizeof(WaypointsTestGameplayManager) == 0x94);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestGameplayManager::*)()>(&GlobalNamespace::WaypointsTestGameplayManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestGameplayManager::*)()>(&GlobalNamespace::WaypointsTestGameplayManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestGameplayManager::*)()>(&GlobalNamespace::WaypointsTestGameplayManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::GetBar
// Il2CppName: GetBar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::WaypointsTestGameplayManager::*)(float)>(&GlobalNamespace::WaypointsTestGameplayManager::GetBar)> {
  static const MethodInfo* get() {
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "GetBar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestGameplayManager::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestGameplayManager::*)()>(&GlobalNamespace::WaypointsTestGameplayManager::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestGameplayManager*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
