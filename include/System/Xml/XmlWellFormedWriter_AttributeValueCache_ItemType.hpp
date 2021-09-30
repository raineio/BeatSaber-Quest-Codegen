// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache
#include "System/Xml/XmlWellFormedWriter_AttributeValueCache.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlWellFormedWriter::AttributeValueCache::ItemType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ItemType
    constexpr ItemType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType EntityRef
    static constexpr const int EntityRef = 0;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType EntityRef
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_EntityRef();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType EntityRef
    static void _set_EntityRef(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType CharEntity
    static constexpr const int CharEntity = 1;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType CharEntity
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_CharEntity();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType CharEntity
    static void _set_CharEntity(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType SurrogateCharEntity
    static constexpr const int SurrogateCharEntity = 2;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType SurrogateCharEntity
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_SurrogateCharEntity();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType SurrogateCharEntity
    static void _set_SurrogateCharEntity(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType Whitespace
    static constexpr const int Whitespace = 3;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType Whitespace
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_Whitespace();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType Whitespace
    static void _set_Whitespace(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType String
    static constexpr const int String = 4;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType String
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_String();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType String
    static void _set_String(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType StringChars
    static constexpr const int StringChars = 5;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType StringChars
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_StringChars();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType StringChars
    static void _set_StringChars(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType Raw
    static constexpr const int Raw = 6;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType Raw
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_Raw();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType Raw
    static void _set_Raw(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType RawChars
    static constexpr const int RawChars = 7;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType RawChars
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_RawChars();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType RawChars
    static void _set_RawChars(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType ValueString
    static constexpr const int ValueString = 8;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType ValueString
    static System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType _get_ValueString();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType ValueString
    static void _set_ValueString(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Xml.XmlWellFormedWriter/System.Xml.AttributeValueCache/System.Xml.ItemType
  #pragma pack(pop)
  static check_size<sizeof(XmlWellFormedWriter::AttributeValueCache::ItemType), 0 + sizeof(int)> __System_Xml_XmlWellFormedWriter_AttributeValueCache_ItemTypeSizeCheck;
  static_assert(sizeof(XmlWellFormedWriter::AttributeValueCache::ItemType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/ItemType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
