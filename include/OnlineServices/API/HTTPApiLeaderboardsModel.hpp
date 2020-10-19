// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.IApiLeaderboardsModel
#include "OnlineServices/API/IApiLeaderboardsModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices::API
namespace OnlineServices::API {
  // Forward declaring type: HTTPLeaderboardsOathHelper
  class HTTPLeaderboardsOathHelper;
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
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntries
  class LeaderboardEntries;
  // Forward declaring type: LeaderboardQuery
  class LeaderboardQuery;
  // Forward declaring type: LevelScoreResult
  class LevelScoreResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPApiLeaderboardsModel
  class HTTPApiLeaderboardsModel : public ::Il2CppObject, public OnlineServices::API::IApiLeaderboardsModel {
    public:
    // Nested type: OnlineServices::API::HTTPApiLeaderboardsModel::$LogoutAsync$d__3
    struct $LogoutAsync$d__3;
    // Nested type: OnlineServices::API::HTTPApiLeaderboardsModel::$GetLeaderboardEntriesAsync$d__4
    struct $GetLeaderboardEntriesAsync$d__4;
    // Nested type: OnlineServices::API::HTTPApiLeaderboardsModel::$SendLevelScoreResultAsync$d__5
    struct $SendLevelScoreResultAsync$d__5;
    // private readonly OnlineServices.API.HTTPLeaderboardsOathHelper _httpLeaderboardsOathHelper
    // Offset: 0x10
    OnlineServices::API::HTTPLeaderboardsOathHelper* httpLeaderboardsOathHelper;
    // Creating conversion operator: operator OnlineServices::API::HTTPLeaderboardsOathHelper*
    constexpr operator OnlineServices::API::HTTPLeaderboardsOathHelper*() const noexcept {
      return httpLeaderboardsOathHelper;
    }
    // static field const value: static private System.String kSendLevelScoreResultPath
    static constexpr const char* kSendLevelScoreResultPath = "/v1/Leaderboard/AddEntry";
    // Get static field: static private System.String kSendLevelScoreResultPath
    static ::Il2CppString* _get_kSendLevelScoreResultPath();
    // Set static field: static private System.String kSendLevelScoreResultPath
    static void _set_kSendLevelScoreResultPath(::Il2CppString* value);
    // static field const value: static private System.String kGetLeaderboardEntriesPath
    static constexpr const char* kGetLeaderboardEntriesPath = "/v1/Leaderboard/Filter";
    // Get static field: static private System.String kGetLeaderboardEntriesPath
    static ::Il2CppString* _get_kGetLeaderboardEntriesPath();
    // Set static field: static private System.String kGetLeaderboardEntriesPath
    static void _set_kGetLeaderboardEntriesPath(::Il2CppString* value);
    // public System.Void LogoutAsync()
    // Offset: 0x1F865E0
    // Implemented from: OnlineServices.API.IApiLeaderboardsModel
    // Base method: System.Void IApiLeaderboardsModel::LogoutAsync()
    void LogoutAsync();
    // public System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<BeatSaberAPI.DataTransferObjects.LeaderboardEntries>> GetLeaderboardEntriesAsync(BeatSaberAPI.DataTransferObjects.LeaderboardQuery leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1F866BC
    // Implemented from: OnlineServices.API.IApiLeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.API.ApiResponse`1<BeatSaberAPI.DataTransferObjects.LeaderboardEntries>> IApiLeaderboardsModel::GetLeaderboardEntriesAsync(BeatSaberAPI.DataTransferObjects.LeaderboardQuery leaderboardQueryDTO, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::API::ApiResponse_1<BeatSaberAPI::DataTransferObjects::LeaderboardEntries*>>* GetLeaderboardEntriesAsync(BeatSaberAPI::DataTransferObjects::LeaderboardQuery* leaderboardQueryDTO, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<OnlineServices.API.Response> SendLevelScoreResultAsync(BeatSaberAPI.DataTransferObjects.LevelScoreResult levelScoreResult, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1F86820
    // Implemented from: OnlineServices.API.IApiLeaderboardsModel
    // Base method: System.Threading.Tasks.Task`1<OnlineServices.API.Response> IApiLeaderboardsModel::SendLevelScoreResultAsync(BeatSaberAPI.DataTransferObjects.LevelScoreResult levelScoreResult, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<OnlineServices::API::Response>* SendLevelScoreResultAsync(BeatSaberAPI::DataTransferObjects::LevelScoreResult* levelScoreResult, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1F86984
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HTTPApiLeaderboardsModel* New_ctor();
  }; // OnlineServices.API.HTTPApiLeaderboardsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPApiLeaderboardsModel*, "OnlineServices.API", "HTTPApiLeaderboardsModel");
#pragma pack(pop)
