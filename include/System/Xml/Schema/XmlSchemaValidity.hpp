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
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaValidity
  struct XmlSchemaValidity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidity, "System.Xml.Schema", "XmlSchemaValidity");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaValidity
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlSchemaValidity/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlSchemaValidity
    constexpr XmlSchemaValidity(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Xml.Schema.XmlSchemaValidity NotKnown
    static constexpr const int NotKnown = 0;
    // Get static field: static public System.Xml.Schema.XmlSchemaValidity NotKnown
    static ::System::Xml::Schema::XmlSchemaValidity _get_NotKnown();
    // Set static field: static public System.Xml.Schema.XmlSchemaValidity NotKnown
    static void _set_NotKnown(::System::Xml::Schema::XmlSchemaValidity value);
    // static field const value: static public System.Xml.Schema.XmlSchemaValidity Valid
    static constexpr const int Valid = 1;
    // Get static field: static public System.Xml.Schema.XmlSchemaValidity Valid
    static ::System::Xml::Schema::XmlSchemaValidity _get_Valid();
    // Set static field: static public System.Xml.Schema.XmlSchemaValidity Valid
    static void _set_Valid(::System::Xml::Schema::XmlSchemaValidity value);
    // static field const value: static public System.Xml.Schema.XmlSchemaValidity Invalid
    static constexpr const int Invalid = 2;
    // Get static field: static public System.Xml.Schema.XmlSchemaValidity Invalid
    static ::System::Xml::Schema::XmlSchemaValidity _get_Invalid();
    // Set static field: static public System.Xml.Schema.XmlSchemaValidity Invalid
    static void _set_Invalid(::System::Xml::Schema::XmlSchemaValidity value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.XmlSchemaValidity
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaValidity), 0 + sizeof(int)> __System_Xml_Schema_XmlSchemaValiditySizeCheck;
  static_assert(sizeof(XmlSchemaValidity) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
