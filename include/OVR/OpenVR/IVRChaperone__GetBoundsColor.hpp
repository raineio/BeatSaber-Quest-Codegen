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
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetBoundsColor
  class IVRChaperone::_GetBoundsColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x115A080
    static IVRChaperone::_GetBoundsColor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor)
    // Offset: 0x114FD00
    void Invoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor, System.AsyncCallback callback, System.Object object)
    // Offset: 0x115A094
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, ref OVR.OpenVR.HmdColor_t pOutputCameraColor, System.IAsyncResult result)
    // Offset: 0x115A180
    void EndInvoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, OVR::OpenVR::HmdColor_t& pOutputCameraColor, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetBoundsColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetBoundsColor*, "OVR.OpenVR", "IVRChaperone/_GetBoundsColor");
#pragma pack(pop)
