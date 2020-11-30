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
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: Holder
  class Holder;
  // Forward declaring type: AttCertIssuer
  class AttCertIssuer;
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: AttCertValidityPeriod
  class AttCertValidityPeriod;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo
  class AttributeCertificateInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // readonly Org.BouncyCastle.Asn1.DerInteger version
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* version;
    // readonly Org.BouncyCastle.Asn1.X509.Holder holder
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::Holder* holder;
    // readonly Org.BouncyCastle.Asn1.X509.AttCertIssuer issuer
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer;
    // readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signature
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;
    // readonly Org.BouncyCastle.Asn1.DerInteger serialNumber
    // Offset: 0x30
    Org::BouncyCastle::Asn1::DerInteger* serialNumber;
    // readonly Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod attrCertValidityPeriod
    // Offset: 0x38
    Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* attrCertValidityPeriod;
    // readonly Org.BouncyCastle.Asn1.Asn1Sequence attributes
    // Offset: 0x40
    Org::BouncyCastle::Asn1::Asn1Sequence* attributes;
    // readonly Org.BouncyCastle.Asn1.DerBitString issuerUniqueID
    // Offset: 0x48
    Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;
    // readonly Org.BouncyCastle.Asn1.X509.X509Extensions extensions
    // Offset: 0x50
    Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;
    // static public Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo GetInstance(System.Object obj)
    // Offset: 0x1577BCC
    static Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1577E9C
    static AttributeCertificateInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod get_AttrCertValidityPeriod()
    // Offset: 0x1578660
    Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* get_AttrCertValidityPeriod();
    // public Org.BouncyCastle.Asn1.X509.X509Extensions get_Extensions()
    // Offset: 0x1578668
    Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1578670
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo
  check_size<sizeof(AttributeCertificateInfo), 80 + sizeof(void*) + 8 - (80 + sizeof(void*)) % 8> __Org_BouncyCastle_Asn1_X509_AttributeCertificateInfoSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*, "Org.BouncyCastle.Asn1.X509", "AttributeCertificateInfo");
#pragma pack(pop)