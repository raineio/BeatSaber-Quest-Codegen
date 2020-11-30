// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Autogenerated type: System.Net.Security.SslPolicyErrors
  struct SslPolicyErrors : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: SslPolicyErrors
    constexpr SslPolicyErrors(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Security.SslPolicyErrors None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.Security.SslPolicyErrors None
    static System::Net::Security::SslPolicyErrors _get_None();
    // Set static field: static public System.Net.Security.SslPolicyErrors None
    static void _set_None(System::Net::Security::SslPolicyErrors value);
    // static field const value: static public System.Net.Security.SslPolicyErrors RemoteCertificateNotAvailable
    static constexpr const int RemoteCertificateNotAvailable = 1;
    // Get static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateNotAvailable
    static System::Net::Security::SslPolicyErrors _get_RemoteCertificateNotAvailable();
    // Set static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateNotAvailable
    static void _set_RemoteCertificateNotAvailable(System::Net::Security::SslPolicyErrors value);
    // static field const value: static public System.Net.Security.SslPolicyErrors RemoteCertificateNameMismatch
    static constexpr const int RemoteCertificateNameMismatch = 2;
    // Get static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateNameMismatch
    static System::Net::Security::SslPolicyErrors _get_RemoteCertificateNameMismatch();
    // Set static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateNameMismatch
    static void _set_RemoteCertificateNameMismatch(System::Net::Security::SslPolicyErrors value);
    // static field const value: static public System.Net.Security.SslPolicyErrors RemoteCertificateChainErrors
    static constexpr const int RemoteCertificateChainErrors = 4;
    // Get static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateChainErrors
    static System::Net::Security::SslPolicyErrors _get_RemoteCertificateChainErrors();
    // Set static field: static public System.Net.Security.SslPolicyErrors RemoteCertificateChainErrors
    static void _set_RemoteCertificateChainErrors(System::Net::Security::SslPolicyErrors value);
  }; // System.Net.Security.SslPolicyErrors
  check_size<sizeof(SslPolicyErrors), 0 + sizeof(int) + 8 - (0 + sizeof(int)) % 8> __System_Net_Security_SslPolicyErrorsSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::SslPolicyErrors, "System.Net.Security", "SslPolicyErrors");
#pragma pack(pop)