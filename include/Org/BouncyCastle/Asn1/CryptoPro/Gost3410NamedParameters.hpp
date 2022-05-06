// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Forward declaring type: Gost3410ParamSetParameters
  class Gost3410ParamSetParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Forward declaring type: Gost3410NamedParameters
  class Gost3410NamedParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410NamedParameters");
// Type namespace: Org.BouncyCastle.Asn1.CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3410NamedParameters : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.IDictionary objIds
    static ::System::Collections::IDictionary* _get_objIds();
    // Set static field: static private readonly System.Collections.IDictionary objIds
    static void _set_objIds(::System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary parameters
    static ::System::Collections::IDictionary* _get_parameters();
    // Set static field: static private readonly System.Collections.IDictionary parameters
    static void _set_parameters(::System::Collections::IDictionary* value);
    // Get static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProA
    static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* _get_cryptoProA();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProA
    static void _set_cryptoProA(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);
    // Get static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProB
    static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* _get_cryptoProB();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProB
    static void _set_cryptoProB(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);
    // Get static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProXchA
    static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* _get_cryptoProXchA();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProXchA
    static void _set_cryptoProXchA(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);
    // static private System.Void .cctor()
    // Offset: 0x1C312A4
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x1C31948
    static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
  }; // Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::GetByOid
// Il2CppName: GetByOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters::GetByOid)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*), "GetByOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
