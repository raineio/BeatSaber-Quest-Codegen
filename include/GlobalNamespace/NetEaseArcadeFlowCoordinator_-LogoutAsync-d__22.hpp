// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: NetEaseArcadeFlowCoordinator
#include "GlobalNamespace/NetEaseArcadeFlowCoordinator.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: NetEase.Docker.LogoutData
#include "NetEase/Docker/LogoutData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetEaseArcadeFlowCoordinator/<LogoutAsync>d__22
  // [CompilerGeneratedAttribute] Offset: E12558
  struct NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public NetEaseArcadeFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NetEaseArcadeFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseArcadeFlowCoordinator*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.LogoutData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::LogoutData> $$u__1;
    // Creating value type constructor for type: $LogoutAsync$d__22
    constexpr $LogoutAsync$d__22(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::NetEaseArcadeFlowCoordinator* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::LogoutData> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE45F0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE45F8
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetEaseArcadeFlowCoordinator/<LogoutAsync>d__22
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22, "", "NetEaseArcadeFlowCoordinator/<LogoutAsync>d__22");
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22::SetStateMachine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::CompilerServices::IAsyncStateMachine*>()});
  }
};
