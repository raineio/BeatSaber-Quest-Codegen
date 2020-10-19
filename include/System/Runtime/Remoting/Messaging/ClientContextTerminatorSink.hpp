// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
  class ClientContextTerminatorSink : public ::Il2CppObject, public System::Runtime::Remoting::Messaging::IMessageSink {
    public:
    // private System.Runtime.Remoting.Contexts.Context _context
    // Offset: 0x10
    System::Runtime::Remoting::Contexts::Context* context;
    // Creating conversion operator: operator System::Runtime::Remoting::Contexts::Context*
    constexpr operator System::Runtime::Remoting::Contexts::Context*() const noexcept {
      return context;
    }
    // public System.Void .ctor(System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x109D080
    static ClientContextTerminatorSink* New_ctor(System::Runtime::Remoting::Contexts::Context* ctx);
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x10A4658
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x10A4834
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*, "System.Runtime.Remoting.Messaging", "ClientContextTerminatorSink");
#pragma pack(pop)
