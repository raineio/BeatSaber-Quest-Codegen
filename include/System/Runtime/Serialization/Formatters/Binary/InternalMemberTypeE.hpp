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
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: InternalMemberTypeE
  struct InternalMemberTypeE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberTypeE");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE
  // [TokenAttribute] Offset: FFFFFFFF
  struct InternalMemberTypeE/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InternalMemberTypeE
    constexpr InternalMemberTypeE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Empty
    static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Empty
    static void _set_Empty(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Header
    static constexpr const int Header = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Header
    static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE _get_Header();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Header
    static void _set_Header(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Field
    static constexpr const int Field = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Field
    static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE _get_Field();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Field
    static void _set_Field(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Item
    static constexpr const int Item = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Item
    static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE _get_Item();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE Item
    static void _set_Item(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE
  #pragma pack(pop)
  static check_size<sizeof(InternalMemberTypeE), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_InternalMemberTypeESizeCheck;
  static_assert(sizeof(InternalMemberTypeE) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
