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
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
  // Forward declaring type: BombExplosionEffect
  class BombExplosionEffect;
  // Forward declaring type: IConnectedPlayerBeatmapObjectEventManager
  class IConnectedPlayerBeatmapObjectEventManager;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerEffectsSpawner
  class MultiplayerConnectedPlayerEffectsSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*, "", "MultiplayerConnectedPlayerEffectsSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerEffectsSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerEffectsSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private NoteDebrisSpawner _noteDebrisSpawner
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteDebrisSpawner*) == 0x8);
    // private BombExplosionEffect _bombExplosionEffect
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BombExplosionEffect* bombExplosionEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BombExplosionEffect*) == 0x8);
    // [InjectAttribute] Offset: 0x10D8404
    // private readonly IConnectedPlayerBeatmapObjectEventManager _beatmapObjectEventManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private NoteDebrisSpawner _noteDebrisSpawner
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteDebrisSpawner*& dyn__noteDebrisSpawner();
    // Get instance field reference: private BombExplosionEffect _bombExplosionEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BombExplosionEffect*& dyn__bombExplosionEffect();
    // Get instance field reference: private readonly IConnectedPlayerBeatmapObjectEventManager _beatmapObjectEventManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& dyn__beatmapObjectEventManager();
    // public System.Void .ctor()
    // Offset: 0x13CFAB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerEffectsSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerEffectsSpawner*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13CF6B8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13CF7AC
    void OnDestroy();
    // private System.Void HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut(NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x13CF8AC
    void HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
  }; // MultiplayerConnectedPlayerEffectsSpawner
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerEffectsSpawner), 40 + sizeof(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*)> __GlobalNamespace_MultiplayerConnectedPlayerEffectsSpawnerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerEffectsSpawner) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut
// Il2CppName: HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)(::GlobalNamespace::NoteCutInfoNetSerializable*)>(&GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfoNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*), "HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo});
  }
};
