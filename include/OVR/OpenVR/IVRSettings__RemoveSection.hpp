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
  // Autogenerated type: OVR.OpenVR.IVRSettings/_RemoveSection
  class IVRSettings::_RemoveSection : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8E2CC
    static IVRSettings::_RemoveSection* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String pchSection, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x1C8E2E0
    void Invoke(::Il2CppString* pchSection, OVR::OpenVR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, ref OVR.OpenVR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8E6E4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, OVR::OpenVR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x1C8E780
    void EndInvoke(OVR::OpenVR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSettings/_RemoveSection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSettings::_RemoveSection*, "OVR.OpenVR", "IVRSettings/_RemoveSection");
#pragma pack(pop)
