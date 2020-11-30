// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.Sha1Digest
#include "Org/BouncyCastle/Crypto/Digests/Sha1Digest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest..ctor
Org::BouncyCastle::Crypto::Digests::Sha1Digest* Org::BouncyCastle::Crypto::Digests::Sha1Digest::New_ctor(Org::BouncyCastle::Crypto::Digests::Sha1Digest* t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Sha1Digest*>(t));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.CopyIn
void Org::BouncyCastle::Crypto::Digests::Sha1Digest::CopyIn(Org::BouncyCastle::Crypto::Digests::Sha1Digest* t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("CopyIn");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "CopyIn", {}, ::il2cpp_utils::ExtractTypes(t)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, t);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.F
uint Org::BouncyCastle::Crypto::Digests::Sha1Digest::F(uint u, uint v, uint w) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("F");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "Sha1Digest", il2cpp_utils::NoArgClass<uint>(), "F", {}, ::il2cpp_utils::ExtractTypes(u, v, w)));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, u, v, w);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.H
uint Org::BouncyCastle::Crypto::Digests::Sha1Digest::H(uint u, uint v, uint w) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("H");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "Sha1Digest", il2cpp_utils::NoArgClass<uint>(), "H", {}, ::il2cpp_utils::ExtractTypes(u, v, w)));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, u, v, w);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.G
uint Org::BouncyCastle::Crypto::Digests::Sha1Digest::G(uint u, uint v, uint w) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("G");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "Sha1Digest", il2cpp_utils::NoArgClass<uint>(), "G", {}, ::il2cpp_utils::ExtractTypes(u, v, w)));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, u, v, w);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest..ctor
Org::BouncyCastle::Crypto::Digests::Sha1Digest* Org::BouncyCastle::Crypto::Digests::Sha1Digest::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Sha1Digest*>());
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Digests::Sha1Digest::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_AlgorithmName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.GetDigestSize
int Org::BouncyCastle::Crypto::Digests::Sha1Digest::GetDigestSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("GetDigestSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetDigestSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.ProcessWord
void Org::BouncyCastle::Crypto::Digests::Sha1Digest::ProcessWord(::Array<uint8_t>* input, int inOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("ProcessWord");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessWord", {}, ::il2cpp_utils::ExtractTypes(input, inOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input, inOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.ProcessLength
void Org::BouncyCastle::Crypto::Digests::Sha1Digest::ProcessLength(int64_t bitLength) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("ProcessLength");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessLength", {}, ::il2cpp_utils::ExtractTypes(bitLength)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, bitLength);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.DoFinal
int Org::BouncyCastle::Crypto::Digests::Sha1Digest::DoFinal(::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("DoFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "DoFinal", {}, ::il2cpp_utils::ExtractTypes(output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.Reset
void Org::BouncyCastle::Crypto::Digests::Sha1Digest::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.ProcessBlock
void Org::BouncyCastle::Crypto::Digests::Sha1Digest::ProcessBlock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("ProcessBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessBlock", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.Copy
Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::Sha1Digest::Copy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("Copy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Utilities::IMemoable*>(), "Copy", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Utilities::IMemoable*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Sha1Digest.Reset
void Org::BouncyCastle::Crypto::Digests::Sha1Digest::Reset(Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Sha1Digest").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes(other)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, other);
}