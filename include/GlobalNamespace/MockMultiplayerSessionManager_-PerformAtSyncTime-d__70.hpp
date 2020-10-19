// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MockMultiplayerSessionManager/<PerformAtSyncTime>d__70
  struct MockMultiplayerSessionManager::$PerformAtSyncTime$d__70 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public System.Single syncTime
    // Offset: 0x28
    float syncTime;
    // public MockMultiplayerSessionManager <>4__this
    // Offset: 0x30
    GlobalNamespace::MockMultiplayerSessionManager* $$4__this;
    // public System.Action action
    // Offset: 0x38
    System::Action* action;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Creating value type constructor for type: $PerformAtSyncTime$d__70
    constexpr $PerformAtSyncTime$d__70(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, float syncTime_ = {}, GlobalNamespace::MockMultiplayerSessionManager* $$4__this_ = {}, System::Action* action_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, syncTime{syncTime_}, $$4__this{$$4__this_}, action{action_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4E070
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4E078
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MockMultiplayerSessionManager/<PerformAtSyncTime>d__70
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerSessionManager::$PerformAtSyncTime$d__70, "", "MockMultiplayerSessionManager/<PerformAtSyncTime>d__70");
#pragma pack(pop)
