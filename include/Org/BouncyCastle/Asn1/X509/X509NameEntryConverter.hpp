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
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509NameEntryConverter
  class X509NameEntryConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::X509NameEntryConverter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*, "Org.BouncyCastle.Asn1.X509", "X509NameEntryConverter");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509NameEntryConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class X509NameEntryConverter : public ::Il2CppObject {
    public:
    // public Org.BouncyCastle.Asn1.Asn1Object GetConvertedValue(Org.BouncyCastle.Asn1.DerObjectIdentifier oid, System.String value)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW value);
  }; // Org.BouncyCastle.Asn1.X509.X509NameEntryConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::X509NameEntryConverter::GetConvertedValue
// Il2CppName: GetConvertedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::X509NameEntryConverter::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::StringW)>(&Org::BouncyCastle::Asn1::X509::X509NameEntryConverter::GetConvertedValue)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*), "GetConvertedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid, value});
  }
};
