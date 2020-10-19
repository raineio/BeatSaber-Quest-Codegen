// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRSystem/_GetControllerStateWithPosePacked
  class CVRSystem::_GetControllerStateWithPosePacked : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x130DBFC
    static CVRSystem::_GetControllerStateWithPosePacked* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x130D5D8
    bool Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.IAsyncResult BeginInvoke(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t_Packed pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x130DC10
    System::IAsyncResult* BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, System.IAsyncResult result)
    // Offset: 0x130DD18
    bool EndInvoke(Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result);
  }; // Valve.VR.CVRSystem/_GetControllerStateWithPosePacked
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::_GetControllerStateWithPosePacked*, "Valve.VR", "CVRSystem/_GetControllerStateWithPosePacked");
#pragma pack(pop)
