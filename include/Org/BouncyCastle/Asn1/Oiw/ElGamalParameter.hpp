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
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Oiw
namespace Org::BouncyCastle::Asn1::Oiw {
  // Autogenerated type: Org.BouncyCastle.Asn1.Oiw.ElGamalParameter
  class ElGamalParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Org.BouncyCastle.Asn1.DerInteger p
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* p;
    // Org.BouncyCastle.Asn1.DerInteger g
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* g;
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1406718
    static ElGamalParameter* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x140682C
    Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_G()
    // Offset: 0x1406848
    Org::BouncyCastle::Math::BigInteger* get_G();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1406864
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Oiw.ElGamalParameter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Oiw::ElGamalParameter*, "Org.BouncyCastle.Asn1.Oiw", "ElGamalParameter");
#pragma pack(pop)
