// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Anssi
namespace Org::BouncyCastle::Asn1::Anssi {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Anssi.AnssiObjectIdentifiers
  class AnssiObjectIdentifiers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AnssiObjectIdentifiers
    AnssiObjectIdentifiers() noexcept {}
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier FRP256v1
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* _get_FRP256v1();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerObjectIdentifier FRP256v1
    static void _set_FRP256v1(Org::BouncyCastle::Asn1::DerObjectIdentifier* value);
    // static private System.Void .cctor()
    // Offset: 0x16EF3C0
    static void _cctor();
  }; // Org.BouncyCastle.Asn1.Anssi.AnssiObjectIdentifiers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*, "Org.BouncyCastle.Asn1.Anssi", "AnssiObjectIdentifiers");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
