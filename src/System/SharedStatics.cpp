// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.SharedStatics
#include "System/SharedStatics.hpp"
// Including type: System.Security.Util.Tokenizer/StringMaker
#include "System/Security/Util/Tokenizer_StringMaker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.SharedStatics _sharedStatics
System::SharedStatics* System::SharedStatics::_get__sharedStatics() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System").WithContext("SharedStatics").WithContext("_get__sharedStatics");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::SharedStatics*>("System", "SharedStatics", "_sharedStatics"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.SharedStatics _sharedStatics
void System::SharedStatics::_set__sharedStatics(System::SharedStatics* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System").WithContext("SharedStatics").WithContext("_set__sharedStatics");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "SharedStatics", "_sharedStatics", value));
}
// Autogenerated method: System.SharedStatics.GetSharedStringMaker
System::Security::Util::Tokenizer::StringMaker* System::SharedStatics::GetSharedStringMaker() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("SharedStatics").WithContext("GetSharedStringMaker");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "SharedStatics", il2cpp_utils::NoArgClass<System::Security::Util::Tokenizer::StringMaker*>(), "GetSharedStringMaker", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Util::Tokenizer::StringMaker*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.SharedStatics.ReleaseSharedStringMaker
void System::SharedStatics::ReleaseSharedStringMaker(System::Security::Util::Tokenizer::StringMaker*& maker) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("SharedStatics").WithContext("ReleaseSharedStringMaker");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "SharedStatics", il2cpp_utils::NoArgClass<void>(), "ReleaseSharedStringMaker", {}, ::il2cpp_utils::ExtractTypes(maker)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, maker);
}
// Autogenerated method: System.SharedStatics..cctor
void System::SharedStatics::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("SharedStatics").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System", "SharedStatics", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.SharedStatics..ctor
System::SharedStatics* System::SharedStatics::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("SharedStatics").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SharedStatics*>());
}