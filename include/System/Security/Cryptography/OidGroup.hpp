// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.OidGroup
  // [TokenAttribute] Offset: FFFFFFFF
  struct OidGroup/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OidGroup
    constexpr OidGroup(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.OidGroup All
    static constexpr const int All = 0;
    // Get static field: static public System.Security.Cryptography.OidGroup All
    static System::Security::Cryptography::OidGroup _get_All();
    // Set static field: static public System.Security.Cryptography.OidGroup All
    static void _set_All(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup HashAlgorithm
    static constexpr const int HashAlgorithm = 1;
    // Get static field: static public System.Security.Cryptography.OidGroup HashAlgorithm
    static System::Security::Cryptography::OidGroup _get_HashAlgorithm();
    // Set static field: static public System.Security.Cryptography.OidGroup HashAlgorithm
    static void _set_HashAlgorithm(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup EncryptionAlgorithm
    static constexpr const int EncryptionAlgorithm = 2;
    // Get static field: static public System.Security.Cryptography.OidGroup EncryptionAlgorithm
    static System::Security::Cryptography::OidGroup _get_EncryptionAlgorithm();
    // Set static field: static public System.Security.Cryptography.OidGroup EncryptionAlgorithm
    static void _set_EncryptionAlgorithm(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup PublicKeyAlgorithm
    static constexpr const int PublicKeyAlgorithm = 3;
    // Get static field: static public System.Security.Cryptography.OidGroup PublicKeyAlgorithm
    static System::Security::Cryptography::OidGroup _get_PublicKeyAlgorithm();
    // Set static field: static public System.Security.Cryptography.OidGroup PublicKeyAlgorithm
    static void _set_PublicKeyAlgorithm(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup SignatureAlgorithm
    static constexpr const int SignatureAlgorithm = 4;
    // Get static field: static public System.Security.Cryptography.OidGroup SignatureAlgorithm
    static System::Security::Cryptography::OidGroup _get_SignatureAlgorithm();
    // Set static field: static public System.Security.Cryptography.OidGroup SignatureAlgorithm
    static void _set_SignatureAlgorithm(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup Attribute
    static constexpr const int Attribute = 5;
    // Get static field: static public System.Security.Cryptography.OidGroup Attribute
    static System::Security::Cryptography::OidGroup _get_Attribute();
    // Set static field: static public System.Security.Cryptography.OidGroup Attribute
    static void _set_Attribute(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup ExtensionOrAttribute
    static constexpr const int ExtensionOrAttribute = 6;
    // Get static field: static public System.Security.Cryptography.OidGroup ExtensionOrAttribute
    static System::Security::Cryptography::OidGroup _get_ExtensionOrAttribute();
    // Set static field: static public System.Security.Cryptography.OidGroup ExtensionOrAttribute
    static void _set_ExtensionOrAttribute(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup EnhancedKeyUsage
    static constexpr const int EnhancedKeyUsage = 7;
    // Get static field: static public System.Security.Cryptography.OidGroup EnhancedKeyUsage
    static System::Security::Cryptography::OidGroup _get_EnhancedKeyUsage();
    // Set static field: static public System.Security.Cryptography.OidGroup EnhancedKeyUsage
    static void _set_EnhancedKeyUsage(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup Policy
    static constexpr const int Policy = 8;
    // Get static field: static public System.Security.Cryptography.OidGroup Policy
    static System::Security::Cryptography::OidGroup _get_Policy();
    // Set static field: static public System.Security.Cryptography.OidGroup Policy
    static void _set_Policy(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup Template
    static constexpr const int Template = 9;
    // Get static field: static public System.Security.Cryptography.OidGroup Template
    static System::Security::Cryptography::OidGroup _get_Template();
    // Set static field: static public System.Security.Cryptography.OidGroup Template
    static void _set_Template(System::Security::Cryptography::OidGroup value);
    // static field const value: static public System.Security.Cryptography.OidGroup KeyDerivationFunction
    static constexpr const int KeyDerivationFunction = 10;
    // Get static field: static public System.Security.Cryptography.OidGroup KeyDerivationFunction
    static System::Security::Cryptography::OidGroup _get_KeyDerivationFunction();
    // Set static field: static public System.Security.Cryptography.OidGroup KeyDerivationFunction
    static void _set_KeyDerivationFunction(System::Security::Cryptography::OidGroup value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.OidGroup
  #pragma pack(pop)
  static check_size<sizeof(OidGroup), 0 + sizeof(int)> __System_Security_Cryptography_OidGroupSizeCheck;
  static_assert(sizeof(OidGroup) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::OidGroup, "System.Security.Cryptography", "OidGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
