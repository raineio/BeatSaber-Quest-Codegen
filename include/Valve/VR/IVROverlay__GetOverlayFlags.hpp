// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayFlags
  class IVROverlay::_GetOverlayFlags : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B8DC0C
    static IVROverlay::_GetOverlayFlags* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt32 pFlags)
    // Offset: 0x1B8DC20
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& pFlags);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt32 pFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B8DEA4
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& pFlags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt32 pFlags, System.IAsyncResult result)
    // Offset: 0x1B8DF54
    Valve::VR::EVROverlayError EndInvoke(uint& pFlags, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayFlags*, "Valve.VR", "IVROverlay/_GetOverlayFlags");
#pragma pack(pop)
