// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ElGamalPrivateKeyParameters.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ElGamalParameters
#include "Org/BouncyCastle/Crypto/Parameters/ElGamalParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters* Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::New_ctor(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("ElGamalPrivateKeyParameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ElGamalPrivateKeyParameters*>(x, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters.get_X
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::get_X() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("ElGamalPrivateKeyParameters").WithContext("get_X");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "get_X", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals(Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("ElGamalPrivateKeyParameters").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("ElGamalPrivateKeyParameters").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters.GetHashCode
int Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("ElGamalPrivateKeyParameters").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetHashCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}