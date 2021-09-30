// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: OculusPlatformUserModel/<GetUserInfo>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct OculusPlatformUserModel::$GetUserInfo$d__2/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UserInfo> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo*> $$t__builder;
    // public OculusPlatformUserModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OculusPlatformUserModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformUserModel*) == 0x8);
    // private OculusPlatformUserModel/<>c__DisplayClass2_0 <>8__1
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0* $$8__1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UserInfo> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__2;
    public:
    // Creating value type constructor for type: $GetUserInfo$d__2
    constexpr $GetUserInfo$d__2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo*> $$t__builder_ = {}, GlobalNamespace::OculusPlatformUserModel* $$4__this_ = {}, GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0* $$8__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UserInfo> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::UserInfo*>& dyn_$$t__builder();
    // Get instance field reference: public OculusPlatformUserModel <>4__this
    GlobalNamespace::OculusPlatformUserModel*& dyn_$$4__this();
    // Get instance field reference: private OculusPlatformUserModel/<>c__DisplayClass2_0 <>8__1
    GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0*& dyn_$$8__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<UserInfo> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*>& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x111A84C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x111AC40
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusPlatformUserModel/<GetUserInfo>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2, "", "OculusPlatformUserModel/<GetUserInfo>d__2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2::*)()>(&GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel::$GetUserInfo$d__2), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
