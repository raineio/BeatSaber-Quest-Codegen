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
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XObjectChange
  struct XObjectChange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChange, "System.Xml.Linq", "XObjectChange");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XObjectChange
  // [TokenAttribute] Offset: FFFFFFFF
  struct XObjectChange/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XObjectChange
    constexpr XObjectChange(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Linq.XObjectChange Add
    static constexpr const int Add = 0;
    // Get static field: static public System.Xml.Linq.XObjectChange Add
    static ::System::Xml::Linq::XObjectChange _get_Add();
    // Set static field: static public System.Xml.Linq.XObjectChange Add
    static void _set_Add(::System::Xml::Linq::XObjectChange value);
    // static field const value: static public System.Xml.Linq.XObjectChange Remove
    static constexpr const int Remove = 1;
    // Get static field: static public System.Xml.Linq.XObjectChange Remove
    static ::System::Xml::Linq::XObjectChange _get_Remove();
    // Set static field: static public System.Xml.Linq.XObjectChange Remove
    static void _set_Remove(::System::Xml::Linq::XObjectChange value);
    // static field const value: static public System.Xml.Linq.XObjectChange Name
    static constexpr const int Name = 2;
    // Get static field: static public System.Xml.Linq.XObjectChange Name
    static ::System::Xml::Linq::XObjectChange _get_Name();
    // Set static field: static public System.Xml.Linq.XObjectChange Name
    static void _set_Name(::System::Xml::Linq::XObjectChange value);
    // static field const value: static public System.Xml.Linq.XObjectChange Value
    static constexpr const int Value = 3;
    // Get static field: static public System.Xml.Linq.XObjectChange Value
    static ::System::Xml::Linq::XObjectChange _get_Value();
    // Set static field: static public System.Xml.Linq.XObjectChange Value
    static void _set_Value(::System::Xml::Linq::XObjectChange value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Xml.Linq.XObjectChange
  #pragma pack(pop)
  static check_size<sizeof(XObjectChange), 0 + sizeof(int)> __System_Xml_Linq_XObjectChangeSizeCheck;
  static_assert(sizeof(XObjectChange) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"