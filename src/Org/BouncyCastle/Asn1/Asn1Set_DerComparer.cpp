// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Set/DerComparer
#include "Org/BouncyCastle/Asn1/Asn1Set_DerComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1Set/DerComparer.Compare
int Org::BouncyCastle::Asn1::Asn1Set::DerComparer::Compare(::Il2CppObject* x, ::Il2CppObject* y) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1").WithContext("DerComparer").WithContext("Compare");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "Compare", {}, ::il2cpp_utils::ExtractTypes(x, y)));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x, y);
}
int Org::BouncyCastle::Asn1::Asn1Set::DerComparer::System_Collections_IComparer_Compare(::Il2CppObject* x, ::Il2CppObject* y) {
  return Org::BouncyCastle::Asn1::Asn1Set::DerComparer::Compare(x, y);
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1Set/DerComparer..ctor
Org::BouncyCastle::Asn1::Asn1Set::DerComparer* Org::BouncyCastle::Asn1::Asn1Set::DerComparer::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1").WithContext("DerComparer").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<Asn1Set::DerComparer*>());
}