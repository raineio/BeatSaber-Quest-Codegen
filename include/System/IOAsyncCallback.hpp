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
  // Forward declaring type: IOAsyncResult
  class IOAsyncResult;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.IOAsyncCallback
  class IOAsyncCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14F19C8
    static IOAsyncCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IOAsyncResult ioares)
    // Offset: 0x14F19DC
    void Invoke(System::IOAsyncResult* ioares);
    // public System.IAsyncResult BeginInvoke(System.IOAsyncResult ioares, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14F1D94
    System::IAsyncResult* BeginInvoke(System::IOAsyncResult* ioares, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14F1DB8
    void EndInvoke(System::IAsyncResult* result);
  }; // System.IOAsyncCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IOAsyncCallback*, "System", "IOAsyncCallback");
#pragma pack(pop)
