// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoDto
  class HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto : public ::Il2CppObject {
    public:
    // public System.Boolean exist
    // Offset: 0x10
    bool exist;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return exist;
    }
    // public System.Void .ctor()
    // Offset: 0x1F865C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto* New_ctor();
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoDto
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/LeaderboardsInfoDto");
#pragma pack(pop)
