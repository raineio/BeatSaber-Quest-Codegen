// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.MessageHandler/RequestWaiter
  class MessageHandler::RequestWaiter : public ::Il2CppObject, public System::IDisposable {
    public:
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected System.Void .ctor()
    // Offset: 0x21272FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MessageHandler::RequestWaiter* New_ctor();
  }; // MasterServer.MessageHandler/RequestWaiter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::RequestWaiter*, "MasterServer", "MessageHandler/RequestWaiter");
#pragma pack(pop)
