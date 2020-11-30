// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
#include "Org/BouncyCastle/Crypto/Engines/Salsa20Engine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 DEFAULT_ROUNDS
int Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_get_DEFAULT_ROUNDS() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("_get_DEFAULT_ROUNDS");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", "DEFAULT_ROUNDS"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 DEFAULT_ROUNDS
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_set_DEFAULT_ROUNDS(int value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("_set_DEFAULT_ROUNDS");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", "DEFAULT_ROUNDS", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.UInt32[] TAU_SIGMA
::Array<uint>* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_get_TAU_SIGMA() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("_get_TAU_SIGMA");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint>*>("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", "TAU_SIGMA"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.UInt32[] TAU_SIGMA
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_set_TAU_SIGMA(::Array<uint>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("_set_TAU_SIGMA");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", "TAU_SIGMA", value));
}
// Autogenerated static field getter
// Get static field: static protected readonly System.Byte[] sigma
::Array<uint8_t>* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_get_sigma() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("_get_sigma");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", "sigma"));
}
// Autogenerated static field setter
// Set static field: static protected readonly System.Byte[] sigma
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_set_sigma(::Array<uint8_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("_set_sigma");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", "sigma", value));
}
// Autogenerated static field getter
// Get static field: static protected readonly System.Byte[] tau
::Array<uint8_t>* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_get_tau() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("_get_tau");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", "tau"));
}
// Autogenerated static field setter
// Set static field: static protected readonly System.Byte[] tau
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_set_tau(::Array<uint8_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("_set_tau");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", "tau", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.PackTauOrSigma
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::PackTauOrSigma(int keyLength, ::Array<uint>* state, int stateOffset) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("PackTauOrSigma");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "PackTauOrSigma", {}, ::il2cpp_utils::ExtractTypes(keyLength, state, stateOffset)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, keyLength, state, stateOffset);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine..ctor
Org::BouncyCastle::Crypto::Engines::Salsa20Engine* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::New_ctor(int rounds) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Salsa20Engine*>(rounds));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.get_NonceSize
int Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_NonceSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("get_NonceSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_NonceSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_AlgorithmName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.AdvanceCounter
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::AdvanceCounter() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("AdvanceCounter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AdvanceCounter", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.ResetCounter
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetCounter() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("ResetCounter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ResetCounter", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.SetKey
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SetKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("SetKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetKey", {}, ::il2cpp_utils::ExtractTypes(keyBytes, ivBytes)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, keyBytes, ivBytes);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.GenerateKeyStream
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::GenerateKeyStream(::Array<uint8_t>* output) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("GenerateKeyStream");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "GenerateKeyStream", {}, ::il2cpp_utils::ExtractTypes(output)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, output);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.SalsaCore
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::SalsaCore(int rounds, ::Array<uint>* input, ::Array<uint>* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("SalsaCore");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", il2cpp_utils::NoArgClass<void>(), "SalsaCore", {}, ::il2cpp_utils::ExtractTypes(rounds, input, x)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, rounds, input, x);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.ResetLimitCounter
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ResetLimitCounter() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("ResetLimitCounter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ResetLimitCounter", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.LimitExceeded
bool Org::BouncyCastle::Crypto::Engines::Salsa20Engine::LimitExceeded(uint len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("LimitExceeded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "LimitExceeded", {}, ::il2cpp_utils::ExtractTypes(len)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, len);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine..cctor
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Engines", "Salsa20Engine", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine..ctor
Org::BouncyCastle::Crypto::Engines::Salsa20Engine* Org::BouncyCastle::Crypto::Engines::Salsa20Engine::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Salsa20Engine*>());
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.Init
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(forEncryption, parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, forEncryption, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.ProcessBytes
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::ProcessBytes(::Array<uint8_t>* inBytes, int inOff, int len, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("ProcessBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessBytes", {}, ::il2cpp_utils::ExtractTypes(inBytes, inOff, len, outBytes, outOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inBytes, inOff, len, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.Salsa20Engine.Reset
void Org::BouncyCastle::Crypto::Engines::Salsa20Engine::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("Salsa20Engine").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}