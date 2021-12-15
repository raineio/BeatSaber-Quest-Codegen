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
// Type namespace: System
namespace System {
  // Forward declaring type: UriHostNameType
  struct UriHostNameType;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UriHostNameType, "System", "UriHostNameType");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.UriHostNameType
  // [TokenAttribute] Offset: FFFFFFFF
  struct UriHostNameType/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UriHostNameType
    constexpr UriHostNameType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.UriHostNameType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public System.UriHostNameType Unknown
    static System::UriHostNameType _get_Unknown();
    // Set static field: static public System.UriHostNameType Unknown
    static void _set_Unknown(System::UriHostNameType value);
    // static field const value: static public System.UriHostNameType Basic
    static constexpr const int Basic = 1;
    // Get static field: static public System.UriHostNameType Basic
    static System::UriHostNameType _get_Basic();
    // Set static field: static public System.UriHostNameType Basic
    static void _set_Basic(System::UriHostNameType value);
    // static field const value: static public System.UriHostNameType Dns
    static constexpr const int Dns = 2;
    // Get static field: static public System.UriHostNameType Dns
    static System::UriHostNameType _get_Dns();
    // Set static field: static public System.UriHostNameType Dns
    static void _set_Dns(System::UriHostNameType value);
    // static field const value: static public System.UriHostNameType IPv4
    static constexpr const int IPv4 = 3;
    // Get static field: static public System.UriHostNameType IPv4
    static System::UriHostNameType _get_IPv4();
    // Set static field: static public System.UriHostNameType IPv4
    static void _set_IPv4(System::UriHostNameType value);
    // static field const value: static public System.UriHostNameType IPv6
    static constexpr const int IPv6 = 4;
    // Get static field: static public System.UriHostNameType IPv6
    static System::UriHostNameType _get_IPv6();
    // Set static field: static public System.UriHostNameType IPv6
    static void _set_IPv6(System::UriHostNameType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.UriHostNameType
  #pragma pack(pop)
  static check_size<sizeof(UriHostNameType), 0 + sizeof(int)> __System_UriHostNameTypeSizeCheck;
  static_assert(sizeof(UriHostNameType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
