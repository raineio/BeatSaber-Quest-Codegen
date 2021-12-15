// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27, "MasterServer", "BaseClientMessageHandler/<AuthenticateWithMasterServer>d__27");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BaseClientMessageHandler/MasterServer.<AuthenticateWithMasterServer>d__27
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x28
    MasterServer::BaseClientMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::BaseClientMessageHandler*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $AuthenticateWithMasterServer$d__27
    constexpr $AuthenticateWithMasterServer$d__27(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, MasterServer::BaseClientMessageHandler* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public MasterServer.BaseClientMessageHandler <>4__this
    MasterServer::BaseClientMessageHandler*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x14AEAC0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x14AECE0
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.BaseClientMessageHandler/MasterServer.<AuthenticateWithMasterServer>d__27
  #pragma pack(pop)
  static check_size<sizeof(BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27), 48 + sizeof(System::Runtime::CompilerServices::TaskAwaiter)> __MasterServer_BaseClientMessageHandler_$AuthenticateWithMasterServer$d__27SizeCheck;
  static_assert(sizeof(BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27::*)()>(&MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
