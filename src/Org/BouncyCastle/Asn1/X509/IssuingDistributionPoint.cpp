// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint
#include "Org/BouncyCastle/Asn1/X509/IssuingDistributionPoint.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.DistributionPointName
#include "Org/BouncyCastle/Asn1/X509/DistributionPointName.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.ReasonFlags
#include "Org/BouncyCastle/Asn1/X509/ReasonFlags.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.GetInstance
Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::GetInstance(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("IssuingDistributionPoint").WithContext("GetInstance");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Org.BouncyCastle.Asn1.X509", "IssuingDistributionPoint", il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>(), "GetInstance", {}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, obj);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint..ctor
Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("IssuingDistributionPoint").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<IssuingDistributionPoint*>(seq));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.get_IsIndirectCrl
bool Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_IsIndirectCrl() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("IssuingDistributionPoint").WithContext("get_IsIndirectCrl");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_IsIndirectCrl", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.appendObject
void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::appendObject(System::Text::StringBuilder* buf, ::Il2CppString* sep, ::Il2CppString* name, ::Il2CppString* val) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("IssuingDistributionPoint").WithContext("appendObject");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "appendObject", {}, ::il2cpp_utils::ExtractTypes(buf, sep, name, val)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, buf, sep, name, val);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToAsn1Object() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("IssuingDistributionPoint").WithContext("ToAsn1Object");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<Org::BouncyCastle::Asn1::Asn1Object*>(), "ToAsn1Object", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal__method);
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.ToString
::Il2CppString* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1::X509").WithContext("IssuingDistributionPoint").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "ToString", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}