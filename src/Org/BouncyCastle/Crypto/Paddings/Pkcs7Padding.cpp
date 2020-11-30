// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding
#include "Org/BouncyCastle/Crypto/Paddings/Pkcs7Padding.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding.Init
void Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::Init(Org::BouncyCastle::Security::SecureRandom* random) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Paddings").WithContext("Pkcs7Padding").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(random)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, random);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding.AddPadding
int Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::AddPadding(::Array<uint8_t>* input, int inOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Paddings").WithContext("Pkcs7Padding").WithContext("AddPadding");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "AddPadding", {}, ::il2cpp_utils::ExtractTypes(input, inOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding.PadCount
int Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::PadCount(::Array<uint8_t>* input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Paddings").WithContext("Pkcs7Padding").WithContext("PadCount");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "PadCount", {}, ::il2cpp_utils::ExtractTypes(input)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding..ctor
Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding* Org::BouncyCastle::Crypto::Paddings::Pkcs7Padding::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Paddings").WithContext("Pkcs7Padding").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Pkcs7Padding*>());
}