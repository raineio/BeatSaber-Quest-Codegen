// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Parser/MD5
#include "System/Net/Http/Headers/Parser_MD5.hpp"
// Including type: System.Net.Http.Headers.Parser/MD5/<>c
#include "System/Net/Http/Headers/Parser_MD5_--c.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Func`2<System.Object,System.String> ToString
System::Func_2<::Il2CppObject*, ::Il2CppString*>* System::Net::Http::Headers::Parser::MD5::_get_ToString() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("MD5").WithContext("_get_ToString");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<::Il2CppObject*, ::Il2CppString*>*>("System.Net.Http.Headers", "Parser/MD5", "ToString")));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Func`2<System.Object,System.String> ToString
void System::Net::Http::Headers::Parser::MD5::_set_ToString(System::Func_2<::Il2CppObject*, ::Il2CppString*>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("MD5").WithContext("_set_ToString");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net.Http.Headers", "Parser/MD5", "ToString", value));
}
// Autogenerated method: System.Net.Http.Headers.Parser/MD5.TryParse
bool System::Net::Http::Headers::Parser::MD5::TryParse(::Il2CppString* input, ::Array<uint8_t>*& result) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("MD5").WithContext("TryParse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net.Http.Headers", "Parser/MD5", il2cpp_utils::NoArgClass<bool>(), "TryParse", {}, ::il2cpp_utils::ExtractTypes(input, result)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, input, result);
}
// Autogenerated method: System.Net.Http.Headers.Parser/MD5..cctor
void System::Net::Http::Headers::Parser::MD5::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Http::Headers").WithContext("MD5").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net.Http.Headers", "Parser/MD5", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}