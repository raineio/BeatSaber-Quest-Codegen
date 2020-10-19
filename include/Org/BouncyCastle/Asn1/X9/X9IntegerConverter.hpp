// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9IntegerConverter
  class X9IntegerConverter : public ::Il2CppObject {
    public:
    // static public System.Int32 GetByteLength(Org.BouncyCastle.Math.EC.ECFieldElement fe)
    // Offset: 0x161C98C
    static int GetByteLength(Org::BouncyCastle::Math::EC::ECFieldElement* fe);
    // static public System.Byte[] IntegerToBytes(Org.BouncyCastle.Math.BigInteger s, System.Int32 qLength)
    // Offset: 0x161C9C4
    static ::Array<uint8_t>* IntegerToBytes(Org::BouncyCastle::Math::BigInteger* s, int qLength);
  }; // Org.BouncyCastle.Asn1.X9.X9IntegerConverter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9IntegerConverter*, "Org.BouncyCastle.Asn1.X9", "X9IntegerConverter");
#pragma pack(pop)
