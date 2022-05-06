// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: ElementTryParser`1<T>
  template<typename T>
  class ElementTryParser_1;
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
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
  // Forward declaring type: CollectionParser
  class CollectionParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::CollectionParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::CollectionParser*, "System.Net.Http.Headers", "CollectionParser");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.CollectionParser
  // [TokenAttribute] Offset: FFFFFFFF
  class CollectionParser : public ::Il2CppObject {
    public:
    // static public System.Boolean TryParse(System.String input, System.Int32 minimalCount, System.Net.Http.Headers.ElementTryParser`1<T> parser, out System.Collections.Generic.List`1<T> result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool TryParse(::StringW input, int minimalCount, ::System::Net::Http::Headers::ElementTryParser_1<T>* parser, ByRef<::System::Collections::Generic::List_1<T>*> result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::CollectionParser::TryParse");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Net.Http.Headers", "CollectionParser", "TryParse", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(input), ::il2cpp_utils::ExtractType(minimalCount), ::il2cpp_utils::ExtractType(parser), ::il2cpp_utils::ExtractIndependentType<::System::Collections::Generic::List_1<T>*&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, input, minimalCount, parser, byref(result));
    }
    // static public System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.String> result)
    // Offset: 0x198E27C
    static bool TryParse(::StringW input, int minimalCount, ByRef<::System::Collections::Generic::List_1<::StringW>*> result);
    // static private System.Boolean TryParseStringElement(System.Net.Http.Headers.Lexer lexer, out System.String parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x198E31C
    static bool TryParseStringElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::StringW> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);
  }; // System.Net.Http.Headers.CollectionParser
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::CollectionParser::TryParse
// Il2CppName: TryParse
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::CollectionParser::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, ByRef<::System::Collections::Generic::List_1<::StringW>*>)>(&System::Net::Http::Headers::CollectionParser::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CollectionParser*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::CollectionParser::TryParseStringElement
// Il2CppName: TryParseStringElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::StringW>, ByRef<::System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::CollectionParser::TryParseStringElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::CollectionParser*), "TryParseStringElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
