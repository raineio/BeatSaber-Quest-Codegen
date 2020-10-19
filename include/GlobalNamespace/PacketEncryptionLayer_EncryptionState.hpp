// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: PacketEncryptionLayer/IEncryptionState
#include "GlobalNamespace/PacketEncryptionLayer_IEncryptionState.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HMAC
  class HMAC;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PacketEncryptionLayer/EncryptionState
  class PacketEncryptionLayer::EncryptionState : public ::Il2CppObject, public GlobalNamespace::PacketEncryptionLayer::IEncryptionState, public System::IDisposable {
    public:
    // private readonly System.UInt32 _protocolVersion
    // Offset: 0x10
    uint protocolVersion;
    // private System.Boolean _isVerified
    // Offset: 0x14
    bool isVerified;
    // private System.String _userId
    // Offset: 0x18
    ::Il2CppString* userId;
    // private System.String _userName
    // Offset: 0x20
    ::Il2CppString* userName;
    // private System.Int64 _lastUsedTime
    // Offset: 0x28
    int64_t lastUsedTime;
    // private System.UInt32 _lastSentSequenceId
    // Offset: 0x30
    uint lastSentSequenceId;
    // private System.Int32 _lastReceivedSequenceIdIndex
    // Offset: 0x34
    int lastReceivedSequenceIdIndex;
    // private System.Int32 _receivedSequenceCount
    // Offset: 0x38
    int receivedSequenceCount;
    // public readonly System.Object sendMutex
    // Offset: 0x40
    ::Il2CppObject* sendMutex;
    // public readonly System.Object receiveMutex
    // Offset: 0x48
    ::Il2CppObject* receiveMutex;
    // private readonly System.UInt32[] _receivedSequenceIds
    // Offset: 0x50
    ::Array<uint>* receivedSequenceIds;
    // public readonly System.Byte[] sendKey
    // Offset: 0x58
    ::Array<uint8_t>* sendKey;
    // public readonly System.Byte[] receiveKey
    // Offset: 0x60
    ::Array<uint8_t>* receiveKey;
    // public readonly System.Security.Cryptography.HMAC receiveMac
    // Offset: 0x68
    System::Security::Cryptography::HMAC* receiveMac;
    // public readonly System.Security.Cryptography.HMAC sendMac
    // Offset: 0x70
    System::Security::Cryptography::HMAC* sendMac;
    // public System.Boolean Verify(System.UInt32 protocolVersion, System.String userId, System.String userName)
    // Offset: 0x21F3744
    bool Verify(uint protocolVersion, ::Il2CppString* userId, ::Il2CppString* userName);
    // public System.Boolean HasTimedOut(System.Int64 timeout)
    // Offset: 0x21F3FB0
    bool HasTimedOut(int64_t timeout);
    // public System.Boolean IsValidSequenceNum(System.UInt32 sequenceNum)
    // Offset: 0x21F5994
    bool IsValidSequenceNum(uint sequenceNum);
    // public System.Boolean PutSequenceNum(System.UInt32 sequenceNum)
    // Offset: 0x21F5A48
    bool PutSequenceNum(uint sequenceNum);
    // public System.UInt32 GetNextSentSequenceNum()
    // Offset: 0x21F6558
    uint GetNextSentSequenceNum();
    // public System.Void .ctor(System.UInt32 protocolVersion, System.Byte[] preMasterSecret, System.Byte[] serverSeed, System.Byte[] clientSeed, System.Boolean isClient)
    // Offset: 0x21F2C28
    static PacketEncryptionLayer::EncryptionState* New_ctor(uint protocolVersion, ::Array<uint8_t>* preMasterSecret, ::Array<uint8_t>* serverSeed, ::Array<uint8_t>* clientSeed, bool isClient);
    // private System.Byte[] MakeSeed(System.Byte[] baseSeed, System.Byte[] serverSeed, System.Byte[] clientSeed)
    // Offset: 0x21F69A0
    ::Array<uint8_t>* MakeSeed(::Array<uint8_t>* baseSeed, ::Array<uint8_t>* serverSeed, ::Array<uint8_t>* clientSeed);
    // static private System.Byte[] PRF(System.Byte[] key, System.Byte[] seed, System.Int32 length)
    // Offset: 0x21F6A88
    static ::Array<uint8_t>* PRF(::Array<uint8_t>* key, ::Array<uint8_t>* seed, int length);
    // static private System.Void PRF_Hash(System.Byte[] key, System.Byte[] seed, ref System.Int32 length)
    // Offset: 0x21F6B78
    static void PRF_Hash(::Array<uint8_t>* key, ::Array<uint8_t>* seed, int& length);
    // public System.Boolean SetIdentity(System.String userId, System.String userNmae)
    // Offset: 0x21F2F2C
    // Implemented from: PacketEncryptionLayer/IEncryptionState
    // Base method: System.Boolean IEncryptionState::SetIdentity(System.String userId, System.String userNmae)
    bool SetIdentity(::Il2CppString* userId, ::Il2CppString* userNmae);
    // public System.Void Dispose()
    // Offset: 0x21F6D40
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // PacketEncryptionLayer/EncryptionState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::EncryptionState*, "", "PacketEncryptionLayer/EncryptionState");
#pragma pack(pop)
