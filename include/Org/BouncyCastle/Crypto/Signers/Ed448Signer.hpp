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
  // Forward declaring type: Ed448PrivateKeyParameters
  class Ed448PrivateKeyParameters;
  // Forward declaring type: Ed448PublicKeyParameters
  class Ed448PublicKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed448Signer
  class Ed448Signer : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // Nested type: Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer
    class Buffer;
    // private readonly Org.BouncyCastle.Crypto.Signers.Ed448Signer/Buffer buffer
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer* buffer;
    // private readonly System.Byte[] context
    // Offset: 0x18
    ::Array<uint8_t>* context;
    // private System.Boolean forSigning
    // Offset: 0x20
    bool forSigning;
    // private Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters privateKey
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey;
    // private Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters publicKey
    // Offset: 0x30
    Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* publicKey;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // public System.Void .ctor(System.Byte[] context)
    // Offset: 0x104EC78
    static Ed448Signer* New_ctor(::Array<uint8_t>* context);
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x104ED3C
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x104EE24
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* buf, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x104EE48
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Byte[] ISigner::GenerateSignature()
    ::Array<uint8_t>* GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x104F044
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Signers.Ed448Signer
  check_size<sizeof(Ed448Signer), 48 + sizeof(void*) + 8 - (48 + sizeof(void*)) % 8> __Org_BouncyCastle_Crypto_Signers_Ed448SignerSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed448Signer*, "Org.BouncyCastle.Crypto.Signers", "Ed448Signer");
#pragma pack(pop)