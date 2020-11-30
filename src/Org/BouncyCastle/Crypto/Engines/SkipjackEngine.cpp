// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.SkipjackEngine
#include "Org/BouncyCastle/Crypto/Engines/SkipjackEngine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int16[] ftable
::Array<int16_t>* Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_get_ftable() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("_get_ftable");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<int16_t>*>("Org.BouncyCastle.Crypto.Engines", "SkipjackEngine", "ftable"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int16[] ftable
void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_set_ftable(::Array<int16_t>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("_set_ftable");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "SkipjackEngine", "ftable", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.G
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::G(int k, int w) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("G");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "G", {}, ::il2cpp_utils::ExtractTypes(k, w)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, k, w);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.EncryptBlock
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("EncryptBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "EncryptBlock", {}, ::il2cpp_utils::ExtractTypes(input, inOff, outBytes, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.H
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::H(int k, int w) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("H");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "H", {}, ::il2cpp_utils::ExtractTypes(k, w)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, k, w);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.DecryptBlock
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("DecryptBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "DecryptBlock", {}, ::il2cpp_utils::ExtractTypes(input, inOff, outBytes, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, outBytes, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine..cctor
void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Engines", "SkipjackEngine", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.Init
void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(forEncryption, parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, forEncryption, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_AlgorithmName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("get_AlgorithmName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_AlgorithmName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.get_IsPartialBlockOkay
bool Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_IsPartialBlockOkay() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("get_IsPartialBlockOkay");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_IsPartialBlockOkay", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.GetBlockSize
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::GetBlockSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("GetBlockSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetBlockSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.ProcessBlock
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("ProcessBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "ProcessBlock", {}, ::il2cpp_utils::ExtractTypes(input, inOff, output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.Reset
void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine..ctor
Org::BouncyCastle::Crypto::Engines::SkipjackEngine* Org::BouncyCastle::Crypto::Engines::SkipjackEngine::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Engines").WithContext("SkipjackEngine").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SkipjackEngine*>());
}