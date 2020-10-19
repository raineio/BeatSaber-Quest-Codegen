// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Completed includes
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Autogenerated type: System.Net.Security.AuthenticatedStream
  class AuthenticatedStream : public System::IO::Stream {
    public:
    // private System.IO.Stream _InnerStream
    // Offset: 0x28
    System::IO::Stream* InnerStream;
    // private System.Boolean _LeaveStreamOpen
    // Offset: 0x30
    bool LeaveStreamOpen;
    // protected System.Void .ctor(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen)
    // Offset: 0x10CB4E4
    static AuthenticatedStream* New_ctor(System::IO::Stream* innerStream, bool leaveInnerStreamOpen);
    // protected System.IO.Stream get_InnerStream()
    // Offset: 0x10CB694
    System::IO::Stream* get_InnerStream();
    // public System.Boolean get_IsAuthenticated()
    // Offset: 0xFFFFFFFF
    bool get_IsAuthenticated();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x10CB69C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.Security.AuthenticatedStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::AuthenticatedStream*, "System.Net.Security", "AuthenticatedStream");
#pragma pack(pop)
