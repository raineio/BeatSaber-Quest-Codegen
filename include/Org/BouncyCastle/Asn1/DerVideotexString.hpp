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
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
  // Skipping declaration: Asn1Object because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.DerVideotexString
  class DerVideotexString : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // private readonly System.Byte[] mString
    // Offset: 0x10
    ::Array<uint8_t>* mString;
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return mString;
    }
    // public System.Void .ctor(System.Byte[] encoding)
    // Offset: 0x1315FEC
    static DerVideotexString* New_ctor(::Array<uint8_t>* encoding);
    // public override System.String GetString()
    // Offset: 0x132792C
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::Il2CppString* GetString();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1327938
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x132795C
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.Int32 DerStringBase::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x13279C8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerVideotexString
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerVideotexString*, "Org.BouncyCastle.Asn1", "DerVideotexString");
#pragma pack(pop)
