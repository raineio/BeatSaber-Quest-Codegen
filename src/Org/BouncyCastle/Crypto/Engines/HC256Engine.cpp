// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.HC256Engine
#include "Org/BouncyCastle/Crypto/Engines/HC256Engine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine.Step
uint Org::BouncyCastle::Crypto::Engines::HC256Engine::Step() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext("Step");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<uint>(), "Step", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine.Init
void Org::BouncyCastle::Crypto::Engines::HC256Engine::Init() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::HC256Engine::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_AlgorithmName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine.GetByte
uint8_t Org::BouncyCastle::Crypto::Engines::HC256Engine::GetByte() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext("GetByte");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<uint8_t>(), "GetByte", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<uint8_t, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine.RotateRight
uint Org::BouncyCastle::Crypto::Engines::HC256Engine::RotateRight(uint x, int bits) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext("RotateRight");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Engines", "HC256Engine", il2cpp_utils::NoArgClass<uint>(), "RotateRight", {}, ::il2cpp_utils::ExtractTypes(x, bits)));
  return ::il2cpp_utils::RunMethodThrow<uint, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x, bits);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine.Init
void Org::BouncyCastle::Crypto::Engines::HC256Engine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(forEncryption, parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, forEncryption, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine.ProcessBytes
void Org::BouncyCastle::Crypto::Engines::HC256Engine::ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext("ProcessBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessBytes", {}, ::il2cpp_utils::ExtractTypes(input, inOff, len, output, outOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input, inOff, len, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine.Reset
void Org::BouncyCastle::Crypto::Engines::HC256Engine::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.HC256Engine..ctor
Org::BouncyCastle::Crypto::Engines::HC256Engine* Org::BouncyCastle::Crypto::Engines::HC256Engine::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("HC256Engine").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<HC256Engine*>());
}