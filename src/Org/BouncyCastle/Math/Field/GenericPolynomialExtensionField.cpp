// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField
#include "Org/BouncyCastle/Math/Field/GenericPolynomialExtensionField.hpp"
// Including type: Org.BouncyCastle.Math.Field.IPolynomial
#include "Org/BouncyCastle/Math/Field/IPolynomial.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField..ctor
Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField* Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::New_ctor(Org::BouncyCastle::Math::Field::IFiniteField* subfield, Org::BouncyCastle::Math::Field::IPolynomial* polynomial) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::Field").WithContext("GenericPolynomialExtensionField").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<GenericPolynomialExtensionField*>(subfield, polynomial));
}
// Autogenerated method: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField.get_Characteristic
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_Characteristic() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::Field").WithContext("GenericPolynomialExtensionField").WithContext("get_Characteristic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "get_Characteristic", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField.get_Dimension
int Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_Dimension() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::Field").WithContext("GenericPolynomialExtensionField").WithContext("get_Dimension");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_Dimension", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField.get_MinimalPolynomial
Org::BouncyCastle::Math::Field::IPolynomial* Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::get_MinimalPolynomial() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::Field").WithContext("GenericPolynomialExtensionField").WithContext("get_MinimalPolynomial");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::Field::IPolynomial*>(), "get_MinimalPolynomial", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::Field::IPolynomial*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField.Equals
bool Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::Field").WithContext("GenericPolynomialExtensionField").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Math.Field.GenericPolynomialExtensionField.GetHashCode
int Org::BouncyCastle::Math::Field::GenericPolynomialExtensionField::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::Field").WithContext("GenericPolynomialExtensionField").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetHashCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}