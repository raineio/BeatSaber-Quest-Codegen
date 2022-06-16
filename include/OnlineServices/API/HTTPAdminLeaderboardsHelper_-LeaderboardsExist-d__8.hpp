// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/<LeaderboardsExist>d__8");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.<LeaderboardsExist>d__8
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsInfoResultDto> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*> $$t__builder;
    // public OnlineServices.API.HTTPAdminLeaderboardsHelper <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::OnlineServices::API::HTTPAdminLeaderboardsHelper* $$4__this;
    // Field size check
    static_assert(sizeof(::OnlineServices::API::HTTPAdminLeaderboardsHelper*) == 0x8);
    // public System.String[] leaderboardIds
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> leaderboardIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> $$u__1;
    public:
    // Creating value type constructor for type: $LeaderboardsExist$d__8
    constexpr $LeaderboardsExist$d__8(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*> $$t__builder_ = {}, ::OnlineServices::API::HTTPAdminLeaderboardsHelper* $$4__this_ = {}, ::ArrayW<::StringW> leaderboardIds_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, leaderboardIds{leaderboardIds_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsInfoResultDto> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*>& dyn_$$t__builder();
    // Get instance field reference: public OnlineServices.API.HTTPAdminLeaderboardsHelper <>4__this
    [[deprecated("Use field access instead!")]] ::OnlineServices::API::HTTPAdminLeaderboardsHelper*& dyn_$$4__this();
    // Get instance field reference: public System.String[] leaderboardIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_leaderboardIds();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1567C80
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1567F4C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.<LeaderboardsExist>d__8
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::*)()>(&OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
