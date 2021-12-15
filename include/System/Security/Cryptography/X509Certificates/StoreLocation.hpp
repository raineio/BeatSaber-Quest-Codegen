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
  // Forward declaring type: StoreLocation
  struct StoreLocation;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::StoreLocation, "System.Security.Cryptography.X509Certificates", "StoreLocation");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.StoreLocation
  // [TokenAttribute] Offset: FFFFFFFF
  struct StoreLocation/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StoreLocation
    constexpr StoreLocation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreLocation CurrentUser
    static constexpr const int CurrentUser = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreLocation CurrentUser
    static System::Security::Cryptography::X509Certificates::StoreLocation _get_CurrentUser();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreLocation CurrentUser
    static void _set_CurrentUser(System::Security::Cryptography::X509Certificates::StoreLocation value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreLocation LocalMachine
    static constexpr const int LocalMachine = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreLocation LocalMachine
    static System::Security::Cryptography::X509Certificates::StoreLocation _get_LocalMachine();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreLocation LocalMachine
    static void _set_LocalMachine(System::Security::Cryptography::X509Certificates::StoreLocation value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.StoreLocation
  #pragma pack(pop)
  static check_size<sizeof(StoreLocation), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_StoreLocationSizeCheck;
  static_assert(sizeof(StoreLocation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
