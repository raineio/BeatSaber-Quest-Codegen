// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyDefaultAliasAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: E5D2C8
  // [ComVisibleAttribute] Offset: E5D2C8
  class AssemblyDefaultAliasAttribute : public System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String m_defaultAlias
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_defaultAlias;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_defaultAlias;
    }
    // Get instance field reference: private System.String m_defaultAlias
    ::Il2CppString*& dyn_m_defaultAlias();
    // public System.Void .ctor(System.String defaultAlias)
    // Offset: 0x1EA20DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyDefaultAliasAttribute* New_ctor(::Il2CppString* defaultAlias) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyDefaultAliasAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyDefaultAliasAttribute*, creationType>(defaultAlias)));
    }
  }; // System.Reflection.AssemblyDefaultAliasAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyDefaultAliasAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyDefaultAliasAttributeSizeCheck;
  static_assert(sizeof(AssemblyDefaultAliasAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyDefaultAliasAttribute*, "System.Reflection", "AssemblyDefaultAliasAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyDefaultAliasAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
