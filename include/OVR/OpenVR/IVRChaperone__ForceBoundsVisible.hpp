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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_ForceBoundsVisible
  class IVRChaperone::_ForceBoundsVisible : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1159FD0
    static IVRChaperone::_ForceBoundsVisible* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean bForce)
    // Offset: 0x11501EC
    void Invoke(bool bForce);
    // public System.IAsyncResult BeginInvoke(System.Boolean bForce, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1159FE4
    System::IAsyncResult* BeginInvoke(bool bForce, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x115A074
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_ForceBoundsVisible
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_ForceBoundsVisible*, "OVR.OpenVR", "IVRChaperone/_ForceBoundsVisible");
#pragma pack(pop)
