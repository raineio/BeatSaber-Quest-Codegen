// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
  // Forward declaring type: AppOverrideKeys_t
  struct AppOverrideKeys_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRApplications/_LaunchTemplateApplication
  class IVRApplications::_LaunchTemplateApplication : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1159C5C
    static IVRApplications::_LaunchTemplateApplication* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchTemplateAppKey, System.String pchNewAppKey, in OVR.OpenVR.AppOverrideKeys_t[] pKeys, System.UInt32 unKeys)
    // Offset: 0x114965C
    OVR::OpenVR::EVRApplicationError Invoke(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<OVR::OpenVR::AppOverrideKeys_t>*& pKeys, uint unKeys);
    // public System.IAsyncResult BeginInvoke(System.String pchTemplateAppKey, System.String pchNewAppKey, in OVR.OpenVR.AppOverrideKeys_t[] pKeys, System.UInt32 unKeys, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1159C70
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<OVR::OpenVR::AppOverrideKeys_t>*& pKeys, uint unKeys, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1159D20
    OVR::OpenVR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_LaunchTemplateApplication
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_LaunchTemplateApplication*, "OVR.OpenVR", "IVRApplications/_LaunchTemplateApplication");
#pragma pack(pop)
