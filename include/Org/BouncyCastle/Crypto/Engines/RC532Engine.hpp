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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC532Engine
  class RC532Engine : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IBlockCipher {
    public:
    // private System.Int32 _noRounds
    // Offset: 0x10
    int noRounds;
    // private System.Int32[] _S
    // Offset: 0x18
    ::Array<int>* S;
    // private System.Boolean forEncryption
    // Offset: 0x20
    bool forEncryption;
    // Get static field: static private readonly System.Int32 P32
    static int _get_P32();
    // Set static field: static private readonly System.Int32 P32
    static void _set_P32(int value);
    // Get static field: static private readonly System.Int32 Q32
    static int _get_Q32();
    // Set static field: static private readonly System.Int32 Q32
    static void _set_Q32(int value);
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x19759EC
    void SetKey(::Array<uint8_t>* key);
    // private System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1975DCC
    int EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1975CB0
    int DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 RotateLeft(System.Int32 x, System.Int32 y)
    // Offset: 0x1975EF4
    int RotateLeft(int x, int y);
    // private System.Int32 RotateRight(System.Int32 x, System.Int32 y)
    // Offset: 0x1976008
    int RotateRight(int x, int y);
    // private System.Int32 BytesToWord(System.Byte[] src, System.Int32 srcOff)
    // Offset: 0x1975F00
    int BytesToWord(::Array<uint8_t>* src, int srcOff);
    // private System.Void WordToBytes(System.Int32 word, System.Byte[] dst, System.Int32 dstOff)
    // Offset: 0x1975F7C
    void WordToBytes(int word, ::Array<uint8_t>* dst, int dstOff);
    // static private System.Void .cctor()
    // Offset: 0x1976010
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1975744
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RC532Engine* New_ctor();
    // public System.String get_AlgorithmName()
    // Offset: 0x1975770
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x19757B8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x19757C0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x19757C8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1975C88
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1975EF0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.RC532Engine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC532Engine*, "Org.BouncyCastle.Crypto.Engines", "RC532Engine");
#pragma pack(pop)
