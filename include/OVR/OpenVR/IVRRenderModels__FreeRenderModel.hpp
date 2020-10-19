// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_FreeRenderModel
  class IVRRenderModels::_FreeRenderModel : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C85188
    static IVRRenderModels::_FreeRenderModel* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.IntPtr pRenderModel)
    // Offset: 0x1C8519C
    void Invoke(System::IntPtr pRenderModel);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pRenderModel, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C853FC
    System::IAsyncResult* BeginInvoke(System::IntPtr pRenderModel, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C85488
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_FreeRenderModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_FreeRenderModel*, "OVR.OpenVR", "IVRRenderModels/_FreeRenderModel");
#pragma pack(pop)
