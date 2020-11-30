// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Utilities.Encoders.HexEncoder
#include "Org/BouncyCastle/Utilities/Encoders/HexEncoder.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Utilities.Encoders.HexEncoder.InitialiseDecodingTable
void Org::BouncyCastle::Utilities::Encoders::HexEncoder::InitialiseDecodingTable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::Encoders").WithContext("HexEncoder").WithContext("InitialiseDecodingTable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "InitialiseDecodingTable", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Utilities.Encoders.HexEncoder.Encode
int Org::BouncyCastle::Utilities::Encoders::HexEncoder::Encode(::Array<uint8_t>* inBuf, int inOff, int inLen, ::Array<uint8_t>* outBuf, int outOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::Encoders").WithContext("HexEncoder").WithContext("Encode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Encode", {}, ::il2cpp_utils::ExtractTypes(inBuf, inOff, inLen, outBuf, outOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, inBuf, inOff, inLen, outBuf, outOff);
}
// Autogenerated method: Org.BouncyCastle.Utilities.Encoders.HexEncoder.Encode
int Org::BouncyCastle::Utilities::Encoders::HexEncoder::Encode(::Array<uint8_t>* buf, int off, int len, System::IO::Stream* outStream) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::Encoders").WithContext("HexEncoder").WithContext("Encode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Encode", {}, ::il2cpp_utils::ExtractTypes(buf, off, len, outStream)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, buf, off, len, outStream);
}
// Autogenerated method: Org.BouncyCastle.Utilities.Encoders.HexEncoder.Ignore
bool Org::BouncyCastle::Utilities::Encoders::HexEncoder::Ignore(::Il2CppChar c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::Encoders").WithContext("HexEncoder").WithContext("Ignore");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Utilities.Encoders", "HexEncoder", il2cpp_utils::NoArgClass<bool>(), "Ignore", {}, ::il2cpp_utils::ExtractTypes(c)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
// Autogenerated method: Org.BouncyCastle.Utilities.Encoders.HexEncoder.DecodeString
int Org::BouncyCastle::Utilities::Encoders::HexEncoder::DecodeString(::Il2CppString* data, System::IO::Stream* outStream) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::Encoders").WithContext("HexEncoder").WithContext("DecodeString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "DecodeString", {}, ::il2cpp_utils::ExtractTypes(data, outStream)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, data, outStream);
}
// Autogenerated method: Org.BouncyCastle.Utilities.Encoders.HexEncoder.DecodeStrict
::Array<uint8_t>* Org::BouncyCastle::Utilities::Encoders::HexEncoder::DecodeStrict(::Il2CppString* str, int off, int len) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::Encoders").WithContext("HexEncoder").WithContext("DecodeStrict");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "DecodeStrict", {}, ::il2cpp_utils::ExtractTypes(str, off, len)));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method, str, off, len);
}
// Autogenerated method: Org.BouncyCastle.Utilities.Encoders.HexEncoder..ctor
Org::BouncyCastle::Utilities::Encoders::HexEncoder* Org::BouncyCastle::Utilities::Encoders::HexEncoder::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Utilities::Encoders").WithContext("HexEncoder").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<HexEncoder*>());
}