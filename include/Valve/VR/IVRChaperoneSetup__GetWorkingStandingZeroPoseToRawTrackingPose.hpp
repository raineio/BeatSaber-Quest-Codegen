// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose
  class IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B7E16C
    static IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(ref Valve.VR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x1B7E180
    bool Invoke(Valve::VR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B7E3DC
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose, System.IAsyncResult result)
    // Offset: 0x1B7E470
    bool EndInvoke(Valve::VR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose*, "Valve.VR", "IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose");
#pragma pack(pop)
