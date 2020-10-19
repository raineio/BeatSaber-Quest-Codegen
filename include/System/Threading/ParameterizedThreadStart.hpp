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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ParameterizedThreadStart
  class ParameterizedThreadStart : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x149003C
    static ParameterizedThreadStart* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object obj)
    // Offset: 0x1490050
    void Invoke(::Il2CppObject* obj);
    // public System.IAsyncResult BeginInvoke(System.Object obj, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1490408
    System::IAsyncResult* BeginInvoke(::Il2CppObject* obj, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x149042C
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.ParameterizedThreadStart
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ParameterizedThreadStart*, "System.Threading", "ParameterizedThreadStart");
#pragma pack(pop)
