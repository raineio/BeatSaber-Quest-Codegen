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
  // Forward declaring type: AssemblyCompanyAttribute
  class AssemblyCompanyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Reflection::AssemblyCompanyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyCompanyAttribute*, "System.Reflection", "AssemblyCompanyAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyCompanyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E9E7D0
  // [ComVisibleAttribute] Offset: E9E7D0
  class AssemblyCompanyAttribute : public System::Attribute {
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
    // private System.String m_company
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_company;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_company;
    }
    // Get instance field reference: private System.String m_company
    ::StringW& dyn_m_company();
    // public System.Void .ctor(System.String company)
    // Offset: 0x1E8E51C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyCompanyAttribute* New_ctor(::StringW company) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyCompanyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyCompanyAttribute*, creationType>(company)));
    }
  }; // System.Reflection.AssemblyCompanyAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyCompanyAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyCompanyAttributeSizeCheck;
  static_assert(sizeof(AssemblyCompanyAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyCompanyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
