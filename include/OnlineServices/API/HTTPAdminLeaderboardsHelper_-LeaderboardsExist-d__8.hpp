// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/<LeaderboardsExist>d__8
  // [CompilerGeneratedAttribute] Offset: E12AB8
  struct HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*> $$t__builder;
    // public OnlineServices.API.HTTPAdminLeaderboardsHelper <>4__this
    // Size: 0x8
    // Offset: 0x20
    OnlineServices::API::HTTPAdminLeaderboardsHelper* $$4__this;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPAdminLeaderboardsHelper*) == 0x8);
    // public System.String[] leaderboardIds
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* leaderboardIds;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__1;
    // Creating value type constructor for type: $LeaderboardsExist$d__8
    constexpr $LeaderboardsExist$d__8(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*> $$t__builder_ = {}, OnlineServices::API::HTTPAdminLeaderboardsHelper* $$4__this_ = {}, ::Array<::Il2CppString*>* leaderboardIds_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, leaderboardIds{leaderboardIds_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE62F4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE62FC
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/<LeaderboardsExist>d__8
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/<LeaderboardsExist>d__8");
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::*)()>(&OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8::SetStateMachine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPAdminLeaderboardsHelper::$LeaderboardsExist$d__8), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::CompilerServices::IAsyncStateMachine*>()});
  }
};
