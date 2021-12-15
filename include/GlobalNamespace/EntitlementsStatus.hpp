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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EntitlementsStatus
  struct EntitlementsStatus;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EntitlementsStatus, "", "EntitlementsStatus");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: EntitlementsStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct EntitlementsStatus/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EntitlementsStatus
    constexpr EntitlementsStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public EntitlementsStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public EntitlementsStatus Unknown
    static GlobalNamespace::EntitlementsStatus _get_Unknown();
    // Set static field: static public EntitlementsStatus Unknown
    static void _set_Unknown(GlobalNamespace::EntitlementsStatus value);
    // static field const value: static public EntitlementsStatus NotOwned
    static constexpr const int NotOwned = 1;
    // Get static field: static public EntitlementsStatus NotOwned
    static GlobalNamespace::EntitlementsStatus _get_NotOwned();
    // Set static field: static public EntitlementsStatus NotOwned
    static void _set_NotOwned(GlobalNamespace::EntitlementsStatus value);
    // static field const value: static public EntitlementsStatus NotDownloaded
    static constexpr const int NotDownloaded = 2;
    // Get static field: static public EntitlementsStatus NotDownloaded
    static GlobalNamespace::EntitlementsStatus _get_NotDownloaded();
    // Set static field: static public EntitlementsStatus NotDownloaded
    static void _set_NotDownloaded(GlobalNamespace::EntitlementsStatus value);
    // static field const value: static public EntitlementsStatus Ok
    static constexpr const int Ok = 3;
    // Get static field: static public EntitlementsStatus Ok
    static GlobalNamespace::EntitlementsStatus _get_Ok();
    // Set static field: static public EntitlementsStatus Ok
    static void _set_Ok(GlobalNamespace::EntitlementsStatus value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // EntitlementsStatus
  #pragma pack(pop)
  static check_size<sizeof(EntitlementsStatus), 0 + sizeof(int)> __GlobalNamespace_EntitlementsStatusSizeCheck;
  static_assert(sizeof(EntitlementsStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
