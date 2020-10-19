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
  // Skipping declaration: Behaviour because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnableComponentWithCommandArgument
  class EnableComponentWithCommandArgument : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _argument
    // Offset: 0x18
    ::Il2CppString* argument;
    // private UnityEngine.Behaviour _component
    // Offset: 0x20
    UnityEngine::Behaviour* component;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Awake()
    // Offset: 0x210C74C
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x210C7E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnableComponentWithCommandArgument* New_ctor();
  }; // EnableComponentWithCommandArgument
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableComponentWithCommandArgument*, "", "EnableComponentWithCommandArgument");
#pragma pack(pop)
