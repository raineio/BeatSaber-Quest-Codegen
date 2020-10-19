// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Autogenerated type: Valve.VR.IVRCompositor/_CompositorBringToFront
  class IVRCompositor::_CompositorBringToFront : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B80988
    static IVRCompositor::_CompositorBringToFront* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke()
    // Offset: 0x1B8099C
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B80BA8
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B80BD4
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_CompositorBringToFront
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_CompositorBringToFront*, "Valve.VR", "IVRCompositor/_CompositorBringToFront");
#pragma pack(pop)
