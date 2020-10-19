// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.CancellationCallbackInfo
  class CancellationCallbackInfo : public ::Il2CppObject {
    public:
    // readonly System.Action`1<System.Object> Callback
    // Offset: 0x10
    System::Action_1<::Il2CppObject*>* Callback;
    // readonly System.Object StateForCallback
    // Offset: 0x18
    ::Il2CppObject* StateForCallback;
    // readonly System.Threading.SynchronizationContext TargetSyncContext
    // Offset: 0x20
    System::Threading::SynchronizationContext* TargetSyncContext;
    // readonly System.Threading.ExecutionContext TargetExecutionContext
    // Offset: 0x28
    System::Threading::ExecutionContext* TargetExecutionContext;
    // readonly System.Threading.CancellationTokenSource CancellationTokenSource
    // Offset: 0x30
    System::Threading::CancellationTokenSource* CancellationTokenSource;
    // Get static field: static private System.Threading.ContextCallback s_executionContextCallback
    static System::Threading::ContextCallback* _get_s_executionContextCallback();
    // Set static field: static private System.Threading.ContextCallback s_executionContextCallback
    static void _set_s_executionContextCallback(System::Threading::ContextCallback* value);
    // System.Void .ctor(System.Action`1<System.Object> callback, System.Object stateForCallback, System.Threading.SynchronizationContext targetSyncContext, System.Threading.ExecutionContext targetExecutionContext, System.Threading.CancellationTokenSource cancellationTokenSource)
    // Offset: 0x17BE1A8
    static CancellationCallbackInfo* New_ctor(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* stateForCallback, System::Threading::SynchronizationContext* targetSyncContext, System::Threading::ExecutionContext* targetExecutionContext, System::Threading::CancellationTokenSource* cancellationTokenSource);
    // System.Void ExecuteCallback()
    // Offset: 0x17BE23C
    void ExecuteCallback();
    // static private System.Void ExecutionContextCallback(System.Object obj)
    // Offset: 0x17BE438
    static void ExecutionContextCallback(::Il2CppObject* obj);
  }; // System.Threading.CancellationCallbackInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationCallbackInfo*, "System.Threading", "CancellationCallbackInfo");
#pragma pack(pop)
