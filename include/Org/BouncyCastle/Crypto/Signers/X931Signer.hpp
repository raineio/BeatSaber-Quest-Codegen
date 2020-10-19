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
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RsaKeyParameters
  class RsaKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.X931Signer
  class X931Signer : public ::Il2CppObject, public Org::BouncyCastle::Crypto::ISigner {
    public:
    // private Org.BouncyCastle.Crypto.IDigest digest
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDigest* digest;
    // private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;
    // private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters kParam
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* kParam;
    // private System.Int32 trailer
    // Offset: 0x28
    int trailer;
    // private System.Int32 keyBits
    // Offset: 0x2C
    int keyBits;
    // private System.Byte[] block
    // Offset: 0x30
    ::Array<uint8_t>* block;
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest, System.Boolean isImplicit)
    // Offset: 0xF59A70
    static X931Signer* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0xF59B9C
    static X931Signer* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest);
    // private System.Void ClearBlock(System.Byte[] block)
    // Offset: 0xF59D2C
    void ClearBlock(::Array<uint8_t>* block);
    // public System.Void Reset()
    // Offset: 0xF59E2C
    void Reset();
    // private System.Void CreateSignatureBlock()
    // Offset: 0xF5A044
    void CreateSignatureBlock();
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xF59BA4
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 off, System.Int32 len)
    // Offset: 0xF59D50
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::BlockUpdate(System.Byte[] input, System.Int32 off, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* input, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0xF59EE0
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Byte[] ISigner::GenerateSignature()
    ::Array<uint8_t>* GenerateSignature();
  }; // Org.BouncyCastle.Crypto.Signers.X931Signer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::X931Signer*, "Org.BouncyCastle.Crypto.Signers", "X931Signer");
#pragma pack(pop)
