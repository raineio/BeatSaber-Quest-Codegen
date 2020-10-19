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
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SceneLoadedCallbacksOrderDebug
  class SceneLoadedCallbacksOrderDebug : public UnityEngine::MonoBehaviour {
    public:
    // protected System.Void Awake()
    // Offset: 0x211A96C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x211A9D8
    void OnEnable();
    // protected System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x211AA88
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // protected System.Void Start()
    // Offset: 0x211AB50
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x211ABBC
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x211AC6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SceneLoadedCallbacksOrderDebug* New_ctor();
  }; // SceneLoadedCallbacksOrderDebug
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneLoadedCallbacksOrderDebug*, "", "SceneLoadedCallbacksOrderDebug");
#pragma pack(pop)
