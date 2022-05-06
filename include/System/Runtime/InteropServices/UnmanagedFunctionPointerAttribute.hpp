// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.CallingConvention
#include "System/Runtime/InteropServices/CallingConvention.hpp"
// Including type: System.Runtime.InteropServices.CharSet
#include "System/Runtime/InteropServices/CharSet.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: UnmanagedFunctionPointerAttribute
  class UnmanagedFunctionPointerAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*, "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x1B
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 10328B4
  // [AttributeUsageAttribute] Offset: 10328B4
  class UnmanagedFunctionPointerAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Runtime.InteropServices.CallingConvention m_callingConvention
    // Size: 0x4
    // Offset: 0x10
    ::System::Runtime::InteropServices::CallingConvention m_callingConvention;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::CallingConvention) == 0x4);
    // public System.Runtime.InteropServices.CharSet CharSet
    // Size: 0x4
    // Offset: 0x14
    ::System::Runtime::InteropServices::CharSet CharSet;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::CharSet) == 0x4);
    // public System.Boolean BestFitMapping
    // Size: 0x1
    // Offset: 0x18
    bool BestFitMapping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ThrowOnUnmappableChar
    // Size: 0x1
    // Offset: 0x19
    bool ThrowOnUnmappableChar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean SetLastError
    // Size: 0x1
    // Offset: 0x1A
    bool SetLastError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Runtime.InteropServices.CallingConvention m_callingConvention
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::CallingConvention& dyn_m_callingConvention();
    // Get instance field reference: public System.Runtime.InteropServices.CharSet CharSet
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::CharSet& dyn_CharSet();
    // Get instance field reference: public System.Boolean BestFitMapping
    [[deprecated("Use field access instead!")]] bool& dyn_BestFitMapping();
    // Get instance field reference: public System.Boolean ThrowOnUnmappableChar
    [[deprecated("Use field access instead!")]] bool& dyn_ThrowOnUnmappableChar();
    // Get instance field reference: public System.Boolean SetLastError
    [[deprecated("Use field access instead!")]] bool& dyn_SetLastError();
    // public System.Void .ctor(System.Runtime.InteropServices.CallingConvention callingConvention)
    // Offset: 0x1D879E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmanagedFunctionPointerAttribute* New_ctor(::System::Runtime::InteropServices::CallingConvention callingConvention) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmanagedFunctionPointerAttribute*, creationType>(callingConvention)));
    }
  }; // System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
  #pragma pack(pop)
  static check_size<sizeof(UnmanagedFunctionPointerAttribute), 26 + sizeof(bool)> __System_Runtime_InteropServices_UnmanagedFunctionPointerAttributeSizeCheck;
  static_assert(sizeof(UnmanagedFunctionPointerAttribute) == 0x1B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
