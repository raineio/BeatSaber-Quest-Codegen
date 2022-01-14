// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto);
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/LeaderboardsIdsDto");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsIdsDto
  // [TokenAttribute] Offset: FFFFFFFF
  class HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto : public ::Il2CppObject {
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
    // public System.String[] leaderboardsIds
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> leaderboardsIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::StringW>
    constexpr operator ::ArrayW<::StringW>() const noexcept {
      return leaderboardsIds;
    }
    // Get instance field reference: public System.String[] leaderboardsIds
    ::ArrayW<::StringW>& dyn_leaderboardsIds();
    // public System.Void .ctor()
    // Offset: 0x1372718
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto*, creationType>()));
    }
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.LeaderboardsIdsDto
  #pragma pack(pop)
  static check_size<sizeof(HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto), 16 + sizeof(::ArrayW<::StringW>)> __OnlineServices_API_HTTPAdminLeaderboardsHelper_LeaderboardsIdsDtoSizeCheck;
  static_assert(sizeof(HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsIdsDto::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
