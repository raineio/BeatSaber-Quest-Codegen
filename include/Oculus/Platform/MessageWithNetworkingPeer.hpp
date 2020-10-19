// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetworkingPeer
  class NetworkingPeer;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithNetworkingPeer
  class MessageWithNetworkingPeer : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer*> {
    public:
    // protected Oculus.Platform.Models.NetworkingPeer GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x113C7A8
    Oculus::Platform::Models::NetworkingPeer* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1135D88
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithNetworkingPeer* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.NetworkingPeer GetNetworkingPeer()
    // Offset: 0x113C764
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetworkingPeer Message::GetNetworkingPeer()
    Oculus::Platform::Models::NetworkingPeer* GetNetworkingPeer();
  }; // Oculus.Platform.MessageWithNetworkingPeer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetworkingPeer*, "Oculus.Platform", "MessageWithNetworkingPeer");
#pragma pack(pop)
