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
  // Forward declaring type: XmlOutputMethod
  struct XmlOutputMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlOutputMethod, "System.Xml", "XmlOutputMethod");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlOutputMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlOutputMethod/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlOutputMethod
    constexpr XmlOutputMethod(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Xml.XmlOutputMethod Xml
    static constexpr const int Xml = 0;
    // Get static field: static public System.Xml.XmlOutputMethod Xml
    static ::System::Xml::XmlOutputMethod _get_Xml();
    // Set static field: static public System.Xml.XmlOutputMethod Xml
    static void _set_Xml(::System::Xml::XmlOutputMethod value);
    // static field const value: static public System.Xml.XmlOutputMethod Html
    static constexpr const int Html = 1;
    // Get static field: static public System.Xml.XmlOutputMethod Html
    static ::System::Xml::XmlOutputMethod _get_Html();
    // Set static field: static public System.Xml.XmlOutputMethod Html
    static void _set_Html(::System::Xml::XmlOutputMethod value);
    // static field const value: static public System.Xml.XmlOutputMethod Text
    static constexpr const int Text = 2;
    // Get static field: static public System.Xml.XmlOutputMethod Text
    static ::System::Xml::XmlOutputMethod _get_Text();
    // Set static field: static public System.Xml.XmlOutputMethod Text
    static void _set_Text(::System::Xml::XmlOutputMethod value);
    // static field const value: static public System.Xml.XmlOutputMethod AutoDetect
    static constexpr const int AutoDetect = 3;
    // Get static field: static public System.Xml.XmlOutputMethod AutoDetect
    static ::System::Xml::XmlOutputMethod _get_AutoDetect();
    // Set static field: static public System.Xml.XmlOutputMethod AutoDetect
    static void _set_AutoDetect(::System::Xml::XmlOutputMethod value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.XmlOutputMethod
  #pragma pack(pop)
  static check_size<sizeof(XmlOutputMethod), 0 + sizeof(int)> __System_Xml_XmlOutputMethodSizeCheck;
  static_assert(sizeof(XmlOutputMethod) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
