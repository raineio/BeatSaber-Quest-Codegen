// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_ApplyTransform
  class IVRSystem::_ApplyTransform : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C91598
    static IVRSystem::_ApplyTransform* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform)
    // Offset: 0x1C915AC
    void Invoke(OVR::OpenVR::TrackedDevicePose_t& pOutputPose, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, OVR::OpenVR::HmdMatrix34_t& pTransform);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C91830
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::TrackedDevicePose_t& pOutputPose, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, OVR::OpenVR::HmdMatrix34_t& pTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform, System.IAsyncResult result)
    // Offset: 0x1C91904
    void EndInvoke(OVR::OpenVR::TrackedDevicePose_t& pOutputPose, OVR::OpenVR::TrackedDevicePose_t& pTrackedDevicePose, OVR::OpenVR::HmdMatrix34_t& pTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_ApplyTransform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_ApplyTransform*, "OVR.OpenVR", "IVRSystem/_ApplyTransform");
#pragma pack(pop)
