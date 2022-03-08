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
  // Forward declaring type: RestrictionFlags
  struct RestrictionFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RestrictionFlags, "System.Xml.Schema", "RestrictionFlags");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.RestrictionFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RestrictionFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RestrictionFlags
    constexpr RestrictionFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.RestrictionFlags Length
    static constexpr const int Length = 1;
    // Get static field: static public System.Xml.Schema.RestrictionFlags Length
    static ::System::Xml::Schema::RestrictionFlags _get_Length();
    // Set static field: static public System.Xml.Schema.RestrictionFlags Length
    static void _set_Length(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags MinLength
    static constexpr const int MinLength = 2;
    // Get static field: static public System.Xml.Schema.RestrictionFlags MinLength
    static ::System::Xml::Schema::RestrictionFlags _get_MinLength();
    // Set static field: static public System.Xml.Schema.RestrictionFlags MinLength
    static void _set_MinLength(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags MaxLength
    static constexpr const int MaxLength = 4;
    // Get static field: static public System.Xml.Schema.RestrictionFlags MaxLength
    static ::System::Xml::Schema::RestrictionFlags _get_MaxLength();
    // Set static field: static public System.Xml.Schema.RestrictionFlags MaxLength
    static void _set_MaxLength(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags Pattern
    static constexpr const int Pattern = 8;
    // Get static field: static public System.Xml.Schema.RestrictionFlags Pattern
    static ::System::Xml::Schema::RestrictionFlags _get_Pattern();
    // Set static field: static public System.Xml.Schema.RestrictionFlags Pattern
    static void _set_Pattern(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags Enumeration
    static constexpr const int Enumeration = 16;
    // Get static field: static public System.Xml.Schema.RestrictionFlags Enumeration
    static ::System::Xml::Schema::RestrictionFlags _get_Enumeration();
    // Set static field: static public System.Xml.Schema.RestrictionFlags Enumeration
    static void _set_Enumeration(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags WhiteSpace
    static constexpr const int WhiteSpace = 32;
    // Get static field: static public System.Xml.Schema.RestrictionFlags WhiteSpace
    static ::System::Xml::Schema::RestrictionFlags _get_WhiteSpace();
    // Set static field: static public System.Xml.Schema.RestrictionFlags WhiteSpace
    static void _set_WhiteSpace(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags MaxInclusive
    static constexpr const int MaxInclusive = 64;
    // Get static field: static public System.Xml.Schema.RestrictionFlags MaxInclusive
    static ::System::Xml::Schema::RestrictionFlags _get_MaxInclusive();
    // Set static field: static public System.Xml.Schema.RestrictionFlags MaxInclusive
    static void _set_MaxInclusive(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags MaxExclusive
    static constexpr const int MaxExclusive = 128;
    // Get static field: static public System.Xml.Schema.RestrictionFlags MaxExclusive
    static ::System::Xml::Schema::RestrictionFlags _get_MaxExclusive();
    // Set static field: static public System.Xml.Schema.RestrictionFlags MaxExclusive
    static void _set_MaxExclusive(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags MinInclusive
    static constexpr const int MinInclusive = 256;
    // Get static field: static public System.Xml.Schema.RestrictionFlags MinInclusive
    static ::System::Xml::Schema::RestrictionFlags _get_MinInclusive();
    // Set static field: static public System.Xml.Schema.RestrictionFlags MinInclusive
    static void _set_MinInclusive(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags MinExclusive
    static constexpr const int MinExclusive = 512;
    // Get static field: static public System.Xml.Schema.RestrictionFlags MinExclusive
    static ::System::Xml::Schema::RestrictionFlags _get_MinExclusive();
    // Set static field: static public System.Xml.Schema.RestrictionFlags MinExclusive
    static void _set_MinExclusive(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags TotalDigits
    static constexpr const int TotalDigits = 1024;
    // Get static field: static public System.Xml.Schema.RestrictionFlags TotalDigits
    static ::System::Xml::Schema::RestrictionFlags _get_TotalDigits();
    // Set static field: static public System.Xml.Schema.RestrictionFlags TotalDigits
    static void _set_TotalDigits(::System::Xml::Schema::RestrictionFlags value);
    // static field const value: static public System.Xml.Schema.RestrictionFlags FractionDigits
    static constexpr const int FractionDigits = 2048;
    // Get static field: static public System.Xml.Schema.RestrictionFlags FractionDigits
    static ::System::Xml::Schema::RestrictionFlags _get_FractionDigits();
    // Set static field: static public System.Xml.Schema.RestrictionFlags FractionDigits
    static void _set_FractionDigits(::System::Xml::Schema::RestrictionFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Xml.Schema.RestrictionFlags
  #pragma pack(pop)
  static check_size<sizeof(RestrictionFlags), 0 + sizeof(int)> __System_Xml_Schema_RestrictionFlagsSizeCheck;
  static_assert(sizeof(RestrictionFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"