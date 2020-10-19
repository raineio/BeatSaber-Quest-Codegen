// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileStreamAsyncResult
  class FileStreamAsyncResult : public ::Il2CppObject, public System::IAsyncResult {
    public:
    // private System.Object state
    // Offset: 0x10
    ::Il2CppObject* state;
    // private System.Boolean completed
    // Offset: 0x18
    bool completed;
    // private System.Threading.ManualResetEvent wh
    // Offset: 0x20
    System::Threading::ManualResetEvent* wh;
    // private System.AsyncCallback cb
    // Offset: 0x28
    System::AsyncCallback* cb;
    // private System.Boolean completedSynch
    // Offset: 0x30
    bool completedSynch;
    // public System.Int32 Count
    // Offset: 0x34
    int Count;
    // public System.Int32 OriginalCount
    // Offset: 0x38
    int OriginalCount;
    // public System.Int32 BytesRead
    // Offset: 0x3C
    int BytesRead;
    // private System.AsyncCallback realcb
    // Offset: 0x40
    System::AsyncCallback* realcb;
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x145227C
    static FileStreamAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state);
    // static private System.Void CBWrapper(System.IAsyncResult ares)
    // Offset: 0x1453A38
    static void CBWrapper(System::IAsyncResult* ares);
    // public System.Object get_AsyncState()
    // Offset: 0x1453AD4
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::Il2CppObject* get_AsyncState();
    // Creating proxy method: System_IAsyncResult_get_AsyncState
    // Maps to method: get_AsyncState
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1453ADC
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_CompletedSynchronously()
    bool get_CompletedSynchronously();
    // Creating proxy method: System_IAsyncResult_get_CompletedSynchronously
    // Maps to method: get_CompletedSynchronously
    bool System_IAsyncResult_get_CompletedSynchronously();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1453AE4
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1453AEC
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_IsCompleted()
    bool get_IsCompleted();
    // Creating proxy method: System_IAsyncResult_get_IsCompleted
    // Maps to method: get_IsCompleted
    bool System_IAsyncResult_get_IsCompleted();
  }; // System.IO.FileStreamAsyncResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileStreamAsyncResult*, "System.IO", "FileStreamAsyncResult");
#pragma pack(pop)
