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
  // Forward declaring type: BinaryArrayTypeEnum
  struct BinaryArrayTypeEnum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryArrayTypeEnum");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum
  // [TokenAttribute] Offset: FFFFFFFF
  struct BinaryArrayTypeEnum/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BinaryArrayTypeEnum
    constexpr BinaryArrayTypeEnum(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Single
    static constexpr const int Single = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Single
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum _get_Single();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Single
    static void _set_Single(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Jagged
    static constexpr const int Jagged = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Jagged
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum _get_Jagged();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Jagged
    static void _set_Jagged(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Rectangular
    static constexpr const int Rectangular = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Rectangular
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum _get_Rectangular();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum Rectangular
    static void _set_Rectangular(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum SingleOffset
    static constexpr const int SingleOffset = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum SingleOffset
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum _get_SingleOffset();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum SingleOffset
    static void _set_SingleOffset(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum JaggedOffset
    static constexpr const int JaggedOffset = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum JaggedOffset
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum _get_JaggedOffset();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum JaggedOffset
    static void _set_JaggedOffset(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum RectangularOffset
    static constexpr const int RectangularOffset = 5;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum RectangularOffset
    static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum _get_RectangularOffset();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum RectangularOffset
    static void _set_RectangularOffset(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum
  #pragma pack(pop)
  static check_size<sizeof(BinaryArrayTypeEnum), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryArrayTypeEnumSizeCheck;
  static_assert(sizeof(BinaryArrayTypeEnum) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
