// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HTTPLeaderboardsModel
#include "GlobalNamespace/HTTPLeaderboardsModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OnlineServices.GetLeaderboardEntriesResult
#include "OnlineServices/GetLeaderboardEntriesResult.hpp"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.API.ApiResponse`1
#include "OnlineServices/API/ApiResponse_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntries
  class LeaderboardEntries;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10, "", "HTTPLeaderboardsModel/<GetLeaderboardEntriesAsync>d__10");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: HTTPLeaderboardsModel/<GetLeaderboardEntriesAsync>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.GetLeaderboardEntriesResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::GetLeaderboardEntriesResult> $$t__builder;
    // public HTTPLeaderboardsModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::HTTPLeaderboardsModel* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HTTPLeaderboardsModel*) == 0x8);
    // public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    // Size: 0x20
    // Offset: 0x28
    ::OnlineServices::GetLeaderboardFilterData leaderboardFilterData;
    // Field size check
    static_assert(sizeof(::OnlineServices::GetLeaderboardFilterData) == 0x20);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x48
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.String <leaderboardId>5__2
    // Size: 0x8
    // Offset: 0x50
    ::StringW $leaderboardId$5__2;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.API.ApiResponse`1<BeatSaberAPI.DataTransferObjects.LeaderboardEntries>> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::API::ApiResponse_1<::BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>> $$u__3;
    public:
    // Creating value type constructor for type: $GetLeaderboardEntriesAsync$d__10
    constexpr $GetLeaderboardEntriesAsync$d__10(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::GetLeaderboardEntriesResult> $$t__builder_ = {}, ::GlobalNamespace::HTTPLeaderboardsModel* $$4__this_ = {}, ::OnlineServices::GetLeaderboardFilterData leaderboardFilterData_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::StringW $leaderboardId$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>> $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> $$u__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::API::ApiResponse_1<::BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, leaderboardFilterData{leaderboardFilterData_}, cancellationToken{cancellationToken_}, $leaderboardId$5__2{$leaderboardId$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.GetLeaderboardEntriesResult> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::GetLeaderboardEntriesResult>& dyn_$$t__builder();
    // Get instance field reference: public HTTPLeaderboardsModel <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HTTPLeaderboardsModel*& dyn_$$4__this();
    // Get instance field reference: public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    [[deprecated("Use field access instead!")]] ::OnlineServices::GetLeaderboardFilterData& dyn_leaderboardFilterData();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.String <leaderboardId>5__2
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$leaderboardId$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW>>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.API.ApiResponse`1<BeatSaberAPI.DataTransferObjects.LeaderboardEntries>> <>u__3
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::API::ApiResponse_1<::BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x13AAD40
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x13AB640
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // HTTPLeaderboardsModel/<GetLeaderboardEntriesAsync>d__10
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10::*)()>(&GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel::$GetLeaderboardEntriesAsync$d__10), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
