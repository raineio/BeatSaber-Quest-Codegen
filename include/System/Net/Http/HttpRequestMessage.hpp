// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HttpRequestHeaders
  class HttpRequestHeaders;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpMethod
  class HttpMethod;
  // Forward declaring type: HttpContent
  class HttpContent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::HttpRequestMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpRequestMessage*, "System.Net.Http", "HttpRequestMessage");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpRequestMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpRequestMessage : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Net.Http.Headers.HttpRequestHeaders headers
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Http::Headers::HttpRequestHeaders* headers;
    // Field size check
    static_assert(sizeof(::System::Net::Http::Headers::HttpRequestHeaders*) == 0x8);
    // private System.Net.Http.HttpMethod method
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Http::HttpMethod* method;
    // Field size check
    static_assert(sizeof(::System::Net::Http::HttpMethod*) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x20
    ::System::Version* version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Uri uri
    // Size: 0x8
    // Offset: 0x28
    ::System::Uri* uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Boolean is_used
    // Size: 0x1
    // Offset: 0x30
    bool is_used;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x31
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: Content
    char __padding5[0x6] = {};
    // private System.Net.Http.HttpContent <Content>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::Http::HttpContent* Content;
    // Field size check
    static_assert(sizeof(::System::Net::Http::HttpContent*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Net.Http.Headers.HttpRequestHeaders headers
    [[deprecated("Use field access instead!")]] ::System::Net::Http::Headers::HttpRequestHeaders*& dyn_headers();
    // Get instance field reference: private System.Net.Http.HttpMethod method
    [[deprecated("Use field access instead!")]] ::System::Net::Http::HttpMethod*& dyn_method();
    // Get instance field reference: private System.Version version
    [[deprecated("Use field access instead!")]] ::System::Version*& dyn_version();
    // Get instance field reference: private System.Uri uri
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_uri();
    // Get instance field reference: private System.Boolean is_used
    [[deprecated("Use field access instead!")]] bool& dyn_is_used();
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private System.Net.Http.HttpContent <Content>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Http::HttpContent*& dyn_$Content$k__BackingField();
    // public System.Net.Http.HttpContent get_Content()
    // Offset: 0x1A013C8
    ::System::Net::Http::HttpContent* get_Content();
    // public System.Void set_Content(System.Net.Http.HttpContent value)
    // Offset: 0x1A013D0
    void set_Content(::System::Net::Http::HttpContent* value);
    // public System.Net.Http.Headers.HttpRequestHeaders get_Headers()
    // Offset: 0x19FD238
    ::System::Net::Http::Headers::HttpRequestHeaders* get_Headers();
    // public System.Net.Http.HttpMethod get_Method()
    // Offset: 0x1A013D8
    ::System::Net::Http::HttpMethod* get_Method();
    // public System.Void set_Method(System.Net.Http.HttpMethod value)
    // Offset: 0x1A01318
    void set_Method(::System::Net::Http::HttpMethod* value);
    // public System.Uri get_RequestUri()
    // Offset: 0x1A013E0
    ::System::Uri* get_RequestUri();
    // public System.Void set_RequestUri(System.Uri value)
    // Offset: 0x19FD154
    void set_RequestUri(::System::Uri* value);
    // public System.Version get_Version()
    // Offset: 0x19FE988
    ::System::Version* get_Version();
    // public System.Void .ctor(System.Net.Http.HttpMethod method, System.Uri requestUri)
    // Offset: 0x19FCC5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestMessage* New_ctor(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::HttpRequestMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestMessage*, creationType>(method, requestUri)));
    }
    // static private System.Boolean IsAllowedAbsoluteUri(System.Uri uri)
    // Offset: 0x1A013E8
    static bool IsAllowedAbsoluteUri(::System::Uri* uri);
    // public System.Void Dispose()
    // Offset: 0x1A01550
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1A01560
    void Dispose(bool disposing);
    // System.Boolean SetIsUsed()
    // Offset: 0x19FD134
    bool SetIsUsed();
    // public override System.String ToString()
    // Offset: 0x1A01594
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.HttpRequestMessage
  #pragma pack(pop)
  static check_size<sizeof(HttpRequestMessage), 56 + sizeof(::System::Net::Http::HttpContent*)> __System_Net_Http_HttpRequestMessageSizeCheck;
  static_assert(sizeof(HttpRequestMessage) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::get_Content
// Il2CppName: get_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpContent* (System::Net::Http::HttpRequestMessage::*)()>(&System::Net::Http::HttpRequestMessage::get_Content)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "get_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::set_Content
// Il2CppName: set_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpContent*)>(&System::Net::Http::HttpRequestMessage::set_Content)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpContent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "set_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::HttpRequestHeaders* (System::Net::Http::HttpRequestMessage::*)()>(&System::Net::Http::HttpRequestMessage::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpMethod* (System::Net::Http::HttpRequestMessage::*)()>(&System::Net::Http::HttpRequestMessage::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod*)>(&System::Net::Http::HttpRequestMessage::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::get_RequestUri
// Il2CppName: get_RequestUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::Http::HttpRequestMessage::*)()>(&System::Net::Http::HttpRequestMessage::get_RequestUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "get_RequestUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::set_RequestUri
// Il2CppName: set_RequestUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpRequestMessage::*)(::System::Uri*)>(&System::Net::Http::HttpRequestMessage::set_RequestUri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "set_RequestUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::Net::Http::HttpRequestMessage::*)()>(&System::Net::Http::HttpRequestMessage::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri
// Il2CppName: IsAllowedAbsoluteUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Uri*)>(&System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "IsAllowedAbsoluteUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpRequestMessage::*)()>(&System::Net::Http::HttpRequestMessage::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpRequestMessage::*)(bool)>(&System::Net::Http::HttpRequestMessage::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::SetIsUsed
// Il2CppName: SetIsUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::HttpRequestMessage::*)()>(&System::Net::Http::HttpRequestMessage::SetIsUsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "SetIsUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpRequestMessage::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::HttpRequestMessage::*)()>(&System::Net::Http::HttpRequestMessage::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpRequestMessage*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
