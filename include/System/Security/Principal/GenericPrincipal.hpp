// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Claims.ClaimsPrincipal
#include "System/Security/Claims/ClaimsPrincipal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IIdentity
  class IIdentity;
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.GenericPrincipal
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5EFBC
  class GenericPrincipal : public System::Security::Claims::ClaimsPrincipal {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Security.Principal.IIdentity m_identity
    // Size: 0x8
    // Offset: 0x28
    System::Security::Principal::IIdentity* m_identity;
    // Field size check
    static_assert(sizeof(System::Security::Principal::IIdentity*) == 0x8);
    // private System.String[] m_roles
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Il2CppString*> m_roles;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    public:
    // Get instance field reference: private System.Security.Principal.IIdentity m_identity
    System::Security::Principal::IIdentity*& dyn_m_identity();
    // Get instance field reference: private System.String[] m_roles
    ::ArrayW<::Il2CppString*>& dyn_m_roles();
    // public System.Void .ctor(System.Security.Principal.IIdentity identity, System.String[] roles)
    // Offset: 0x1CD1BAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPrincipal* New_ctor(System::Security::Principal::IIdentity* identity, ::ArrayW<::Il2CppString*> roles) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Principal::GenericPrincipal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPrincipal*, creationType>(identity, roles)));
    }
  }; // System.Security.Principal.GenericPrincipal
  #pragma pack(pop)
  static check_size<sizeof(GenericPrincipal), 48 + sizeof(::ArrayW<::Il2CppString*>)> __System_Security_Principal_GenericPrincipalSizeCheck;
  static_assert(sizeof(GenericPrincipal) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::GenericPrincipal*, "System.Security.Principal", "GenericPrincipal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Principal::GenericPrincipal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
