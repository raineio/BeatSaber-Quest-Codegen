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
  // Autogenerated type: System.Net.Http.Headers.Parser/Long
  class Parser::Long : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Long
    Long() noexcept {}
    // static public System.Boolean TryParse(System.String input, out System.Int64 result)
    // Offset: 0x1598200
    static bool TryParse(::Il2CppString* input, int64_t& result);
  }; // System.Net.Http.Headers.Parser/Long
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::Long*, "System.Net.Http.Headers", "Parser/Long");
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::Long::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int64_t&)>(&System::Net::Http::Headers::Parser::Long::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::Long*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int64_t&>()});
  }
};
