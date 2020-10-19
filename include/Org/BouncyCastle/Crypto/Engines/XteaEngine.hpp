// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.XteaEngine
  class XteaEngine : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IBlockCipher {
    public:
    // private System.UInt32[] _S
    // Offset: 0x10
    ::Array<uint>* S;
    // private System.UInt32[] _sum0
    // Offset: 0x18
    ::Array<uint>* sum0;
    // private System.UInt32[] _sum1
    // Offset: 0x20
    ::Array<uint>* sum1;
    // private System.Boolean _initialised
    // Offset: 0x28
    bool initialised;
    // private System.Boolean _forEncryption
    // Offset: 0x29
    bool forEncryption;
    // private System.Void setKey(System.Byte[] key)
    // Offset: 0x14AC018
    void setKey(::Array<uint8_t>* key);
    // private System.Int32 encryptBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x14AC394
    int encryptBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 decryptBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x14AC288
    int decryptBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void .ctor()
    // Offset: 0x14ABDB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static XteaEngine* New_ctor();
    // public System.String get_AlgorithmName()
    // Offset: 0x14ABE60
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x14ABEA8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x14ABEB0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x14ABEB8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x14AC140
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x14AC4A0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.XteaEngine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::XteaEngine*, "Org.BouncyCastle.Crypto.Engines", "XteaEngine");
#pragma pack(pop)
