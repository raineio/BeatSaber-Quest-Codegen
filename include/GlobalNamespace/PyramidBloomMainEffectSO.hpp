// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainEffectSO
#include "GlobalNamespace/MainEffectSO.hpp"
// Including type: PyramidBloomRendererSO/Pass
#include "GlobalNamespace/PyramidBloomRendererSO_Pass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PyramidBloomRendererSO because it is already included!
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PyramidBloomMainEffectSO
  class PyramidBloomMainEffectSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PyramidBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomMainEffectSO*, "", "PyramidBloomMainEffectSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: PyramidBloomMainEffectSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PyramidBloomMainEffectSO : public ::GlobalNamespace::MainEffectSO {
    public:
    public:
    // private PyramidBloomRendererSO _bloomRenderer
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PyramidBloomRendererSO* bloomRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO*) == 0x8);
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomFogSO*) == 0x8);
    // private UnityEngine.Shader _fadeShader
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Shader* fadeShader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Shader _mainEffectShader
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Shader* mainEffectShader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // [SpaceAttribute] Offset: 0x1110738
    // [RangeAttribute] Offset: 0x1110738
    // private System.Single _bloomBlendFactor
    // Size: 0x4
    // Offset: 0x38
    float bloomBlendFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloomRadius
    // Size: 0x4
    // Offset: 0x3C
    float bloomRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloomIntensity
    // Size: 0x4
    // Offset: 0x40
    float bloomIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _downBloomIntensityOffset
    // Size: 0x4
    // Offset: 0x44
    float downBloomIntensityOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _pyramidWeightsParam
    // Size: 0x4
    // Offset: 0x48
    float pyramidWeightsParam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _alphaWeights
    // Size: 0x4
    // Offset: 0x4C
    float alphaWeights;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private PyramidBloomRendererSO/Pass _preFilterPass
    // Size: 0x4
    // Offset: 0x50
    ::GlobalNamespace::PyramidBloomRendererSO::Pass preFilterPass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _downsamplePass
    // Size: 0x4
    // Offset: 0x54
    ::GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _upsamplePass
    // Size: 0x4
    // Offset: 0x58
    ::GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _finalUpsamplePass
    // Size: 0x4
    // Offset: 0x5C
    ::GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // [SpaceAttribute] Offset: 0x1110818
    // private System.Int32 _bloomTextureWidth
    // Size: 0x4
    // Offset: 0x60
    int bloomTextureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SpaceAttribute] Offset: 0x1110850
    // [RangeAttribute] Offset: 0x1110850
    // private System.Single _baseColorBoost
    // Size: 0x4
    // Offset: 0x64
    float baseColorBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseColorBoostThreshold
    // Size: 0x4
    // Offset: 0x68
    float baseColorBoostThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: baseColorBoostThreshold and: fadeMaterial
    char __padding16[0x4] = {};
    // private UnityEngine.Material _fadeMaterial
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Material* fadeMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _mainEffectMaterial
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Material* mainEffectMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11108B0
    // Get static field: static private readonly System.Int32 _bloomTexID
    static int _get__bloomTexID();
    // Set static field: static private readonly System.Int32 _bloomTexID
    static void _set__bloomTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11108C0
    // Get static field: static private readonly System.Int32 _bloomIntensityID
    static int _get__bloomIntensityID();
    // Set static field: static private readonly System.Int32 _bloomIntensityID
    static void _set__bloomIntensityID(int value);
    // Get instance field reference: private PyramidBloomRendererSO _bloomRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO*& dyn__bloomRenderer();
    // Get instance field reference: private BloomFogSO _bloomFog
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomFogSO*& dyn__bloomFog();
    // Get instance field reference: private UnityEngine.Shader _fadeShader
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn__fadeShader();
    // Get instance field reference: private UnityEngine.Shader _mainEffectShader
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn__mainEffectShader();
    // Get instance field reference: private System.Single _bloomBlendFactor
    [[deprecated("Use field access instead!")]] float& dyn__bloomBlendFactor();
    // Get instance field reference: private System.Single _bloomRadius
    [[deprecated("Use field access instead!")]] float& dyn__bloomRadius();
    // Get instance field reference: private System.Single _bloomIntensity
    [[deprecated("Use field access instead!")]] float& dyn__bloomIntensity();
    // Get instance field reference: private System.Single _downBloomIntensityOffset
    [[deprecated("Use field access instead!")]] float& dyn__downBloomIntensityOffset();
    // Get instance field reference: private System.Single _pyramidWeightsParam
    [[deprecated("Use field access instead!")]] float& dyn__pyramidWeightsParam();
    // Get instance field reference: private System.Single _alphaWeights
    [[deprecated("Use field access instead!")]] float& dyn__alphaWeights();
    // Get instance field reference: private PyramidBloomRendererSO/Pass _preFilterPass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO::Pass& dyn__preFilterPass();
    // Get instance field reference: private PyramidBloomRendererSO/Pass _downsamplePass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO::Pass& dyn__downsamplePass();
    // Get instance field reference: private PyramidBloomRendererSO/Pass _upsamplePass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO::Pass& dyn__upsamplePass();
    // Get instance field reference: private PyramidBloomRendererSO/Pass _finalUpsamplePass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO::Pass& dyn__finalUpsamplePass();
    // Get instance field reference: private System.Int32 _bloomTextureWidth
    [[deprecated("Use field access instead!")]] int& dyn__bloomTextureWidth();
    // Get instance field reference: private System.Single _baseColorBoost
    [[deprecated("Use field access instead!")]] float& dyn__baseColorBoost();
    // Get instance field reference: private System.Single _baseColorBoostThreshold
    [[deprecated("Use field access instead!")]] float& dyn__baseColorBoostThreshold();
    // Get instance field reference: private UnityEngine.Material _fadeMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__fadeMaterial();
    // Get instance field reference: private UnityEngine.Material _mainEffectMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__mainEffectMaterial();
    // static private System.Void .cctor()
    // Offset: 0x2AECA18
    static void _cctor();
    // protected System.Void OnDisable()
    // Offset: 0x2AEC678
    void OnDisable();
    // private System.Void LazyInitializeMaterials()
    // Offset: 0x2AEC540
    void LazyInitializeMaterials();
    // public override System.Boolean get_hasPostProcessEffect()
    // Offset: 0x2AEC510
    // Implemented from: MainEffectSO
    // Base method: System.Boolean MainEffectSO::get_hasPostProcessEffect()
    bool get_hasPostProcessEffect();
    // public System.Void .ctor()
    // Offset: 0x2AEC9DC
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PyramidBloomMainEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PyramidBloomMainEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PyramidBloomMainEffectSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x2AEC518
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public override System.Void PreRender()
    // Offset: 0x2AEC6B4
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PreRender()
    void PreRender();
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x2AEC728
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float fade);
  }; // PyramidBloomMainEffectSO
  #pragma pack(pop)
  static check_size<sizeof(PyramidBloomMainEffectSO), 120 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_PyramidBloomMainEffectSOSizeCheck;
  static_assert(sizeof(PyramidBloomMainEffectSO) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomMainEffectSO::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PyramidBloomMainEffectSO::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomMainEffectSO*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomMainEffectSO::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&GlobalNamespace::PyramidBloomMainEffectSO::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomMainEffectSO*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomMainEffectSO::LazyInitializeMaterials
// Il2CppName: LazyInitializeMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&GlobalNamespace::PyramidBloomMainEffectSO::LazyInitializeMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomMainEffectSO*), "LazyInitializeMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomMainEffectSO::get_hasPostProcessEffect
// Il2CppName: get_hasPostProcessEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&GlobalNamespace::PyramidBloomMainEffectSO::get_hasPostProcessEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomMainEffectSO*), "get_hasPostProcessEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomMainEffectSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomMainEffectSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&GlobalNamespace::PyramidBloomMainEffectSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomMainEffectSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomMainEffectSO::PreRender
// Il2CppName: PreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&GlobalNamespace::PyramidBloomMainEffectSO::PreRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomMainEffectSO*), "PreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PyramidBloomMainEffectSO::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PyramidBloomMainEffectSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, float)>(&GlobalNamespace::PyramidBloomMainEffectSO::Render)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* fade = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PyramidBloomMainEffectSO*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest, fade});
  }
};
