// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationsThatSupportMimeType
  class IVRApplications::_GetApplicationsThatSupportMimeType : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x130EAAC
    static IVRApplications::_GetApplicationsThatSupportMimeType* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchMimeType, System.Text.StringBuilder pchAppKeysThatSupportBuffer, System.UInt32 unAppKeysThatSupportBuffer)
    // Offset: 0x1305A8C
    uint Invoke(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer);
    // public System.IAsyncResult BeginInvoke(System.String pchMimeType, System.Text.StringBuilder pchAppKeysThatSupportBuffer, System.UInt32 unAppKeysThatSupportBuffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x130EAC0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x130EB60
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationsThatSupportMimeType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationsThatSupportMimeType*, "Valve.VR", "IVRApplications/_GetApplicationsThatSupportMimeType");
#pragma pack(pop)
