// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Util.Tokenizer
#include "System/Security/Util/Tokenizer.hpp"
// Completed includes
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.Tokenizer/ITokenReader
  class Tokenizer::ITokenReader {
    public:
    // Creating value type constructor for type: ITokenReader
    ITokenReader() noexcept {}
    // public System.Int32 Read()
    // Offset: 0xFFFFFFFF
    int Read();
  }; // System.Security.Util.Tokenizer/ITokenReader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::Tokenizer::ITokenReader*, "System.Security.Util", "Tokenizer/ITokenReader");
// Writing MetadataGetter for method: System::Security::Util::Tokenizer::ITokenReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Util::Tokenizer::ITokenReader::*)()>(&System::Security::Util::Tokenizer::ITokenReader::Read)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Util::Tokenizer::ITokenReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
