// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.CallingConvention
#include "System/Runtime/InteropServices/CallingConvention.hpp"
// Including type: System.Runtime.InteropServices.CharSet
#include "System/Runtime/InteropServices/CharSet.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
  class UnmanagedFunctionPointerAttribute : public System::Attribute {
    public:
    // private System.Runtime.InteropServices.CallingConvention m_callingConvention
    // Offset: 0x10
    System::Runtime::InteropServices::CallingConvention m_callingConvention;
    // public System.Runtime.InteropServices.CharSet CharSet
    // Offset: 0x14
    System::Runtime::InteropServices::CharSet CharSet;
    // public System.Boolean BestFitMapping
    // Offset: 0x18
    bool BestFitMapping;
    // public System.Boolean ThrowOnUnmappableChar
    // Offset: 0x19
    bool ThrowOnUnmappableChar;
    // public System.Boolean SetLastError
    // Offset: 0x1A
    bool SetLastError;
    // public System.Void .ctor(System.Runtime.InteropServices.CallingConvention callingConvention)
    // Offset: 0x108FA58
    static UnmanagedFunctionPointerAttribute* New_ctor(System::Runtime::InteropServices::CallingConvention callingConvention);
  }; // System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*, "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute");
#pragma pack(pop)
