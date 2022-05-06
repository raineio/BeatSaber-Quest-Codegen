// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
  // Forward declaring type: LevelScoreUploader
  class LevelScoreUploader;
  // Forward declaring type: PlatformOnlineServicesAvailabilityModel
  class PlatformOnlineServicesAvailabilityModel;
  // Forward declaring type: LeaderboardEntriesResult
  class LeaderboardEntriesResult;
  // Forward declaring type: GetLeaderboardFilterData
  struct GetLeaderboardFilterData;
  // Forward declaring type: LevelScoreResultsData
  struct LevelScoreResultsData;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HTTPLeaderboardsModel
  class HTTPLeaderboardsModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
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
// Type namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ServerManager
  class ServerManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OnlineServices::ServerManager);
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::ServerManager*, "OnlineServices", "ServerManager");
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.ServerManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14
    struct $GetLeaderboardEntriesAsync$d__14;
    public:
    // [InjectAttribute] Offset: 0x10E599C
    // private readonly HTTPLeaderboardsModel _leaderboardsModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::HTTPLeaderboardsModel* leaderboardsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HTTPLeaderboardsModel*) == 0x8);
    // private System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> platformServicesAvailabilityInfoChangedEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::OnlineServices::PlatformServicesAvailabilityInfo*>* platformServicesAvailabilityInfoChangedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::OnlineServices::PlatformServicesAvailabilityInfo*>*) == 0x8);
    // private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::StringW>* scoreForLeaderboardDidUploadEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x30
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: levelScoreUploader
    char __padding3[0x7] = {};
    // private OnlineServices.LevelScoreUploader _levelScoreUploader
    // Size: 0x8
    // Offset: 0x38
    ::OnlineServices::LevelScoreUploader* levelScoreUploader;
    // Field size check
    static_assert(sizeof(::OnlineServices::LevelScoreUploader*) == 0x8);
    // private OnlineServices.PlatformOnlineServicesAvailabilityModel _platformOnlineServicesAvailabilityModel
    // Size: 0x8
    // Offset: 0x40
    ::OnlineServices::PlatformOnlineServicesAvailabilityModel* platformOnlineServicesAvailabilityModel;
    // Field size check
    static_assert(sizeof(::OnlineServices::PlatformOnlineServicesAvailabilityModel*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly HTTPLeaderboardsModel _leaderboardsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HTTPLeaderboardsModel*& dyn__leaderboardsModel();
    // Get instance field reference: private System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> platformServicesAvailabilityInfoChangedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::OnlineServices::PlatformServicesAvailabilityInfo*>*& dyn_platformServicesAvailabilityInfoChangedEvent();
    // Get instance field reference: private System.Action`1<System.String> scoreForLeaderboardDidUploadEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn_scoreForLeaderboardDidUploadEvent();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // Get instance field reference: private OnlineServices.LevelScoreUploader _levelScoreUploader
    [[deprecated("Use field access instead!")]] ::OnlineServices::LevelScoreUploader*& dyn__levelScoreUploader();
    // Get instance field reference: private OnlineServices.PlatformOnlineServicesAvailabilityModel _platformOnlineServicesAvailabilityModel
    [[deprecated("Use field access instead!")]] ::OnlineServices::PlatformOnlineServicesAvailabilityModel*& dyn__platformOnlineServicesAvailabilityModel();
    // public System.Boolean get_initialized()
    // Offset: 0x1358B2C
    bool get_initialized();
    // public System.Void add_platformServicesAvailabilityInfoChangedEvent(System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> value)
    // Offset: 0x135889C
    void add_platformServicesAvailabilityInfoChangedEvent(::System::Action_1<::OnlineServices::PlatformServicesAvailabilityInfo*>* value);
    // public System.Void remove_platformServicesAvailabilityInfoChangedEvent(System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> value)
    // Offset: 0x1358940
    void remove_platformServicesAvailabilityInfoChangedEvent(::System::Action_1<::OnlineServices::PlatformServicesAvailabilityInfo*>* value);
    // public System.Void add_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x13589E4
    void add_scoreForLeaderboardDidUploadEvent(::System::Action_1<::StringW>* value);
    // public System.Void remove_scoreForLeaderboardDidUploadEvent(System.Action`1<System.String> value)
    // Offset: 0x1358A88
    void remove_scoreForLeaderboardDidUploadEvent(::System::Action_1<::StringW>* value);
    // public System.Void .ctor()
    // Offset: 0x1358E08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OnlineServices::ServerManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerManager*, creationType>()));
    }
    // public System.Void Init()
    // Offset: 0x1358B34
    void Init();
    // public System.String GetLeaderboardId(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1358C5C
    ::StringW GetLeaderboardId(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Threading.Tasks.Task`1<OnlineServices.LeaderboardEntriesResult> GetLeaderboardEntriesAsync(OnlineServices.GetLeaderboardFilterData leaderboardFilterData, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1358C88
    ::System::Threading::Tasks::Task_1<::OnlineServices::LeaderboardEntriesResult*>* GetLeaderboardEntriesAsync(::OnlineServices::GetLeaderboardFilterData leaderboardFilterData, ::System::Threading::CancellationToken cancellationToken);
    // public System.Void SendLevelScoreResult(OnlineServices.LevelScoreResultsData levelScoreResultsData)
    // Offset: 0x1358DB4
    void SendLevelScoreResult(::OnlineServices::LevelScoreResultsData levelScoreResultsData);
    // private System.Void <Init>b__12_0(OnlineServices.PlatformServicesAvailabilityInfo availabilityInfo)
    // Offset: 0x1358E10
    void $Init$b__12_0(::OnlineServices::PlatformServicesAvailabilityInfo* availabilityInfo);
    // private System.Void <Init>b__12_1(System.String leaderboardId)
    // Offset: 0x1358E84
    void $Init$b__12_1(::StringW leaderboardId);
  }; // OnlineServices.ServerManager
  #pragma pack(pop)
  static check_size<sizeof(ServerManager), 64 + sizeof(::OnlineServices::PlatformOnlineServicesAvailabilityModel*)> __OnlineServices_ServerManagerSizeCheck;
  static_assert(sizeof(ServerManager) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::ServerManager::get_initialized
// Il2CppName: get_initialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OnlineServices::ServerManager::*)()>(&OnlineServices::ServerManager::get_initialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "get_initialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::add_platformServicesAvailabilityInfoChangedEvent
// Il2CppName: add_platformServicesAvailabilityInfoChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::*)(::System::Action_1<::OnlineServices::PlatformServicesAvailabilityInfo*>*)>(&OnlineServices::ServerManager::add_platformServicesAvailabilityInfoChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("OnlineServices", "PlatformServicesAvailabilityInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "add_platformServicesAvailabilityInfoChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::remove_platformServicesAvailabilityInfoChangedEvent
// Il2CppName: remove_platformServicesAvailabilityInfoChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::*)(::System::Action_1<::OnlineServices::PlatformServicesAvailabilityInfo*>*)>(&OnlineServices::ServerManager::remove_platformServicesAvailabilityInfoChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("OnlineServices", "PlatformServicesAvailabilityInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "remove_platformServicesAvailabilityInfoChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::add_scoreForLeaderboardDidUploadEvent
// Il2CppName: add_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::*)(::System::Action_1<::StringW>*)>(&OnlineServices::ServerManager::add_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "add_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::remove_scoreForLeaderboardDidUploadEvent
// Il2CppName: remove_scoreForLeaderboardDidUploadEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::*)(::System::Action_1<::StringW>*)>(&OnlineServices::ServerManager::remove_scoreForLeaderboardDidUploadEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "remove_scoreForLeaderboardDidUploadEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OnlineServices::ServerManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::*)()>(&OnlineServices::ServerManager::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::GetLeaderboardId
// Il2CppName: GetLeaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OnlineServices::ServerManager::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&OnlineServices::ServerManager::GetLeaderboardId)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "GetLeaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::GetLeaderboardEntriesAsync
// Il2CppName: GetLeaderboardEntriesAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OnlineServices::LeaderboardEntriesResult*>* (OnlineServices::ServerManager::*)(::OnlineServices::GetLeaderboardFilterData, ::System::Threading::CancellationToken)>(&OnlineServices::ServerManager::GetLeaderboardEntriesAsync)> {
  static const MethodInfo* get() {
    static auto* leaderboardFilterData = &::il2cpp_utils::GetClassFromName("OnlineServices", "GetLeaderboardFilterData")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "GetLeaderboardEntriesAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardFilterData, cancellationToken});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::SendLevelScoreResult
// Il2CppName: SendLevelScoreResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::*)(::OnlineServices::LevelScoreResultsData)>(&OnlineServices::ServerManager::SendLevelScoreResult)> {
  static const MethodInfo* get() {
    static auto* levelScoreResultsData = &::il2cpp_utils::GetClassFromName("OnlineServices", "LevelScoreResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "SendLevelScoreResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelScoreResultsData});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::$Init$b__12_0
// Il2CppName: <Init>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::*)(::OnlineServices::PlatformServicesAvailabilityInfo*)>(&OnlineServices::ServerManager::$Init$b__12_0)> {
  static const MethodInfo* get() {
    static auto* availabilityInfo = &::il2cpp_utils::GetClassFromName("OnlineServices", "PlatformServicesAvailabilityInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "<Init>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{availabilityInfo});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::$Init$b__12_1
// Il2CppName: <Init>b__12_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::*)(::StringW)>(&OnlineServices::ServerManager::$Init$b__12_1)> {
  static const MethodInfo* get() {
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager*), "<Init>b__12_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardId});
  }
};
