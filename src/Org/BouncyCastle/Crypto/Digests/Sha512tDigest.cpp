// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.Sha512tDigest
#include "Org/BouncyCastle/Crypto/Digests/Sha512tDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest..ctor
Org::BouncyCastle::Crypto::Digests::Sha512tDigest* Org::BouncyCastle::Crypto::Digests::Sha512tDigest::New_ctor(int bitLength) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Sha512tDigest*>(bitLength));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest..ctor
Org::BouncyCastle::Crypto::Digests::Sha512tDigest* Org::BouncyCastle::Crypto::Digests::Sha512tDigest::New_ctor(Org::BouncyCastle::Crypto::Digests::Sha512tDigest* t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Sha512tDigest*>(t));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.tIvGenerate
void Org::BouncyCastle::Crypto::Digests::Sha512tDigest::tIvGenerate(int bitLength) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("tIvGenerate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "tIvGenerate", {}, ::il2cpp_utils::ExtractTypes(bitLength)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, bitLength);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.UInt64_To_BE
void Org::BouncyCastle::Crypto::Digests::Sha512tDigest::UInt64_To_BE(uint64_t n, ::Array<uint8_t>* bs, int off, int max) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("UInt64_To_BE");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "Sha512tDigest", il2cpp_utils::NoArgClass<void>(), "UInt64_To_BE", {}, ::il2cpp_utils::ExtractTypes(n, bs, off, max)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, n, bs, off, max);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.UInt32_To_BE
void Org::BouncyCastle::Crypto::Digests::Sha512tDigest::UInt32_To_BE(uint n, ::Array<uint8_t>* bs, int off, int max) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("UInt32_To_BE");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "Sha512tDigest", il2cpp_utils::NoArgClass<void>(), "UInt32_To_BE", {}, ::il2cpp_utils::ExtractTypes(n, bs, off, max)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, n, bs, off, max);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Digests::Sha512tDigest::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_AlgorithmName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.GetDigestSize
int Org::BouncyCastle::Crypto::Digests::Sha512tDigest::GetDigestSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("GetDigestSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetDigestSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.DoFinal
int Org::BouncyCastle::Crypto::Digests::Sha512tDigest::DoFinal(::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("DoFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "DoFinal", {}, ::il2cpp_utils::ExtractTypes(output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.Reset
void Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.Copy
Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Copy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("Copy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Utilities::IMemoable*>(), "Copy", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Utilities::IMemoable*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha512tDigest.Reset
void Org::BouncyCastle::Crypto::Digests::Sha512tDigest::Reset(Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha512tDigest").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes(other)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, other);
}