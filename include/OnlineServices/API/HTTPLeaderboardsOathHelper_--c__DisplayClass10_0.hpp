// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Forward declaring type: <>c__DisplayClass10_0
  class $$c__DisplayClass10_0;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<>c__DisplayClass10_0");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0 : public ::Il2CppObject {
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
    // public UnityEngine.Networking.UnityWebRequest webRequest
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Networking::UnityWebRequest* webRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Size: 0x8
    // Offset: 0x18
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Networking.UnityWebRequest webRequest
    UnityEngine::Networking::UnityWebRequest*& dyn_webRequest();
    // Get instance field reference: public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    OnlineServices::API::HTTPLeaderboardsOathHelper*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x13747DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0), 24 + sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*)> __OnlineServices_API_HTTPLeaderboardsOathHelper_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
