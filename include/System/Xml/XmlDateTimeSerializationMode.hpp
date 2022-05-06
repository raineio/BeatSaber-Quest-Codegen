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
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlDateTimeSerializationMode
  struct XmlDateTimeSerializationMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDateTimeSerializationMode, "System.Xml", "XmlDateTimeSerializationMode");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlDateTimeSerializationMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlDateTimeSerializationMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlDateTimeSerializationMode
    constexpr XmlDateTimeSerializationMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XmlDateTimeSerializationMode Local
    static constexpr const int Local = 0;
    // Get static field: static public System.Xml.XmlDateTimeSerializationMode Local
    static ::System::Xml::XmlDateTimeSerializationMode _get_Local();
    // Set static field: static public System.Xml.XmlDateTimeSerializationMode Local
    static void _set_Local(::System::Xml::XmlDateTimeSerializationMode value);
    // static field const value: static public System.Xml.XmlDateTimeSerializationMode Utc
    static constexpr const int Utc = 1;
    // Get static field: static public System.Xml.XmlDateTimeSerializationMode Utc
    static ::System::Xml::XmlDateTimeSerializationMode _get_Utc();
    // Set static field: static public System.Xml.XmlDateTimeSerializationMode Utc
    static void _set_Utc(::System::Xml::XmlDateTimeSerializationMode value);
    // static field const value: static public System.Xml.XmlDateTimeSerializationMode Unspecified
    static constexpr const int Unspecified = 2;
    // Get static field: static public System.Xml.XmlDateTimeSerializationMode Unspecified
    static ::System::Xml::XmlDateTimeSerializationMode _get_Unspecified();
    // Set static field: static public System.Xml.XmlDateTimeSerializationMode Unspecified
    static void _set_Unspecified(::System::Xml::XmlDateTimeSerializationMode value);
    // static field const value: static public System.Xml.XmlDateTimeSerializationMode RoundtripKind
    static constexpr const int RoundtripKind = 3;
    // Get static field: static public System.Xml.XmlDateTimeSerializationMode RoundtripKind
    static ::System::Xml::XmlDateTimeSerializationMode _get_RoundtripKind();
    // Set static field: static public System.Xml.XmlDateTimeSerializationMode RoundtripKind
    static void _set_RoundtripKind(::System::Xml::XmlDateTimeSerializationMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.XmlDateTimeSerializationMode
  #pragma pack(pop)
  static check_size<sizeof(XmlDateTimeSerializationMode), 0 + sizeof(int)> __System_Xml_XmlDateTimeSerializationModeSizeCheck;
  static_assert(sizeof(XmlDateTimeSerializationMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
