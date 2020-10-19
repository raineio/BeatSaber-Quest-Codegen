// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SceneContextRegistry
  class SceneContextRegistry : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext> _map
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>* map;
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>*
    constexpr operator System::Collections::Generic::Dictionary_2<UnityEngine::SceneManagement::Scene, Zenject::SceneContext*>*() const noexcept {
      return map;
    }
    // public System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> get_SceneContexts()
    // Offset: 0x12EE6A0
    System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* get_SceneContexts();
    // public System.Void Add(Zenject.SceneContext context)
    // Offset: 0x12F1F48
    void Add(Zenject::SceneContext* context);
    // public Zenject.SceneContext GetSceneContextForScene(System.String name)
    // Offset: 0x12F201C
    Zenject::SceneContext* GetSceneContextForScene(::Il2CppString* name);
    // public Zenject.SceneContext GetSceneContextForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x12F20AC
    Zenject::SceneContext* GetSceneContextForScene(UnityEngine::SceneManagement::Scene scene);
    // public Zenject.SceneContext TryGetSceneContextForScene(System.String name)
    // Offset: 0x12F2114
    Zenject::SceneContext* TryGetSceneContextForScene(::Il2CppString* name);
    // public Zenject.SceneContext TryGetSceneContextForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x12F21A4
    Zenject::SceneContext* TryGetSceneContextForScene(UnityEngine::SceneManagement::Scene scene);
    // public Zenject.DiContainer GetContainerForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x12F2224
    Zenject::DiContainer* GetContainerForScene(UnityEngine::SceneManagement::Scene scene);
    // public Zenject.DiContainer TryGetContainerForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x12F22F8
    Zenject::DiContainer* TryGetContainerForScene(UnityEngine::SceneManagement::Scene scene);
    // public System.Void Remove(Zenject.SceneContext context)
    // Offset: 0x12F23F8
    void Remove(Zenject::SceneContext* context);
    // public System.Void .ctor()
    // Offset: 0x12F2534
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SceneContextRegistry* New_ctor();
  }; // Zenject.SceneContextRegistry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContextRegistry*, "Zenject", "SceneContextRegistry");
#pragma pack(pop)
