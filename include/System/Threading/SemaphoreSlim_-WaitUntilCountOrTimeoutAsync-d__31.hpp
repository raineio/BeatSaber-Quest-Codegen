// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.SemaphoreSlim
#include "System/Threading/SemaphoreSlim.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31
  struct SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // public System.Threading.SemaphoreSlim/TaskNode asyncWaiter
    // Offset: 0x28
    System::Threading::SemaphoreSlim::TaskNode* asyncWaiter;
    // public System.Int32 millisecondsTimeout
    // Offset: 0x30
    int millisecondsTimeout;
    // private System.Threading.CancellationTokenSource <cts>5__1
    // Offset: 0x38
    System::Threading::CancellationTokenSource* $cts$5__1;
    // public System.Threading.SemaphoreSlim <>4__this
    // Offset: 0x40
    System::Threading::SemaphoreSlim* $$4__this;
    // private System.Object <>7__wrap1
    // Offset: 0x48
    ::Il2CppObject* $$7__wrap1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    // Offset: 0x50
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Boolean> <>u__2
    // Offset: 0x60
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter $$u__2;
    // Creating value type constructor for type: $WaitUntilCountOrTimeoutAsync$d__31
    constexpr $WaitUntilCountOrTimeoutAsync$d__31(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Threading::SemaphoreSlim::TaskNode* asyncWaiter_ = {}, int millisecondsTimeout_ = {}, System::Threading::CancellationTokenSource* $cts$5__1_ = {}, System::Threading::SemaphoreSlim* $$4__this_ = {}, ::Il2CppObject* $$7__wrap1_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<bool>::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, cancellationToken{cancellationToken_}, asyncWaiter{asyncWaiter_}, millisecondsTimeout{millisecondsTimeout_}, $cts$5__1{$cts$5__1_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xC709E0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC709E8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SemaphoreSlim::$WaitUntilCountOrTimeoutAsync$d__31, "System.Threading", "SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__31");
#pragma pack(pop)
