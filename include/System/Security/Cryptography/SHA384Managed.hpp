// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SHA384
#include "System/Security/Cryptography/SHA384.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.SHA384Managed
  class SHA384Managed : public System::Security::Cryptography::SHA384 {
    public:
    // private System.Byte[] _buffer
    // Offset: 0x28
    ::Array<uint8_t>* buffer;
    // private System.UInt64 _count
    // Offset: 0x30
    uint64_t count;
    // private System.UInt64[] _stateSHA384
    // Offset: 0x38
    ::Array<uint64_t>* stateSHA384;
    // private System.UInt64[] _W
    // Offset: 0x40
    ::Array<uint64_t>* W;
    // Get static field: static private readonly System.UInt64[] _K
    static ::Array<uint64_t>* _get__K();
    // Set static field: static private readonly System.UInt64[] _K
    static void _set__K(::Array<uint64_t>* value);
    // private System.Void InitializeState()
    // Offset: 0x127A508
    void InitializeState();
    // private System.Void _HashData(System.Byte[] partIn, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x127A6BC
    void _HashData(::Array<uint8_t>* partIn, int ibStart, int cbSize);
    // private System.Byte[] _EndHash()
    // Offset: 0x127A8D8
    ::Array<uint8_t>* _EndHash();
    // static private System.Void SHATransform(System.UInt64* expandedBuffer, System.UInt64* state, System.Byte* block)
    // Offset: 0x127AAA0
    static void SHATransform(uint64_t* expandedBuffer, uint64_t* state, uint8_t* block);
    // static private System.UInt64 RotateRight(System.UInt64 x, System.Int32 n)
    // Offset: 0x127B470
    static uint64_t RotateRight(uint64_t x, int n);
    // static private System.UInt64 Ch(System.UInt64 x, System.UInt64 y, System.UInt64 z)
    // Offset: 0x127B3E0
    static uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);
    // static private System.UInt64 Maj(System.UInt64 x, System.UInt64 y, System.UInt64 z)
    // Offset: 0x127B45C
    static uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);
    // static private System.UInt64 Sigma_0(System.UInt64 x)
    // Offset: 0x127B3F0
    static uint64_t Sigma_0(uint64_t x);
    // static private System.UInt64 Sigma_1(System.UInt64 x)
    // Offset: 0x127B374
    static uint64_t Sigma_1(uint64_t x);
    // static private System.UInt64 sigma_0(System.UInt64 x)
    // Offset: 0x127B478
    static uint64_t sigma_0(uint64_t x);
    // static private System.UInt64 sigma_1(System.UInt64 x)
    // Offset: 0x127B4E4
    static uint64_t sigma_1(uint64_t x);
    // static private System.Void SHA384Expand(System.UInt64* x)
    // Offset: 0x127B2BC
    static void SHA384Expand(uint64_t* x);
    // static private System.Void .cctor()
    // Offset: 0x127B550
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x127A3F0
    // Implemented from: System.Security.Cryptography.SHA384
    // Base method: System.Void SHA384::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static SHA384Managed* New_ctor();
    // public override System.Void Initialize()
    // Offset: 0x127A668
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x127A6B8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x127A8D4
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
  }; // System.Security.Cryptography.SHA384Managed
  check_size<sizeof(SHA384Managed), 64 + sizeof(void*) + 8 - (64 + sizeof(void*)) % 8> __System_Security_Cryptography_SHA384ManagedSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA384Managed*, "System.Security.Cryptography", "SHA384Managed");
#pragma pack(pop)