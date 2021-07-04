// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Configuration.UnicodeDecodingConformance
#include "System/Net/Configuration/UnicodeDecodingConformance.hpp"
// Including type: System.Net.Configuration.UnicodeEncodingConformance
#include "System/Net/Configuration/UnicodeEncodingConformance.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebUtility
  class WebUtility : public ::Il2CppObject {
    public:
    // Nested type: System::Net::WebUtility::UrlDecoder
    class UrlDecoder;
    // Creating value type constructor for type: WebUtility
    WebUtility() noexcept {}
    // Get static field: static private readonly System.Char[] _htmlEntityEndingChars
    static ::Array<::Il2CppChar>* _get__htmlEntityEndingChars();
    // Set static field: static private readonly System.Char[] _htmlEntityEndingChars
    static void _set__htmlEntityEndingChars(::Array<::Il2CppChar>* value);
    // Get static field: static private System.Net.Configuration.UnicodeDecodingConformance _htmlDecodeConformance
    static System::Net::Configuration::UnicodeDecodingConformance _get__htmlDecodeConformance();
    // Set static field: static private System.Net.Configuration.UnicodeDecodingConformance _htmlDecodeConformance
    static void _set__htmlDecodeConformance(System::Net::Configuration::UnicodeDecodingConformance value);
    // Get static field: static private System.Net.Configuration.UnicodeEncodingConformance _htmlEncodeConformance
    static System::Net::Configuration::UnicodeEncodingConformance _get__htmlEncodeConformance();
    // Set static field: static private System.Net.Configuration.UnicodeEncodingConformance _htmlEncodeConformance
    static void _set__htmlEncodeConformance(System::Net::Configuration::UnicodeEncodingConformance value);
    // static public System.String HtmlEncode(System.String value)
    // Offset: 0x15CCC08
    static ::Il2CppString* HtmlEncode(::Il2CppString* value);
    // static public System.Void HtmlEncode(System.String value, System.IO.TextWriter output)
    // Offset: 0x15CCE84
    static void HtmlEncode(::Il2CppString* value, System::IO::TextWriter* output);
    // static private System.Int32 IndexOfHtmlEncodingChars(System.String s, System.Int32 startPos)
    // Offset: 0x15CCD30
    static int IndexOfHtmlEncodingChars(::Il2CppString* s, int startPos);
    // static private System.Net.Configuration.UnicodeEncodingConformance get_HtmlEncodeConformance()
    // Offset: 0x15CD1F8
    static System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance();
    // static private System.String UrlDecodeInternal(System.String value, System.Text.Encoding encoding)
    // Offset: 0x15CD3C4
    static ::Il2CppString* UrlDecodeInternal(::Il2CppString* value, System::Text::Encoding* encoding);
    // static public System.String UrlDecode(System.String encodedValue)
    // Offset: 0x15CD864
    static ::Il2CppString* UrlDecode(::Il2CppString* encodedValue);
    // static private System.Int32 GetNextUnicodeScalarValueFromUtf16Surrogate(ref System.Char* pch, ref System.Int32 charsRemaining)
    // Offset: 0x15CD2FC
    static int GetNextUnicodeScalarValueFromUtf16Surrogate(::Il2CppChar*& pch, int& charsRemaining);
    // static private System.Int32 HexToInt(System.Char h)
    // Offset: 0x15CD668
    static int HexToInt(::Il2CppChar h);
    // static private System.Void .cctor()
    // Offset: 0x15CD8EC
    static void _cctor();
  }; // System.Net.WebUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebUtility*, "System.Net", "WebUtility");
// Writing MetadataGetter for method: System::Net::WebUtility::HtmlEncode
// Il2CppName: HtmlEncode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::WebUtility::HtmlEncode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), "HtmlEncode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::HtmlEncode
// Il2CppName: HtmlEncode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, System::IO::TextWriter*)>(&System::Net::WebUtility::HtmlEncode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), "HtmlEncode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::IO::TextWriter*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::IndexOfHtmlEncodingChars
// Il2CppName: IndexOfHtmlEncodingChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int)>(&System::Net::WebUtility::IndexOfHtmlEncodingChars)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), "IndexOfHtmlEncodingChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::get_HtmlEncodeConformance
// Il2CppName: get_HtmlEncodeConformance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Configuration::UnicodeEncodingConformance (*)()>(&System::Net::WebUtility::get_HtmlEncodeConformance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), "get_HtmlEncodeConformance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::UrlDecodeInternal
// Il2CppName: UrlDecodeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, System::Text::Encoding*)>(&System::Net::WebUtility::UrlDecodeInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), "UrlDecodeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Text::Encoding*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::UrlDecode
// Il2CppName: UrlDecode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::WebUtility::UrlDecode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), "UrlDecode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate
// Il2CppName: GetNextUnicodeScalarValueFromUtf16Surrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppChar*&, int&)>(&System::Net::WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), "GetNextUnicodeScalarValueFromUtf16Surrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar*&>(), ::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::HexToInt
// Il2CppName: HexToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppChar)>(&System::Net::WebUtility::HexToInt)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), "HexToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebUtility::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
