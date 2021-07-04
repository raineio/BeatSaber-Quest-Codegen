// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassBackgroundNonLightRendererCore
#include "GlobalNamespace/BloomPrePassBackgroundNonLightRendererCore.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundParticleSystemRenderer
  // [ExecuteAlways] Offset: DF559C
  class BloomPrePassBackgroundParticleSystemRenderer : public GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
    public:
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // Creating value type constructor for type: BloomPrePassBackgroundParticleSystemRenderer
    BloomPrePassBackgroundParticleSystemRenderer(UnityEngine::ParticleSystem* particleSystem_ = {}, UnityEngine::Renderer* renderer_ = {}) noexcept : particleSystem{particleSystem_}, renderer{renderer_} {}
    // protected override UnityEngine.Renderer get_renderer()
    // Offset: 0x1D865D4
    // Implemented from: BloomPrePassBackgroundNonLightRendererCore
    // Base method: UnityEngine.Renderer BloomPrePassBackgroundNonLightRendererCore::get_renderer()
    UnityEngine::Renderer* get_renderer();
    // protected override System.Void Awake()
    // Offset: 0x1D865DC
    // Implemented from: BloomPrePassBackgroundNonLightRendererCore
    // Base method: System.Void BloomPrePassBackgroundNonLightRendererCore::Awake()
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1D86640
    // Implemented from: BloomPrePassBackgroundNonLightRendererCore
    // Base method: System.Void BloomPrePassBackgroundNonLightRendererCore::.ctor()
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundParticleSystemRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundParticleSystemRenderer*, creationType>()));
    }
  }; // BloomPrePassBackgroundParticleSystemRenderer
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundParticleSystemRenderer), 56 + sizeof(UnityEngine::Renderer*)> __GlobalNamespace_BloomPrePassBackgroundParticleSystemRendererSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundParticleSystemRenderer) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*, "", "BloomPrePassBackgroundParticleSystemRenderer");
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::get_renderer
// Il2CppName: get_renderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Renderer* (GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::get_renderer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*), "get_renderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
