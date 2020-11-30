// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: Asn1InputStream
  class Asn1InputStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::X509
namespace Org::BouncyCastle::X509 {
  // Forward declaring type: PemParser
  class PemParser;
  // Forward declaring type: X509Crl
  class X509Crl;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: CertificateList
  class CertificateList;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Autogenerated type: Org.BouncyCastle.X509.X509CrlParser
  class X509CrlParser : public ::Il2CppObject {
    public:
    // private readonly System.Boolean lazyAsn1
    // Offset: 0x10
    bool lazyAsn1;
    // private Org.BouncyCastle.Asn1.Asn1Set sCrlData
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1Set* sCrlData;
    // private System.Int32 sCrlDataObjectCount
    // Offset: 0x20
    int sCrlDataObjectCount;
    // private System.IO.Stream currentCrlStream
    // Offset: 0x28
    System::IO::Stream* currentCrlStream;
    // Get static field: static private readonly Org.BouncyCastle.X509.PemParser PemCrlParser
    static Org::BouncyCastle::X509::PemParser* _get_PemCrlParser();
    // Set static field: static private readonly Org.BouncyCastle.X509.PemParser PemCrlParser
    static void _set_PemCrlParser(Org::BouncyCastle::X509::PemParser* value);
    // public System.Void .ctor(System.Boolean lazyAsn1)
    // Offset: 0x18C5720
    static X509CrlParser* New_ctor(bool lazyAsn1);
    // private Org.BouncyCastle.X509.X509Crl ReadPemCrl(System.IO.Stream inStream)
    // Offset: 0x18C5750
    Org::BouncyCastle::X509::X509Crl* ReadPemCrl(System::IO::Stream* inStream);
    // private Org.BouncyCastle.X509.X509Crl ReadDerCrl(Org.BouncyCastle.Asn1.Asn1InputStream dIn)
    // Offset: 0x18C5804
    Org::BouncyCastle::X509::X509Crl* ReadDerCrl(Org::BouncyCastle::Asn1::Asn1InputStream* dIn);
    // private Org.BouncyCastle.X509.X509Crl GetCrl()
    // Offset: 0x18C5A10
    Org::BouncyCastle::X509::X509Crl* GetCrl();
    // protected Org.BouncyCastle.X509.X509Crl CreateX509Crl(Org.BouncyCastle.Asn1.X509.CertificateList c)
    // Offset: 0x18C5A98
    Org::BouncyCastle::X509::X509Crl* CreateX509Crl(Org::BouncyCastle::Asn1::X509::CertificateList* c);
    // public Org.BouncyCastle.X509.X509Crl ReadCrl(System.Byte[] input)
    // Offset: 0x18C5AF8
    Org::BouncyCastle::X509::X509Crl* ReadCrl(::Array<uint8_t>* input);
    // public Org.BouncyCastle.X509.X509Crl ReadCrl(System.IO.Stream inStream)
    // Offset: 0x18C5B70
    Org::BouncyCastle::X509::X509Crl* ReadCrl(System::IO::Stream* inStream);
    // static private System.Void .cctor()
    // Offset: 0x18C5EA0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18C56F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static X509CrlParser* New_ctor();
  }; // Org.BouncyCastle.X509.X509CrlParser
  check_size<sizeof(X509CrlParser), 40 + sizeof(void*) + 8 - (40 + sizeof(void*)) % 8> __Org_BouncyCastle_X509_X509CrlParserSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509CrlParser*, "Org.BouncyCastle.X509", "X509CrlParser");
#pragma pack(pop)