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
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Kisa
namespace Org::BouncyCastle::Asn1::Kisa {
  // Forward declaring type: KisaObjectIdentifiers
  class KisaObjectIdentifiers;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*, "Org.BouncyCastle.Asn1.Kisa", "KisaObjectIdentifiers");
// Type namespace: Org.BouncyCastle.Asn1.Kisa
namespace Org::BouncyCastle::Asn1::Kisa {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Kisa.KisaObjectIdentifiers
  // [TokenAttribute] Offset: FFFFFFFF
  class KisaObjectIdentifiers : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier IdSeedCbc
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_IdSeedCbc();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier IdSeedCbc
    static void _set_IdSeedCbc(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier IdNpkiAppCmsSeedWrap
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_IdNpkiAppCmsSeedWrap();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier IdNpkiAppCmsSeedWrap
    static void _set_IdNpkiAppCmsSeedWrap(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // static private System.Void .cctor()
    // Offset: 0x196FB98
    static void _cctor();
  }; // Org.BouncyCastle.Asn1.Kisa.KisaObjectIdentifiers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Kisa::KisaObjectIdentifiers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
