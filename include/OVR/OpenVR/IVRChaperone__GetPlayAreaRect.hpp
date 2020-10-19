// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetPlayAreaRect
  class IVRChaperone::_GetPlayAreaRect : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x115A214
    static IVRChaperone::_GetPlayAreaRect* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x114F5A4
    bool Invoke(OVR::OpenVR::HmdQuad_t& rect);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x115A228
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdQuad_t& rect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0x115A2BC
    bool EndInvoke(OVR::OpenVR::HmdQuad_t& rect, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetPlayAreaRect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetPlayAreaRect*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaRect");
#pragma pack(pop)
