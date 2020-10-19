// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECPointBase
  class ECPointBase : public Org::BouncyCastle::Math::EC::ECPoint {
    public:
    // protected internal System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1D6B278
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    static ECPointBase* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1D6B30C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    static ECPointBase* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
    // public override System.Byte[] GetEncoded(System.Boolean compressed)
    // Offset: 0x1D6B3B0
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Byte[] ECPoint::GetEncoded(System.Boolean compressed)
    ::Array<uint8_t>* GetEncoded(bool compressed);
    // public override Org.BouncyCastle.Math.EC.ECPoint Multiply(Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1D6B588
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Multiply(Org.BouncyCastle.Math.BigInteger k)
    Org::BouncyCastle::Math::EC::ECPoint* Multiply(Org::BouncyCastle::Math::BigInteger* k);
  }; // Org.BouncyCastle.Math.EC.ECPointBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECPointBase*, "Org.BouncyCastle.Math.EC", "ECPointBase");
#pragma pack(pop)
