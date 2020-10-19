// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/AbstractECMultiplier.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WNafL2RMultiplier
  class WNafL2RMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
    public:
    // protected override Org.BouncyCastle.Math.EC.ECPoint MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x18F5648
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECMultiplier::MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k);
    // public System.Void .ctor()
    // Offset: 0x18F5E18
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: System.Void AbstractECMultiplier::.ctor()
    // Base method: System.Void Object::.ctor()
    static WNafL2RMultiplier* New_ctor();
  }; // Org.BouncyCastle.Math.EC.Multiplier.WNafL2RMultiplier
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "WNafL2RMultiplier");
#pragma pack(pop)
