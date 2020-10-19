// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.UnmanagedType
#include "System/Runtime/InteropServices/UnmanagedType.hpp"
// Including type: System.Runtime.InteropServices.VarEnum
#include "System/Runtime/InteropServices/VarEnum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.MarshalAsAttribute
  class MarshalAsAttribute : public System::Attribute {
    public:
    // public System.String MarshalCookie
    // Offset: 0x10
    ::Il2CppString* MarshalCookie;
    // public System.String MarshalType
    // Offset: 0x18
    ::Il2CppString* MarshalType;
    // public System.Type MarshalTypeRef
    // Offset: 0x20
    System::Type* MarshalTypeRef;
    // public System.Type SafeArrayUserDefinedSubType
    // Offset: 0x28
    System::Type* SafeArrayUserDefinedSubType;
    // private System.Runtime.InteropServices.UnmanagedType utype
    // Offset: 0x30
    System::Runtime::InteropServices::UnmanagedType utype;
    // public System.Runtime.InteropServices.UnmanagedType ArraySubType
    // Offset: 0x34
    System::Runtime::InteropServices::UnmanagedType ArraySubType;
    // public System.Runtime.InteropServices.VarEnum SafeArraySubType
    // Offset: 0x38
    System::Runtime::InteropServices::VarEnum SafeArraySubType;
    // public System.Int32 SizeConst
    // Offset: 0x3C
    int SizeConst;
    // public System.Int32 IidParameterIndex
    // Offset: 0x40
    int IidParameterIndex;
    // public System.Int16 SizeParamIndex
    // Offset: 0x44
    int16_t SizeParamIndex;
    // System.Runtime.InteropServices.MarshalAsAttribute Copy()
    // Offset: 0x108F2C8
    System::Runtime::InteropServices::MarshalAsAttribute* Copy();
  }; // System.Runtime.InteropServices.MarshalAsAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::MarshalAsAttribute*, "System.Runtime.InteropServices", "MarshalAsAttribute");
#pragma pack(pop)
