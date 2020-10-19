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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_WaitGetPoses
  class IVRCompositor::_WaitGetPoses : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B88000
    static IVRCompositor::_WaitGetPoses* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRCompositorError Invoke(in Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in Valve.VR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount)
    // Offset: 0x1B88014
    Valve::VR::EVRCompositorError Invoke(::Array<Valve::VR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<Valve::VR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in Valve.VR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B882B4
    System::IAsyncResult* BeginInvoke(::Array<Valve::VR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<Valve::VR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B88368
    Valve::VR::EVRCompositorError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_WaitGetPoses
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_WaitGetPoses*, "Valve.VR", "IVRCompositor/_WaitGetPoses");
#pragma pack(pop)
