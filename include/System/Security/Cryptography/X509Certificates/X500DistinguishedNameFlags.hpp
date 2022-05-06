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
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X500DistinguishedNameFlags
  struct X500DistinguishedNameFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags, "System.Security.Cryptography.X509Certificates", "X500DistinguishedNameFlags");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct X500DistinguishedNameFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: X500DistinguishedNameFlags
    constexpr X500DistinguishedNameFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags None
    static constexpr const int None = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags None
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_None();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags None
    static void _set_None(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags Reversed
    static constexpr const int Reversed = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags Reversed
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_Reversed();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags Reversed
    static void _set_Reversed(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseSemicolons
    static constexpr const int UseSemicolons = 16;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseSemicolons
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_UseSemicolons();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseSemicolons
    static void _set_UseSemicolons(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags DoNotUsePlusSign
    static constexpr const int DoNotUsePlusSign = 32;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags DoNotUsePlusSign
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_DoNotUsePlusSign();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags DoNotUsePlusSign
    static void _set_DoNotUsePlusSign(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags DoNotUseQuotes
    static constexpr const int DoNotUseQuotes = 64;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags DoNotUseQuotes
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_DoNotUseQuotes();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags DoNotUseQuotes
    static void _set_DoNotUseQuotes(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseCommas
    static constexpr const int UseCommas = 128;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseCommas
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_UseCommas();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseCommas
    static void _set_UseCommas(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseNewLines
    static constexpr const int UseNewLines = 256;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseNewLines
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_UseNewLines();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseNewLines
    static void _set_UseNewLines(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseUTF8Encoding
    static constexpr const int UseUTF8Encoding = 4096;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseUTF8Encoding
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_UseUTF8Encoding();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseUTF8Encoding
    static void _set_UseUTF8Encoding(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseT61Encoding
    static constexpr const int UseT61Encoding = 8192;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseT61Encoding
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_UseT61Encoding();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags UseT61Encoding
    static void _set_UseT61Encoding(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags ForceUTF8Encoding
    static constexpr const int ForceUTF8Encoding = 16384;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags ForceUTF8Encoding
    static ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags _get_ForceUTF8Encoding();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags ForceUTF8Encoding
    static void _set_ForceUTF8Encoding(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
  #pragma pack(pop)
  static check_size<sizeof(X500DistinguishedNameFlags), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X500DistinguishedNameFlagsSizeCheck;
  static_assert(sizeof(X500DistinguishedNameFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
