// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Djb
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field
  class Curve25519Field : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.UInt32[] P
    static ::Array<uint>* _get_P();
    // Set static field: static readonly System.UInt32[] P
    static void _set_P(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] PExt
    static ::Array<uint>* _get_PExt();
    // Set static field: static private readonly System.UInt32[] PExt
    static void _set_PExt(::Array<uint>* value);
    // static public System.Void Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x18CBBDC
    static void Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void AddOne(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x18CBD28
    static void AddOne(::Array<uint>* x, ::Array<uint>* z);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x18CBDF0
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.Void Inv(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x18CBEB4
    static void Inv(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Int32 IsZero(System.UInt32[] x)
    // Offset: 0x18CC13C
    static int IsZero(::Array<uint>* x);
    // static public System.Void Multiply(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x18CC22C
    static void Multiply(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void MultiplyAddToExt(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x18CC510
    static void MultiplyAddToExt(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Negate(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x18CC768
    static void Negate(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void Random(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x18CC83C
    static void Random(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z);
    // static public System.Void RandomMult(Org.BouncyCastle.Security.SecureRandom r, System.UInt32[] z)
    // Offset: 0x18CB59C
    static void RandomMult(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z);
    // static public System.Void Reduce(System.UInt32[] xx, System.UInt32[] z)
    // Offset: 0x18CC3A8
    static void Reduce(::Array<uint>* xx, ::Array<uint>* z);
    // static public System.Void Reduce27(System.UInt32 x, System.UInt32[] z)
    // Offset: 0x18CC940
    static void Reduce27(uint x, ::Array<uint>* z);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x18CC19C
    static void Square(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void SquareN(System.UInt32[] x, System.Int32 n, System.UInt32[] z)
    // Offset: 0x18CC2C4
    static void SquareN(::Array<uint>* x, int n, ::Array<uint>* z);
    // static public System.Void Subtract(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x18CCA58
    static void Subtract(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Twice(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x18CCB80
    static void Twice(::Array<uint>* x, ::Array<uint>* z);
    // static private System.UInt32 AddPTo(System.UInt32[] z)
    // Offset: 0x18CCAF4
    static uint AddPTo(::Array<uint>* z);
    // static private System.Int32 SubPFrom(System.UInt32[] z)
    // Offset: 0x18CBCA8
    static int SubPFrom(::Array<uint>* z);
    // static private System.Int32 SubPExtFrom(System.UInt32[] zz)
    // Offset: 0x18CC5E0
    static int SubPExtFrom(::Array<uint>* zz);
    // static private System.Void .cctor()
    // Offset: 0x18CCC4C
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519Field");
#pragma pack(pop)
