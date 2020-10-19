// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
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
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetCalibrationState
  class IVRChaperone::_GetCalibrationState : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x115A1A8
    static IVRChaperone::_GetCalibrationState* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.ChaperoneCalibrationState Invoke()
    // Offset: 0x114F0E0
    OVR::OpenVR::ChaperoneCalibrationState Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x115A1BC
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.ChaperoneCalibrationState EndInvoke(System.IAsyncResult result)
    // Offset: 0x115A1E8
    OVR::OpenVR::ChaperoneCalibrationState EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetCalibrationState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetCalibrationState*, "OVR.OpenVR", "IVRChaperone/_GetCalibrationState");
#pragma pack(pop)
