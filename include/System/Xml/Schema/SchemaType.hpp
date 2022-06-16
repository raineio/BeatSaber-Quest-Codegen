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
  // Forward declaring type: SchemaType
  struct SchemaType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaType, "System.Xml.Schema", "SchemaType");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SchemaType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SchemaType
    constexpr SchemaType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Xml.Schema.SchemaType None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.Schema.SchemaType None
    static ::System::Xml::Schema::SchemaType _get_None();
    // Set static field: static public System.Xml.Schema.SchemaType None
    static void _set_None(::System::Xml::Schema::SchemaType value);
    // static field const value: static public System.Xml.Schema.SchemaType DTD
    static constexpr const int DTD = 1;
    // Get static field: static public System.Xml.Schema.SchemaType DTD
    static ::System::Xml::Schema::SchemaType _get_DTD();
    // Set static field: static public System.Xml.Schema.SchemaType DTD
    static void _set_DTD(::System::Xml::Schema::SchemaType value);
    // static field const value: static public System.Xml.Schema.SchemaType XDR
    static constexpr const int XDR = 2;
    // Get static field: static public System.Xml.Schema.SchemaType XDR
    static ::System::Xml::Schema::SchemaType _get_XDR();
    // Set static field: static public System.Xml.Schema.SchemaType XDR
    static void _set_XDR(::System::Xml::Schema::SchemaType value);
    // static field const value: static public System.Xml.Schema.SchemaType XSD
    static constexpr const int XSD = 3;
    // Get static field: static public System.Xml.Schema.SchemaType XSD
    static ::System::Xml::Schema::SchemaType _get_XSD();
    // Set static field: static public System.Xml.Schema.SchemaType XSD
    static void _set_XSD(::System::Xml::Schema::SchemaType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.SchemaType
  #pragma pack(pop)
  static check_size<sizeof(SchemaType), 0 + sizeof(int)> __System_Xml_Schema_SchemaTypeSizeCheck;
  static_assert(sizeof(SchemaType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
