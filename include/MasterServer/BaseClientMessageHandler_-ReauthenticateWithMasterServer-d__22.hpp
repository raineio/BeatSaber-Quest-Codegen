// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.BaseClientMessageHandler/<ReauthenticateWithMasterServer>d__22
  struct BaseClientMessageHandler::$ReauthenticateWithMasterServer$d__22 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Offset: 0x20
    MasterServer::BaseClientMessageHandler* $$4__this;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Creating value type constructor for type: $ReauthenticateWithMasterServer$d__22
    constexpr $ReauthenticateWithMasterServer$d__22(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, MasterServer::BaseClientMessageHandler* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4F228
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4F230
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.BaseClientMessageHandler/<ReauthenticateWithMasterServer>d__22
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler::$ReauthenticateWithMasterServer$d__22, "MasterServer", "BaseClientMessageHandler/<ReauthenticateWithMasterServer>d__22");
#pragma pack(pop)
