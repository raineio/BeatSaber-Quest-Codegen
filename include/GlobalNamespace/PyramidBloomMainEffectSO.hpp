// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainEffectSO
#include "GlobalNamespace/MainEffectSO.hpp"
// Including type: PyramidBloomRendererSO/Pass
#include "GlobalNamespace/PyramidBloomRendererSO_Pass.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PyramidBloomRendererSO because it is already included!
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
  // Autogenerated type: PyramidBloomMainEffectSO
  class PyramidBloomMainEffectSO : public GlobalNamespace::MainEffectSO {
    public:
    // private PyramidBloomRendererSO _bloomRenderer
    // Offset: 0x18
    GlobalNamespace::PyramidBloomRendererSO* bloomRenderer;
    // private UnityEngine.Shader _fadeShader
    // Offset: 0x20
    UnityEngine::Shader* fadeShader;
    // private UnityEngine.Shader _mainEffectShader
    // Offset: 0x28
    UnityEngine::Shader* mainEffectShader;
    // private System.Single _bloomBlendFactor
    // Offset: 0x30
    float bloomBlendFactor;
    // private System.Single _bloomRadius
    // Offset: 0x34
    float bloomRadius;
    // private System.Single _bloomIntensity
    // Offset: 0x38
    float bloomIntensity;
    // private System.Single _downBloomIntensityOffset
    // Offset: 0x3C
    float downBloomIntensityOffset;
    // private System.Single _pyramidWeightsParam
    // Offset: 0x40
    float pyramidWeightsParam;
    // private System.Single _alphaWeights
    // Offset: 0x44
    float alphaWeights;
    // private PyramidBloomRendererSO/Pass _preFilterPass
    // Offset: 0x48
    GlobalNamespace::PyramidBloomRendererSO::Pass preFilterPass;
    // private PyramidBloomRendererSO/Pass _downsamplePass
    // Offset: 0x4C
    GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass;
    // private PyramidBloomRendererSO/Pass _upsamplePass
    // Offset: 0x50
    GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass;
    // private PyramidBloomRendererSO/Pass _finalUpsamplePass
    // Offset: 0x54
    GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass;
    // private System.Int32 _bloomTextureWidth
    // Offset: 0x58
    int bloomTextureWidth;
    // private System.Single _baseColorBoost
    // Offset: 0x5C
    float baseColorBoost;
    // private System.Single _baseColorBoostThreshold
    // Offset: 0x60
    float baseColorBoostThreshold;
    // private UnityEngine.Material _fadeMaterial
    // Offset: 0x68
    UnityEngine::Material* fadeMaterial;
    // private UnityEngine.Material _mainEffectMaterial
    // Offset: 0x70
    UnityEngine::Material* mainEffectMaterial;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 _bloomTexID
    static int _get__bloomTexID();
    // Set static field: static private readonly System.Int32 _bloomTexID
    static void _set__bloomTexID(int value);
    // Get static field: static private readonly System.Int32 _bloomIntensityID
    static int _get__bloomIntensityID();
    // Set static field: static private readonly System.Int32 _bloomIntensityID
    static void _set__bloomIntensityID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x1EF60D0
    void OnDisable();
    // private System.Void LazyInitializeMaterials()
    // Offset: 0x1EF5F6C
    void LazyInitializeMaterials();
    // public override System.Boolean get_hasPostProcessEffect()
    // Offset: 0x1EF5F3C
    // Implemented from: MainEffectSO
    // Base method: System.Boolean MainEffectSO::get_hasPostProcessEffect()
    bool get_hasPostProcessEffect();
    // protected override System.Void OnEnable()
    // Offset: 0x1EF5F44
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public override System.Void PreRender()
    // Offset: 0x1EF6124
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PreRender()
    void PreRender();
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x1EF6198
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade);
    // public System.Void .ctor()
    // Offset: 0x1EF6420
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PyramidBloomMainEffectSO* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1EF645C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // PyramidBloomMainEffectSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PyramidBloomMainEffectSO*, "", "PyramidBloomMainEffectSO");
#pragma pack(pop)
