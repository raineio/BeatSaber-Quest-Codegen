// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ConditionalSpriteSwitcher
  class ConditionalSpriteSwitcher : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Sprite _sprite0
    // Offset: 0x18
    UnityEngine::Sprite* sprite0;
    // private UnityEngine.Material _material0
    // Offset: 0x20
    UnityEngine::Material* material0;
    // private UnityEngine.Sprite _sprite1
    // Offset: 0x28
    UnityEngine::Sprite* sprite1;
    // private UnityEngine.Material _material1
    // Offset: 0x30
    UnityEngine::Material* material1;
    // private BoolSO _value
    // Offset: 0x38
    GlobalNamespace::BoolSO* value;
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Offset: 0x40
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Awake()
    // Offset: 0x1FBB598
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1FBB640
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConditionalSpriteSwitcher* New_ctor();
  }; // ConditionalSpriteSwitcher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalSpriteSwitcher*, "", "ConditionalSpriteSwitcher");
#pragma pack(pop)
