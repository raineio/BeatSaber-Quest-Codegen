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
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto);
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/ServerStatusResultDto");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.ServerStatusResultDto
  // [TokenAttribute] Offset: FFFFFFFF
  class HTTPAdminLeaderboardsHelper::ServerStatusResultDto : public ::Il2CppObject {
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
    // public System.Boolean everythingOK
    // Size: 0x1
    // Offset: 0x10
    bool everythingOK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return everythingOK;
    }
    // Get instance field reference: public System.Boolean everythingOK
    bool& dyn_everythingOK();
    // public System.Void .ctor()
    // Offset: 0x137356C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPAdminLeaderboardsHelper::ServerStatusResultDto* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPAdminLeaderboardsHelper::ServerStatusResultDto*, creationType>()));
    }
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/OnlineServices.API.ServerStatusResultDto
  #pragma pack(pop)
  static check_size<sizeof(HTTPAdminLeaderboardsHelper::ServerStatusResultDto), 16 + sizeof(bool)> __OnlineServices_API_HTTPAdminLeaderboardsHelper_ServerStatusResultDtoSizeCheck;
  static_assert(sizeof(HTTPAdminLeaderboardsHelper::ServerStatusResultDto) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPAdminLeaderboardsHelper::ServerStatusResultDto::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
