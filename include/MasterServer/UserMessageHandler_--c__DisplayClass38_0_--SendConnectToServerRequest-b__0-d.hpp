// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler/<>c__DisplayClass38_0
#include "MasterServer/UserMessageHandler_--c__DisplayClass38_0.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ConnectToServerResponse
  class ConnectToServerResponse;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.UserMessageHandler/<>c__DisplayClass38_0/<<SendConnectToServerRequest>b__0>d
  struct UserMessageHandler::$$c__DisplayClass38_0::$$SendConnectToServerRequest$b__0$d : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public MasterServer.UserMessageHandler/<>c__DisplayClass38_0 <>4__this
    // Offset: 0x20
    MasterServer::UserMessageHandler::$$c__DisplayClass38_0* $$4__this;
    // private IDiffieHellmanKeyPair <clientKeys>5__2
    // Offset: 0x28
    GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__2;
    // private System.Byte[] <random>5__3
    // Offset: 0x30
    ::Array<uint8_t>* $random$5__3;
    // private MasterServer.ConnectToServerResponse <response>5__4
    // Offset: 0x38
    MasterServer::ConnectToServerResponse* $response$5__4;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__1
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ConnectToServerResponse> <>u__2
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ConnectToServerResponse*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__3
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> $$u__3;
    // Creating value type constructor for type: $$SendConnectToServerRequest$b__0$d
    constexpr $$SendConnectToServerRequest$b__0$d(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, MasterServer::UserMessageHandler::$$c__DisplayClass38_0* $$4__this_ = {}, GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__2_ = {}, ::Array<uint8_t>* $random$5__3_ = {}, MasterServer::ConnectToServerResponse* $response$5__4_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ConnectToServerResponse*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $clientKeys$5__2{$clientKeys$5__2_}, $random$5__3{$random$5__3_}, $response$5__4{$response$5__4_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4ECB4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4ECBC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.UserMessageHandler/<>c__DisplayClass38_0/<<SendConnectToServerRequest>b__0>d
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass38_0::$$SendConnectToServerRequest$b__0$d, "MasterServer", "UserMessageHandler/<>c__DisplayClass38_0/<<SendConnectToServerRequest>b__0>d");
#pragma pack(pop)
