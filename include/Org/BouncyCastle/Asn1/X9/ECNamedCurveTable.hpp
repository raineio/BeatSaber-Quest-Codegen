// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: ECNamedCurveTable
  class ECNamedCurveTable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable*, "Org.BouncyCastle.Asn1.X9", "ECNamedCurveTable");
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.ECNamedCurveTable
  // [TokenAttribute] Offset: FFFFFFFF
  class ECNamedCurveTable : public ::Il2CppObject {
    public:
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByName(System.String name)
    // Offset: 0x1F1DABC
    static ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW name);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x1F1DCE4
    static ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
  }; // Org.BouncyCastle.Asn1.X9.ECNamedCurveTable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::ECNamedCurveTable::GetByName
// Il2CppName: GetByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&Org::BouncyCastle::Asn1::X9::ECNamedCurveTable::GetByName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::ECNamedCurveTable*), "GetByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::ECNamedCurveTable::GetByOid
// Il2CppName: GetByOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Asn1::X9::ECNamedCurveTable::GetByOid)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::ECNamedCurveTable*), "GetByOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
