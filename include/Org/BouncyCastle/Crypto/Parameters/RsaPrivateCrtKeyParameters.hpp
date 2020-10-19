// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/RsaKeyParameters.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
  class RsaPrivateCrtKeyParameters : public Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger e
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* e;
    // private readonly Org.BouncyCastle.Math.BigInteger p
    // Offset: 0x30
    Org::BouncyCastle::Math::BigInteger* p;
    // private readonly Org.BouncyCastle.Math.BigInteger q
    // Offset: 0x38
    Org::BouncyCastle::Math::BigInteger* q;
    // private readonly Org.BouncyCastle.Math.BigInteger dP
    // Offset: 0x40
    Org::BouncyCastle::Math::BigInteger* dP;
    // private readonly Org.BouncyCastle.Math.BigInteger dQ
    // Offset: 0x48
    Org::BouncyCastle::Math::BigInteger* dQ;
    // private readonly Org.BouncyCastle.Math.BigInteger qInv
    // Offset: 0x50
    Org::BouncyCastle::Math::BigInteger* qInv;
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger modulus, Org.BouncyCastle.Math.BigInteger publicExponent, Org.BouncyCastle.Math.BigInteger privateExponent, Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger dP, Org.BouncyCastle.Math.BigInteger dQ, Org.BouncyCastle.Math.BigInteger qInv)
    // Offset: 0xF4E12C
    static RsaPrivateCrtKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* modulus, Org::BouncyCastle::Math::BigInteger* publicExponent, Org::BouncyCastle::Math::BigInteger* privateExponent, Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* dP, Org::BouncyCastle::Math::BigInteger* dQ, Org::BouncyCastle::Math::BigInteger* qInv);
    // public Org.BouncyCastle.Math.BigInteger get_PublicExponent()
    // Offset: 0xF4E3E8
    Org::BouncyCastle::Math::BigInteger* get_PublicExponent();
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0xF4E3F0
    Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0xF4E3F8
    Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_DP()
    // Offset: 0xF4E400
    Org::BouncyCastle::Math::BigInteger* get_DP();
    // public Org.BouncyCastle.Math.BigInteger get_DQ()
    // Offset: 0xF4E408
    Org::BouncyCastle::Math::BigInteger* get_DQ();
    // public Org.BouncyCastle.Math.BigInteger get_QInv()
    // Offset: 0xF4E410
    Org::BouncyCastle::Math::BigInteger* get_QInv();
    // static private System.Void ValidateValue(Org.BouncyCastle.Math.BigInteger x, System.String name, System.String desc)
    // Offset: 0xF4E2FC
    static void ValidateValue(Org::BouncyCastle::Math::BigInteger* x, ::Il2CppString* name, ::Il2CppString* desc);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF4E418
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
    // Base method: System.Boolean RsaKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF4E5A4
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
    // Base method: System.Int32 RsaKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaPrivateCrtKeyParameters");
#pragma pack(pop)
