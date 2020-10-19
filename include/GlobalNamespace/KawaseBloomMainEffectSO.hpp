// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainEffectSO
#include "GlobalNamespace/MainEffectSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
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
  // Autogenerated type: KawaseBloomMainEffectSO
  class KawaseBloomMainEffectSO : public GlobalNamespace::MainEffectSO {
    public:
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Offset: 0x18
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // private UnityEngine.Shader _fadeShader
    // Offset: 0x20
    UnityEngine::Shader* fadeShader;
    // private UnityEngine.Shader _mainEffectShader
    // Offset: 0x28
    UnityEngine::Shader* mainEffectShader;
    // private System.Single _bloomIntensity
    // Offset: 0x30
    float bloomIntensity;
    // private System.Int32 _bloomIterations
    // Offset: 0x34
    int bloomIterations;
    // private System.Single _bloomBoost
    // Offset: 0x38
    float bloomBoost;
    // private System.Single _bloomAlphaWeights
    // Offset: 0x3C
    float bloomAlphaWeights;
    // private System.Int32 _bloomTextureWidth
    // Offset: 0x40
    int bloomTextureWidth;
    // private System.Single _baseColorBoost
    // Offset: 0x44
    float baseColorBoost;
    // private System.Single _baseColorBoostThreshold
    // Offset: 0x48
    float baseColorBoostThreshold;
    // private UnityEngine.Material _fadeMaterial
    // Offset: 0x50
    UnityEngine::Material* fadeMaterial;
    // private UnityEngine.Material _mainEffectMaterial
    // Offset: 0x58
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
    // Offset: 0x1EF2D10
    void OnDisable();
    // private System.Void LazyInitializeMaterials()
    // Offset: 0x1EF2BAC
    void LazyInitializeMaterials();
    // public override System.Boolean get_hasPostProcessEffect()
    // Offset: 0x1EF2B7C
    // Implemented from: MainEffectSO
    // Base method: System.Boolean MainEffectSO::get_hasPostProcessEffect()
    bool get_hasPostProcessEffect();
    // protected override System.Void OnEnable()
    // Offset: 0x1EF2B84
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public override System.Void PreRender()
    // Offset: 0x1EF2D64
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PreRender()
    void PreRender();
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x1EF2E70
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade);
    // public System.Void .ctor()
    // Offset: 0x1EF30EC
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static KawaseBloomMainEffectSO* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1EF311C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // KawaseBloomMainEffectSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBloomMainEffectSO*, "", "KawaseBloomMainEffectSO");
#pragma pack(pop)
