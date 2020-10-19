// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.DerEnumerated
  class DerEnumerated : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.Byte[] bytes
    // Offset: 0x10
    ::Array<uint8_t>* bytes;
    // private readonly System.Int32 start
    // Offset: 0x18
    int start;
    // Get static field: static private readonly Org.BouncyCastle.Asn1.DerEnumerated[] cache
    static ::Array<Org::BouncyCastle::Asn1::DerEnumerated*>* _get_cache();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.DerEnumerated[] cache
    static void _set_cache(::Array<Org::BouncyCastle::Asn1::DerEnumerated*>* value);
    // static public Org.BouncyCastle.Asn1.DerEnumerated GetInstance(System.Object obj)
    // Offset: 0x13225F0
    static Org::BouncyCastle::Asn1::DerEnumerated* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(System.Int32 val)
    // Offset: 0x13226F0
    static DerEnumerated* New_ctor(int val);
    // public System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x13227E4
    static DerEnumerated* New_ctor(::Array<uint8_t>* bytes);
    // public Org.BouncyCastle.Math.BigInteger get_Value()
    // Offset: 0x1322A0C
    Org::BouncyCastle::Math::BigInteger* get_Value();
    // public System.Int32 get_IntValueExact()
    // Offset: 0x1322A74
    int get_IntValueExact();
    // static Org.BouncyCastle.Asn1.DerEnumerated FromOctetString(System.Byte[] enc)
    // Offset: 0x131566C
    static Org::BouncyCastle::Asn1::DerEnumerated* FromOctetString(::Array<uint8_t>* enc);
    // static private System.Void .cctor()
    // Offset: 0x1322D68
    static void _cctor();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1322C00
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1322C24
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1322CFC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
  }; // Org.BouncyCastle.Asn1.DerEnumerated
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerEnumerated*, "Org.BouncyCastle.Asn1", "DerEnumerated");
#pragma pack(pop)
