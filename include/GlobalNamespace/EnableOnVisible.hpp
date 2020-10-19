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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Behaviour because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnableOnVisible
  class EnableOnVisible : public UnityEngine::MonoBehaviour {
    public:
    // private System.Action`1<System.Boolean> VisibilityChangedEvent
    // Offset: 0x18
    System::Action_1<bool>* VisibilityChangedEvent;
    // public UnityEngine.Behaviour[] _components
    // Offset: 0x20
    ::Array<UnityEngine::Behaviour*>* components;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_VisibilityChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x210CA28
    void add_VisibilityChangedEvent(System::Action_1<bool>* value);
    // public System.Void remove_VisibilityChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x210CACC
    void remove_VisibilityChangedEvent(System::Action_1<bool>* value);
    // protected System.Void Awake()
    // Offset: 0x210CB70
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0x210CBE0
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0x210CC98
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0x210CD50
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnableOnVisible* New_ctor();
  }; // EnableOnVisible
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableOnVisible*, "", "EnableOnVisible");
#pragma pack(pop)
