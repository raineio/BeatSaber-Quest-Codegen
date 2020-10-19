// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Autogenerated type: Org.BouncyCastle.Security.DigestUtilities
  class DigestUtilities : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Security::DigestUtilities::DigestAlgorithm
    struct DigestAlgorithm;
    // Get static field: static private readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static private readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oids
    static System::Collections::IDictionary* _get_oids();
    // Set static field: static private readonly System.Collections.IDictionary oids
    static void _set_oids(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0xFC0BB4
    static void _cctor();
    // static public Org.BouncyCastle.Crypto.IDigest GetDigest(Org.BouncyCastle.Asn1.DerObjectIdentifier id)
    // Offset: 0xFC4660
    static Org::BouncyCastle::Crypto::IDigest* GetDigest(Org::BouncyCastle::Asn1::DerObjectIdentifier* id);
    // static public Org.BouncyCastle.Crypto.IDigest GetDigest(System.String algorithm)
    // Offset: 0xFC46D0
    static Org::BouncyCastle::Crypto::IDigest* GetDigest(::Il2CppString* algorithm);
    // static public System.Byte[] DoFinal(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0xFC505C
    static ::Array<uint8_t>* DoFinal(Org::BouncyCastle::Crypto::IDigest* digest);
  }; // Org.BouncyCastle.Security.DigestUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::DigestUtilities*, "Org.BouncyCastle.Security", "DigestUtilities");
#pragma pack(pop)
