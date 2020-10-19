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
  // Forward declaring type: ConsoleCancelEventArgs
  class ConsoleCancelEventArgs;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ConsoleCancelEventHandler
  class ConsoleCancelEventHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1595124
    static ConsoleCancelEventHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object sender, System.ConsoleCancelEventArgs e)
    // Offset: 0x159455C
    void Invoke(::Il2CppObject* sender, System::ConsoleCancelEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ConsoleCancelEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1595138
    System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, System::ConsoleCancelEventArgs* e, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1595168
    void EndInvoke(System::IAsyncResult* result);
  }; // System.ConsoleCancelEventHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleCancelEventHandler*, "System", "ConsoleCancelEventHandler");
#pragma pack(pop)
