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
  // Autogenerated type: Org.BouncyCastle.Asn1.DerIA5String
  class DerIA5String : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // private readonly System.String str
    // Offset: 0x10
    ::Il2CppString* str;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return str;
    }
    // static public Org.BouncyCastle.Asn1.DerIA5String GetInstance(System.Object obj)
    // Offset: 0x1382BF0
    static Org::BouncyCastle::Asn1::DerIA5String* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.DerIA5String GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x1382CF0
    static Org::BouncyCastle::Asn1::DerIA5String* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x13744C4
    static DerIA5String* New_ctor(::Array<uint8_t>* str);
    // public System.Void .ctor(System.String str)
    // Offset: 0x1382F28
    static DerIA5String* New_ctor(::Il2CppString* str);
    // public System.Void .ctor(System.String str, System.Boolean validate)
    // Offset: 0x1382E38
    static DerIA5String* New_ctor(::Il2CppString* str, bool validate);
    // public System.Byte[] GetOctets()
    // Offset: 0x1382FA4
    ::Array<uint8_t>* GetOctets();
    // static public System.Boolean IsIA5String(System.String str)
    // Offset: 0x1382F30
    static bool IsIA5String(::Il2CppString* str);
    // public override System.String GetString()
    // Offset: 0x1382F9C
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::Il2CppString* GetString();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1382FB0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1382FEC
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.Int32 DerStringBase::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1383008
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerIA5String
  check_size<sizeof(DerIA5String), 16 + sizeof(void*) + 8 - (16 + sizeof(void*)) % 8> __Org_BouncyCastle_Asn1_DerIA5StringSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerIA5String*, "Org.BouncyCastle.Asn1", "DerIA5String");
#pragma pack(pop)