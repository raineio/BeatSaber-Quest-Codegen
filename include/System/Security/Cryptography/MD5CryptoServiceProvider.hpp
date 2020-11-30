// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.MD5
#include "System/Security/Cryptography/MD5.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.MD5CryptoServiceProvider
  class MD5CryptoServiceProvider : public System::Security::Cryptography::MD5 {
    public:
    // private System.UInt32[] _H
    // Offset: 0x28
    ::Array<uint>* H;
    // private System.UInt32[] buff
    // Offset: 0x30
    ::Array<uint>* buff;
    // private System.UInt64 count
    // Offset: 0x38
    uint64_t count;
    // private System.Byte[] _ProcessingBuffer
    // Offset: 0x40
    ::Array<uint8_t>* ProcessingBuffer;
    // private System.Int32 _ProcessingBufferCount
    // Offset: 0x48
    int ProcessingBufferCount;
    // Get static field: static private readonly System.UInt32[] K
    static ::Array<uint>* _get_K();
    // Set static field: static private readonly System.UInt32[] K
    static void _set_K(::Array<uint>* value);
    // private System.Void ProcessBlock(System.Byte[] inputBuffer, System.Int32 inputOffset)
    // Offset: 0x1699220
    void ProcessBlock(::Array<uint8_t>* inputBuffer, int inputOffset);
    // private System.Void ProcessFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1699FC8
    void ProcessFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // System.Void AddLength(System.UInt64 length, System.Byte[] buffer, System.Int32 position)
    // Offset: 0x169A220
    void AddLength(uint64_t length, ::Array<uint8_t>* buffer, int position);
    // static private System.Void .cctor()
    // Offset: 0x169A31C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x169798C
    // Implemented from: System.Security.Cryptography.MD5
    // Base method: System.Void MD5::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static MD5CryptoServiceProvider* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x1699034
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x16990AC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x169911C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1699ED8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
    // public override System.Void Initialize()
    // Offset: 0x169A17C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
  }; // System.Security.Cryptography.MD5CryptoServiceProvider
  check_size<sizeof(MD5CryptoServiceProvider), 72 + sizeof(int) + 8 - (72 + sizeof(int)) % 8> __System_Security_Cryptography_MD5CryptoServiceProviderSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MD5CryptoServiceProvider*, "System.Security.Cryptography", "MD5CryptoServiceProvider");
#pragma pack(pop)