// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider
#include "BGNet/Core/GameLift/GameLiftPlayerSessionProvider.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
// Including type: BGNet.Core.GameLift.GetMultiplayerInstanceResponse
#include "BGNet/Core/GameLift/GetMultiplayerInstanceResponse.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::GameLift
namespace BGNet::Core::GameLift {
  // Forward declaring type: PlayerSessionInfo
  class PlayerSessionInfo;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<GetGameLiftPlayerSessionInfo>d__13");
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<GetGameLiftPlayerSessionInfo>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BGNet.Core.GameLift.PlayerSessionInfo> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> $$t__builder;
    // public IAuthenticationTokenProvider authenticationTokenProvider
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAuthenticationTokenProvider*) == 0x8);
    // public BGNet.Core.GameLift.GameLiftPlayerSessionProvider <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x30
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public BeatmapLevelSelectionMask beatmapLevelSelectionMask
    // Size: 0x18
    // Offset: 0x38
    ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration gameplayServerConfiguration
    // Size: 0x18
    // Offset: 0x50
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x68
    ::StringW secret;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x70
    ::StringW code;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x78
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Diagnostics.Stopwatch <stopwatch>5__2
    // Size: 0x8
    // Offset: 0x80
    ::System::Diagnostics::Stopwatch* $stopwatch$5__2;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Stopwatch*) == 0x8);
    // private System.String <ticketId>5__3
    // Size: 0x8
    // Offset: 0x88
    ::StringW $ticketId$5__3;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <placementId>5__4
    // Size: 0x8
    // Offset: 0x90
    ::StringW $placementId$5__4;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AuthenticationToken> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BGNet.Core.GameLift.GetMultiplayerInstanceResponse> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0xA0
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__3
    // Size: 0x8
    // Offset: 0xA8
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__3;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $GetGameLiftPlayerSessionInfo$d__13
    constexpr $GetGameLiftPlayerSessionInfo$d__13(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*> $$t__builder_ = {}, ::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider_ = {}, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* $$4__this_ = {}, ::StringW userId_ = {}, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask_ = {}, ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration_ = {}, ::StringW secret_ = {}, ::StringW code_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Diagnostics::Stopwatch* $stopwatch$5__2_ = {}, ::StringW $ticketId$5__3_ = {}, ::StringW $placementId$5__4_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken> $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> $$u__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, authenticationTokenProvider{authenticationTokenProvider_}, $$4__this{$$4__this_}, userId{userId_}, beatmapLevelSelectionMask{beatmapLevelSelectionMask_}, gameplayServerConfiguration{gameplayServerConfiguration_}, secret{secret_}, code{code_}, cancellationToken{cancellationToken_}, $stopwatch$5__2{$stopwatch$5__2_}, $ticketId$5__3{$ticketId$5__3_}, $placementId$5__4{$placementId$5__4_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BGNet.Core.GameLift.PlayerSessionInfo> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::PlayerSessionInfo*>& dyn_$$t__builder();
    // Get instance field reference: public IAuthenticationTokenProvider authenticationTokenProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAuthenticationTokenProvider*& dyn_authenticationTokenProvider();
    // Get instance field reference: public BGNet.Core.GameLift.GameLiftPlayerSessionProvider <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*& dyn_$$4__this();
    // Get instance field reference: public System.String userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userId();
    // Get instance field reference: public BeatmapLevelSelectionMask beatmapLevelSelectionMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSelectionMask& dyn_beatmapLevelSelectionMask();
    // Get instance field reference: public GameplayServerConfiguration gameplayServerConfiguration
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerConfiguration& dyn_gameplayServerConfiguration();
    // Get instance field reference: public System.String secret
    [[deprecated("Use field access instead!")]] ::StringW& dyn_secret();
    // Get instance field reference: public System.String code
    [[deprecated("Use field access instead!")]] ::StringW& dyn_code();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Diagnostics.Stopwatch <stopwatch>5__2
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Stopwatch*& dyn_$stopwatch$5__2();
    // Get instance field reference: private System.String <ticketId>5__3
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ticketId$5__3();
    // Get instance field reference: private System.String <placementId>5__4
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$placementId$5__4();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AuthenticationToken> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AuthenticationToken>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<BGNet.Core.GameLift.GetMultiplayerInstanceResponse> <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__3
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x1542A48
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x154364C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<GetGameLiftPlayerSessionInfo>d__13
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
