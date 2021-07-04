// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__15
  // [CompilerGeneratedAttribute] Offset: E11CC8
  struct NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public NetworkPlayerEntitlementChecker <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayerEntitlementChecker*) == 0x8);
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EntitlementsStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> $$u__1;
    // Creating value type constructor for type: $HandleGetIsEntitledToLevel$d__15
    constexpr $HandleGetIsEntitledToLevel$d__15(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelId{levelId_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE6194
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE619C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__15
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__15");
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15::*)()>(&GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15::SetStateMachine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::CompilerServices::IAsyncStateMachine*>()});
  }
};
