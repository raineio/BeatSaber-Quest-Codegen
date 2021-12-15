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
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NatAddressType
  struct NatAddressType;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatAddressType, "LiteNetLib", "NatAddressType");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NatAddressType
  // [TokenAttribute] Offset: FFFFFFFF
  struct NatAddressType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: NatAddressType
    constexpr NatAddressType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.NatAddressType Internal
    static constexpr const int Internal = 0;
    // Get static field: static public LiteNetLib.NatAddressType Internal
    static LiteNetLib::NatAddressType _get_Internal();
    // Set static field: static public LiteNetLib.NatAddressType Internal
    static void _set_Internal(LiteNetLib::NatAddressType value);
    // static field const value: static public LiteNetLib.NatAddressType External
    static constexpr const int External = 1;
    // Get static field: static public LiteNetLib.NatAddressType External
    static LiteNetLib::NatAddressType _get_External();
    // Set static field: static public LiteNetLib.NatAddressType External
    static void _set_External(LiteNetLib::NatAddressType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LiteNetLib.NatAddressType
  #pragma pack(pop)
  static check_size<sizeof(NatAddressType), 0 + sizeof(int)> __LiteNetLib_NatAddressTypeSizeCheck;
  static_assert(sizeof(NatAddressType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
