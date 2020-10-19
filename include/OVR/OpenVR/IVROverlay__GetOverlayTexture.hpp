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
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: EColorSpace
  struct EColorSpace;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayTexture
  class IVROverlay::_GetOverlayTexture : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1ABEC44
    static IVROverlay::_GetOverlayTexture* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds)
    // Offset: 0x1ABEC58
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, System::IntPtr& pNativeTextureHandle, System::IntPtr pNativeTextureRef, uint& pWidth, uint& pHeight, uint& pNativeFormat, OVR::OpenVR::ETextureType& pAPIType, OVR::OpenVR::EColorSpace& pColorSpace, OVR::OpenVR::VRTextureBounds_t& pTextureBounds);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1ABEF3C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::IntPtr& pNativeTextureHandle, System::IntPtr pNativeTextureRef, uint& pWidth, uint& pHeight, uint& pNativeFormat, OVR::OpenVR::ETextureType& pAPIType, OVR::OpenVR::EColorSpace& pColorSpace, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.IntPtr pNativeTextureHandle, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, System.IAsyncResult result)
    // Offset: 0x1ABF0C8
    OVR::OpenVR::EVROverlayError EndInvoke(System::IntPtr& pNativeTextureHandle, uint& pWidth, uint& pHeight, uint& pNativeFormat, OVR::OpenVR::ETextureType& pAPIType, OVR::OpenVR::EColorSpace& pColorSpace, OVR::OpenVR::VRTextureBounds_t& pTextureBounds, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayTexture
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayTexture*, "OVR.OpenVR", "IVROverlay/_GetOverlayTexture");
#pragma pack(pop)
