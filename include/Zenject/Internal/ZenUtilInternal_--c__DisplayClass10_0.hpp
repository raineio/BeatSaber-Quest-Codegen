// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ZenUtilInternal/<>c__DisplayClass10_0
  class ZenUtilInternal::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.SceneManagement.Scene scene
    // Offset: 0x10
    UnityEngine::SceneManagement::Scene scene;
    // Creating conversion operator: operator UnityEngine::SceneManagement::Scene
    constexpr operator UnityEngine::SceneManagement::Scene() const noexcept {
      return scene;
    }
    // System.Boolean <GetRootGameObjects>b__1(UnityEngine.GameObject x)
    // Offset: 0x12E76E8
    bool $GetRootGameObjects$b__1(UnityEngine::GameObject* x);
    // public System.Void .ctor()
    // Offset: 0x12E7588
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ZenUtilInternal::$$c__DisplayClass10_0* New_ctor();
  }; // Zenject.Internal.ZenUtilInternal/<>c__DisplayClass10_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0*, "Zenject.Internal", "ZenUtilInternal/<>c__DisplayClass10_0");
#pragma pack(pop)
