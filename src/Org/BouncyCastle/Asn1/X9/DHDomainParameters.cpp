// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X9.DHDomainParameters
#include "Org/BouncyCastle/Asn1/X9/DHDomainParameters.hpp"
// Including type: Org.BouncyCastle.Asn1.DerInteger
#include "Org/BouncyCastle/Asn1/DerInteger.hpp"
// Including type: Org.BouncyCastle.Asn1.X9.DHValidationParms
#include "Org/BouncyCastle/Asn1/X9/DHValidationParms.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters.GetInstance
Org::BouncyCastle::Asn1::X9::DHDomainParameters* Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetInstance(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext("GetInstance");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.X9", "DHDomainParameters", il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::X9::DHDomainParameters*>(), "GetInstance", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::X9::DHDomainParameters*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters..ctor
Org::BouncyCastle::Asn1::X9::DHDomainParameters* Org::BouncyCastle::Asn1::X9::DHDomainParameters::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<DHDomainParameters*>(seq));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters.GetNext
Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::X9::DHDomainParameters::GetNext(System::Collections::IEnumerator* e) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext("GetNext");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.X9", "DHDomainParameters", il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::Asn1Encodable*>(), "GetNext", {}, ::il2cpp_utils::ExtractTypes(e)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::Asn1Encodable*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, e);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters.get_P
Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_P() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext("get_P");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::DerInteger*>(), "get_P", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters.get_G
Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_G() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext("get_G");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::DerInteger*>(), "get_G", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters.get_Q
Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_Q() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext("get_Q");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::DerInteger*>(), "get_Q", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters.get_J
Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_J() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext("get_J");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::DerInteger*>(), "get_J", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters.get_ValidationParms
Org::BouncyCastle::Asn1::X9::DHValidationParms* Org::BouncyCastle::Asn1::X9::DHDomainParameters::get_ValidationParms() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext("get_ValidationParms");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::X9::DHValidationParms*>(), "get_ValidationParms", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::X9::DHValidationParms*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X9.DHDomainParameters.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X9::DHDomainParameters::ToAsn1Object() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X9").WithContext("DHDomainParameters").WithContext("ToAsn1Object");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::Asn1Object*>(), "ToAsn1Object", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal__method);
}