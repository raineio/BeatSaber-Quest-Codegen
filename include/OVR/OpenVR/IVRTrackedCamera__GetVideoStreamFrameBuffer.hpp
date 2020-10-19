// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
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
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer
  class IVRTrackedCamera::_GetVideoStreamFrameBuffer : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF68D94
    static IVRTrackedCamera::_GetVideoStreamFrameBuffer* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pFrameBuffer, System.UInt32 nFrameBufferSize, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xF68DA8
    OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pFrameBuffer, uint nFrameBufferSize, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pFrameBuffer, System.UInt32 nFrameBufferSize, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF69084
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pFrameBuffer, uint nFrameBufferSize, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.IAsyncResult result)
    // Offset: 0xF691AC
    OVR::OpenVR::EVRTrackedCameraError EndInvoke(OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamFrameBuffer*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamFrameBuffer");
#pragma pack(pop)
