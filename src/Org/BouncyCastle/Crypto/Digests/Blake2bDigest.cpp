// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.Blake2bDigest
#include "Org/BouncyCastle/Crypto/Digests/Blake2bDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.UInt64[] blake2b_IV
::Array<uint64_t>* Org::BouncyCastle::Crypto::Digests::Blake2bDigest::_get_blake2b_IV() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("_get_blake2b_IV");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint64_t>*>("Org.BouncyCastle.Crypto.Digests", "Blake2bDigest", "blake2b_IV"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.UInt64[] blake2b_IV
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::_set_blake2b_IV(::Array<uint64_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("_set_blake2b_IV");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Digests", "Blake2bDigest", "blake2b_IV", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Byte[,] blake2b_sigma
::Array<uint8_t>* Org::BouncyCastle::Crypto::Digests::Blake2bDigest::_get_blake2b_sigma() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("_get_blake2b_sigma");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Org.BouncyCastle.Crypto.Digests", "Blake2bDigest", "blake2b_sigma"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Byte[,] blake2b_sigma
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::_set_blake2b_sigma(::Array<uint8_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("_set_blake2b_sigma");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Digests", "Blake2bDigest", "blake2b_sigma", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest..ctor
Org::BouncyCastle::Crypto::Digests::Blake2bDigest* Org::BouncyCastle::Crypto::Digests::Blake2bDigest::New_ctor(int digestSize) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Blake2bDigest*>(digestSize));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.Init
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Init() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.InitializeInternalState
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::InitializeInternalState() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("InitializeInternalState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "InitializeInternalState", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.Compress
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Compress(::Array<uint8_t>* message, int messagePos) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("Compress");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Compress", {}, ::il2cpp_utils::ExtractTypes(message, messagePos)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message, messagePos);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.G
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::G(uint64_t m1, uint64_t m2, int posA, int posB, int posC, int posD) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("G");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "G", {}, ::il2cpp_utils::ExtractTypes(m1, m2, posA, posB, posC, posD)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, m1, m2, posA, posB, posC, posD);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.Rotr64
uint64_t Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Rotr64(uint64_t x, int rot) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("Rotr64");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "Blake2bDigest", il2cpp_utils::NoArgClass<uint64_t>(), "Rotr64", {}, ::il2cpp_utils::ExtractTypes(x, rot)));
  return ::il2cpp_utils::RunMethodThrow<uint64_t, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, rot);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest..cctor
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Digests", "Blake2bDigest", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.Update
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Update(uint8_t b) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Update", {}, ::il2cpp_utils::ExtractTypes(b)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, b);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.BlockUpdate
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::BlockUpdate(::Array<uint8_t>* message, int offset, int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("BlockUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "BlockUpdate", {}, ::il2cpp_utils::ExtractTypes(message, offset, len)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message, offset, len);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.DoFinal
int Org::BouncyCastle::Crypto::Digests::Blake2bDigest::DoFinal(::Array<uint8_t>* output, int outOffset) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("DoFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "DoFinal", {}, ::il2cpp_utils::ExtractTypes(output, outOffset)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, output, outOffset);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.Reset
void Org::BouncyCastle::Crypto::Digests::Blake2bDigest::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Digests::Blake2bDigest::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_AlgorithmName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.GetDigestSize
int Org::BouncyCastle::Crypto::Digests::Blake2bDigest::GetDigestSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("GetDigestSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetDigestSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.Blake2bDigest.GetByteLength
int Org::BouncyCastle::Crypto::Digests::Blake2bDigest::GetByteLength() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Digests").WithContext("Blake2bDigest").WithContext("GetByteLength");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetByteLength", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}