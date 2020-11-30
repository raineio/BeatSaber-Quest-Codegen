// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator
#include "Org/BouncyCastle/Crypto/Signers/IDsaKCalculator.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator.get_IsDeterministic
bool Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::get_IsDeterministic() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IDsaKCalculator").WithContext("get_IsDeterministic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_IsDeterministic", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator.Init
void Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::Init(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Security::SecureRandom* random) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IDsaKCalculator").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(n, random)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, n, random);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator.Init
void Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::Init(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* d, ::Array<uint8_t>* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IDsaKCalculator").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(n, d, message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, n, d, message);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator.NextK
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::NextK() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Signers").WithContext("IDsaKCalculator").WithContext("NextK");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "NextK", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}