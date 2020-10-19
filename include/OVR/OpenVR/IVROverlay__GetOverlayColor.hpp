// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayColor
  class IVROverlay::_GetOverlayColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1ABB8EC
    static IVROverlay::_GetOverlayColor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.Single pfRed, ref System.Single pfGreen, ref System.Single pfBlue)
    // Offset: 0x1ABB900
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.Single pfRed, ref System.Single pfGreen, ref System.Single pfBlue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1ABBBB0
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.Single pfRed, ref System.Single pfGreen, ref System.Single pfBlue, System.IAsyncResult result)
    // Offset: 0x1ABBC98
    OVR::OpenVR::EVROverlayError EndInvoke(float& pfRed, float& pfGreen, float& pfBlue, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayColor*, "OVR.OpenVR", "IVROverlay/_GetOverlayColor");
#pragma pack(pop)
