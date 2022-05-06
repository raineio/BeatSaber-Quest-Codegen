// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509.Extension
namespace Org::BouncyCastle::X509::Extension {
  // Forward declaring type: X509ExtensionUtilities
  class X509ExtensionUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*, "Org.BouncyCastle.X509.Extension", "X509ExtensionUtilities");
// Type namespace: Org.BouncyCastle.X509.Extension
namespace Org::BouncyCastle::X509::Extension {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.Extension.X509ExtensionUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class X509ExtensionUtilities : public ::Il2CppObject {
    public:
    // static public Org.BouncyCastle.Asn1.Asn1Object FromExtensionValue(Org.BouncyCastle.Asn1.Asn1OctetString extensionValue)
    // Offset: 0x25F19C4
    static ::Org::BouncyCastle::Asn1::Asn1Object* FromExtensionValue(::Org::BouncyCastle::Asn1::Asn1OctetString* extensionValue);
  }; // Org.BouncyCastle.X509.Extension.X509ExtensionUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::FromExtensionValue
// Il2CppName: FromExtensionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&Org::BouncyCastle::X509::Extension::X509ExtensionUtilities::FromExtensionValue)> {
  static const MethodInfo* get() {
    static auto* extensionValue = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1OctetString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::Extension::X509ExtensionUtilities*), "FromExtensionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extensionValue});
  }
};
