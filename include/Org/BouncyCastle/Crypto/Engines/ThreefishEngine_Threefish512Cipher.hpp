// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine
#include "Org/BouncyCastle/Crypto/Engines/ThreefishEngine.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
#include "Org/BouncyCastle/Crypto/Engines/ThreefishEngine_ThreefishCipher.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
  class ThreefishEngine::Threefish512Cipher : public Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher {
    public:
    // System.Void .ctor(System.UInt64[] kw, System.UInt64[] t)
    // Offset: 0x19E16D4
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
    // Base method: System.Void ThreefishCipher::.ctor(System.UInt64[] kw, System.UInt64[] t)
    static ThreefishEngine::Threefish512Cipher* New_ctor(::Array<uint64_t>* kw, ::Array<uint64_t>* t);
    // override System.Void EncryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    // Offset: 0x19E42BC
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
    // Base method: System.Void ThreefishCipher::EncryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    void EncryptBlock(::Array<uint64_t>* block, ::Array<uint64_t>* outWords);
    // override System.Void DecryptBlock(System.UInt64[] block, System.UInt64[] state)
    // Offset: 0x19E4824
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
    // Base method: System.Void ThreefishCipher::DecryptBlock(System.UInt64[] block, System.UInt64[] state)
    void DecryptBlock(::Array<uint64_t>* block, ::Array<uint64_t>* state);
  }; // Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish512Cipher");
#pragma pack(pop)
