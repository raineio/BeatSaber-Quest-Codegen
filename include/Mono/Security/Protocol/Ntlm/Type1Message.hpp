// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type1Message
  class Type1Message : public Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    // private System.String _host
    // Offset: 0x18
    ::Il2CppString* host;
    // private System.String _domain
    // Offset: 0x20
    ::Il2CppString* domain;
    // public System.Void set_Domain(System.String value)
    // Offset: 0x192C900
    void set_Domain(::Il2CppString* value);
    // public System.Void set_Host(System.String value)
    // Offset: 0x192C990
    void set_Host(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x192C854
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Type1Message* New_ctor();
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x192CA20
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::Array<uint8_t>* message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x192CB2C
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::Array<uint8_t>* GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type1Message
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::Type1Message*, "Mono.Security.Protocol.Ntlm", "Type1Message");
#pragma pack(pop)
