// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.SafeHandle
#include "System/Runtime/InteropServices/SafeHandle.hpp"
// Completed includes
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
  class SafeHandleZeroOrMinusOneIsInvalid : public System::Runtime::InteropServices::SafeHandle {
    public:
    // protected System.Void .ctor(System.Boolean ownsHandle)
    // Offset: 0x1578050
    static SafeHandleZeroOrMinusOneIsInvalid* New_ctor(bool ownsHandle);
    // public override System.Boolean get_IsInvalid()
    // Offset: 0x15781D0
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::get_IsInvalid()
    bool get_IsInvalid();
  }; // Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*, "Microsoft.Win32.SafeHandles", "SafeHandleZeroOrMinusOneIsInvalid");
#pragma pack(pop)
