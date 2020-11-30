// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.X509Crl
#include "Mono/Security/X509/X509Crl.hpp"
// Including type: Mono.Security.X509.X509Crl/X509CrlEntry
#include "Mono/Security/X509/X509Crl_X509CrlEntry.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: Mono.Security.X509.X509ExtensionCollection
#include "Mono/Security/X509/X509ExtensionCollection.hpp"
// Including type: Mono.Security.X509.X509Certificate
#include "Mono/Security/X509/X509Certificate.hpp"
// Including type: System.Security.Cryptography.DSA
#include "System/Security/Cryptography/DSA.hpp"
// Including type: System.Security.Cryptography.RSA
#include "System/Security/Cryptography/RSA.hpp"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.X509.X509Crl..ctor
Mono::Security::X509::X509Crl* Mono::Security::X509::X509Crl::New_ctor(::Array<uint8_t>* crl) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<X509Crl*>(crl));
}
// Autogenerated method: Mono.Security.X509.X509Crl.Parse
void Mono::Security::X509::X509Crl::Parse(::Array<uint8_t>* crl) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("Parse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Parse", {}, ::il2cpp_utils::ExtractTypes(crl)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, crl);
}
// Autogenerated method: Mono.Security.X509.X509Crl.get_Extensions
Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Crl::get_Extensions() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("get_Extensions");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Mono::Security::X509::X509ExtensionCollection*>(), "get_Extensions", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Mono::Security::X509::X509ExtensionCollection*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.X509.X509Crl.get_Hash
::Array<uint8_t>* Mono::Security::X509::X509Crl::get_Hash() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("get_Hash");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "get_Hash", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.X509.X509Crl.get_IssuerName
::Il2CppString* Mono::Security::X509::X509Crl::get_IssuerName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("get_IssuerName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_IssuerName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.X509.X509Crl.get_NextUpdate
System::DateTime Mono::Security::X509::X509Crl::get_NextUpdate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("get_NextUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::DateTime>(), "get_NextUpdate", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::DateTime, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.X509.X509Crl.Compare
bool Mono::Security::X509::X509Crl::Compare(::Array<uint8_t>* array1, ::Array<uint8_t>* array2) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("Compare");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Compare", {}, ::il2cpp_utils::ExtractTypes(array1, array2)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, array1, array2);
}
// Autogenerated method: Mono.Security.X509.X509Crl.GetCrlEntry
Mono::Security::X509::X509Crl::X509CrlEntry* Mono::Security::X509::X509Crl::GetCrlEntry(Mono::Security::X509::X509Certificate* x509) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("GetCrlEntry");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Mono::Security::X509::X509Crl::X509CrlEntry*>(), "GetCrlEntry", {}, ::il2cpp_utils::ExtractTypes(x509)));
  return ::il2cpp_utils::RunMethodThrow<Mono::Security::X509::X509Crl::X509CrlEntry*, false>(this, ___internal__method, x509);
}
// Autogenerated method: Mono.Security.X509.X509Crl.GetCrlEntry
Mono::Security::X509::X509Crl::X509CrlEntry* Mono::Security::X509::X509Crl::GetCrlEntry(::Array<uint8_t>* serialNumber) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("GetCrlEntry");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Mono::Security::X509::X509Crl::X509CrlEntry*>(), "GetCrlEntry", {}, ::il2cpp_utils::ExtractTypes(serialNumber)));
  return ::il2cpp_utils::RunMethodThrow<Mono::Security::X509::X509Crl::X509CrlEntry*, false>(this, ___internal__method, serialNumber);
}
// Autogenerated method: Mono.Security.X509.X509Crl.VerifySignature
bool Mono::Security::X509::X509Crl::VerifySignature(System::Security::Cryptography::DSA* dsa) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("VerifySignature");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "VerifySignature", {}, ::il2cpp_utils::ExtractTypes(dsa)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, dsa);
}
// Autogenerated method: Mono.Security.X509.X509Crl.VerifySignature
bool Mono::Security::X509::X509Crl::VerifySignature(System::Security::Cryptography::RSA* rsa) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("VerifySignature");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "VerifySignature", {}, ::il2cpp_utils::ExtractTypes(rsa)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, rsa);
}
// Autogenerated method: Mono.Security.X509.X509Crl.VerifySignature
bool Mono::Security::X509::X509Crl::VerifySignature(System::Security::Cryptography::AsymmetricAlgorithm* aa) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509Crl").WithContext("VerifySignature");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "VerifySignature", {}, ::il2cpp_utils::ExtractTypes(aa)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, aa);
}