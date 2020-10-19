// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_ShouldAppRenderWithLowResources
  class IVRCompositor::_ShouldAppRenderWithLowResources : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AAF8BC
    static IVRCompositor::_ShouldAppRenderWithLowResources* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke()
    // Offset: 0x1AAF8D0
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AAFAE8
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1AAFB14
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_ShouldAppRenderWithLowResources
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_ShouldAppRenderWithLowResources*, "OVR.OpenVR", "IVRCompositor/_ShouldAppRenderWithLowResources");
#pragma pack(pop)
