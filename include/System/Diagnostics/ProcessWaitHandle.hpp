// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeProcessHandle
  class SafeProcessHandle;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.ProcessWaitHandle
  class ProcessWaitHandle : public System::Threading::WaitHandle {
    public:
    // System.Void .ctor(Microsoft.Win32.SafeHandles.SafeProcessHandle processHandle)
    // Offset: 0x14E5C9C
    static ProcessWaitHandle* New_ctor(Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle);
  }; // System.Diagnostics.ProcessWaitHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessWaitHandle*, "System.Diagnostics", "ProcessWaitHandle");
#pragma pack(pop)
