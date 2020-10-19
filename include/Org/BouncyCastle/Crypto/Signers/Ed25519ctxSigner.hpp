// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed25519PrivateKeyParameters
  class Ed25519PrivateKeyParameters;
  // Forward declaring type: Ed25519PublicKeyParameters
  class Ed25519PublicKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed25519ctxSigner
  class Ed25519ctxSigner : public ::Il2CppObject, public Org::BouncyCastle::Crypto::ISigner {
    public:
    // Nested type: Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Buffer
    class Buffer;
    // private readonly Org.BouncyCastle.Crypto.Signers.Ed25519ctxSigner/Buffer buffer
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Buffer* buffer;
    // private readonly System.Byte[] context
    // Offset: 0x18
    ::Array<uint8_t>* context;
    // private System.Boolean forSigning
    // Offset: 0x20
    bool forSigning;
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters privateKey
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey;
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters publicKey
    // Offset: 0x30
    Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey;
    // public System.Void .ctor(System.Byte[] context)
    // Offset: 0xF5286C
    static Ed25519ctxSigner* New_ctor(::Array<uint8_t>* context);
    // public System.Void Reset()
    // Offset: 0xF52C38
    void Reset();
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xF52930
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0xF52A18
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* buf, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0xF52A3C
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Byte[] ISigner::GenerateSignature()
    ::Array<uint8_t>* GenerateSignature();
  }; // Org.BouncyCastle.Crypto.Signers.Ed25519ctxSigner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*, "Org.BouncyCastle.Crypto.Signers", "Ed25519ctxSigner");
#pragma pack(pop)
