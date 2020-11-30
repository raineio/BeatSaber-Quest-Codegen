// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Macs.SipHash
#include "Org/BouncyCastle/Crypto/Macs/SipHash.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash..ctor
Org::BouncyCastle::Crypto::Macs::SipHash* Org::BouncyCastle::Crypto::Macs::SipHash::New_ctor(int c, int d) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SipHash*>(c, d));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.DoFinal
int64_t Org::BouncyCastle::Crypto::Macs::SipHash::DoFinal() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("DoFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int64_t>(), "DoFinal", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.ProcessMessageWord
void Org::BouncyCastle::Crypto::Macs::SipHash::ProcessMessageWord() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("ProcessMessageWord");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessMessageWord", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.ApplySipRounds
void Org::BouncyCastle::Crypto::Macs::SipHash::ApplySipRounds(int n) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("ApplySipRounds");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ApplySipRounds", {}, ::il2cpp_utils::ExtractTypes(n)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, n);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.RotateLeft
int64_t Org::BouncyCastle::Crypto::Macs::SipHash::RotateLeft(int64_t x, int n) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("RotateLeft");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Macs", "SipHash", il2cpp_utils::NoArgClass<int64_t>(), "RotateLeft", {}, ::il2cpp_utils::ExtractTypes(x, n)));
  return ::il2cpp_utils::RunMethodThrow<int64_t, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, n);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash..ctor
Org::BouncyCastle::Crypto::Macs::SipHash* Org::BouncyCastle::Crypto::Macs::SipHash::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SipHash*>());
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.GetMacSize
int Org::BouncyCastle::Crypto::Macs::SipHash::GetMacSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("GetMacSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetMacSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.Init
void Org::BouncyCastle::Crypto::Macs::SipHash::Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.Update
void Org::BouncyCastle::Crypto::Macs::SipHash::Update(uint8_t input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Update", {}, ::il2cpp_utils::ExtractTypes(input)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.BlockUpdate
void Org::BouncyCastle::Crypto::Macs::SipHash::BlockUpdate(::Array<uint8_t>* input, int offset, int length) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("BlockUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "BlockUpdate", {}, ::il2cpp_utils::ExtractTypes(input, offset, length)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input, offset, length);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.DoFinal
int Org::BouncyCastle::Crypto::Macs::SipHash::DoFinal(::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("DoFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "DoFinal", {}, ::il2cpp_utils::ExtractTypes(output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.SipHash.Reset
void Org::BouncyCastle::Crypto::Macs::SipHash::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Macs").WithContext("SipHash").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}