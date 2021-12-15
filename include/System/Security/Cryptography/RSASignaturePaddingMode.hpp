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
  // Forward declaring type: RSASignaturePaddingMode
  struct RSASignaturePaddingMode;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSASignaturePaddingMode, "System.Security.Cryptography", "RSASignaturePaddingMode");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSASignaturePaddingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct RSASignaturePaddingMode/*, public System::Enum*/ {
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
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RSASignaturePaddingMode
    constexpr RSASignaturePaddingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.RSASignaturePaddingMode Pkcs1
    static constexpr const int Pkcs1 = 0;
    // Get static field: static public System.Security.Cryptography.RSASignaturePaddingMode Pkcs1
    static System::Security::Cryptography::RSASignaturePaddingMode _get_Pkcs1();
    // Set static field: static public System.Security.Cryptography.RSASignaturePaddingMode Pkcs1
    static void _set_Pkcs1(System::Security::Cryptography::RSASignaturePaddingMode value);
    // static field const value: static public System.Security.Cryptography.RSASignaturePaddingMode Pss
    static constexpr const int Pss = 1;
    // Get static field: static public System.Security.Cryptography.RSASignaturePaddingMode Pss
    static System::Security::Cryptography::RSASignaturePaddingMode _get_Pss();
    // Set static field: static public System.Security.Cryptography.RSASignaturePaddingMode Pss
    static void _set_Pss(System::Security::Cryptography::RSASignaturePaddingMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.RSASignaturePaddingMode
  #pragma pack(pop)
  static check_size<sizeof(RSASignaturePaddingMode), 0 + sizeof(int)> __System_Security_Cryptography_RSASignaturePaddingModeSizeCheck;
  static_assert(sizeof(RSASignaturePaddingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
