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
// Type namespace: System.Security.Authentication.ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: PolicyEnforcement
  struct PolicyEnforcement;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Authentication::ExtendedProtection::PolicyEnforcement, "System.Security.Authentication.ExtendedProtection", "PolicyEnforcement");
// Type namespace: System.Security.Authentication.ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Authentication.ExtendedProtection.PolicyEnforcement
  // [TokenAttribute] Offset: FFFFFFFF
  struct PolicyEnforcement/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PolicyEnforcement
    constexpr PolicyEnforcement(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement Never
    static constexpr const int Never = 0;
    // Get static field: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement Never
    static System::Security::Authentication::ExtendedProtection::PolicyEnforcement _get_Never();
    // Set static field: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement Never
    static void _set_Never(System::Security::Authentication::ExtendedProtection::PolicyEnforcement value);
    // static field const value: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement WhenSupported
    static constexpr const int WhenSupported = 1;
    // Get static field: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement WhenSupported
    static System::Security::Authentication::ExtendedProtection::PolicyEnforcement _get_WhenSupported();
    // Set static field: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement WhenSupported
    static void _set_WhenSupported(System::Security::Authentication::ExtendedProtection::PolicyEnforcement value);
    // static field const value: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement Always
    static constexpr const int Always = 2;
    // Get static field: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement Always
    static System::Security::Authentication::ExtendedProtection::PolicyEnforcement _get_Always();
    // Set static field: static public System.Security.Authentication.ExtendedProtection.PolicyEnforcement Always
    static void _set_Always(System::Security::Authentication::ExtendedProtection::PolicyEnforcement value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Authentication.ExtendedProtection.PolicyEnforcement
  #pragma pack(pop)
  static check_size<sizeof(PolicyEnforcement), 0 + sizeof(int)> __System_Security_Authentication_ExtendedProtection_PolicyEnforcementSizeCheck;
  static_assert(sizeof(PolicyEnforcement) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
