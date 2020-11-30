// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerStringBase
#include "Org/BouncyCastle/Asn1/DerStringBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
  // Skipping declaration: Asn1Object because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.DerBitString
  class DerBitString : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // protected readonly System.Byte[] mData
    // Offset: 0x10
    ::Array<uint8_t>* mData;
    // protected readonly System.Int32 mPadBits
    // Offset: 0x18
    int mPadBits;
    // Get static field: static private readonly System.Char[] table
    static ::Array<::Il2CppChar>* _get_table();
    // Set static field: static private readonly System.Char[] table
    static void _set_table(::Array<::Il2CppChar>* value);
    // static public Org.BouncyCastle.Asn1.DerBitString GetInstance(System.Object obj)
    // Offset: 0x137FD48
    static Org::BouncyCastle::Asn1::DerBitString* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.DerBitString GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x137FF58
    static Org::BouncyCastle::Asn1::DerBitString* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // public System.Void .ctor(System.Byte[] data, System.Int32 padBits)
    // Offset: 0x1378AE8
    static DerBitString* New_ctor(::Array<uint8_t>* data, int padBits);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x13800D0
    static DerBitString* New_ctor(::Array<uint8_t>* data);
    // public System.Byte[] GetOctets()
    // Offset: 0x13800D8
    ::Array<uint8_t>* GetOctets();
    // public System.Byte[] GetBytes()
    // Offset: 0x1380188
    ::Array<uint8_t>* GetBytes();
    // public System.Int32 get_PadBits()
    // Offset: 0x1380240
    int get_PadBits();
    // static Org.BouncyCastle.Asn1.DerBitString FromAsn1Octets(System.Byte[] octets)
    // Offset: 0x1374260
    static Org::BouncyCastle::Asn1::DerBitString* FromAsn1Octets(::Array<uint8_t>* octets);
    // static private System.Void .cctor()
    // Offset: 0x1380594
    static void _cctor();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1378D9C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x13802A8
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.Int32 DerStringBase::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1380340
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // public override System.String GetString()
    // Offset: 0x1380428
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::Il2CppString* GetString();
  }; // Org.BouncyCastle.Asn1.DerBitString
  check_size<sizeof(DerBitString), 24 + sizeof(int) + 8 - (24 + sizeof(int)) % 8> __Org_BouncyCastle_Asn1_DerBitStringSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerBitString*, "Org.BouncyCastle.Asn1", "DerBitString");
#pragma pack(pop)