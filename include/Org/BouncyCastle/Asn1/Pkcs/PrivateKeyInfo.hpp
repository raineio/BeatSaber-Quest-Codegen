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
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo
  class PrivateKeyInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger version
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* version;
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier privateKeyAlgorithm
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm;
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString privateKey
    // Offset: 0x20
    Org::BouncyCastle::Asn1::Asn1OctetString* privateKey;
    // private readonly Org.BouncyCastle.Asn1.Asn1Set attributes
    // Offset: 0x28
    Org::BouncyCastle::Asn1::Asn1Set* attributes;
    // private readonly Org.BouncyCastle.Asn1.DerBitString publicKey
    // Offset: 0x30
    Org::BouncyCastle::Asn1::DerBitString* publicKey;
    // static public Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo GetInstance(System.Object obj)
    // Offset: 0x13FDABC
    static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* GetInstance(::Il2CppObject* obj);
    // static private System.Int32 GetVersionValue(Org.BouncyCastle.Asn1.DerInteger version)
    // Offset: 0x13FDEB0
    static int GetVersionValue(Org::BouncyCastle::Asn1::DerInteger* version);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier privateKeyAlgorithm, Org.BouncyCastle.Asn1.Asn1Encodable privateKey)
    // Offset: 0x13FDFD4
    static PrivateKeyInfo* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable* privateKey);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier privateKeyAlgorithm, Org.BouncyCastle.Asn1.Asn1Encodable privateKey, Org.BouncyCastle.Asn1.Asn1Set attributes, System.Byte[] publicKey)
    // Offset: 0x13FDFE0
    static PrivateKeyInfo* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, Org::BouncyCastle::Asn1::Asn1Set* attributes, ::Array<uint8_t>* publicKey);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x13FDB60
    static PrivateKeyInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_PrivateKeyAlgorithm()
    // Offset: 0x13FE168
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_PrivateKeyAlgorithm();
    // public Org.BouncyCastle.Asn1.Asn1OctetString get_PrivateKeyData()
    // Offset: 0x13FE170
    Org::BouncyCastle::Asn1::Asn1OctetString* get_PrivateKeyData();
    // public Org.BouncyCastle.Asn1.Asn1Object ParsePrivateKey()
    // Offset: 0x13FE178
    Org::BouncyCastle::Asn1::Asn1Object* ParsePrivateKey();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x13FE1A4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo
  check_size<sizeof(PrivateKeyInfo), 48 + sizeof(void*) + 8 - (48 + sizeof(void*)) % 8> __Org_BouncyCastle_Asn1_Pkcs_PrivateKeyInfoSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, "Org.BouncyCastle.Asn1.Pkcs", "PrivateKeyInfo");
#pragma pack(pop)