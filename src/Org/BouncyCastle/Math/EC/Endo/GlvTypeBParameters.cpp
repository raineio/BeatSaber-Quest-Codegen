// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
#include "Org/BouncyCastle/Math/EC/Endo/GlvTypeBParameters.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters
#include "Org/BouncyCastle/Math/EC/Endo/ScalarSplitParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters..ctor
Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::New_ctor(Org::BouncyCastle::Math::BigInteger* beta, Org::BouncyCastle::Math::BigInteger* lambda, Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Endo").WithContext("GlvTypeBParameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<GlvTypeBParameters*>(beta, lambda, splitParams));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters.get_Beta
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Beta() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Endo").WithContext("GlvTypeBParameters").WithContext("get_Beta");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::BigInteger*>(), "get_Beta", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters.get_SplitParams
Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_SplitParams() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Endo").WithContext("GlvTypeBParameters").WithContext("get_SplitParams");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>(), "get_SplitParams", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, false>(this, ___internal__method);
}