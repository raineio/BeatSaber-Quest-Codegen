// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
#include "System/Security/Cryptography/X509Certificates/X500DistinguishedName.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
#include "System/Security/Cryptography/X509Certificates/X500DistinguishedNameFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName..ctor
System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X500DistinguishedName::New_ctor(::Array<uint8_t>* encodedDistinguishedName) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X500DistinguishedName").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<X500DistinguishedName*>(encodedDistinguishedName));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.Decode
::Il2CppString* System::Security::Cryptography::X509Certificates::X500DistinguishedName::Decode(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X500DistinguishedName").WithContext("Decode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "Decode", {}, ::il2cpp_utils::ExtractTypes(flag)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, flag);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.GetSeparator
::Il2CppString* System::Security::Cryptography::X509Certificates::X500DistinguishedName::GetSeparator(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X500DistinguishedName").WithContext("GetSeparator");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography.X509Certificates", "X500DistinguishedName", il2cpp_utils::NoArgClass<::Il2CppString*>(), "GetSeparator", {}, ::il2cpp_utils::ExtractTypes(flag)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, flag);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.DecodeRawData
void System::Security::Cryptography::X509Certificates::X500DistinguishedName::DecodeRawData() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X500DistinguishedName").WithContext("DecodeRawData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DecodeRawData", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.Canonize
::Il2CppString* System::Security::Cryptography::X509Certificates::X500DistinguishedName::Canonize(::Il2CppString* s) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X500DistinguishedName").WithContext("Canonize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography.X509Certificates", "X500DistinguishedName", il2cpp_utils::NoArgClass<::Il2CppString*>(), "Canonize", {}, ::il2cpp_utils::ExtractTypes(s)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, s);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.AreEqual
bool System::Security::Cryptography::X509Certificates::X500DistinguishedName::AreEqual(System::Security::Cryptography::X509Certificates::X500DistinguishedName* name1, System::Security::Cryptography::X509Certificates::X500DistinguishedName* name2) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X500DistinguishedName").WithContext("AreEqual");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography.X509Certificates", "X500DistinguishedName", il2cpp_utils::NoArgClass<bool>(), "AreEqual", {}, ::il2cpp_utils::ExtractTypes(name1, name2)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, name1, name2);
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.Format
::Il2CppString* System::Security::Cryptography::X509Certificates::X500DistinguishedName::Format(bool multiLine) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography::X509Certificates").WithContext("X500DistinguishedName").WithContext("Format");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "Format", {}, ::il2cpp_utils::ExtractTypes(multiLine)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, multiLine);
}