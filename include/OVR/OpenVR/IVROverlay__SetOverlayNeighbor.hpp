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
  // Forward declaring type: EOverlayDirection
  struct EOverlayDirection;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayNeighbor
  class IVROverlay::_SetOverlayNeighbor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C80A2C
    static IVROverlay::_SetOverlayNeighbor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.UInt64 ulTo)
    // Offset: 0x1C80A40
    OVR::OpenVR::EVROverlayError Invoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.UInt64 ulTo, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C80CEC
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C80DAC
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayNeighbor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayNeighbor*, "OVR.OpenVR", "IVROverlay/_SetOverlayNeighbor");
#pragma pack(pop)
