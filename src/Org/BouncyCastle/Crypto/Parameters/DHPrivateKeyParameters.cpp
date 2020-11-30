// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/DHPrivateKeyParameters.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.DHParameters
#include "Org/BouncyCastle/Crypto/Parameters/DHParameters.hpp"
// Including type: Org.BouncyCastle.Asn1.DerObjectIdentifier
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::New_ctor(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHPrivateKeyParameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DHPrivateKeyParameters*>(x, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::New_ctor(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHPrivateKeyParameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DHPrivateKeyParameters*>(x, parameters, algorithmOid));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters.get_X
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::get_X() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHPrivateKeyParameters").WithContext("get_X");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "get_X", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::Equals(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHPrivateKeyParameters").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHPrivateKeyParameters").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters.GetHashCode
int Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHPrivateKeyParameters").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetHashCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}