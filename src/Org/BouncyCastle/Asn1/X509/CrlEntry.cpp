// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Asn1.X509.CrlEntry
#include "Org/BouncyCastle/Asn1/X509/CrlEntry.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Including type: Org.BouncyCastle.Asn1.DerInteger
#include "Org/BouncyCastle/Asn1/DerInteger.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.Time
#include "Org/BouncyCastle/Asn1/X509/Time.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.X509Extensions
#include "Org/BouncyCastle/Asn1/X509/X509Extensions.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X509.CrlEntry..ctor
Org::BouncyCastle::Asn1::X509::CrlEntry* Org::BouncyCastle::Asn1::X509::CrlEntry::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("CrlEntry").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<CrlEntry*>(seq));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.CrlEntry.get_UserCertificate
Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X509::CrlEntry::get_UserCertificate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("CrlEntry").WithContext("get_UserCertificate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::DerInteger*>(), "get_UserCertificate", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.CrlEntry.get_RevocationDate
Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::X509::CrlEntry::get_RevocationDate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("CrlEntry").WithContext("get_RevocationDate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::X509::Time*>(), "get_RevocationDate", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::X509::Time*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.CrlEntry.get_Extensions
Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::X509::CrlEntry::get_Extensions() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("CrlEntry").WithContext("get_Extensions");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::X509::X509Extensions*>(), "get_Extensions", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.CrlEntry.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::CrlEntry::ToAsn1Object() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("CrlEntry").WithContext("ToAsn1Object");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::Asn1Object*>(), "ToAsn1Object", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal__method);
}