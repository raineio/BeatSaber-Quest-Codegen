// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.UserMasterServerMessageHandler/MasterServer.<>c__DisplayClass21_0
#include "MasterServer/UserMasterServerMessageHandler_--c__DisplayClass21_0.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: UserMasterServerMessageHandler
  class UserMasterServerMessageHandler;
  // Forward declaring type: BaseConnectToServerRequest
  class BaseConnectToServerRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d, "MasterServer", "UserMasterServerMessageHandler/<>c__DisplayClass21_0/<<SendConnectToServerRequest>b__0>d");
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.UserMasterServerMessageHandler/MasterServer.<>c__DisplayClass21_0/MasterServer.<<SendConnectToServerRequest>b__0>d
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public MasterServer.UserMasterServerMessageHandler/MasterServer.<>c__DisplayClass21_0 <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0* $$4__this;
    // Field size check
    static_assert(sizeof(::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0*) == 0x8);
    // private IDiffieHellmanKeyPair <clientKeys>5__2
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__2;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDiffieHellmanKeyPair*) == 0x8);
    // private System.Byte[] <random>5__3
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> $random$5__3;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private MasterServer.ConnectToServerResponse <response>5__4
    // Size: 0x8
    // Offset: 0x38
    ::MasterServer::ConnectToServerResponse* $response$5__4;
    // Field size check
    static_assert(sizeof(::MasterServer::ConnectToServerResponse*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1;
    // private MasterServer.UserMasterServerMessageHandler <>7__wrap4
    // Size: 0x8
    // Offset: 0x48
    ::MasterServer::UserMasterServerMessageHandler* $$7__wrap4;
    // Field size check
    static_assert(sizeof(::MasterServer::UserMasterServerMessageHandler*) == 0x8);
    // private MasterServer.BaseConnectToServerRequest <>7__wrap5
    // Size: 0x8
    // Offset: 0x50
    ::MasterServer::BaseConnectToServerRequest* $$7__wrap5;
    // Field size check
    static_assert(sizeof(::MasterServer::BaseConnectToServerRequest*) == 0x8);
    // [TupleElementNamesAttribute] Offset: 0x1097E0C
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.ValueTuple`2<System.String,System.String>> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::StringW>> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ConnectToServerResponse> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::MasterServer::ConnectToServerResponse*> $$u__3;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__4
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> $$u__4;
    public:
    // Creating value type constructor for type: $$SendConnectToServerRequest$b__0$d
    constexpr $$SendConnectToServerRequest$b__0$d(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0* $$4__this_ = {}, ::GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__2_ = {}, ::ArrayW<uint8_t> $random$5__3_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::MasterServer::ConnectToServerResponse* $response$5__4_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1_ = {}, ::MasterServer::UserMasterServerMessageHandler* $$7__wrap4_ = {}, ::MasterServer::BaseConnectToServerRequest* $$7__wrap5_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::StringW>> $$u__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::MasterServer::ConnectToServerResponse*> $$u__3_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> $$u__4_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $clientKeys$5__2{$clientKeys$5__2_}, $random$5__3{$random$5__3_}, $response$5__4{$response$5__4_}, $$u__1{$$u__1_}, $$7__wrap4{$$7__wrap4_}, $$7__wrap5{$$7__wrap5_}, $$u__2{$$u__2_}, $$u__3{$$u__3_}, $$u__4{$$u__4_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public MasterServer.UserMasterServerMessageHandler/MasterServer.<>c__DisplayClass21_0 <>4__this
    ::MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0*& dyn_$$4__this();
    // Get instance field reference: private IDiffieHellmanKeyPair <clientKeys>5__2
    ::GlobalNamespace::IDiffieHellmanKeyPair*& dyn_$clientKeys$5__2();
    // Get instance field reference: private System.Byte[] <random>5__3
    ::ArrayW<uint8_t>& dyn_$random$5__3();
    // Get instance field reference: private MasterServer.ConnectToServerResponse <response>5__4
    ::MasterServer::ConnectToServerResponse*& dyn_$response$5__4();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IDiffieHellmanKeyPair*>& dyn_$$u__1();
    // Get instance field reference: private MasterServer.UserMasterServerMessageHandler <>7__wrap4
    ::MasterServer::UserMasterServerMessageHandler*& dyn_$$7__wrap4();
    // Get instance field reference: private MasterServer.BaseConnectToServerRequest <>7__wrap5
    ::MasterServer::BaseConnectToServerRequest*& dyn_$$7__wrap5();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.ValueTuple`2<System.String,System.String>> <>u__2
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::StringW>>& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ConnectToServerResponse> <>u__3
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::MasterServer::ConnectToServerResponse*>& dyn_$$u__3();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__4
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>& dyn_$$u__4();
    // private System.Void MoveNext()
    // Offset: 0x16FE980
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x16FFA9C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.UserMasterServerMessageHandler/MasterServer.<>c__DisplayClass21_0/MasterServer.<<SendConnectToServerRequest>b__0>d
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d::*)()>(&MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMasterServerMessageHandler::$$c__DisplayClass21_0::$$SendConnectToServerRequest$b__0$d), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};