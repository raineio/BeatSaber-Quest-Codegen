// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP224R1FieldElement.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly Org.BouncyCastle.Math.BigInteger Q
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::_get_Q() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("_get_Q");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::Math::BigInteger*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement", "Q"));
}
// Autogenerated static field setter
// Set static field: static public readonly Org.BouncyCastle.Math.BigInteger Q
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::_set_Q(Org::BouncyCastle::Math::BigInteger* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("_set_Q");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement", "Q", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement..ctor
Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::New_ctor(Org::BouncyCastle::Math::BigInteger* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SecP224R1FieldElement*>(x));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement..ctor
Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::New_ctor(::Array<uint>* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SecP224R1FieldElement*>(x));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Equals
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Equals(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.IsSquare
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::IsSquare(::Array<uint>* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("IsSquare");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement", il2cpp_utils::NoArgClass<bool>(), "IsSquare", {}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.RM
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::RM(::Array<uint>* nc, ::Array<uint>* d0, ::Array<uint>* e0, ::Array<uint>* d1, ::Array<uint>* e1, ::Array<uint>* f1, ::Array<uint>* t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("RM");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement", il2cpp_utils::NoArgClass<void>(), "RM", {}, ::il2cpp_utils::ExtractTypes(nc, d0, e0, d1, e1, f1, t)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, nc, d0, e0, d1, e1, f1, t);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.RP
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::RP(::Array<uint>* nc, ::Array<uint>* d1, ::Array<uint>* e1, ::Array<uint>* f1, ::Array<uint>* t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("RP");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement", il2cpp_utils::NoArgClass<void>(), "RP", {}, ::il2cpp_utils::ExtractTypes(nc, d1, e1, f1, t)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, nc, d1, e1, f1, t);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.RS
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::RS(::Array<uint>* d, ::Array<uint>* e, ::Array<uint>* f, ::Array<uint>* t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("RS");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement", il2cpp_utils::NoArgClass<void>(), "RS", {}, ::il2cpp_utils::ExtractTypes(d, e, f, t)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, d, e, f, t);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.TrySqrt
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::TrySqrt(::Array<uint>* nc, ::Array<uint>* r, ::Array<uint>* t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("TrySqrt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement", il2cpp_utils::NoArgClass<bool>(), "TrySqrt", {}, ::il2cpp_utils::ExtractTypes(nc, r, t)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, nc, r, t);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement..cctor
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.get_IsZero
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::get_IsZero() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("get_IsZero");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_IsZero", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.get_IsOne
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::get_IsOne() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("get_IsOne");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_IsOne", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.TestBitZero
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::TestBitZero() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("TestBitZero");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "TestBitZero", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.ToBigInteger
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::ToBigInteger() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("ToBigInteger");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "ToBigInteger", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.get_FieldSize
int Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::get_FieldSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("get_FieldSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_FieldSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Add
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Add(Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Add");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "Add", {}, ::il2cpp_utils::ExtractTypes(b)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method, b);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.AddOne
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::AddOne() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("AddOne");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "AddOne", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Subtract
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Subtract");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "Subtract", {}, ::il2cpp_utils::ExtractTypes(b)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method, b);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Multiply
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Multiply");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "Multiply", {}, ::il2cpp_utils::ExtractTypes(b)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method, b);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Divide
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Divide");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "Divide", {}, ::il2cpp_utils::ExtractTypes(b)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method, b);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Negate
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Negate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Negate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "Negate", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Square
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Square() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Square");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "Square", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Invert
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Invert() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Invert");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "Invert", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Sqrt
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Sqrt() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Sqrt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "Sqrt", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Equals
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.Equals
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::Equals(Org::BouncyCastle::Math::EC::ECFieldElement* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "Equals", {}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, other);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement.GetHashCode
int Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Custom::Sec").WithContext("SecP224R1FieldElement").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "GetHashCode", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}