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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RC2Engine
  class RC2Engine : public ::Il2CppObject, public Org::BouncyCastle::Crypto::IBlockCipher {
    public:
    // private System.Int32[] workingKey
    // Offset: 0x10
    ::Array<int>* workingKey;
    // private System.Boolean encrypting
    // Offset: 0x18
    bool encrypting;
    // Get static field: static private readonly System.Byte[] piTable
    static ::Array<uint8_t>* _get_piTable();
    // Set static field: static private readonly System.Byte[] piTable
    static void _set_piTable(::Array<uint8_t>* value);
    // private System.Int32[] GenerateWorkingKey(System.Byte[] key, System.Int32 bits)
    // Offset: 0x19741A8
    ::Array<int>* GenerateWorkingKey(::Array<uint8_t>* key, int bits);
    // private System.Int32 RotateWordLeft(System.Int32 x, System.Int32 y)
    // Offset: 0x1975134
    int RotateWordLeft(int x, int y);
    // private System.Void EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x19747E0
    void EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Void DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1974CCC
    void DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // static private System.Void .cctor()
    // Offset: 0x1975150
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x19744DC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void Reset()
    // Offset: 0x1974660
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
    // public System.String get_AlgorithmName()
    // Offset: 0x1974664
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x19746AC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x19746B4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x19746BC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void .ctor()
    // Offset: 0x19751D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RC2Engine* New_ctor();
  }; // Org.BouncyCastle.Crypto.Engines.RC2Engine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC2Engine*, "Org.BouncyCastle.Crypto.Engines", "RC2Engine");
#pragma pack(pop)
