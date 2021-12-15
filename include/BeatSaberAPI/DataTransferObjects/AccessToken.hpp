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
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: AccessToken
  class AccessToken;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::AccessToken);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::AccessToken*, "BeatSaberAPI.DataTransferObjects", "AccessToken");
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.AccessToken
  // [TokenAttribute] Offset: FFFFFFFF
  class AccessToken : public ::Il2CppObject {
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
    // public System.String token
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String expiration
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* expiration;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public System.String token
    ::Il2CppString*& dyn_token();
    // Get instance field reference: public System.String expiration
    ::Il2CppString*& dyn_expiration();
    // public System.Void .ctor()
    // Offset: 0x12C7988
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AccessToken* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::AccessToken::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AccessToken*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.AccessToken
  #pragma pack(pop)
  static check_size<sizeof(AccessToken), 24 + sizeof(::Il2CppString*)> __BeatSaberAPI_DataTransferObjects_AccessTokenSizeCheck;
  static_assert(sizeof(AccessToken) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::AccessToken::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
