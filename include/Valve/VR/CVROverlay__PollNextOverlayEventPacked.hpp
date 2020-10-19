// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVROverlay
#include "Valve/VR/CVROverlay.hpp"
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
  // Forward declaring type: VREvent_t_Packed
  struct VREvent_t_Packed;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVROverlay/_PollNextOverlayEventPacked
  class CVROverlay::_PollNextOverlayEventPacked : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x130B434
    static CVROverlay::_PollNextOverlayEventPacked* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x130AD60
    bool Invoke(uint64_t ulOverlayHandle, Valve::VR::VREvent_t_Packed& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref Valve.VR.VREvent_t_Packed pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x130B448
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VREvent_t_Packed& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VREvent_t_Packed pEvent, System.IAsyncResult result)
    // Offset: 0x130B51C
    bool EndInvoke(Valve::VR::VREvent_t_Packed& pEvent, System::IAsyncResult* result);
  }; // Valve.VR.CVROverlay/_PollNextOverlayEventPacked
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVROverlay::_PollNextOverlayEventPacked*, "Valve.VR", "CVROverlay/_PollNextOverlayEventPacked");
#pragma pack(pop)
