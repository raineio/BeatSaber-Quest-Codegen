// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "System/Security/Cryptography/AsymmetricSignatureDeformatter.hpp"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.AsymmetricSignatureDeformatter.SetKey
void System::Security::Cryptography::AsymmetricSignatureDeformatter::SetKey(System::Security::Cryptography::AsymmetricAlgorithm* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("AsymmetricSignatureDeformatter").WithContext("SetKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetKey", {}, ::il2cpp_utils::ExtractTypes(key)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key);
}
// Autogenerated method: System.Security.Cryptography.AsymmetricSignatureDeformatter.SetHashAlgorithm
void System::Security::Cryptography::AsymmetricSignatureDeformatter::SetHashAlgorithm(::Il2CppString* strName) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("AsymmetricSignatureDeformatter").WithContext("SetHashAlgorithm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetHashAlgorithm", {}, ::il2cpp_utils::ExtractTypes(strName)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, strName);
}
// Autogenerated method: System.Security.Cryptography.AsymmetricSignatureDeformatter.VerifySignature
bool System::Security::Cryptography::AsymmetricSignatureDeformatter::VerifySignature(::Array<uint8_t>* rgbHash, ::Array<uint8_t>* rgbSignature) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("AsymmetricSignatureDeformatter").WithContext("VerifySignature");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "VerifySignature", {}, ::il2cpp_utils::ExtractTypes(rgbHash, rgbSignature)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, rgbHash, rgbSignature);
}
// Autogenerated method: System.Security.Cryptography.AsymmetricSignatureDeformatter..ctor
System::Security::Cryptography::AsymmetricSignatureDeformatter* System::Security::Cryptography::AsymmetricSignatureDeformatter::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("AsymmetricSignatureDeformatter").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<AsymmetricSignatureDeformatter*>());
}