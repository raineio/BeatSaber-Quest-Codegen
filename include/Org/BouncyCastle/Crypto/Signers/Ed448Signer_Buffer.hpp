// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Signers.Ed448Signer
#include "Org/BouncyCastle/Crypto/Signers/Ed448Signer.hpp"
// Including type: System.IO.MemoryStream
#include "System/IO/MemoryStream.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed448PrivateKeyParameters
  class Ed448PrivateKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed448Signer/Buffer
  class Ed448Signer::Buffer : public System::IO::MemoryStream {
    public:
    // System.Byte[] GenerateSignature(Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters privateKey, System.Byte[] ctx)
    // Offset: 0xF534D8
    ::Array<uint8_t>* GenerateSignature(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey, ::Array<uint8_t>* ctx);
    // System.Void Reset()
    // Offset: 0xF53650
    void Reset();
    // public System.Void .ctor()
    // Offset: 0xF53328
    // Implemented from: System.IO.MemoryStream
    // Base method: System.Void MemoryStream::.ctor()
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static Ed448Signer::Buffer* New_ctor();
  }; // Org.BouncyCastle.Crypto.Signers.Ed448Signer/Buffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer*, "Org.BouncyCastle.Crypto.Signers", "Ed448Signer/Buffer");
#pragma pack(pop)
