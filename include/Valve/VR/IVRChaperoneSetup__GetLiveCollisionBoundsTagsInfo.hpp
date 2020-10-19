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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
  class IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B7CA28
    static IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount)
    // Offset: 0x1B7CA3C
    bool Invoke(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount);
    // public System.IAsyncResult BeginInvoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B7CCB4
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punTagCount, System.IAsyncResult result)
    // Offset: 0x1B7CD50
    bool EndInvoke(uint& punTagCount, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*, "Valve.VR", "IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo");
#pragma pack(pop)
