// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.Utils
#include "System/Security/Cryptography/Utils.hpp"
// Including type: System.Security.Cryptography.RNGCryptoServiceProvider
#include "System/Security/Cryptography/RNGCryptoServiceProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.RNGCryptoServiceProvider _rng
System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::Utils::_get__rng() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("_get__rng");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Security::Cryptography::RNGCryptoServiceProvider*>("System.Security.Cryptography", "Utils", "_rng"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.RNGCryptoServiceProvider _rng
void System::Security::Cryptography::Utils::_set__rng(System::Security::Cryptography::RNGCryptoServiceProvider* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("_set__rng");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography", "Utils", "_rng", value));
}
// Autogenerated method: System.Security.Cryptography.Utils.get_StaticRandomNumberGenerator
System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("get_StaticRandomNumberGenerator");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<System::Security::Cryptography::RNGCryptoServiceProvider*>(), "get_StaticRandomNumberGenerator", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Security::Cryptography::RNGCryptoServiceProvider*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Security.Cryptography.Utils.GenerateRandom
::Array<uint8_t>* System::Security::Cryptography::Utils::GenerateRandom(int keySize) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("GenerateRandom");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "GenerateRandom", {}, ::il2cpp_utils::ExtractTypes(keySize)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, keySize);
}
// Autogenerated method: System.Security.Cryptography.Utils.HasAlgorithm
bool System::Security::Cryptography::Utils::HasAlgorithm(int dwCalg, int dwKeySize) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("HasAlgorithm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<bool>(), "HasAlgorithm", {}, ::il2cpp_utils::ExtractTypes(dwCalg, dwKeySize)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, dwCalg, dwKeySize);
}
// Autogenerated method: System.Security.Cryptography.Utils.DiscardWhiteSpaces
::Il2CppString* System::Security::Cryptography::Utils::DiscardWhiteSpaces(::Il2CppString* inputBuffer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("DiscardWhiteSpaces");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<::Il2CppString*>(), "DiscardWhiteSpaces", {}, ::il2cpp_utils::ExtractTypes(inputBuffer)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, inputBuffer);
}
// Autogenerated method: System.Security.Cryptography.Utils.DiscardWhiteSpaces
::Il2CppString* System::Security::Cryptography::Utils::DiscardWhiteSpaces(::Il2CppString* inputBuffer, int inputOffset, int inputCount) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("DiscardWhiteSpaces");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<::Il2CppString*>(), "DiscardWhiteSpaces", {}, ::il2cpp_utils::ExtractTypes(inputBuffer, inputOffset, inputCount)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, inputBuffer, inputOffset, inputCount);
}
// Autogenerated method: System.Security.Cryptography.Utils.ConvertByteArrayToInt
int System::Security::Cryptography::Utils::ConvertByteArrayToInt(::Array<uint8_t>* input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("ConvertByteArrayToInt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<int>(), "ConvertByteArrayToInt", {}, ::il2cpp_utils::ExtractTypes(input)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, input);
}
// Autogenerated method: System.Security.Cryptography.Utils.ConvertIntToByteArray
::Array<uint8_t>* System::Security::Cryptography::Utils::ConvertIntToByteArray(int dwInput) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("ConvertIntToByteArray");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "ConvertIntToByteArray", {}, ::il2cpp_utils::ExtractTypes(dwInput)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, dwInput);
}
// Autogenerated method: System.Security.Cryptography.Utils.FixupKeyParity
::Array<uint8_t>* System::Security::Cryptography::Utils::FixupKeyParity(::Array<uint8_t>* key) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("FixupKeyParity");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "FixupKeyParity", {}, ::il2cpp_utils::ExtractTypes(key)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, key);
}
// Autogenerated method: System.Security.Cryptography.Utils.DWORDFromLittleEndian
void System::Security::Cryptography::Utils::DWORDFromLittleEndian(uint* x, int digits, uint8_t* block) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("DWORDFromLittleEndian");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<void>(), "DWORDFromLittleEndian", {}, ::il2cpp_utils::ExtractTypes(x, digits, block)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, digits, block);
}
// Autogenerated method: System.Security.Cryptography.Utils.DWORDToLittleEndian
void System::Security::Cryptography::Utils::DWORDToLittleEndian(::Array<uint8_t>* block, ::Array<uint>* x, int digits) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("DWORDToLittleEndian");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<void>(), "DWORDToLittleEndian", {}, ::il2cpp_utils::ExtractTypes(block, x, digits)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, block, x, digits);
}
// Autogenerated method: System.Security.Cryptography.Utils.DWORDFromBigEndian
void System::Security::Cryptography::Utils::DWORDFromBigEndian(uint* x, int digits, uint8_t* block) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("DWORDFromBigEndian");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<void>(), "DWORDFromBigEndian", {}, ::il2cpp_utils::ExtractTypes(x, digits, block)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, digits, block);
}
// Autogenerated method: System.Security.Cryptography.Utils.DWORDToBigEndian
void System::Security::Cryptography::Utils::DWORDToBigEndian(::Array<uint8_t>* block, ::Array<uint>* x, int digits) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("DWORDToBigEndian");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<void>(), "DWORDToBigEndian", {}, ::il2cpp_utils::ExtractTypes(block, x, digits)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, block, x, digits);
}
// Autogenerated method: System.Security.Cryptography.Utils.QuadWordFromBigEndian
void System::Security::Cryptography::Utils::QuadWordFromBigEndian(uint64_t* x, int digits, uint8_t* block) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("QuadWordFromBigEndian");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<void>(), "QuadWordFromBigEndian", {}, ::il2cpp_utils::ExtractTypes(x, digits, block)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, digits, block);
}
// Autogenerated method: System.Security.Cryptography.Utils.QuadWordToBigEndian
void System::Security::Cryptography::Utils::QuadWordToBigEndian(::Array<uint8_t>* block, ::Array<uint64_t>* x, int digits) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("QuadWordToBigEndian");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<void>(), "QuadWordToBigEndian", {}, ::il2cpp_utils::ExtractTypes(block, x, digits)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, block, x, digits);
}
// Autogenerated method: System.Security.Cryptography.Utils._ProduceLegacyHmacValues
bool System::Security::Cryptography::Utils::_ProduceLegacyHmacValues() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Security::Cryptography").WithContext("Utils").WithContext("_ProduceLegacyHmacValues");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Security.Cryptography", "Utils", il2cpp_utils::NoArgClass<bool>(), "_ProduceLegacyHmacValues", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}