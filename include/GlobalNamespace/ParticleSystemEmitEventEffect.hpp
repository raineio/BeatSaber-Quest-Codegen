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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ParticleSystemEmitEventEffect
  class ParticleSystemEmitEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffect*, "", "ParticleSystemEmitEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ParticleSystemEmitEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class ParticleSystemEmitEventEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior
    class ParticleSystemEmitBehavior;
    // Nested type: ::GlobalNamespace::ParticleSystemEmitEventEffect::BeatmapEditorParticleSystemEmitBehavior
    class BeatmapEditorParticleSystemEmitBehavior;
    // Nested type: ::GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior
    class GameplayParticleSystemEmitBehavior;
    public:
    // private BasicBeatmapEventType _beatmapEvent
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::BasicBeatmapEventType beatmapEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // Padding between fields: beatmapEvent and: particleSystemParentTransform
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0x11203A4
    // private UnityEngine.Transform _particleSystemParentTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* particleSystemParentTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Int32 _particleSystemMaxSpawnedSystems
    // Size: 0x4
    // Offset: 0x28
    int particleSystemMaxSpawnedSystems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [InjectAttribute] Offset: 0x11203EC
    // private readonly EnvironmentContext _environmentContext
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::EnvironmentContext environmentContext;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentContext) == 0x4);
    // [InjectAttribute] Offset: 0x11203FC
    // private readonly Zenject.DiContainer _diContainer
    // Size: 0x8
    // Offset: 0x30
    ::Zenject::DiContainer* diContainer;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior _particleSystemEmitBehavior
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior* particleSystemEmitBehavior;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BasicBeatmapEventType _beatmapEvent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__beatmapEvent();
    // Get instance field reference: private UnityEngine.Transform _particleSystemParentTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__particleSystemParentTransform();
    // Get instance field reference: private System.Int32 _particleSystemMaxSpawnedSystems
    [[deprecated("Use field access instead!")]] int& dyn__particleSystemMaxSpawnedSystems();
    // Get instance field reference: private readonly EnvironmentContext _environmentContext
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentContext& dyn__environmentContext();
    // Get instance field reference: private readonly Zenject.DiContainer _diContainer
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__diContainer();
    // Get instance field reference: private ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior _particleSystemEmitBehavior
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior*& dyn__particleSystemEmitBehavior();
    // public System.Void .ctor()
    // Offset: 0x138A250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleSystemEmitEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ParticleSystemEmitEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleSystemEmitEventEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1389FDC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x138A238
    void OnDestroy();
  }; // ParticleSystemEmitEventEffect
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemEmitEventEffect), 56 + sizeof(::GlobalNamespace::ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior*)> __GlobalNamespace_ParticleSystemEmitEventEffectSizeCheck;
  static_assert(sizeof(ParticleSystemEmitEventEffect) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEmitEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEmitEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(&GlobalNamespace::ParticleSystemEmitEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEmitEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEmitEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(&GlobalNamespace::ParticleSystemEmitEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEmitEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
