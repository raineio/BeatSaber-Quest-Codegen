// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyType
  class IVRScreenshots::_GetScreenshotPropertyType : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8B040
    static IVRScreenshots::_GetScreenshotPropertyType* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRScreenshotType Invoke(System.UInt32 screenshotHandle, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0x1C8B054
    OVR::OpenVR::EVRScreenshotType Invoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, ref OVR.OpenVR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8B2E4
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotType EndInvoke(ref OVR.OpenVR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x1C8B398
    OVR::OpenVR::EVRScreenshotType EndInvoke(OVR::OpenVR::EVRScreenshotError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyType");
#pragma pack(pop)
