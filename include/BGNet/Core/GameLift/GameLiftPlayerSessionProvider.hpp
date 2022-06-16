// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.GameLift.IGameLiftPlayerSessionProvider
#include "BGNet/Core/GameLift/IGameLiftPlayerSessionProvider.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: RollingAverage
  class RollingAverage;
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpClient
  class HttpClient;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // Forward declaring type: GameLiftPlayerSessionProvider
  class GameLiftPlayerSessionProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider");
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class GameLiftPlayerSessionProvider : public ::Il2CppObject/*, public ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*/ {
    public:
    // Nested type: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$GetGameLiftPlayerSessionInfo$d__13
    struct $GetGameLiftPlayerSessionInfo$d__13;
    // Nested type: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$Post$d__14_2<TRequest, TResponse>
    template<typename TRequest, typename TResponse>
    struct $Post$d__14_2;
    // Nested type: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$Get$d__15_1<TResponse>
    template<typename TResponse>
    struct $Get$d__15_1;
    // Nested type: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16
    struct $PingAllAwsGameLiftRegions$d__16;
    // Nested type: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$$c
    class $$c;
    // Nested type: ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingRegionAsync$d__18
    struct $PingRegionAsync$d__18;
    public:
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkConfig*) == 0x8);
    // private readonly System.Net.Http.HttpClient _client
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Http::HttpClient* client;
    // Field size check
    static_assert(sizeof(::System::Net::Http::HttpClient*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,RollingAverage> _pingAverages
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>* pingAverages;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>*) == 0x8);
    // private System.Int32 _pingCount
    // Size: 0x4
    // Offset: 0x28
    int pingCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: pingCount and: lastPingTime
    char __padding3[0x4] = {};
    // private System.Int64 _lastPingTime
    // Size: 0x8
    // Offset: 0x30
    int64_t lastPingTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider
    operator ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider() noexcept {
      return *reinterpret_cast<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(this);
    }
    // Creating interface conversion operator: i_IGameLiftPlayerSessionProvider
    inline ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* i_IGameLiftPlayerSessionProvider() noexcept {
      return reinterpret_cast<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(this);
    }
    // static field const value: static private System.Int32 kMatchmakingTimeoutMs
    static constexpr const int kMatchmakingTimeoutMs = 120000;
    // Get static field: static private System.Int32 kMatchmakingTimeoutMs
    static int _get_kMatchmakingTimeoutMs();
    // Set static field: static private System.Int32 kMatchmakingTimeoutMs
    static void _set_kMatchmakingTimeoutMs(int value);
    // static field const value: static private System.Int32 kPingFrequencyMs
    static constexpr const int kPingFrequencyMs = 3000;
    // Get static field: static private System.Int32 kPingFrequencyMs
    static int _get_kPingFrequencyMs();
    // Set static field: static private System.Int32 kPingFrequencyMs
    static void _set_kPingFrequencyMs(int value);
    // static field const value: static private System.Int32 kMaxPingCount
    static constexpr const int kMaxPingCount = 10;
    // Get static field: static private System.Int32 kMaxPingCount
    static int _get_kMaxPingCount();
    // Set static field: static private System.Int32 kMaxPingCount
    static void _set_kMaxPingCount(int value);
    // static field const value: static private System.String kGetMatchmakingInstancePath
    static constexpr const char* kGetMatchmakingInstancePath = "beat_saber_get_multiplayer_instance";
    // Get static field: static private System.String kGetMatchmakingInstancePath
    static ::StringW _get_kGetMatchmakingInstancePath();
    // Set static field: static private System.String kGetMatchmakingInstancePath
    static void _set_kGetMatchmakingInstancePath(::StringW value);
    // static field const value: static private System.String kCancelMatchmakingTicketPath
    static constexpr const char* kCancelMatchmakingTicketPath = "beat_saber_multiplayer_cancel_matchmaking_ticket";
    // Get static field: static private System.String kCancelMatchmakingTicketPath
    static ::StringW _get_kCancelMatchmakingTicketPath();
    // Set static field: static private System.String kCancelMatchmakingTicketPath
    static void _set_kCancelMatchmakingTicketPath(::StringW value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10B87B8
    // Get static field: static private readonly System.String[] _awsGameLiftRegions
    static ::ArrayW<::StringW> _get__awsGameLiftRegions();
    // Set static field: static private readonly System.String[] _awsGameLiftRegions
    static void _set__awsGameLiftRegions(::ArrayW<::StringW> value);
    // Get instance field reference: private readonly INetworkConfig _networkConfig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::INetworkConfig*& dyn__networkConfig();
    // Get instance field reference: private readonly System.Net.Http.HttpClient _client
    [[deprecated("Use field access instead!")]] ::System::Net::Http::HttpClient*& dyn__client();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,RollingAverage> _pingAverages
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RollingAverage*>*& dyn__pingAverages();
    // Get instance field reference: private System.Int32 _pingCount
    [[deprecated("Use field access instead!")]] int& dyn__pingCount();
    // Get instance field reference: private System.Int64 _lastPingTime
    [[deprecated("Use field access instead!")]] int64_t& dyn__lastPingTime();
    // public System.Void .ctor(INetworkConfig networkConfig)
    // Offset: 0x1541D7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLiftPlayerSessionProvider* New_ctor(::GlobalNamespace::INetworkConfig* networkConfig) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLiftPlayerSessionProvider*, creationType>(networkConfig)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1542580
    static void _cctor();
    // public System.Void PollUpdate()
    // Offset: 0x1541EF0
    void PollUpdate();
    // public System.Threading.Tasks.Task`1<BGNet.Core.GameLift.PlayerSessionInfo> GetGameLiftPlayerSessionInfo(IAuthenticationTokenProvider authenticationTokenProvider, System.String userId, BeatmapLevelSelectionMask beatmapLevelSelectionMask, GameplayServerConfiguration gameplayServerConfiguration, System.String secret, System.String code, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1542080
    ::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* GetGameLiftPlayerSessionInfo(::GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider, ::StringW userId, ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<TResponse> Post(System.String path, TRequest request)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TRequest, class TResponse>
    ::System::Threading::Tasks::Task_1<TResponse>* Post(::StringW path, TRequest request) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::Post");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Post", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(path), ::il2cpp_utils::ExtractType(request)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___generic__method, path, request);
    }
    // private System.Threading.Tasks.Task`1<TResponse> Get(System.String path, System.Collections.Generic.Dictionary`2<System.String,System.String> query)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TResponse>
    ::System::Threading::Tasks::Task_1<TResponse>* Get(::StringW path, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* query) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(path), ::il2cpp_utils::ExtractType(query)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>*, false>(this, ___generic__method, path, query);
    }
    // private System.Void PingAllAwsGameLiftRegions()
    // Offset: 0x1541FC0
    void PingAllAwsGameLiftRegions();
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int64> GetAverageLatencies()
    // Offset: 0x15421EC
    ::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* GetAverageLatencies();
    // private System.Threading.Tasks.Task`1<System.ValueTuple`2<System.String,System.Int64>> PingRegionAsync(System.String awsRegion)
    // Offset: 0x1542420
    ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* PingRegionAsync(::StringW awsRegion);
    // static private System.String GetAwsGameLiftRegionEndpoint(System.String awsRegion)
    // Offset: 0x1542520
    static ::StringW GetAwsGameLiftRegionEndpoint(::StringW awsRegion);
    // private System.Threading.Tasks.Task`1<System.ValueTuple`2<System.String,System.Int64>> <PingAllAwsGameLiftRegions>b__16_0(System.String region)
    // Offset: 0x15428DC
    ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* $PingAllAwsGameLiftRegions$b__16_0(::StringW region);
  }; // BGNet.Core.GameLift.GameLiftPlayerSessionProvider
  #pragma pack(pop)
  static check_size<sizeof(GameLiftPlayerSessionProvider), 48 + sizeof(int64_t)> __BGNet_Core_GameLift_GameLiftPlayerSessionProviderSizeCheck;
  static_assert(sizeof(GameLiftPlayerSessionProvider) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo
// Il2CppName: GetGameLiftPlayerSessionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::GameLift::PlayerSessionInfo*>* (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::GlobalNamespace::IAuthenticationTokenProvider*, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetGameLiftPlayerSessionInfo)> {
  static const MethodInfo* get() {
    static auto* authenticationTokenProvider = &::il2cpp_utils::GetClassFromName("", "IAuthenticationTokenProvider")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* beatmapLevelSelectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* gameplayServerConfiguration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider*), "GetGameLiftPlayerSessionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{authenticationTokenProvider, userId, beatmapLevelSelectionMask, gameplayServerConfiguration, secret, code, cancellationToken});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::Post
// Il2CppName: Post
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions
// Il2CppName: PingAllAwsGameLiftRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingAllAwsGameLiftRegions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider*), "PingAllAwsGameLiftRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies
// Il2CppName: GetAverageLatencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int64_t>* (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAverageLatencies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider*), "GetAverageLatencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync
// Il2CppName: PingRegionAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::PingRegionAsync)> {
  static const MethodInfo* get() {
    static auto* awsRegion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider*), "PingRegionAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{awsRegion});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint
// Il2CppName: GetAwsGameLiftRegionEndpoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::GetAwsGameLiftRegionEndpoint)> {
  static const MethodInfo* get() {
    static auto* awsRegion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider*), "GetAwsGameLiftRegionEndpoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{awsRegion});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$b__16_0
// Il2CppName: <PingAllAwsGameLiftRegions>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::StringW, int64_t>>* (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::*)(::StringW)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$b__16_0)> {
  static const MethodInfo* get() {
    static auto* region = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider*), "<PingAllAwsGameLiftRegions>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{region});
  }
};
