// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.RaycastUITopLevelChecker
  class RaycastUITopLevelChecker : public UnityEngine::MonoBehaviour {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> results
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* results;
    // private UnityEngine.Canvas _canvas
    // Offset: 0x20
    UnityEngine::Canvas* canvas;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x216E4B8
    void Awake();
    // public System.Boolean get_isOnTop()
    // Offset: 0x216E540
    bool get_isOnTop();
    // public System.Void .ctor()
    // Offset: 0x216E760
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RaycastUITopLevelChecker* New_ctor();
  }; // HMUI.RaycastUITopLevelChecker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::RaycastUITopLevelChecker*, "HMUI", "RaycastUITopLevelChecker");
#pragma pack(pop)
