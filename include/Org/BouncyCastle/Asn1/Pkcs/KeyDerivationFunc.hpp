// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
#include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Skipping declaration: Asn1Encodable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc
  class KeyDerivationFunc : public Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
    public:
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1408A64
    // Implemented from: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
    // Base method: System.Void AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    static KeyDerivationFunc* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier id, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    // Offset: 0x1408A6C
    // Implemented from: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
    // Base method: System.Void AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier id, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    static KeyDerivationFunc* New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier* id, Org::BouncyCastle::Asn1::Asn1Encodable* parameters);
  }; // Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*, "Org.BouncyCastle.Asn1.Pkcs", "KeyDerivationFunc");
#pragma pack(pop)
