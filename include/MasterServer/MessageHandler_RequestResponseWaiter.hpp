// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: MasterServer.MessageHandler/RequestWaiter
#include "MasterServer/MessageHandler_RequestWaiter.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerMessage
  class IMasterServerMessage;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.MessageHandler/RequestResponseWaiter
  class MessageHandler::RequestResponseWaiter : public MasterServer::MessageHandler::RequestWaiter {
    public:
    // private readonly System.Threading.Tasks.TaskCompletionSource`1<MasterServer.IMasterServerMessage> _taskCompletionSource
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<MasterServer::IMasterServerMessage*>* taskCompletionSource;
    // private readonly System.Threading.CancellationTokenRegistration _disposedCancellationTokenRegistration
    // Offset: 0x18
    System::Threading::CancellationTokenRegistration disposedCancellationTokenRegistration;
    // private readonly System.Threading.CancellationTokenRegistration _requestCancellationTokenRegistration
    // Offset: 0x30
    System::Threading::CancellationTokenRegistration requestCancellationTokenRegistration;
    // public System.Void .ctor(System.Threading.CancellationToken disposedCancellationToken, System.Threading.CancellationToken requestCancellationToken)
    // Offset: 0x2127E28
    static MessageHandler::RequestResponseWaiter* New_ctor(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken);
    // public System.Void Complete(MasterServer.IMasterServerMessage response)
    // Offset: 0x2124020
    void Complete(MasterServer::IMasterServerMessage* response);
    // public System.Void Fail(System.Exception ex)
    // Offset: 0x21280B4
    void Fail(System::Exception* ex);
    // public System.Void Cancel()
    // Offset: 0x212811C
    void Cancel();
    // public System.Threading.Tasks.Task`1<MasterServer.IMasterServerMessage> get_task()
    // Offset: 0x2128174
    System::Threading::Tasks::Task_1<MasterServer::IMasterServerMessage*>* get_task();
    // public System.Boolean get_isWaiting()
    // Offset: 0x2128044
    bool get_isWaiting();
    // public override System.Void Dispose()
    // Offset: 0x2127F68
    // Implemented from: MasterServer.MessageHandler/RequestWaiter
    // Base method: System.Void RequestWaiter::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // MasterServer.MessageHandler/RequestResponseWaiter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::RequestResponseWaiter*, "MasterServer", "MessageHandler/RequestResponseWaiter");
#pragma pack(pop)
