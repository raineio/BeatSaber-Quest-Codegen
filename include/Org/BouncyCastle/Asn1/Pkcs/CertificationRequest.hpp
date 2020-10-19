// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: CertificationRequestInfo
  class CertificationRequestInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.CertificationRequest
  class CertificationRequest : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // protected Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo reqInfo
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* reqInfo;
    // protected Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier sigAlgId
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;
    // protected Org.BouncyCastle.Asn1.DerBitString sigBits
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerBitString* sigBits;
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1406FE0
    static CertificationRequest* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x14071F0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.CertificationRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::CertificationRequest*, "Org.BouncyCastle.Asn1.Pkcs", "CertificationRequest");
#pragma pack(pop)
