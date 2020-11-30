// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.X509Crl/X509CrlEntry
#include "Mono/Security/X509/X509Crl_X509CrlEntry.hpp"
// Including type: Mono.Security.X509.X509ExtensionCollection
#include "Mono/Security/X509/X509ExtensionCollection.hpp"
// Including type: Mono.Security.ASN1
#include "Mono/Security/ASN1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.X509.X509Crl/X509CrlEntry..ctor
Mono::Security::X509::X509Crl::X509CrlEntry* Mono::Security::X509::X509Crl::X509CrlEntry::New_ctor(Mono::Security::ASN1* entry) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509CrlEntry").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<X509Crl::X509CrlEntry*>(entry));
}
// Autogenerated method: Mono.Security.X509.X509Crl/X509CrlEntry.get_SerialNumber
::Array<uint8_t>* Mono::Security::X509::X509Crl::X509CrlEntry::get_SerialNumber() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509CrlEntry").WithContext("get_SerialNumber");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "get_SerialNumber", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.X509.X509Crl/X509CrlEntry.get_RevocationDate
System::DateTime Mono::Security::X509::X509Crl::X509CrlEntry::get_RevocationDate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509CrlEntry").WithContext("get_RevocationDate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::DateTime>(), "get_RevocationDate", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::DateTime, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.X509.X509Crl/X509CrlEntry.get_Extensions
Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Crl::X509CrlEntry::get_Extensions() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::X509").WithContext("X509CrlEntry").WithContext("get_Extensions");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Mono::Security::X509::X509ExtensionCollection*>(), "get_Extensions", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Mono::Security::X509::X509ExtensionCollection*, false>(this, ___internal__method);
}