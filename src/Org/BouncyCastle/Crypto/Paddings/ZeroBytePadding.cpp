// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding
#include "Org/BouncyCastle/Crypto/Paddings/ZeroBytePadding.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding.Init
void Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::Init(Org::BouncyCastle::Security::SecureRandom* random) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Paddings").WithContext("ZeroBytePadding").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(random)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, random);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding.AddPadding
int Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::AddPadding(::Array<uint8_t>* input, int inOff) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Paddings").WithContext("ZeroBytePadding").WithContext("AddPadding");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "AddPadding", {}, ::il2cpp_utils::ExtractTypes(input, inOff)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input, inOff);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding.PadCount
int Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::PadCount(::Array<uint8_t>* input) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Paddings").WithContext("ZeroBytePadding").WithContext("PadCount");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "PadCount", {}, ::il2cpp_utils::ExtractTypes(input)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, input);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Paddings.ZeroBytePadding..ctor
Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding* Org::BouncyCastle::Crypto::Paddings::ZeroBytePadding::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Paddings").WithContext("ZeroBytePadding").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ZeroBytePadding*>());
}