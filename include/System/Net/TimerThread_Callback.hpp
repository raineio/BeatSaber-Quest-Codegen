// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.TimerThread/Callback
  class TimerThread::Callback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x118B180
    static TimerThread::Callback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Net.TimerThread/Timer timer, System.Int32 timeNoticed, System.Object context)
    // Offset: 0x118B194
    void Invoke(System::Net::TimerThread::Timer* timer, int timeNoticed, ::Il2CppObject* context);
    // public System.IAsyncResult BeginInvoke(System.Net.TimerThread/Timer timer, System.Int32 timeNoticed, System.Object context, System.AsyncCallback callback, System.Object object)
    // Offset: 0x118B5E4
    System::IAsyncResult* BeginInvoke(System::Net::TimerThread::Timer* timer, int timeNoticed, ::Il2CppObject* context, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x118B684
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Net.TimerThread/Callback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread::Callback*, "System.Net", "TimerThread/Callback");
#pragma pack(pop)
