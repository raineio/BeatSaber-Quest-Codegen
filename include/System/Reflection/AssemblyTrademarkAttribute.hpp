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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyTrademarkAttribute
  class AssemblyTrademarkAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Reflection::AssemblyTrademarkAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyTrademarkAttribute*, "System.Reflection", "AssemblyTrademarkAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyTrademarkAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E9E740
  // [ComVisibleAttribute] Offset: E9E740
  class AssemblyTrademarkAttribute : public System::Attribute {
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
    // private System.String m_trademark
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_trademark;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_trademark;
    }
    // Get instance field reference: private System.String m_trademark
    ::StringW& dyn_m_trademark();
    // public System.Void .ctor(System.String trademark)
    // Offset: 0x1E8F840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyTrademarkAttribute* New_ctor(::StringW trademark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyTrademarkAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyTrademarkAttribute*, creationType>(trademark)));
    }
  }; // System.Reflection.AssemblyTrademarkAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyTrademarkAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyTrademarkAttributeSizeCheck;
  static_assert(sizeof(AssemblyTrademarkAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyTrademarkAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
