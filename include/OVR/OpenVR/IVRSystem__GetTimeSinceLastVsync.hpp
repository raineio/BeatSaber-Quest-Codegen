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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetTimeSinceLastVsync
  class IVRSystem::_GetTimeSinceLastVsync : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C979F8
    static IVRSystem::_GetTimeSinceLastVsync* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(ref System.Single pfSecondsSinceLastVsync, ref System.UInt64 pulFrameCounter)
    // Offset: 0x1C97A0C
    bool Invoke(float& pfSecondsSinceLastVsync, uint64_t& pulFrameCounter);
    // public System.IAsyncResult BeginInvoke(ref System.Single pfSecondsSinceLastVsync, ref System.UInt64 pulFrameCounter, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C97C84
    System::IAsyncResult* BeginInvoke(float& pfSecondsSinceLastVsync, uint64_t& pulFrameCounter, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.Single pfSecondsSinceLastVsync, ref System.UInt64 pulFrameCounter, System.IAsyncResult result)
    // Offset: 0x1C97D38
    bool EndInvoke(float& pfSecondsSinceLastVsync, uint64_t& pulFrameCounter, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetTimeSinceLastVsync
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetTimeSinceLastVsync*, "OVR.OpenVR", "IVRSystem/_GetTimeSinceLastVsync");
#pragma pack(pop)
