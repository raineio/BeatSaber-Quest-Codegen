// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.KeyedHashAlgorithm
#include "System/Security/Cryptography/KeyedHashAlgorithm.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: ICryptoTransform because it is already included!
  // Forward declaring type: CryptoStream
  class CryptoStream;
  // Forward declaring type: TailStream
  class TailStream;
  // Forward declaring type: TripleDES
  class TripleDES;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.MACTripleDES
  class MACTripleDES : public System::Security::Cryptography::KeyedHashAlgorithm {
    public:
    // private System.Security.Cryptography.ICryptoTransform m_encryptor
    // Offset: 0x30
    System::Security::Cryptography::ICryptoTransform* m_encryptor;
    // private System.Security.Cryptography.CryptoStream _cs
    // Offset: 0x38
    System::Security::Cryptography::CryptoStream* cs;
    // private System.Security.Cryptography.TailStream _ts
    // Offset: 0x40
    System::Security::Cryptography::TailStream* ts;
    // private System.Int32 m_bytesPerBlock
    // Offset: 0x48
    int m_bytesPerBlock;
    // private System.Security.Cryptography.TripleDES des
    // Offset: 0x50
    System::Security::Cryptography::TripleDES* des;
    // Deleting conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1778544
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static MACTripleDES* New_ctor();
    // public override System.Void Initialize()
    // Offset: 0x17786AC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgbData, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x17786B8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgbData, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgbData, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1778848
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x17789C4
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.MACTripleDES
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MACTripleDES*, "System.Security.Cryptography", "MACTripleDES");
#pragma pack(pop)
