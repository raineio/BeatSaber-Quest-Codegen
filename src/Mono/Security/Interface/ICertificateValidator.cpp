// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Interface.ICertificateValidator
#include "Mono/Security/Interface/ICertificateValidator.hpp"
// Including type: Mono.Security.Interface.MonoTlsSettings
#include "Mono/Security/Interface/MonoTlsSettings.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate
#include "System/Security/Cryptography/X509Certificates/X509Certificate.hpp"
// Including type: Mono.Security.Interface.ValidationResult
#include "Mono/Security/Interface/ValidationResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.Interface.ICertificateValidator.get_Settings
Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::ICertificateValidator::get_Settings() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Interface").WithContext("ICertificateValidator").WithContext("get_Settings");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Mono::Security::Interface::MonoTlsSettings*>(), "get_Settings", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Mono::Security::Interface::MonoTlsSettings*, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.Interface.ICertificateValidator.SelectClientCertificate
bool Mono::Security::Interface::ICertificateValidator::SelectClientCertificate(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Array<::Il2CppString*>* acceptableIssuers, System::Security::Cryptography::X509Certificates::X509Certificate*& clientCertificate) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Interface").WithContext("ICertificateValidator").WithContext("SelectClientCertificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "SelectClientCertificate", {}, ::il2cpp_utils::ExtractTypes(targetHost, localCertificates, remoteCertificate, acceptableIssuers, clientCertificate)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, targetHost, localCertificates, remoteCertificate, acceptableIssuers, clientCertificate);
}
// Autogenerated method: Mono.Security.Interface.ICertificateValidator.ValidateCertificate
Mono::Security::Interface::ValidationResult* Mono::Security::Interface::ICertificateValidator::ValidateCertificate(::Il2CppString* targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Interface").WithContext("ICertificateValidator").WithContext("ValidateCertificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Mono::Security::Interface::ValidationResult*>(), "ValidateCertificate", {}, ::il2cpp_utils::ExtractTypes(targetHost, serverMode, certificates)));
  return ::il2cpp_utils::RunMethodThrow<Mono::Security::Interface::ValidationResult*, false>(this, ___internal__method, targetHost, serverMode, certificates);
}