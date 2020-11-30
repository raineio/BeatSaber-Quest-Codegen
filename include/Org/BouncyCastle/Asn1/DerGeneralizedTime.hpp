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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.DerGeneralizedTime
  class DerGeneralizedTime : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.String time
    // Offset: 0x10
    ::Il2CppString* time;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return time;
    }
    // static public Org.BouncyCastle.Asn1.DerGeneralizedTime GetInstance(System.Object obj)
    // Offset: 0x1381C68
    static Org::BouncyCastle::Asn1::DerGeneralizedTime* GetInstance(::Il2CppObject* obj);
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x13743C4
    static DerGeneralizedTime* New_ctor(::Array<uint8_t>* bytes);
    // public System.String GetTime()
    // Offset: 0x1381D74
    ::Il2CppString* GetTime();
    // private System.String CalculateGmtOffset()
    // Offset: 0x13820C0
    ::Il2CppString* CalculateGmtOffset();
    // static private System.String Convert(System.Int32 time)
    // Offset: 0x13825E0
    static ::Il2CppString* Convert(int time);
    // public System.DateTime ToDateTime()
    // Offset: 0x1382398
    System::DateTime ToDateTime();
    // private System.String FString(System.Int32 count)
    // Offset: 0x13826A8
    ::Il2CppString* FString(int count);
    // private System.DateTime ParseDateString(System.String s, System.String format, System.Boolean makeUniversal)
    // Offset: 0x1382744
    System::DateTime ParseDateString(::Il2CppString* s, ::Il2CppString* format, bool makeUniversal);
    // private System.Boolean get_HasFractionalSeconds()
    // Offset: 0x1382678
    bool get_HasFractionalSeconds();
    // private System.Byte[] GetOctets()
    // Offset: 0x1382964
    ::Array<uint8_t>* GetOctets();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1382970
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x13829AC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1382A60
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
  }; // Org.BouncyCastle.Asn1.DerGeneralizedTime
  check_size<sizeof(DerGeneralizedTime), 16 + sizeof(void*) + 8 - (16 + sizeof(void*)) % 8> __Org_BouncyCastle_Asn1_DerGeneralizedTimeSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerGeneralizedTime*, "Org.BouncyCastle.Asn1", "DerGeneralizedTime");
#pragma pack(pop)