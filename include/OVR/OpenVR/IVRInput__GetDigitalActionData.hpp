// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: InputDigitalActionData_t
  struct InputDigitalActionData_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetDigitalActionData
  class IVRInput::_GetDigitalActionData : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AB4CBC
    static IVRInput::_GetDigitalActionData* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, ref OVR.OpenVR.InputDigitalActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x1AB4CD0
    OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::InputDigitalActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, ref OVR.OpenVR.InputDigitalActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AB4F80
    System::IAsyncResult* BeginInvoke(uint64_t action, OVR::OpenVR::InputDigitalActionData_t& pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.InputDigitalActionData_t pActionData, System.IAsyncResult result)
    // Offset: 0x1AB506C
    OVR::OpenVR::EVRInputError EndInvoke(OVR::OpenVR::InputDigitalActionData_t& pActionData, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetDigitalActionData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetDigitalActionData*, "OVR.OpenVR", "IVRInput/_GetDigitalActionData");
#pragma pack(pop)
