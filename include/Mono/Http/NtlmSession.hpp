// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: MessageBase
  class MessageBase;
}
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
// Type namespace: Mono.Http
namespace Mono::Http {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Http.NtlmSession
  class NtlmSession : public ::Il2CppObject {
    public:
    // private Mono.Security.Protocol.Ntlm.MessageBase message
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Protocol::Ntlm::MessageBase* message;
    // Field size check
    static_assert(sizeof(Mono::Security::Protocol::Ntlm::MessageBase*) == 0x8);
    // Creating value type constructor for type: NtlmSession
    NtlmSession(Mono::Security::Protocol::Ntlm::MessageBase* message_ = {}) noexcept : message{message_} {}
    // Creating conversion operator: operator Mono::Security::Protocol::Ntlm::MessageBase*
    constexpr operator Mono::Security::Protocol::Ntlm::MessageBase*() const noexcept {
      return message;
    }
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x15E8DC0
    System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Void .ctor()
    // Offset: 0x15E938C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtlmSession* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Http::NtlmSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtlmSession*, creationType>()));
    }
  }; // Mono.Http.NtlmSession
  #pragma pack(pop)
  static check_size<sizeof(NtlmSession), 16 + sizeof(Mono::Security::Protocol::Ntlm::MessageBase*)> __Mono_Http_NtlmSessionSizeCheck;
  static_assert(sizeof(NtlmSession) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::NtlmSession*, "Mono.Http", "NtlmSession");
// Writing MetadataGetter for method: Mono::Http::NtlmSession::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Authorization* (Mono::Http::NtlmSession::*)(::Il2CppString*, System::Net::WebRequest*, System::Net::ICredentials*)>(&Mono::Http::NtlmSession::Authenticate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmSession*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::WebRequest*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::ICredentials*>()});
  }
};
// Writing MetadataGetter for method: Mono::Http::NtlmSession::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
