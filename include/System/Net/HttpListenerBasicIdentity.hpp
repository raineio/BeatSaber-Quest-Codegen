// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Principal.GenericIdentity
#include "System/Security/Principal/GenericIdentity.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpListenerBasicIdentity
  class HttpListenerBasicIdentity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpListenerBasicIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListenerBasicIdentity*, "System.Net", "HttpListenerBasicIdentity");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerBasicIdentity
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerBasicIdentity : public ::System::Security::Principal::GenericIdentity {
    public:
    public:
    // private System.String password
    // Size: 0x8
    // Offset: 0x88
    ::StringW password;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return password;
    }
    // Get instance field reference: private System.String password
    [[deprecated("Use field access instead!")]] ::StringW& dyn_password();
    // public System.Void .ctor(System.String username, System.String password)
    // Offset: 0x1A9E020
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerBasicIdentity* New_ctor(::StringW username, ::StringW password) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpListenerBasicIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerBasicIdentity*, creationType>(username, password)));
    }
  }; // System.Net.HttpListenerBasicIdentity
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerBasicIdentity), 136 + sizeof(::StringW)> __System_Net_HttpListenerBasicIdentitySizeCheck;
  static_assert(sizeof(HttpListenerBasicIdentity) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerBasicIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
