// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.IAuthenticationModule
#include "System/Net/IAuthenticationModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: BasicClient
  class BasicClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::BasicClient);
DEFINE_IL2CPP_ARG_TYPE(System::Net::BasicClient*, "System.Net", "BasicClient");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.BasicClient
  // [TokenAttribute] Offset: FFFFFFFF
  class BasicClient : public ::Il2CppObject/*, public System::Net::IAuthenticationModule*/ {
    public:
    // Creating interface conversion operator: operator System::Net::IAuthenticationModule
    operator System::Net::IAuthenticationModule() noexcept {
      return *reinterpret_cast<System::Net::IAuthenticationModule*>(this);
    }
    // public System.String get_AuthenticationType()
    // Offset: 0x15E226C
    ::StringW get_AuthenticationType();
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x15E1D94
    System::Net::Authorization* Authenticate(::StringW challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // static private System.Byte[] GetBytes(System.String str)
    // Offset: 0x15E21A8
    static ::ArrayW<uint8_t> GetBytes(::StringW str);
    // static private System.Net.Authorization InternalAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x15E1E48
    static System::Net::Authorization* InternalAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Net.Authorization PreAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x15E2260
    System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Void .ctor()
    // Offset: 0x15E0DE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::BasicClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicClient*, creationType>()));
    }
  }; // System.Net.BasicClient
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::BasicClient::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::BasicClient::*)()>(&System::Net::BasicClient::get_AuthenticationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::BasicClient*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::BasicClient::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (System::Net::BasicClient::*)(::StringW, System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::BasicClient::Authenticate)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::BasicClient*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge, webRequest, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::BasicClient::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::Net::BasicClient::GetBytes)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::BasicClient*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Net::BasicClient::InternalAuthenticate
// Il2CppName: InternalAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (*)(System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::BasicClient::InternalAuthenticate)> {
  static const MethodInfo* get() {
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::BasicClient*), "InternalAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webRequest, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::BasicClient::PreAuthenticate
// Il2CppName: PreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (System::Net::BasicClient::*)(System::Net::WebRequest*, System::Net::ICredentials*)>(&System::Net::BasicClient::PreAuthenticate)> {
  static const MethodInfo* get() {
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::BasicClient*), "PreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webRequest, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::BasicClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
