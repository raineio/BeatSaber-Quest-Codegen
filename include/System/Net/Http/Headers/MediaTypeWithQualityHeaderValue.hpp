// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.MediaTypeHeaderValue
#include "System/Net/Http/Headers/MediaTypeHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Skipping declaration: Token because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: MediaTypeWithQualityHeaderValue
  class MediaTypeWithQualityHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::Http::Headers::MediaTypeWithQualityHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*, "System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.MediaTypeWithQualityHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class MediaTypeWithQualityHeaderValue : public System::Net::Http::Headers::MediaTypeHeaderValue {
    public:
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.MediaTypeWithQualityHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x17C360C
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, ByRef<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*> parsedValue, ByRef<System::Net::Http::Headers::Token> t);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.MediaTypeWithQualityHeaderValue> result)
    // Offset: 0x17C3770
    static bool TryParse(::StringW input, int minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*> result);
    // private System.Void .ctor()
    // Offset: 0x17C3604
    // Implemented from: System.Net.Http.Headers.MediaTypeHeaderValue
    // Base method: System.Void MediaTypeHeaderValue::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaTypeWithQualityHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaTypeWithQualityHeaderValue*, creationType>()));
    }
  }; // System.Net.Http.Headers.MediaTypeWithQualityHeaderValue
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, ByRef<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>, ByRef<System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*>)>(&System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
