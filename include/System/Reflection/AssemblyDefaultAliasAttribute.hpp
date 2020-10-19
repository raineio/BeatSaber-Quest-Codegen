// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyDefaultAliasAttribute
  class AssemblyDefaultAliasAttribute : public System::Attribute {
    public:
    // private System.String m_defaultAlias
    // Offset: 0x10
    ::Il2CppString* m_defaultAlias;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_defaultAlias;
    }
    // public System.Void .ctor(System.String defaultAlias)
    // Offset: 0x1858F70
    static AssemblyDefaultAliasAttribute* New_ctor(::Il2CppString* defaultAlias);
  }; // System.Reflection.AssemblyDefaultAliasAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyDefaultAliasAttribute*, "System.Reflection", "AssemblyDefaultAliasAttribute");
#pragma pack(pop)
