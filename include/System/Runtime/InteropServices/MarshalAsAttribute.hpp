// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Size: 0x46
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.MarshalAsAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E60D5C
  // [ComVisibleAttribute] Offset: E60D5C
  class MarshalAsAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.String MarshalCookie
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* MarshalCookie;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [ComVisibleAttribute] Offset: 0xE63C04
    // public System.String MarshalType
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* MarshalType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [ComVisibleAttribute] Offset: 0xE63C18
    // public System.Type MarshalTypeRef
    // Size: 0x8
    // Offset: 0x20
    System::Type* MarshalTypeRef;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public System.Type SafeArrayUserDefinedSubType
    // Size: 0x8
    // Offset: 0x28
    System::Type* SafeArrayUserDefinedSubType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Runtime.InteropServices.UnmanagedType utype
    // Size: 0x4
    // Offset: 0x30
    System::Runtime::InteropServices::UnmanagedType utype;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::UnmanagedType) == 0x4);
    // public System.Runtime.InteropServices.UnmanagedType ArraySubType
    // Size: 0x4
    // Offset: 0x34
    System::Runtime::InteropServices::UnmanagedType ArraySubType;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::UnmanagedType) == 0x4);
    // public System.Runtime.InteropServices.VarEnum SafeArraySubType
    // Size: 0x4
    // Offset: 0x38
    System::Runtime::InteropServices::VarEnum SafeArraySubType;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::VarEnum) == 0x4);
    // public System.Int32 SizeConst
    // Size: 0x4
    // Offset: 0x3C
    int SizeConst;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 IidParameterIndex
    // Size: 0x4
    // Offset: 0x40
    int IidParameterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int16 SizeParamIndex
    // Size: 0x2
    // Offset: 0x44
    int16_t SizeParamIndex;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Get instance field reference: public System.String MarshalCookie
    ::Il2CppString*& dyn_MarshalCookie();
    // Get instance field reference: public System.String MarshalType
    ::Il2CppString*& dyn_MarshalType();
    // Get instance field reference: public System.Type MarshalTypeRef
    System::Type*& dyn_MarshalTypeRef();
    // Get instance field reference: public System.Type SafeArrayUserDefinedSubType
    System::Type*& dyn_SafeArrayUserDefinedSubType();
    // Get instance field reference: private System.Runtime.InteropServices.UnmanagedType utype
    System::Runtime::InteropServices::UnmanagedType& dyn_utype();
    // Get instance field reference: public System.Runtime.InteropServices.UnmanagedType ArraySubType
    System::Runtime::InteropServices::UnmanagedType& dyn_ArraySubType();
    // Get instance field reference: public System.Runtime.InteropServices.VarEnum SafeArraySubType
    System::Runtime::InteropServices::VarEnum& dyn_SafeArraySubType();
    // Get instance field reference: public System.Int32 SizeConst
    int& dyn_SizeConst();
    // Get instance field reference: public System.Int32 IidParameterIndex
    int& dyn_IidParameterIndex();
    // Get instance field reference: public System.Int16 SizeParamIndex
    int16_t& dyn_SizeParamIndex();
    // System.Runtime.InteropServices.MarshalAsAttribute Copy()
    // Offset: 0x15B04D0
    System::Runtime::InteropServices::MarshalAsAttribute* Copy();
  }; // System.Runtime.InteropServices.MarshalAsAttribute
  #pragma pack(pop)
  static check_size<sizeof(MarshalAsAttribute), 68 + sizeof(int16_t)> __System_Runtime_InteropServices_MarshalAsAttributeSizeCheck;
  static_assert(sizeof(MarshalAsAttribute) == 0x46);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::MarshalAsAttribute*, "System.Runtime.InteropServices", "MarshalAsAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::MarshalAsAttribute::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::MarshalAsAttribute* (System::Runtime::InteropServices::MarshalAsAttribute::*)()>(&System::Runtime::InteropServices::MarshalAsAttribute::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::MarshalAsAttribute*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
