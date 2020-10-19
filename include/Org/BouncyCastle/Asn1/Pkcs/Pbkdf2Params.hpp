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
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: DerInteger
  class DerInteger;
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
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params
  class Pbkdf2Params : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString octStr
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1OctetString* octStr;
    // private readonly Org.BouncyCastle.Asn1.DerInteger iterationCount
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* iterationCount;
    // private readonly Org.BouncyCastle.Asn1.DerInteger keyLength
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* keyLength;
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier prf
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf;
    // Get static field: static private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algid_hmacWithSHA1
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _get_algid_hmacWithSHA1();
    // Set static field: static private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algid_hmacWithSHA1
    static void _set_algid_hmacWithSHA1(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);
    // static public Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params GetInstance(System.Object obj)
    // Offset: 0x140918C
    static Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x140942C
    static Pbkdf2Params* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public System.Byte[] GetSalt()
    // Offset: 0x140972C
    ::Array<uint8_t>* GetSalt();
    // public Org.BouncyCastle.Math.BigInteger get_IterationCount()
    // Offset: 0x140974C
    Org::BouncyCastle::Math::BigInteger* get_IterationCount();
    // public Org.BouncyCastle.Math.BigInteger get_KeyLength()
    // Offset: 0x1409768
    Org::BouncyCastle::Math::BigInteger* get_KeyLength();
    // public System.Boolean get_IsDefaultPrf()
    // Offset: 0x140977C
    bool get_IsDefaultPrf();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_Prf()
    // Offset: 0x1409808
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Prf();
    // static private System.Void .cctor()
    // Offset: 0x1409A24
    static void _cctor();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x140987C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*, "Org.BouncyCastle.Asn1.Pkcs", "Pbkdf2Params");
#pragma pack(pop)
