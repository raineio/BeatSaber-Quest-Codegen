// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.HttpVersion
#include "System/Net/HttpVersion.hpp"
// Including type: System.Version
#include "System/Version.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version Version10
System::Version* System::Net::HttpVersion::_get_Version10() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpVersion").WithContext("_get_Version10");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("System.Net", "HttpVersion", "Version10"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version Version10
void System::Net::HttpVersion::_set_Version10(System::Version* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpVersion").WithContext("_set_Version10");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "HttpVersion", "Version10", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Version Version11
System::Version* System::Net::HttpVersion::_get_Version11() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpVersion").WithContext("_get_Version11");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("System.Net", "HttpVersion", "Version11"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version Version11
void System::Net::HttpVersion::_set_Version11(System::Version* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpVersion").WithContext("_set_Version11");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "HttpVersion", "Version11", value));
}
// Autogenerated method: System.Net.HttpVersion..cctor
void System::Net::HttpVersion::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net").WithContext("HttpVersion").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Net", "HttpVersion", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}