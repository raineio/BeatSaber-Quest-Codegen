// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayerEntitlementChecker
#include "GlobalNamespace/NetworkPlayerEntitlementChecker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: EntitlementsStatus
#include "GlobalNamespace/EntitlementsStatus.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__15
  struct NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public NetworkPlayerEntitlementChecker <>4__this
    // Offset: 0x28
    GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this;
    // public System.String levelId
    // Offset: 0x30
    ::Il2CppString* levelId;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EntitlementsStatus> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> $$u__1;
    // Creating value type constructor for type: $HandleGetIsEntitledToLevel$d__15
    constexpr $HandleGetIsEntitledToLevel$d__15(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelId{levelId_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4DD10
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4DD18
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__15
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__15");
#pragma pack(pop)
