// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBasicAgreement
#include "Org/BouncyCastle/Crypto/IBasicAgreement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECPrivateKeyParameters
  class ECPrivateKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
  // Autogenerated type: Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement
  class ECDHBasicAgreement : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IBasicAgreement {
    public:
    // protected internal Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters privKey
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privKey;
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*
    constexpr operator Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*() const noexcept {
      return privKey;
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x161E748
    // Implemented from: Org.BouncyCastle.Crypto.IBasicAgreement
    // Base method: System.Void IBasicAgreement::Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetFieldSize()
    // Offset: 0x161E81C
    // Implemented from: Org.BouncyCastle.Crypto.IBasicAgreement
    // Base method: System.Int32 IBasicAgreement::GetFieldSize()
    int GetFieldSize();
    // public Org.BouncyCastle.Math.BigInteger CalculateAgreement(Org.BouncyCastle.Crypto.ICipherParameters pubKey)
    // Offset: 0x161E868
    // Implemented from: Org.BouncyCastle.Crypto.IBasicAgreement
    // Base method: Org.BouncyCastle.Math.BigInteger IBasicAgreement::CalculateAgreement(Org.BouncyCastle.Crypto.ICipherParameters pubKey)
    Org::BouncyCastle::Math::BigInteger* CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters* pubKey);
    // public System.Void .ctor()
    // Offset: 0x161EABC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ECDHBasicAgreement* New_ctor();
  }; // Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECDHBasicAgreement");
#pragma pack(pop)
