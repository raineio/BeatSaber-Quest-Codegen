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
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure
  class RsaPublicKeyStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private Org.BouncyCastle.Math.BigInteger modulus
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* modulus;
    // private Org.BouncyCastle.Math.BigInteger publicExponent
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* publicExponent;
    // static public Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure GetInstance(System.Object obj)
    // Offset: 0x160EC28
    static Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x160ED9C
    static RsaPublicKeyStructure* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public Org.BouncyCastle.Math.BigInteger get_Modulus()
    // Offset: 0x160EF00
    Org::BouncyCastle::Math::BigInteger* get_Modulus();
    // public Org.BouncyCastle.Math.BigInteger get_PublicExponent()
    // Offset: 0x160EF08
    Org::BouncyCastle::Math::BigInteger* get_PublicExponent();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x160EF10
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure*, "Org.BouncyCastle.Asn1.X509", "RsaPublicKeyStructure");
#pragma pack(pop)
