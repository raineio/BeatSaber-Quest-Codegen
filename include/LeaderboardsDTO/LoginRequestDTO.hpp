// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LoginRequestDTO
  class LoginRequestDTO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(LeaderboardsDTO::LoginRequestDTO);
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LoginRequestDTO*, "LeaderboardsDTO", "LoginRequestDTO");
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.LoginRequestDTO
  // [TokenAttribute] Offset: FFFFFFFF
  class LoginRequestDTO : public ::Il2CppObject {
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
    // public System.String platform
    // Size: 0x8
    // Offset: 0x10
    ::StringW platform;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String platformUserId
    // Size: 0x8
    // Offset: 0x18
    ::StringW platformUserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String platformAuthToken
    // Size: 0x8
    // Offset: 0x20
    ::StringW platformAuthToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String platformEnviroment
    // Size: 0x8
    // Offset: 0x28
    ::StringW platformEnviroment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String publicUserDisplayName
    // Size: 0x8
    // Offset: 0x30
    ::StringW publicUserDisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String buildVersion
    // Size: 0x8
    // Offset: 0x38
    ::StringW buildVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String platform
    ::StringW& dyn_platform();
    // Get instance field reference: public System.String platformUserId
    ::StringW& dyn_platformUserId();
    // Get instance field reference: public System.String platformAuthToken
    ::StringW& dyn_platformAuthToken();
    // Get instance field reference: public System.String platformEnviroment
    ::StringW& dyn_platformEnviroment();
    // Get instance field reference: public System.String publicUserDisplayName
    ::StringW& dyn_publicUserDisplayName();
    // Get instance field reference: public System.String buildVersion
    ::StringW& dyn_buildVersion();
    // public System.Void .ctor()
    // Offset: 0x11A3AC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginRequestDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LeaderboardsDTO::LoginRequestDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginRequestDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.LoginRequestDTO
  #pragma pack(pop)
  static check_size<sizeof(LoginRequestDTO), 56 + sizeof(::StringW)> __LeaderboardsDTO_LoginRequestDTOSizeCheck;
  static_assert(sizeof(LoginRequestDTO) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LeaderboardsDTO::LoginRequestDTO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
