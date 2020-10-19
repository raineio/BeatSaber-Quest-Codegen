// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_GetCurrentSceneProcessId
  class IVRApplications::_GetCurrentSceneProcessId : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x130EC58
    static IVRApplications::_GetCurrentSceneProcessId* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke()
    // Offset: 0x1307564
    uint Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x130EC6C
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x130EC98
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetCurrentSceneProcessId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetCurrentSceneProcessId*, "Valve.VR", "IVRApplications/_GetCurrentSceneProcessId");
#pragma pack(pop)
