// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::Http::Headers::Parser::DateTime);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::DateTime*, "System.Net.Http.Headers", "Parser/DateTime");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/System.Net.Http.Headers.DateTime
  // [TokenAttribute] Offset: FFFFFFFF
  class Parser::DateTime : public ::Il2CppObject {
    public:
    // Nested type: System::Net::Http::Headers::Parser::DateTime::$$c
    class $$c;
    // Get static field: static public readonly System.Func`2<System.Object,System.String> ToString
    static System::Func_2<::Il2CppObject*, ::StringW>* _get_ToString();
    // Set static field: static public readonly System.Func`2<System.Object,System.String> ToString
    static void _set_ToString(System::Func_2<::Il2CppObject*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x17C4414
    static void _cctor();
    // static public System.Boolean TryParse(System.String input, out System.DateTimeOffset result)
    // Offset: 0x17C43A0
    static bool TryParse(::StringW input, ByRef<System::DateTimeOffset> result);
  }; // System.Net.Http.Headers.Parser/System.Net.Http.Headers.DateTime
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::DateTime::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::Parser::DateTime::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::DateTime*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::DateTime::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<System::DateTimeOffset>)>(&System::Net::Http::Headers::Parser::DateTime::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::DateTime*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, result});
  }
};
