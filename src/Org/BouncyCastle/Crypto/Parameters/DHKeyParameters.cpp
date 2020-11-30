// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/DHKeyParameters.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.DHParameters
#include "Org/BouncyCastle/Crypto/Parameters/DHParameters.hpp"
// Including type: Org.BouncyCastle.Asn1.DerObjectIdentifier
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::DHKeyParameters* Org::BouncyCastle::Crypto::Parameters::DHKeyParameters::New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHKeyParameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DHKeyParameters*>(isPrivate, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::DHKeyParameters* Org::BouncyCastle::Crypto::Parameters::DHKeyParameters::New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHKeyParameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DHKeyParameters*>(isPrivate, parameters, algorithmOid));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters.get_Parameters
Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Parameters::DHKeyParameters::get_Parameters() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHKeyParameters").WithContext("get_Parameters");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), "get_Parameters", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Crypto::Parameters::DHParameters*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::DHKeyParameters::Equals(Org::BouncyCastle::Crypto::Parameters::DHKeyParameters* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHKeyParameters").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::DHKeyParameters::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHKeyParameters").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters.GetHashCode
int Org::BouncyCastle::Crypto::Parameters::DHKeyParameters::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("DHKeyParameters").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetHashCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}