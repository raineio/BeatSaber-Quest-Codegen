// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationTransitionState
  struct EVRApplicationTransitionState;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum
  class IVRApplications::_GetApplicationsTransitionStateNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x130EB8C
    static IVRApplications::_GetApplicationsTransitionStateNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(Valve.VR.EVRApplicationTransitionState state)
    // Offset: 0x1306C60
    System::IntPtr Invoke(Valve::VR::EVRApplicationTransitionState state);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRApplicationTransitionState state, System.AsyncCallback callback, System.Object object)
    // Offset: 0x130EBA0
    System::IAsyncResult* BeginInvoke(Valve::VR::EVRApplicationTransitionState state, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x130EC2C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationsTransitionStateNameFromEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationsTransitionStateNameFromEnum*, "Valve.VR", "IVRApplications/_GetApplicationsTransitionStateNameFromEnum");
#pragma pack(pop)
