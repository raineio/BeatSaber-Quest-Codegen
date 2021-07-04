// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkCredential
  class NetworkCredential : public ::Il2CppObject/*, public System::Net::ICredentials*/ {
    public:
    // private System.String m_domain
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_domain;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Security.SecureString m_password
    // Size: 0x8
    // Offset: 0x20
    System::Security::SecureString* m_password;
    // Field size check
    static_assert(sizeof(System::Security::SecureString*) == 0x8);
    // Creating value type constructor for type: NetworkCredential
    NetworkCredential(::Il2CppString* m_domain_ = {}, ::Il2CppString* m_userName_ = {}, System::Security::SecureString* m_password_ = {}) noexcept : m_domain{m_domain_}, m_userName{m_userName_}, m_password{m_password_} {}
    // Creating interface conversion operator: operator System::Net::ICredentials
    operator System::Net::ICredentials() noexcept {
      return *reinterpret_cast<System::Net::ICredentials*>(this);
    }
    // public System.Void .ctor(System.String userName, System.String password)
    // Offset: 0x165D05C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkCredential* New_ctor(::Il2CppString* userName, ::Il2CppString* password) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkCredential::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkCredential*, creationType>(userName, password)));
    }
    // public System.Void .ctor(System.String userName, System.String password, System.String domain)
    // Offset: 0x165D0CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkCredential* New_ctor(::Il2CppString* userName, ::Il2CppString* password, ::Il2CppString* domain) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkCredential::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkCredential*, creationType>(userName, password, domain)));
    }
    // public System.String get_UserName()
    // Offset: 0x165D2B8
    ::Il2CppString* get_UserName();
    // public System.Void set_UserName(System.String value)
    // Offset: 0x165D1AC
    void set_UserName(::Il2CppString* value);
    // public System.String get_Password()
    // Offset: 0x165D2C0
    ::Il2CppString* get_Password();
    // public System.Void set_Password(System.String value)
    // Offset: 0x165D21C
    void set_Password(::Il2CppString* value);
    // public System.String get_Domain()
    // Offset: 0x165D2D8
    ::Il2CppString* get_Domain();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x165D248
    void set_Domain(::Il2CppString* value);
    // System.String InternalGetUserName()
    // Offset: 0x165D2E0
    ::Il2CppString* InternalGetUserName();
    // System.String InternalGetPassword()
    // Offset: 0x165D2CC
    ::Il2CppString* InternalGetPassword();
    // System.String InternalGetDomain()
    // Offset: 0x165D2E8
    ::Il2CppString* InternalGetDomain();
    // public System.Net.NetworkCredential GetCredential(System.Uri uri, System.String authType)
    // Offset: 0x165D2F0
    System::Net::NetworkCredential* GetCredential(System::Uri* uri, ::Il2CppString* authType);
  }; // System.Net.NetworkCredential
  #pragma pack(pop)
  static check_size<sizeof(NetworkCredential), 32 + sizeof(System::Security::SecureString*)> __System_Net_NetworkCredentialSizeCheck;
  static_assert(sizeof(NetworkCredential) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkCredential*, "System.Net", "NetworkCredential");
// Writing MetadataGetter for method: System::Net::NetworkCredential::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkCredential::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkCredential::get_UserName
// Il2CppName: get_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::get_UserName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "get_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::set_UserName
// Il2CppName: set_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkCredential::*)(::Il2CppString*)>(&System::Net::NetworkCredential::set_UserName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "set_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::get_Password
// Il2CppName: get_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::get_Password)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "get_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::set_Password
// Il2CppName: set_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkCredential::*)(::Il2CppString*)>(&System::Net::NetworkCredential::set_Password)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "set_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::get_Domain
// Il2CppName: get_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::get_Domain)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "get_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::set_Domain
// Il2CppName: set_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkCredential::*)(::Il2CppString*)>(&System::Net::NetworkCredential::set_Domain)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "set_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::InternalGetUserName
// Il2CppName: InternalGetUserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::InternalGetUserName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "InternalGetUserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::InternalGetPassword
// Il2CppName: InternalGetPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::InternalGetPassword)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "InternalGetPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::InternalGetDomain
// Il2CppName: InternalGetDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkCredential::*)()>(&System::Net::NetworkCredential::InternalGetDomain)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "InternalGetDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkCredential::GetCredential
// Il2CppName: GetCredential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkCredential* (System::Net::NetworkCredential::*)(System::Uri*, ::Il2CppString*)>(&System::Net::NetworkCredential::GetCredential)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkCredential*), "GetCredential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Uri*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
