// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CspProviderFlags
  struct CspProviderFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspProviderFlags, "System.Security.Cryptography", "CspProviderFlags");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CspProviderFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1031DA8
  struct CspProviderFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CspProviderFlags
    constexpr CspProviderFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.CspProviderFlags NoFlags
    static constexpr const int NoFlags = 0;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags NoFlags
    static ::System::Security::Cryptography::CspProviderFlags _get_NoFlags();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags NoFlags
    static void _set_NoFlags(::System::Security::Cryptography::CspProviderFlags value);
    // static field const value: static public System.Security.Cryptography.CspProviderFlags UseMachineKeyStore
    static constexpr const int UseMachineKeyStore = 1;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags UseMachineKeyStore
    static ::System::Security::Cryptography::CspProviderFlags _get_UseMachineKeyStore();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags UseMachineKeyStore
    static void _set_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags value);
    // static field const value: static public System.Security.Cryptography.CspProviderFlags UseDefaultKeyContainer
    static constexpr const int UseDefaultKeyContainer = 2;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags UseDefaultKeyContainer
    static ::System::Security::Cryptography::CspProviderFlags _get_UseDefaultKeyContainer();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags UseDefaultKeyContainer
    static void _set_UseDefaultKeyContainer(::System::Security::Cryptography::CspProviderFlags value);
    // static field const value: static public System.Security.Cryptography.CspProviderFlags UseNonExportableKey
    static constexpr const int UseNonExportableKey = 4;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags UseNonExportableKey
    static ::System::Security::Cryptography::CspProviderFlags _get_UseNonExportableKey();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags UseNonExportableKey
    static void _set_UseNonExportableKey(::System::Security::Cryptography::CspProviderFlags value);
    // static field const value: static public System.Security.Cryptography.CspProviderFlags UseExistingKey
    static constexpr const int UseExistingKey = 8;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags UseExistingKey
    static ::System::Security::Cryptography::CspProviderFlags _get_UseExistingKey();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags UseExistingKey
    static void _set_UseExistingKey(::System::Security::Cryptography::CspProviderFlags value);
    // static field const value: static public System.Security.Cryptography.CspProviderFlags UseArchivableKey
    static constexpr const int UseArchivableKey = 16;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags UseArchivableKey
    static ::System::Security::Cryptography::CspProviderFlags _get_UseArchivableKey();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags UseArchivableKey
    static void _set_UseArchivableKey(::System::Security::Cryptography::CspProviderFlags value);
    // static field const value: static public System.Security.Cryptography.CspProviderFlags UseUserProtectedKey
    static constexpr const int UseUserProtectedKey = 32;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags UseUserProtectedKey
    static ::System::Security::Cryptography::CspProviderFlags _get_UseUserProtectedKey();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags UseUserProtectedKey
    static void _set_UseUserProtectedKey(::System::Security::Cryptography::CspProviderFlags value);
    // static field const value: static public System.Security.Cryptography.CspProviderFlags NoPrompt
    static constexpr const int NoPrompt = 64;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags NoPrompt
    static ::System::Security::Cryptography::CspProviderFlags _get_NoPrompt();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags NoPrompt
    static void _set_NoPrompt(::System::Security::Cryptography::CspProviderFlags value);
    // static field const value: static public System.Security.Cryptography.CspProviderFlags CreateEphemeralKey
    static constexpr const int CreateEphemeralKey = 128;
    // Get static field: static public System.Security.Cryptography.CspProviderFlags CreateEphemeralKey
    static ::System::Security::Cryptography::CspProviderFlags _get_CreateEphemeralKey();
    // Set static field: static public System.Security.Cryptography.CspProviderFlags CreateEphemeralKey
    static void _set_CreateEphemeralKey(::System::Security::Cryptography::CspProviderFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Cryptography.CspProviderFlags
  #pragma pack(pop)
  static check_size<sizeof(CspProviderFlags), 0 + sizeof(int)> __System_Security_Cryptography_CspProviderFlagsSizeCheck;
  static_assert(sizeof(CspProviderFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
