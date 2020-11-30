// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest
#include "Org/BouncyCastle/Crypto/Digests/Gost3411_2012_256Digest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Byte[] IV
::Array<uint8_t>* Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::_get_IV() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext("_get_IV");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_256Digest", "IV"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Byte[] IV
void Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::_set_IV(::Array<uint8_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext("_set_IV");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_256Digest", "IV", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest..ctor
Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::New_ctor(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Gost3411_2012_256Digest*>(other));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_AlgorithmName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest..ctor
Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest* Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Gost3411_2012_256Digest*>());
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest.GetDigestSize
int Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::GetDigestSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext("GetDigestSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetDigestSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest.DoFinal
int Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::DoFinal(::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext("DoFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "DoFinal", {}, ::il2cpp_utils::ExtractTypes(output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest.Copy
Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::Copy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext("Copy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Utilities::IMemoable*>(), "Copy", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Utilities::IMemoable*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest..cctor
void Org::BouncyCastle::Crypto::Digests::Gost3411_2012_256Digest::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Gost3411_2012_256Digest").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_256Digest", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}