// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerRequestUriBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerRequestUriBuilder : public ::Il2CppObject {
    public:
    // Nested type: System::Net::HttpListenerRequestUriBuilder::ParsingResult
    struct ParsingResult;
    // Nested type: System::Net::HttpListenerRequestUriBuilder::EncodingType
    struct EncodingType;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly System.String rawUri
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* rawUri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String cookedUriScheme
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* cookedUriScheme;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String cookedUriHost
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* cookedUriHost;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String cookedUriPath
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* cookedUriPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String cookedUriQuery
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* cookedUriQuery;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Text.StringBuilder requestUriString
    // Size: 0x8
    // Offset: 0x38
    System::Text::StringBuilder* requestUriString;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Collections.Generic.List`1<System.Byte> rawOctets
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<uint8_t>* rawOctets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<uint8_t>*) == 0x8);
    // private System.String rawPath
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* rawPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Uri requestUri
    // Size: 0x8
    // Offset: 0x50
    System::Uri* requestUri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    public:
    // Get static field: static private readonly System.Boolean useCookedRequestUrl
    static bool _get_useCookedRequestUrl();
    // Set static field: static private readonly System.Boolean useCookedRequestUrl
    static void _set_useCookedRequestUrl(bool value);
    // Get static field: static private readonly System.Text.Encoding utf8Encoding
    static System::Text::Encoding* _get_utf8Encoding();
    // Set static field: static private readonly System.Text.Encoding utf8Encoding
    static void _set_utf8Encoding(System::Text::Encoding* value);
    // Get static field: static private readonly System.Text.Encoding ansiEncoding
    static System::Text::Encoding* _get_ansiEncoding();
    // Set static field: static private readonly System.Text.Encoding ansiEncoding
    static void _set_ansiEncoding(System::Text::Encoding* value);
    // Get instance field reference: private readonly System.String rawUri
    ::Il2CppString*& dyn_rawUri();
    // Get instance field reference: private readonly System.String cookedUriScheme
    ::Il2CppString*& dyn_cookedUriScheme();
    // Get instance field reference: private readonly System.String cookedUriHost
    ::Il2CppString*& dyn_cookedUriHost();
    // Get instance field reference: private readonly System.String cookedUriPath
    ::Il2CppString*& dyn_cookedUriPath();
    // Get instance field reference: private readonly System.String cookedUriQuery
    ::Il2CppString*& dyn_cookedUriQuery();
    // Get instance field reference: private System.Text.StringBuilder requestUriString
    System::Text::StringBuilder*& dyn_requestUriString();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Byte> rawOctets
    System::Collections::Generic::List_1<uint8_t>*& dyn_rawOctets();
    // Get instance field reference: private System.String rawPath
    ::Il2CppString*& dyn_rawPath();
    // Get instance field reference: private System.Uri requestUri
    System::Uri*& dyn_requestUri();
    // static private System.Void .cctor()
    // Offset: 0x18433E8
    static void _cctor();
    // private System.Void .ctor(System.String rawUri, System.String cookedUriScheme, System.String cookedUriHost, System.String cookedUriPath, System.String cookedUriQuery)
    // Offset: 0x184353C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerRequestUriBuilder* New_ctor(::Il2CppString* rawUri, ::Il2CppString* cookedUriScheme, ::Il2CppString* cookedUriHost, ::Il2CppString* cookedUriPath, ::Il2CppString* cookedUriQuery) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListenerRequestUriBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerRequestUriBuilder*, creationType>(rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery)));
    }
    // static public System.Uri GetRequestUri(System.String rawUri, System.String cookedUriScheme, System.String cookedUriHost, System.String cookedUriPath, System.String cookedUriQuery)
    // Offset: 0x1843134
    static System::Uri* GetRequestUri(::Il2CppString* rawUri, ::Il2CppString* cookedUriScheme, ::Il2CppString* cookedUriHost, ::Il2CppString* cookedUriPath, ::Il2CppString* cookedUriQuery);
    // private System.Uri Build()
    // Offset: 0x1843690
    System::Uri* Build();
    // private System.Void BuildRequestUriUsingCookedPath()
    // Offset: 0x18437A8
    void BuildRequestUriUsingCookedPath();
    // private System.Void BuildRequestUriUsingRawPath()
    // Offset: 0x1843A34
    void BuildRequestUriUsingRawPath();
    // static private System.Text.Encoding GetEncoding(System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType type)
    // Offset: 0x1843F40
    static System::Text::Encoding* GetEncoding(System::Net::HttpListenerRequestUriBuilder::EncodingType type);
    // private System.Net.HttpListenerRequestUriBuilder/System.Net.ParsingResult BuildRequestUriUsingRawPath(System.Text.Encoding encoding)
    // Offset: 0x1843FD8
    System::Net::HttpListenerRequestUriBuilder::ParsingResult BuildRequestUriUsingRawPath(System::Text::Encoding* encoding);
    // private System.Net.HttpListenerRequestUriBuilder/System.Net.ParsingResult ParseRawPath(System.Text.Encoding encoding)
    // Offset: 0x1844218
    System::Net::HttpListenerRequestUriBuilder::ParsingResult ParseRawPath(System::Text::Encoding* encoding);
    // private System.Boolean AppendUnicodeCodePointValuePercentEncoded(System.String codePoint)
    // Offset: 0x18446D8
    bool AppendUnicodeCodePointValuePercentEncoded(::Il2CppString* codePoint);
    // private System.Boolean AddPercentEncodedOctetToRawOctetsList(System.Text.Encoding encoding, System.String escapedCharacter)
    // Offset: 0x1844994
    bool AddPercentEncodedOctetToRawOctetsList(System::Text::Encoding* encoding, ::Il2CppString* escapedCharacter);
    // private System.Boolean EmptyDecodeAndAppendRawOctetsList(System.Text.Encoding encoding)
    // Offset: 0x184436C
    bool EmptyDecodeAndAppendRawOctetsList(System::Text::Encoding* encoding);
    // static private System.Void AppendOctetsPercentEncoded(System.Text.StringBuilder target, System.Collections.Generic.IEnumerable`1<System.Byte> octets)
    // Offset: 0x1844AB0
    static void AppendOctetsPercentEncoded(System::Text::StringBuilder* target, System::Collections::Generic::IEnumerable_1<uint8_t>* octets);
    // static private System.String GetOctetsAsString(System.Collections.Generic.IEnumerable`1<System.Byte> octets)
    // Offset: 0x1844D90
    static ::Il2CppString* GetOctetsAsString(System::Collections::Generic::IEnumerable_1<uint8_t>* octets);
    // static private System.String GetPath(System.String uriString)
    // Offset: 0x1843DE4
    static ::Il2CppString* GetPath(::Il2CppString* uriString);
    // static private System.String AddSlashToAsteriskOnlyPath(System.String path)
    // Offset: 0x184360C
    static ::Il2CppString* AddSlashToAsteriskOnlyPath(::Il2CppString* path);
    // private System.Void LogWarning(System.String methodName, System.String message, params System.Object[] args)
    // Offset: 0x1843DA8
    void LogWarning(::Il2CppString* methodName, ::Il2CppString* message, ::ArrayW<::Il2CppObject*> args);
  }; // System.Net.HttpListenerRequestUriBuilder
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerRequestUriBuilder), 80 + sizeof(System::Uri*)> __System_Net_HttpListenerRequestUriBuilderSizeCheck;
  static_assert(sizeof(HttpListenerRequestUriBuilder) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerRequestUriBuilder*, "System.Net", "HttpListenerRequestUriBuilder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HttpListenerRequestUriBuilder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::GetRequestUri
// Il2CppName: GetRequestUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Net::HttpListenerRequestUriBuilder::GetRequestUri)> {
  static const MethodInfo* get() {
    static auto* rawUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cookedUriScheme = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cookedUriHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cookedUriPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cookedUriQuery = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "GetRequestUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::Build
// Il2CppName: Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri* (System::Net::HttpListenerRequestUriBuilder::*)()>(&System::Net::HttpListenerRequestUriBuilder::Build)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath
// Il2CppName: BuildRequestUriUsingCookedPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequestUriBuilder::*)()>(&System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "BuildRequestUriUsingCookedPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath
// Il2CppName: BuildRequestUriUsingRawPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequestUriBuilder::*)()>(&System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "BuildRequestUriUsingRawPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::GetEncoding
// Il2CppName: GetEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (*)(System::Net::HttpListenerRequestUriBuilder::EncodingType)>(&System::Net::HttpListenerRequestUriBuilder::GetEncoding)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerRequestUriBuilder/EncodingType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "GetEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath
// Il2CppName: BuildRequestUriUsingRawPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerRequestUriBuilder::ParsingResult (System::Net::HttpListenerRequestUriBuilder::*)(System::Text::Encoding*)>(&System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath)> {
  static const MethodInfo* get() {
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "BuildRequestUriUsingRawPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoding});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::ParseRawPath
// Il2CppName: ParseRawPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerRequestUriBuilder::ParsingResult (System::Net::HttpListenerRequestUriBuilder::*)(System::Text::Encoding*)>(&System::Net::HttpListenerRequestUriBuilder::ParseRawPath)> {
  static const MethodInfo* get() {
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "ParseRawPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoding});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded
// Il2CppName: AppendUnicodeCodePointValuePercentEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequestUriBuilder::*)(::Il2CppString*)>(&System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded)> {
  static const MethodInfo* get() {
    static auto* codePoint = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "AppendUnicodeCodePointValuePercentEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codePoint});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList
// Il2CppName: AddPercentEncodedOctetToRawOctetsList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequestUriBuilder::*)(System::Text::Encoding*, ::Il2CppString*)>(&System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList)> {
  static const MethodInfo* get() {
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    static auto* escapedCharacter = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "AddPercentEncodedOctetToRawOctetsList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoding, escapedCharacter});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList
// Il2CppName: EmptyDecodeAndAppendRawOctetsList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerRequestUriBuilder::*)(System::Text::Encoding*)>(&System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList)> {
  static const MethodInfo* get() {
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "EmptyDecodeAndAppendRawOctetsList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoding});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded
// Il2CppName: AppendOctetsPercentEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, System::Collections::Generic::IEnumerable_1<uint8_t>*)>(&System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* octets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "AppendOctetsPercentEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, octets});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString
// Il2CppName: GetOctetsAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Collections::Generic::IEnumerable_1<uint8_t>*)>(&System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString)> {
  static const MethodInfo* get() {
    static auto* octets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "GetOctetsAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{octets});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::GetPath
// Il2CppName: GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::HttpListenerRequestUriBuilder::GetPath)> {
  static const MethodInfo* get() {
    static auto* uriString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uriString});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath
// Il2CppName: AddSlashToAsteriskOnlyPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "AddSlashToAsteriskOnlyPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerRequestUriBuilder::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerRequestUriBuilder::*)(::Il2CppString*, ::Il2CppString*, ::ArrayW<::Il2CppObject*>)>(&System::Net::HttpListenerRequestUriBuilder::LogWarning)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerRequestUriBuilder*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, message, args});
  }
};
