// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.StateMachineAttribute
#include "System/Runtime/CompilerServices/StateMachineAttribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.AsyncStateMachineAttribute
  class AsyncStateMachineAttribute : public System::Runtime::CompilerServices::StateMachineAttribute {
    public:
    // public System.Void .ctor(System.Type stateMachineType)
    // Offset: 0x108BD1C
    // Implemented from: System.Runtime.CompilerServices.StateMachineAttribute
    // Base method: System.Void StateMachineAttribute::.ctor(System.Type stateMachineType)
    static AsyncStateMachineAttribute* New_ctor(System::Type* stateMachineType);
  }; // System.Runtime.CompilerServices.AsyncStateMachineAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncStateMachineAttribute*, "System.Runtime.CompilerServices", "AsyncStateMachineAttribute");
#pragma pack(pop)
