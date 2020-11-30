// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/WTauNafMultiplier.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier/WTauNafCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/WTauNafMultiplier_WTauNafCallback.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mPoint
#include "Org/BouncyCastle/Math/EC/AbstractF2mPoint.hpp"
// Including type: Org.BouncyCastle.Math.EC.Abc.ZTauElement
#include "Org/BouncyCastle/Math/EC/Abc/ZTauElement.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.String PRECOMP_NAME
::Il2CppString* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_get_PRECOMP_NAME() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Multiplier").WithContext("WTauNafMultiplier").WithContext("_get_PRECOMP_NAME");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier", "PRECOMP_NAME"));
}
// Autogenerated static field setter
// Set static field: static readonly System.String PRECOMP_NAME
void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_set_PRECOMP_NAME(::Il2CppString* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Multiplier").WithContext("WTauNafMultiplier").WithContext("_set_PRECOMP_NAME");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier", "PRECOMP_NAME", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier.MultiplyWTnaf
Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t a, int8_t mu) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Multiplier").WithContext("WTauNafMultiplier").WithContext("MultiplyWTnaf");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), "MultiplyWTnaf", {}, ::il2cpp_utils::ExtractTypes(p, lambda, a, mu)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::AbstractF2mPoint*, false>(this, ___internal__method, p, lambda, a, mu);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier.MultiplyFromWTnaf
Org::BouncyCastle::Math::EC::AbstractF2mPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Array<int8_t>* u) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Multiplier").WithContext("WTauNafMultiplier").WithContext("MultiplyFromWTnaf");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier", il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>(), "MultiplyFromWTnaf", {}, ::il2cpp_utils::ExtractTypes(p, u)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::AbstractF2mPoint*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, p, u);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier..cctor
void Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Multiplier").WithContext("WTauNafMultiplier").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier.MultiplyPositive
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint* point, Org::BouncyCastle::Math::BigInteger* k) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Multiplier").WithContext("WTauNafMultiplier").WithContext("MultiplyPositive");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Math::EC::ECPoint*>(), "MultiplyPositive", {}, ::il2cpp_utils::ExtractTypes(point, k)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal__method, point, k);
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier..ctor
Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier* Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Math::EC::Multiplier").WithContext("WTauNafMultiplier").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<WTauNafMultiplier*>());
}