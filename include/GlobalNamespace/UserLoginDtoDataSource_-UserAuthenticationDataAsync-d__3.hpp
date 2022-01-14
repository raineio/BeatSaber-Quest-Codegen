// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UserLoginDtoDataSource
#include "GlobalNamespace/UserLoginDtoDataSource.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserAuthenticationData
  class UserAuthenticationData;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserInfo
  class UserInfo;
  // Forward declaring type: PlatformUserAuthTokenData
  class PlatformUserAuthTokenData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3, "", "UserLoginDtoDataSource/<UserAuthenticationDataAsync>d__3");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: UserLoginDtoDataSource/<UserAuthenticationDataAsync>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*> $$t__builder;
    // public UserLoginDtoDataSource <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::UserLoginDtoDataSource* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UserLoginDtoDataSource*) == 0x8);
    // private UserInfo <userInfo>5__2
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::UserInfo* $userInfo$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UserInfo*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UserInfo> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IReadOnlyList`1<System.String>> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::StringW>*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<PlatformUserAuthTokenData> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::PlatformUserAuthTokenData*> $$u__3;
    public:
    // Creating value type constructor for type: $UserAuthenticationDataAsync$d__3
    constexpr $UserAuthenticationDataAsync$d__3(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*> $$t__builder_ = {}, GlobalNamespace::UserLoginDtoDataSource* $$4__this_ = {}, GlobalNamespace::UserInfo* $userInfo$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::StringW>*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::PlatformUserAuthTokenData*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $userInfo$5__2{$userInfo$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*>& dyn_$$t__builder();
    // Get instance field reference: public UserLoginDtoDataSource <>4__this
    GlobalNamespace::UserLoginDtoDataSource*& dyn_$$4__this();
    // Get instance field reference: private UserInfo <userInfo>5__2
    GlobalNamespace::UserInfo*& dyn_$userInfo$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<UserInfo> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IReadOnlyList`1<System.String>> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::StringW>*>& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<PlatformUserAuthTokenData> <>u__3
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::PlatformUserAuthTokenData*>& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x1BD7DB4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1BD82F4
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // UserLoginDtoDataSource/<UserAuthenticationDataAsync>d__3
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3::*)()>(&GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
