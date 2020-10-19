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
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo
  class IVRChaperoneSetup::_GetLivePhysicalBoundsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B7CD88
    static IVRChaperoneSetup::_GetLivePhysicalBoundsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(in Valve.VR.HmdQuad_t[] pQuadsBuffer, ref System.UInt32 punQuadsCount)
    // Offset: 0x1B7CD9C
    bool Invoke(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.HmdQuad_t[] pQuadsBuffer, ref System.UInt32 punQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B7D014
    System::IAsyncResult* BeginInvoke(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punQuadsCount, System.IAsyncResult result)
    // Offset: 0x1B7D0B0
    bool EndInvoke(uint& punQuadsCount, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*, "Valve.VR", "IVRChaperoneSetup/_GetLivePhysicalBoundsInfo");
#pragma pack(pop)
