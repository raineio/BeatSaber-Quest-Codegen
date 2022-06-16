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
  // Forward declaring type: BloomPrePassRendererSO
  class BloomPrePassRendererSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SceneCameraBloomPrePass
  class SceneCameraBloomPrePass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SceneCameraBloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneCameraBloomPrePass*, "", "SceneCameraBloomPrePass");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SceneCameraBloomPrePass
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class SceneCameraBloomPrePass : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BloomPrePassRendererSO _bloomPrepassRenderer
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassRendererSO*) == 0x8);
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassEffectContainerSO*) == 0x8);
    // private UnityEngine.RenderTexture _bloomPrepassRenderTexture
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RenderTexture* bloomPrepassRenderTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BloomPrePassRendererSO _bloomPrepassRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassRendererSO*& dyn__bloomPrepassRenderer();
    // Get instance field reference: private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassEffectContainerSO*& dyn__bloomPrePassEffectContainer();
    // Get instance field reference: private UnityEngine.RenderTexture _bloomPrepassRenderTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn__bloomPrepassRenderTexture();
    // public System.Void .ctor()
    // Offset: 0x1E79D60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneCameraBloomPrePass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SceneCameraBloomPrePass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneCameraBloomPrePass*, creationType>()));
    }
  }; // SceneCameraBloomPrePass
  #pragma pack(pop)
  static check_size<sizeof(SceneCameraBloomPrePass), 40 + sizeof(::UnityEngine::RenderTexture*)> __GlobalNamespace_SceneCameraBloomPrePassSizeCheck;
  static_assert(sizeof(SceneCameraBloomPrePass) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneCameraBloomPrePass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
