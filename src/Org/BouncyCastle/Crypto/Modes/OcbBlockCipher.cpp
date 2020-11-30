// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
#include "Org/BouncyCastle/Crypto/Modes/OcbBlockCipher.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher..ctor
Org::BouncyCastle::Crypto::Modes::OcbBlockCipher* Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* hashCipher, Org::BouncyCastle::Crypto::IBlockCipher* mainCipher) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<OcbBlockCipher*>(hashCipher, mainCipher));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.ProcessNonce
int Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessNonce(::Array<uint8_t>* N) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("ProcessNonce");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "ProcessNonce", {}, ::il2cpp_utils::ExtractTypes(N)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, N);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.ProcessAadBytes
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessAadBytes(::Array<uint8_t>* input, int off, int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("ProcessAadBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessAadBytes", {}, ::il2cpp_utils::ExtractTypes(input, off, len)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, input, off, len);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.Clear
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Clear(::Array<uint8_t>* bs) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("Clear");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Clear", {}, ::il2cpp_utils::ExtractTypes(bs)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, bs);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.GetLSub
::Array<uint8_t>* Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetLSub(int n) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("GetLSub");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "GetLSub", {}, ::il2cpp_utils::ExtractTypes(n)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, n);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.ProcessHashBlock
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessHashBlock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("ProcessHashBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessHashBlock", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.ProcessMainBlock
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessMainBlock(::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("ProcessMainBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ProcessMainBlock", {}, ::il2cpp_utils::ExtractTypes(output, outOff)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.Reset
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset(bool clearMac) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes(clearMac)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, clearMac);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.UpdateHASH
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::UpdateHASH(::Array<uint8_t>* LSub) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("UpdateHASH");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "UpdateHASH", {}, ::il2cpp_utils::ExtractTypes(LSub)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, LSub);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.OCB_double
::Array<uint8_t>* Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_double(::Array<uint8_t>* block) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("OCB_double");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Modes", "OcbBlockCipher", il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "OCB_double", {}, ::il2cpp_utils::ExtractTypes(block)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, block);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.OCB_extend
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_extend(::Array<uint8_t>* block, int pos) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("OCB_extend");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Modes", "OcbBlockCipher", il2cpp_utils::NoArgClass<void>(), "OCB_extend", {}, ::il2cpp_utils::ExtractTypes(block, pos)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, block, pos);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.OCB_ntz
int Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::OCB_ntz(int64_t x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("OCB_ntz");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Modes", "OcbBlockCipher", il2cpp_utils::NoArgClass<int>(), "OCB_ntz", {}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.ShiftLeft
int Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ShiftLeft(::Array<uint8_t>* block, ::Array<uint8_t>* output) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("ShiftLeft");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Modes", "OcbBlockCipher", il2cpp_utils::NoArgClass<int>(), "ShiftLeft", {}, ::il2cpp_utils::ExtractTypes(block, output)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, block, output);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.Xor
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Xor(::Array<uint8_t>* block, ::Array<uint8_t>* val) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("Xor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Crypto.Modes", "OcbBlockCipher", il2cpp_utils::NoArgClass<void>(), "Xor", {}, ::il2cpp_utils::ExtractTypes(block, val)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, block, val);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.Init
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(forEncryption, parameters)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, forEncryption, parameters);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.GetBlockSize
int Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetBlockSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("GetBlockSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetBlockSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.GetOutputSize
int Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetOutputSize(int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("GetOutputSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetOutputSize", {}, ::il2cpp_utils::ExtractTypes(len)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, len);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.GetUpdateOutputSize
int Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::GetUpdateOutputSize(int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("GetUpdateOutputSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetUpdateOutputSize", {}, ::il2cpp_utils::ExtractTypes(len)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, len);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.ProcessBytes
int Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("ProcessBytes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "ProcessBytes", {}, ::il2cpp_utils::ExtractTypes(input, inOff, len, output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff, len, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.DoFinal
int Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::DoFinal(::Array<uint8_t>* output, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("DoFinal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "DoFinal", {}, ::il2cpp_utils::ExtractTypes(output, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, output, outOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher.Reset
void Org::BouncyCastle::Crypto::Modes::OcbBlockCipher::Reset() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Modes").WithContext("OcbBlockCipher").WithContext("Reset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Reset", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}