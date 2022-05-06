// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: DigestInfo
  class DigestInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DigestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DigestInfo*, "Org.BouncyCastle.Asn1.X509", "DigestInfo");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.DigestInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DigestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly System.Byte[] digest
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> digest;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Byte[] digest
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_digest();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_algID();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID, System.Byte[] digest)
    // Offset: 0x1F134C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t> digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::DigestInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestInfo*, creationType>(algID, digest)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1F134F8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.DigestInfo
  #pragma pack(pop)
  static check_size<sizeof(DigestInfo), 24 + sizeof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)> __Org_BouncyCastle_Asn1_X509_DigestInfoSizeCheck;
  static_assert(sizeof(DigestInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DigestInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::DigestInfo::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::DigestInfo::*)()>(&Org::BouncyCastle::Asn1::X509::DigestInfo::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::DigestInfo*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
