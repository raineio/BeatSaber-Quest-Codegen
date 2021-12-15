// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardsModelLegacyWrapper
#include "GlobalNamespace/LeaderboardsModelLegacyWrapper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.GetLeaderboardEntriesResult
#include "OnlineServices/GetLeaderboardEntriesResult.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: <GetLeaderboardEntriesAsync>d__4
  struct $GetLeaderboardEntriesAsync$d__4;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4, "", "LeaderboardsModelLegacyWrapper/<GetLeaderboardEntriesAsync>d__4");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LeaderboardsModelLegacyWrapper/<GetLeaderboardEntriesAsync>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
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
    // public LeaderboardsModelLegacyWrapper <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LeaderboardsModelLegacyWrapper* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardsModelLegacyWrapper*) == 0x8);
    // public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    // Size: 0x20
    // Offset: 0x30
    OnlineServices::GetLeaderboardFilterData leaderboardFilterData;
    // Field size check
    static_assert(sizeof(OnlineServices::GetLeaderboardFilterData) == 0x20);
    // public LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*) == 0x8);
    // public PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.GetLeaderboardEntriesResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult> $$u__1;
    public:
    // Creating value type constructor for type: $GetLeaderboardEntriesAsync$d__4
    constexpr $GetLeaderboardEntriesAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::LeaderboardsModelLegacyWrapper* $$4__this_ = {}, OnlineServices::GetLeaderboardFilterData leaderboardFilterData_ = {}, GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest_ = {}, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, leaderboardFilterData{leaderboardFilterData_}, asyncRequest{asyncRequest_}, completionHandler{completionHandler_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public LeaderboardsModelLegacyWrapper <>4__this
    GlobalNamespace::LeaderboardsModelLegacyWrapper*& dyn_$$4__this();
    // Get instance field reference: public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    OnlineServices::GetLeaderboardFilterData& dyn_leaderboardFilterData();
    // Get instance field reference: public LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken asyncRequest
    GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*& dyn_asyncRequest();
    // Get instance field reference: public PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler
    GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler*& dyn_completionHandler();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.GetLeaderboardEntriesResult> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x11A3F24
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x11A43F4
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LeaderboardsModelLegacyWrapper/<GetLeaderboardEntriesAsync>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::*)()>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper::$GetLeaderboardEntriesAsync$d__4), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
