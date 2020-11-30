// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
#include "Org/BouncyCastle/Crypto/Parameters/Gost3410Parameters.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters
#include "Org/BouncyCastle/Crypto/Parameters/Gost3410ValidationParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters..ctor
Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Gost3410Parameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Gost3410Parameters*>(p, q, a));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters..ctor
Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Gost3410Parameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Gost3410Parameters*>(p, q, a, validation));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.get_P
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_P() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Gost3410Parameters").WithContext("get_P");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "get_P", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.get_Q
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_Q() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Gost3410Parameters").WithContext("get_Q");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "get_Q", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.get_A
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::get_A() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Gost3410Parameters").WithContext("get_A");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "get_A", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::Equals(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Gost3410Parameters").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Gost3410Parameters").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters.GetHashCode
int Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Crypto::Parameters").WithContext("Gost3410Parameters").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetHashCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}