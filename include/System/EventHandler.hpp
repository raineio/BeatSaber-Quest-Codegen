// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: EventArgs
  class EventArgs;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.EventHandler
  class EventHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1052878
    static EventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object sender, System.EventArgs e)
    // Offset: 0x105288C
    void Invoke(::Il2CppObject* sender, System::EventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.EventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1052C90
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::EventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1052CC0
    void EndInvoke(System::IAsyncResult* result);
  }; // System.EventHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::EventHandler*, "System", "EventHandler");
#pragma pack(pop)
