// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: Token
  struct Token;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::Token, "System.Xml", "XmlWellFormedWriter/Token");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWellFormedWriter/System.Xml.Token
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlWellFormedWriter::Token/*, public System::Enum*/ {
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
    // Creating value type constructor for type: Token
    constexpr Token(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartDocument
    static constexpr const int StartDocument = 0;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartDocument
    static System::Xml::XmlWellFormedWriter::Token _get_StartDocument();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartDocument
    static void _set_StartDocument(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndDocument
    static constexpr const int EndDocument = 1;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndDocument
    static System::Xml::XmlWellFormedWriter::Token _get_EndDocument();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndDocument
    static void _set_EndDocument(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token PI
    static constexpr const int PI = 2;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token PI
    static System::Xml::XmlWellFormedWriter::Token _get_PI();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token PI
    static void _set_PI(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Comment
    static constexpr const int Comment = 3;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Comment
    static System::Xml::XmlWellFormedWriter::Token _get_Comment();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Comment
    static void _set_Comment(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Dtd
    static constexpr const int Dtd = 4;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Dtd
    static System::Xml::XmlWellFormedWriter::Token _get_Dtd();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Dtd
    static void _set_Dtd(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartElement
    static constexpr const int StartElement = 5;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartElement
    static System::Xml::XmlWellFormedWriter::Token _get_StartElement();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartElement
    static void _set_StartElement(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndElement
    static constexpr const int EndElement = 6;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndElement
    static System::Xml::XmlWellFormedWriter::Token _get_EndElement();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndElement
    static void _set_EndElement(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartAttribute
    static constexpr const int StartAttribute = 7;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartAttribute
    static System::Xml::XmlWellFormedWriter::Token _get_StartAttribute();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token StartAttribute
    static void _set_StartAttribute(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndAttribute
    static constexpr const int EndAttribute = 8;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndAttribute
    static System::Xml::XmlWellFormedWriter::Token _get_EndAttribute();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token EndAttribute
    static void _set_EndAttribute(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Text
    static constexpr const int Text = 9;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Text
    static System::Xml::XmlWellFormedWriter::Token _get_Text();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Text
    static void _set_Text(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token CData
    static constexpr const int CData = 10;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token CData
    static System::Xml::XmlWellFormedWriter::Token _get_CData();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token CData
    static void _set_CData(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token AtomicValue
    static constexpr const int AtomicValue = 11;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token AtomicValue
    static System::Xml::XmlWellFormedWriter::Token _get_AtomicValue();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token AtomicValue
    static void _set_AtomicValue(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Base64
    static constexpr const int Base64 = 12;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Base64
    static System::Xml::XmlWellFormedWriter::Token _get_Base64();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Base64
    static void _set_Base64(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token RawData
    static constexpr const int RawData = 13;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token RawData
    static System::Xml::XmlWellFormedWriter::Token _get_RawData();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token RawData
    static void _set_RawData(System::Xml::XmlWellFormedWriter::Token value);
    // static field const value: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Whitespace
    static constexpr const int Whitespace = 14;
    // Get static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Whitespace
    static System::Xml::XmlWellFormedWriter::Token _get_Whitespace();
    // Set static field: static public System.Xml.XmlWellFormedWriter/System.Xml.Token Whitespace
    static void _set_Whitespace(System::Xml::XmlWellFormedWriter::Token value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Xml.XmlWellFormedWriter/System.Xml.Token
  #pragma pack(pop)
  static check_size<sizeof(XmlWellFormedWriter::Token), 0 + sizeof(int)> __System_Xml_XmlWellFormedWriter_TokenSizeCheck;
  static_assert(sizeof(XmlWellFormedWriter::Token) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
