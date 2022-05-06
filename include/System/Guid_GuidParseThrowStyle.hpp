// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Guid::GuidParseThrowStyle, "System", "Guid/GuidParseThrowStyle");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Guid/System.GuidParseThrowStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct Guid::GuidParseThrowStyle/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GuidParseThrowStyle
    constexpr GuidParseThrowStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Guid/System.GuidParseThrowStyle None
    static constexpr const int None = 0;
    // Get static field: static public System.Guid/System.GuidParseThrowStyle None
    static ::System::Guid::GuidParseThrowStyle _get_None();
    // Set static field: static public System.Guid/System.GuidParseThrowStyle None
    static void _set_None(::System::Guid::GuidParseThrowStyle value);
    // static field const value: static public System.Guid/System.GuidParseThrowStyle All
    static constexpr const int All = 1;
    // Get static field: static public System.Guid/System.GuidParseThrowStyle All
    static ::System::Guid::GuidParseThrowStyle _get_All();
    // Set static field: static public System.Guid/System.GuidParseThrowStyle All
    static void _set_All(::System::Guid::GuidParseThrowStyle value);
    // static field const value: static public System.Guid/System.GuidParseThrowStyle AllButOverflow
    static constexpr const int AllButOverflow = 2;
    // Get static field: static public System.Guid/System.GuidParseThrowStyle AllButOverflow
    static ::System::Guid::GuidParseThrowStyle _get_AllButOverflow();
    // Set static field: static public System.Guid/System.GuidParseThrowStyle AllButOverflow
    static void _set_AllButOverflow(::System::Guid::GuidParseThrowStyle value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Guid/System.GuidParseThrowStyle
  #pragma pack(pop)
  static check_size<sizeof(Guid::GuidParseThrowStyle), 0 + sizeof(int)> __System_Guid_GuidParseThrowStyleSizeCheck;
  static_assert(sizeof(Guid::GuidParseThrowStyle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
