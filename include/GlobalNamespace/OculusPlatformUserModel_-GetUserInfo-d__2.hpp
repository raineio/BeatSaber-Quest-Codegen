// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformUserModel
#include "GlobalNamespace/OculusPlatformUserModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserInfo
  class UserInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformUserModel/<GetUserInfo>d__2
  struct OculusPlatformUserModel::$GetUserInfo$d__2 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UserInfo> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo*> $$t__builder;
    // public OculusPlatformUserModel <>4__this
    // Offset: 0x20
    GlobalNamespace::OculusPlatformUserModel* $$4__this;
    // private OculusPlatformUserModel/<>c__DisplayClass2_0 <>8__1
    // Offset: 0x28
    GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0* $$8__1;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UserInfo> <>u__2
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__2;
    // Creating value type constructor for type: $GetUserInfo$d__2
    constexpr $GetUserInfo$d__2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo*> $$t__builder_ = {}, GlobalNamespace::OculusPlatformUserModel* $$4__this_ = {}, GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0* $$8__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4D564
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4D56C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusPlatformUserModel/<GetUserInfo>d__2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2, "", "OculusPlatformUserModel/<GetUserInfo>d__2");
#pragma pack(pop)
