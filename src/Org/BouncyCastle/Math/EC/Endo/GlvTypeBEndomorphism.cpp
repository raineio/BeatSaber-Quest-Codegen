// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism
#include "Org/BouncyCastle/Math/EC/Endo/GlvTypeBEndomorphism.hpp"
// Including type: Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
#include "Org/BouncyCastle/Math/EC/Endo/GlvTypeBParameters.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPointMap
#include "Org/BouncyCastle/Math/EC/ECPointMap.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism..ctor
Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism* Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* parameters) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Endo").WithContext("GlvTypeBEndomorphism").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<GlvTypeBEndomorphism*>(curve, parameters));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism.DecomposeScalar
::Array<Org::BouncyCastle::Math::BigInteger*>* Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::DecomposeScalar(Org::BouncyCastle::Math::BigInteger* k) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Endo").WithContext("GlvTypeBEndomorphism").WithContext("DecomposeScalar");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Array<Org::BouncyCastle::Math::BigInteger*>*>(), "DecomposeScalar", {}, ::il2cpp_utils::ExtractTypes(k)));
  return ::il2cpp_utils::RunMethodThrow<::Array<Org::BouncyCastle::Math::BigInteger*>*, false>(this, ___internal__method, k);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism.get_PointMap
Org::BouncyCastle::Math::EC::ECPointMap* Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_PointMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Endo").WithContext("GlvTypeBEndomorphism").WithContext("get_PointMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECPointMap*>(), "get_PointMap", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPointMap*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism.get_HasEfficientPointMap
bool Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_HasEfficientPointMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Endo").WithContext("GlvTypeBEndomorphism").WithContext("get_HasEfficientPointMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_HasEfficientPointMap", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}