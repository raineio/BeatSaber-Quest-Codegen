// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSettings/_GetSettingsErrorNameFromEnum
  class IVRSettings::_GetSettingsErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8D508
    static IVRSettings::_GetSettingsErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(OVR.OpenVR.EVRSettingsError eError)
    // Offset: 0x1C8D51C
    System::IntPtr Invoke(OVR::OpenVR::EVRSettingsError eError);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRSettingsError eError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8D790
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVRSettingsError eError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C8D81C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSettings/_GetSettingsErrorNameFromEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSettings::_GetSettingsErrorNameFromEnum*, "OVR.OpenVR", "IVRSettings/_GetSettingsErrorNameFromEnum");
#pragma pack(pop)
