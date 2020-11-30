// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.RSAManaged
#include "Mono/Security/Cryptography/RSAManaged.hpp"
// Including type: Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
#include "Mono/Security/Cryptography/RSAManaged_KeyGeneratedEventHandler.hpp"
// Including type: Mono.Math.BigInteger
#include "Mono/Math/BigInteger.hpp"
// Including type: System.Security.Cryptography.RSAParameters
#include "System/Security/Cryptography/RSAParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.Cryptography.RSAManaged.GenerateKeyPair
void Mono::Security::Cryptography::RSAManaged::GenerateKeyPair() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RSAManaged").WithContext("GenerateKeyPair");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "GenerateKeyPair", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.Cryptography.RSAManaged.get_PublicOnly
bool Mono::Security::Cryptography::RSAManaged::get_PublicOnly() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RSAManaged").WithContext("get_PublicOnly");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_PublicOnly", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Mono.Security.Cryptography.RSAManaged.GetPaddedValue
::Array<uint8_t>* Mono::Security::Cryptography::RSAManaged::GetPaddedValue(Mono::Math::BigInteger* value, int length) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RSAManaged").WithContext("GetPaddedValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "GetPaddedValue", {}, ::il2cpp_utils::ExtractTypes(value, length)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, value, length);
}
// Autogenerated method: Mono.Security.Cryptography.RSAManaged.ExportParameters
System::Security::Cryptography::RSAParameters Mono::Security::Cryptography::RSAManaged::ExportParameters(bool includePrivateParameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RSAManaged").WithContext("ExportParameters");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Security::Cryptography::RSAParameters>(), "ExportParameters", {}, ::il2cpp_utils::ExtractTypes(includePrivateParameters)));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::RSAParameters, false>(this, ___internal__method, includePrivateParameters);
}
// Autogenerated method: Mono.Security.Cryptography.RSAManaged.ImportParameters
void Mono::Security::Cryptography::RSAManaged::ImportParameters(System::Security::Cryptography::RSAParameters parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Security::Cryptography").WithContext("RSAManaged").WithContext("ImportParameters");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ImportParameters", {}, ::il2cpp_utils::ExtractTypes(parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, parameters);
}