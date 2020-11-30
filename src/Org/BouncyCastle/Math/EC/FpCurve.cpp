// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.FpCurve
#include "Org/BouncyCastle/Math/EC/FpCurve.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Math.EC.FpPoint
#include "Org/BouncyCastle/Math/EC/FpPoint.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve..ctor
Org::BouncyCastle::Math::EC::FpCurve* Org::BouncyCastle::Math::EC::FpCurve::New_ctor(Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Math::BigInteger* b, Org::BouncyCastle::Math::BigInteger* order, Org::BouncyCastle::Math::BigInteger* cofactor) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<FpCurve*>(q, a, b, order, cofactor));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve..ctor
Org::BouncyCastle::Math::EC::FpCurve* Org::BouncyCastle::Math::EC::FpCurve::New_ctor(Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* r, Org::BouncyCastle::Math::EC::ECFieldElement* a, Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::BigInteger* order, Org::BouncyCastle::Math::BigInteger* cofactor) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<FpCurve*>(q, r, a, b, order, cofactor));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve.CloneCurve
Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::FpCurve::CloneCurve() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext("CloneCurve");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECCurve*>(), "CloneCurve", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECCurve*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve.SupportsCoordinateSystem
bool Org::BouncyCastle::Math::EC::FpCurve::SupportsCoordinateSystem(int coord) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext("SupportsCoordinateSystem");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "SupportsCoordinateSystem", {}, ::il2cpp_utils::ExtractTypes(coord)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, coord);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve.get_Infinity
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::FpCurve::get_Infinity() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext("get_Infinity");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECPoint*>(), "get_Infinity", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve.get_FieldSize
int Org::BouncyCastle::Math::EC::FpCurve::get_FieldSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext("get_FieldSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "get_FieldSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve.FromBigInteger
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::FpCurve::FromBigInteger(Org::BouncyCastle::Math::BigInteger* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext("FromBigInteger");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECFieldElement*>(), "FromBigInteger", {}, ::il2cpp_utils::ExtractTypes(x)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal__method, x);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::FpCurve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext("CreateRawPoint");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECPoint*>(), "CreateRawPoint", {}, ::il2cpp_utils::ExtractTypes(x, y, withCompression)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal__method, x, y, withCompression);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::FpCurve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext("CreateRawPoint");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECPoint*>(), "CreateRawPoint", {}, ::il2cpp_utils::ExtractTypes(x, y, zs, withCompression)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal__method, x, y, zs, withCompression);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.FpCurve.ImportPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::FpCurve::ImportPoint(Org::BouncyCastle::Math::EC::ECPoint* p) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC").WithContext("FpCurve").WithContext("ImportPoint");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECPoint*>(), "ImportPoint", {}, ::il2cpp_utils::ExtractTypes(p)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal__method, p);
}