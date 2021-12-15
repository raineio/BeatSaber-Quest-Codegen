// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.ClassInterfaceType
#include "System/Runtime/InteropServices/ClassInterfaceType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: ClassInterfaceAttribute
  class ClassInterfaceAttribute;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Runtime::InteropServices::ClassInterfaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ClassInterfaceAttribute*, "System.Runtime.InteropServices", "ClassInterfaceAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ClassInterfaceAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EA1EDC
  // [AttributeUsageAttribute] Offset: EA1EDC
  class ClassInterfaceAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Runtime.InteropServices.ClassInterfaceType _val
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::InteropServices::ClassInterfaceType val;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::ClassInterfaceType) == 0x4);
    public:
    // Creating conversion operator: operator System::Runtime::InteropServices::ClassInterfaceType
    constexpr operator System::Runtime::InteropServices::ClassInterfaceType() const noexcept {
      return val;
    }
    // Get instance field reference: System.Runtime.InteropServices.ClassInterfaceType _val
    System::Runtime::InteropServices::ClassInterfaceType& dyn__val();
    // public System.Void .ctor(System.Runtime.InteropServices.ClassInterfaceType classInterfaceType)
    // Offset: 0x16226D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClassInterfaceAttribute* New_ctor(System::Runtime::InteropServices::ClassInterfaceType classInterfaceType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::ClassInterfaceAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClassInterfaceAttribute*, creationType>(classInterfaceType)));
    }
  }; // System.Runtime.InteropServices.ClassInterfaceAttribute
  #pragma pack(pop)
  static check_size<sizeof(ClassInterfaceAttribute), 16 + sizeof(System::Runtime::InteropServices::ClassInterfaceType)> __System_Runtime_InteropServices_ClassInterfaceAttributeSizeCheck;
  static_assert(sizeof(ClassInterfaceAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::ClassInterfaceAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
