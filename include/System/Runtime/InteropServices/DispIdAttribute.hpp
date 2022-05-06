// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: DispIdAttribute
  class DispIdAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::DispIdAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::DispIdAttribute*, "System.Runtime.InteropServices", "DispIdAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.DispIdAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1032900
  // [AttributeUsageAttribute] Offset: 1032900
  class DispIdAttribute : public ::System::Attribute {
    public:
    public:
    // System.Int32 _val
    // Size: 0x4
    // Offset: 0x10
    int val;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return val;
    }
    // Get instance field reference: System.Int32 _val
    [[deprecated("Use field access instead!")]] int& dyn__val();
    // public System.Void .ctor(System.Int32 dispId)
    // Offset: 0x1D85B2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DispIdAttribute* New_ctor(int dispId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::DispIdAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DispIdAttribute*, creationType>(dispId)));
    }
  }; // System.Runtime.InteropServices.DispIdAttribute
  #pragma pack(pop)
  static check_size<sizeof(DispIdAttribute), 16 + sizeof(int)> __System_Runtime_InteropServices_DispIdAttributeSizeCheck;
  static_assert(sizeof(DispIdAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::DispIdAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
