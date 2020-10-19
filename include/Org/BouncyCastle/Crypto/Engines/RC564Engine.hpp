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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC564Engine
  class RC564Engine : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IBlockCipher {
    public:
    // private System.Int32 _noRounds
    // Offset: 0x10
    int noRounds;
    // private System.Int64[] _S
    // Offset: 0x18
    ::Array<int64_t>* S;
    // private System.Boolean forEncryption
    // Offset: 0x20
    bool forEncryption;
    // Get static field: static private readonly System.Int32 wordSize
    static int _get_wordSize();
    // Set static field: static private readonly System.Int32 wordSize
    static void _set_wordSize(int value);
    // Get static field: static private readonly System.Int32 bytesPerWord
    static int _get_bytesPerWord();
    // Set static field: static private readonly System.Int32 bytesPerWord
    static void _set_bytesPerWord(int value);
    // Get static field: static private readonly System.Int64 P64
    static int64_t _get_P64();
    // Set static field: static private readonly System.Int64 P64
    static void _set_P64(int64_t value);
    // Get static field: static private readonly System.Int64 Q64
    static int64_t _get_Q64();
    // Set static field: static private readonly System.Int64 Q64
    static void _set_Q64(int64_t value);
    // private System.Void SetKey(System.Byte[] key)
    // Offset: 0x1976300
    void SetKey(::Array<uint8_t>* key);
    // private System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x19767E0
    int EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1976618
    int DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int64 RotateLeft(System.Int64 x, System.Int64 y)
    // Offset: 0x19769B0
    int64_t RotateLeft(int64_t x, int64_t y);
    // private System.Int64 RotateRight(System.Int64 x, System.Int64 y)
    // Offset: 0x1976BE8
    int64_t RotateRight(int64_t x, int64_t y);
    // private System.Int64 BytesToWord(System.Byte[] src, System.Int32 srcOff)
    // Offset: 0x1976A40
    int64_t BytesToWord(::Array<uint8_t>* src, int srcOff);
    // private System.Void WordToBytes(System.Int64 word, System.Byte[] dst, System.Int32 dstOff)
    // Offset: 0x1976B08
    void WordToBytes(int64_t word, ::Array<uint8_t>* dst, int dstOff);
    // static private System.Void .cctor()
    // Offset: 0x1976C78
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x197607C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RC564Engine* New_ctor();
    // public System.String get_AlgorithmName()
    // Offset: 0x19760A8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x19760F0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x19760F8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1976164
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1976608
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x19769AC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.RC564Engine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC564Engine*, "Org.BouncyCastle.Crypto.Engines", "RC564Engine");
#pragma pack(pop)
