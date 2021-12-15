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
// Type namespace: System.Security.Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Authentication::SslProtocols, "System.Security.Authentication", "SslProtocols");
// Type namespace: System.Security.Authentication
namespace System::Security::Authentication {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Authentication.SslProtocols
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct SslProtocols/*, public System::Enum*/ {
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
    // Creating value type constructor for type: SslProtocols
    constexpr SslProtocols(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Authentication.SslProtocols None
    static constexpr const int None = 0;
    // Get static field: static public System.Security.Authentication.SslProtocols None
    static System::Security::Authentication::SslProtocols _get_None();
    // Set static field: static public System.Security.Authentication.SslProtocols None
    static void _set_None(System::Security::Authentication::SslProtocols value);
    // static field const value: static public System.Security.Authentication.SslProtocols Ssl2
    static constexpr const int Ssl2 = 12;
    // Get static field: static public System.Security.Authentication.SslProtocols Ssl2
    static System::Security::Authentication::SslProtocols _get_Ssl2();
    // Set static field: static public System.Security.Authentication.SslProtocols Ssl2
    static void _set_Ssl2(System::Security::Authentication::SslProtocols value);
    // static field const value: static public System.Security.Authentication.SslProtocols Ssl3
    static constexpr const int Ssl3 = 48;
    // Get static field: static public System.Security.Authentication.SslProtocols Ssl3
    static System::Security::Authentication::SslProtocols _get_Ssl3();
    // Set static field: static public System.Security.Authentication.SslProtocols Ssl3
    static void _set_Ssl3(System::Security::Authentication::SslProtocols value);
    // static field const value: static public System.Security.Authentication.SslProtocols Tls
    static constexpr const int Tls = 192;
    // Get static field: static public System.Security.Authentication.SslProtocols Tls
    static System::Security::Authentication::SslProtocols _get_Tls();
    // Set static field: static public System.Security.Authentication.SslProtocols Tls
    static void _set_Tls(System::Security::Authentication::SslProtocols value);
    // [MonoTODOAttribute] Offset: 0xEABB8C
    // static field const value: static public System.Security.Authentication.SslProtocols Tls11
    static constexpr const int Tls11 = 768;
    // Get static field: static public System.Security.Authentication.SslProtocols Tls11
    static System::Security::Authentication::SslProtocols _get_Tls11();
    // Set static field: static public System.Security.Authentication.SslProtocols Tls11
    static void _set_Tls11(System::Security::Authentication::SslProtocols value);
    // [MonoTODOAttribute] Offset: 0xEABBC4
    // static field const value: static public System.Security.Authentication.SslProtocols Tls12
    static constexpr const int Tls12 = 3072;
    // Get static field: static public System.Security.Authentication.SslProtocols Tls12
    static System::Security::Authentication::SslProtocols _get_Tls12();
    // Set static field: static public System.Security.Authentication.SslProtocols Tls12
    static void _set_Tls12(System::Security::Authentication::SslProtocols value);
    // static field const value: static public System.Security.Authentication.SslProtocols Default
    static constexpr const int Default = 240;
    // Get static field: static public System.Security.Authentication.SslProtocols Default
    static System::Security::Authentication::SslProtocols _get_Default();
    // Set static field: static public System.Security.Authentication.SslProtocols Default
    static void _set_Default(System::Security::Authentication::SslProtocols value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Authentication.SslProtocols
  #pragma pack(pop)
  static check_size<sizeof(SslProtocols), 0 + sizeof(int)> __System_Security_Authentication_SslProtocolsSizeCheck;
  static_assert(sizeof(SslProtocols) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
