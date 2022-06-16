// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassEffectSO
#include "GlobalNamespace/BloomPrePassEffectSO.hpp"
// Including type: KawaseBlurRendererSO/KernelSize
#include "GlobalNamespace/KawaseBlurRendererSO_KernelSize.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: KawaseBlurRendererSO because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassDoubleKawaseBlurTextureEffectSO
  class BloomPrePassDoubleKawaseBlurTextureEffectSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*, "", "BloomPrePassDoubleKawaseBlurTextureEffectSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassDoubleKawaseBlurTextureEffectSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassDoubleKawaseBlurTextureEffectSO : public ::GlobalNamespace::BloomPrePassEffectSO {
    public:
    public:
    // [SpaceAttribute] Offset: 0x10C909C
    // private KawaseBlurRendererSO/KernelSize _bloom1KernelSize
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::KawaseBlurRendererSO::KernelSize bloom1KernelSize;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::KawaseBlurRendererSO::KernelSize) == 0x4);
    // private System.Single _bloom1Boost
    // Size: 0x4
    // Offset: 0x30
    float bloom1Boost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private KawaseBlurRendererSO/KernelSize _bloom2KernelSize
    // Size: 0x4
    // Offset: 0x34
    ::GlobalNamespace::KawaseBlurRendererSO::KernelSize bloom2KernelSize;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::KawaseBlurRendererSO::KernelSize) == 0x4);
    // private System.Single _bloom2Boost
    // Size: 0x4
    // Offset: 0x38
    float bloom2Boost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloom2Alpha
    // Size: 0x4
    // Offset: 0x3C
    float bloom2Alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _downsample
    // Size: 0x4
    // Offset: 0x40
    int downsample;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _gammaCorrection
    // Size: 0x1
    // Offset: 0x44
    bool gammaCorrection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: gammaCorrection and: kawaseBlurRenderer
    char __padding6[0x3] = {};
    // [SpaceAttribute] Offset: 0x10C9134
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::KawaseBlurRendererSO*) == 0x8);
    public:
    // Get instance field reference: private KawaseBlurRendererSO/KernelSize _bloom1KernelSize
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::KawaseBlurRendererSO::KernelSize& dyn__bloom1KernelSize();
    // Get instance field reference: private System.Single _bloom1Boost
    [[deprecated("Use field access instead!")]] float& dyn__bloom1Boost();
    // Get instance field reference: private KawaseBlurRendererSO/KernelSize _bloom2KernelSize
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::KawaseBlurRendererSO::KernelSize& dyn__bloom2KernelSize();
    // Get instance field reference: private System.Single _bloom2Boost
    [[deprecated("Use field access instead!")]] float& dyn__bloom2Boost();
    // Get instance field reference: private System.Single _bloom2Alpha
    [[deprecated("Use field access instead!")]] float& dyn__bloom2Alpha();
    // Get instance field reference: private System.Int32 _downsample
    [[deprecated("Use field access instead!")]] int& dyn__downsample();
    // Get instance field reference: private System.Boolean _gammaCorrection
    [[deprecated("Use field access instead!")]] bool& dyn__gammaCorrection();
    // Get instance field reference: private KawaseBlurRendererSO _kawaseBlurRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::KawaseBlurRendererSO*& dyn__kawaseBlurRenderer();
    // public System.Void .ctor()
    // Offset: 0x2A34CB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassDoubleKawaseBlurTextureEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassDoubleKawaseBlurTextureEffectSO*, creationType>()));
    }
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x2A34C80
    // Implemented from: TextureEffectSO
    // Base method: System.Void TextureEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);
  }; // BloomPrePassDoubleKawaseBlurTextureEffectSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassDoubleKawaseBlurTextureEffectSO), 72 + sizeof(::GlobalNamespace::KawaseBlurRendererSO*)> __GlobalNamespace_BloomPrePassDoubleKawaseBlurTextureEffectSOSizeCheck;
  static_assert(sizeof(BloomPrePassDoubleKawaseBlurTextureEffectSO) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::Render)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
