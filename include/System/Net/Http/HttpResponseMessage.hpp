// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.HttpStatusCode
#include "System/Net/HttpStatusCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HttpResponseHeaders
  class HttpResponseHeaders;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpContent
  class HttpContent;
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpResponseMessage
  class HttpResponseMessage : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Net.Http.Headers.HttpResponseHeaders headers
    // Size: 0x8
    // Offset: 0x10
    System::Net::Http::Headers::HttpResponseHeaders* headers;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::HttpResponseHeaders*) == 0x8);
    // private System.String reasonPhrase
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* reasonPhrase;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Net.HttpStatusCode statusCode
    // Size: 0x4
    // Offset: 0x20
    System::Net::HttpStatusCode statusCode;
    // Field size check
    static_assert(sizeof(System::Net::HttpStatusCode) == 0x4);
    // Padding between fields: statusCode and: version
    char __padding2[0x4] = {};
    // private System.Version version
    // Size: 0x8
    // Offset: 0x28
    System::Version* version;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x30
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: Content
    char __padding4[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDE5AF0
    // private System.Net.Http.HttpContent <Content>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    System::Net::Http::HttpContent* Content;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpContent*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE5B00
    // private System.Net.Http.HttpRequestMessage <RequestMessage>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    System::Net::Http::HttpRequestMessage* RequestMessage;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpRequestMessage*) == 0x8);
    // Creating value type constructor for type: HttpResponseMessage
    HttpResponseMessage(System::Net::Http::Headers::HttpResponseHeaders* headers_ = {}, ::Il2CppString* reasonPhrase_ = {}, System::Net::HttpStatusCode statusCode_ = {}, System::Version* version_ = {}, bool disposed_ = {}, System::Net::Http::HttpContent* Content_ = {}, System::Net::Http::HttpRequestMessage* RequestMessage_ = {}) noexcept : headers{headers_}, reasonPhrase{reasonPhrase_}, statusCode{statusCode_}, version{version_}, disposed{disposed_}, Content{Content_}, RequestMessage{RequestMessage_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Net.HttpStatusCode statusCode)
    // Offset: 0x159EEB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpResponseMessage* New_ctor(System::Net::HttpStatusCode statusCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpResponseMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpResponseMessage*, creationType>(statusCode)));
    }
    // public System.Net.Http.HttpContent get_Content()
    // Offset: 0x15A1B2C
    System::Net::Http::HttpContent* get_Content();
    // public System.Void set_Content(System.Net.Http.HttpContent value)
    // Offset: 0x15A1B34
    void set_Content(System::Net::Http::HttpContent* value);
    // public System.Net.Http.Headers.HttpResponseHeaders get_Headers()
    // Offset: 0x159EF7C
    System::Net::Http::Headers::HttpResponseHeaders* get_Headers();
    // public System.Boolean get_IsSuccessStatusCode()
    // Offset: 0x15A1B3C
    bool get_IsSuccessStatusCode();
    // public System.String get_ReasonPhrase()
    // Offset: 0x15A1B50
    ::Il2CppString* get_ReasonPhrase();
    // public System.Void set_ReasonPhrase(System.String value)
    // Offset: 0x15A1B6C
    void set_ReasonPhrase(::Il2CppString* value);
    // public System.Void set_RequestMessage(System.Net.Http.HttpRequestMessage value)
    // Offset: 0x15A1B74
    void set_RequestMessage(System::Net::Http::HttpRequestMessage* value);
    // public System.Net.HttpStatusCode get_StatusCode()
    // Offset: 0x15A1B7C
    System::Net::HttpStatusCode get_StatusCode();
    // public System.Void set_StatusCode(System.Net.HttpStatusCode value)
    // Offset: 0x15A1AA8
    void set_StatusCode(System::Net::HttpStatusCode value);
    // public System.Version get_Version()
    // Offset: 0x15A1B84
    System::Version* get_Version();
    // public System.Void Dispose()
    // Offset: 0x15A1BF8
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x15A1C08
    void Dispose(bool disposing);
    // public System.Net.Http.HttpResponseMessage EnsureSuccessStatusCode()
    // Offset: 0x159DC18
    System::Net::Http::HttpResponseMessage* EnsureSuccessStatusCode();
    // public override System.String ToString()
    // Offset: 0x15A1C3C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.HttpResponseMessage
  #pragma pack(pop)
  static check_size<sizeof(HttpResponseMessage), 64 + sizeof(System::Net::Http::HttpRequestMessage*)> __System_Net_Http_HttpResponseMessageSizeCheck;
  static_assert(sizeof(HttpResponseMessage) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpResponseMessage*, "System.Net.Http", "HttpResponseMessage");
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::get_Content
// Il2CppName: get_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::HttpContent* (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_Content)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "get_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::set_Content
// Il2CppName: set_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(System::Net::Http::HttpContent*)>(&System::Net::Http::HttpResponseMessage::set_Content)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "set_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::Http::HttpContent*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::HttpResponseHeaders* (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_Headers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::get_IsSuccessStatusCode
// Il2CppName: get_IsSuccessStatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_IsSuccessStatusCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "get_IsSuccessStatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::get_ReasonPhrase
// Il2CppName: get_ReasonPhrase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_ReasonPhrase)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "get_ReasonPhrase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::set_ReasonPhrase
// Il2CppName: set_ReasonPhrase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(::Il2CppString*)>(&System::Net::Http::HttpResponseMessage::set_ReasonPhrase)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "set_ReasonPhrase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::set_RequestMessage
// Il2CppName: set_RequestMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(System::Net::Http::HttpRequestMessage*)>(&System::Net::Http::HttpResponseMessage::set_RequestMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "set_RequestMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::Http::HttpRequestMessage*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpStatusCode (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_StatusCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(System::Net::HttpStatusCode)>(&System::Net::Http::HttpResponseMessage::set_StatusCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::HttpStatusCode>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Version* (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_Version)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(bool)>(&System::Net::Http::HttpResponseMessage::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::EnsureSuccessStatusCode
// Il2CppName: EnsureSuccessStatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::HttpResponseMessage* (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::EnsureSuccessStatusCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "EnsureSuccessStatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpResponseMessage::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpResponseMessage*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
