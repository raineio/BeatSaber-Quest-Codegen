// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TextureEffectSO
#include "GlobalNamespace/TextureEffectSO.hpp"
// Including type: IBloomPrePassParams
#include "GlobalNamespace/IBloomPrePassParams.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassEffectSO
  class BloomPrePassEffectSO : public GlobalNamespace::TextureEffectSO, public GlobalNamespace::IBloomPrePassParams {
    public:
    // private System.Int32 _textureWidth
    // Offset: 0x18
    int textureWidth;
    // private System.Int32 _textureHeight
    // Offset: 0x1C
    int textureHeight;
    // private UnityEngine.Vector2 _fov
    // Offset: 0x20
    UnityEngine::Vector2 fov;
    // private System.Single _linesWidth
    // Offset: 0x28
    float linesWidth;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public TextureEffectSO get_textureEffect()
    // Offset: 0x1CF998C
    // Implemented from: IBloomPrePassParams
    // Base method: TextureEffectSO IBloomPrePassParams::get_textureEffect()
    GlobalNamespace::TextureEffectSO* get_textureEffect();
    // public System.Int32 get_textureWidth()
    // Offset: 0x1CF9990
    // Implemented from: IBloomPrePassParams
    // Base method: System.Int32 IBloomPrePassParams::get_textureWidth()
    int get_textureWidth();
    // public System.Int32 get_textureHeight()
    // Offset: 0x1CF9998
    // Implemented from: IBloomPrePassParams
    // Base method: System.Int32 IBloomPrePassParams::get_textureHeight()
    int get_textureHeight();
    // public UnityEngine.Vector2 get_fov()
    // Offset: 0x1CF99A0
    // Implemented from: IBloomPrePassParams
    // Base method: UnityEngine.Vector2 IBloomPrePassParams::get_fov()
    UnityEngine::Vector2 get_fov();
    // public System.Single get_linesWidth()
    // Offset: 0x1CF99A8
    // Implemented from: IBloomPrePassParams
    // Base method: System.Single IBloomPrePassParams::get_linesWidth()
    float get_linesWidth();
    // public System.Void .ctor()
    // Offset: 0x1CF99B0
    // Implemented from: TextureEffectSO
    // Base method: System.Void TextureEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassEffectSO* New_ctor();
  }; // BloomPrePassEffectSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassEffectSO*, "", "BloomPrePassEffectSO");
#pragma pack(pop)
