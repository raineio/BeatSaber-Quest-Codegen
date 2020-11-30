// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X9.X9Curve
#include "Org/BouncyCastle/Asn1/X9/X9Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
// Including type: Org.BouncyCastle.Asn1.DerObjectIdentifier
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
// Including type: Org.BouncyCastle.Asn1.X9.X9FieldID
#include "Org/BouncyCastle/Asn1/X9/X9FieldID.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X9.X9Curve..ctor
Org::BouncyCastle::Asn1::X9::X9Curve* Org::BouncyCastle::Asn1::X9::X9Curve::New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, ::Array<uint8_t>* seed) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("X9Curve").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<X9Curve*>(curve, seed));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.X9Curve..ctor
Org::BouncyCastle::Asn1::X9::X9Curve* Org::BouncyCastle::Asn1::X9::X9Curve::New_ctor(Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, Org::BouncyCastle::Math::BigInteger* order, Org::BouncyCastle::Math::BigInteger* cofactor, Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("X9Curve").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<X9Curve*>(fieldID, order, cofactor, seq));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.X9Curve.get_Curve
Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Asn1::X9::X9Curve::get_Curve() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("X9Curve").WithContext("get_Curve");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECCurve*>(), "get_Curve", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECCurve*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.X9Curve.GetSeed
::Array<uint8_t>* Org::BouncyCastle::Asn1::X9::X9Curve::GetSeed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("X9Curve").WithContext("GetSeed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<uint8_t>*>(), "GetSeed", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.X9Curve.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X9::X9Curve::ToAsn1Object() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("X9Curve").WithContext("ToAsn1Object");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::Asn1Object*>(), "ToAsn1Object", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal__method);
}