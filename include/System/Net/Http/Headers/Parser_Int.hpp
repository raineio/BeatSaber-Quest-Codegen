// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/Int
  class Parser::Int : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Int
    Int() noexcept {}
    // static public System.Boolean TryParse(System.String input, out System.Int32 result)
    // Offset: 0x1598178
    static bool TryParse(::Il2CppString* input, int& result);
  }; // System.Net.Http.Headers.Parser/Int
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::Int*, "System.Net.Http.Headers", "Parser/Int");
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::Int::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int&)>(&System::Net::Http::Headers::Parser::Int::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::Int*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int&>()});
  }
};
