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
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextureMappingOptions
  struct TextureMappingOptions;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextureMappingOptions, "TMPro", "TextureMappingOptions");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TextureMappingOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextureMappingOptions/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TextureMappingOptions
    constexpr TextureMappingOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TextureMappingOptions Character
    static constexpr const int Character = 0;
    // Get static field: static public TMPro.TextureMappingOptions Character
    static TMPro::TextureMappingOptions _get_Character();
    // Set static field: static public TMPro.TextureMappingOptions Character
    static void _set_Character(TMPro::TextureMappingOptions value);
    // static field const value: static public TMPro.TextureMappingOptions Line
    static constexpr const int Line = 1;
    // Get static field: static public TMPro.TextureMappingOptions Line
    static TMPro::TextureMappingOptions _get_Line();
    // Set static field: static public TMPro.TextureMappingOptions Line
    static void _set_Line(TMPro::TextureMappingOptions value);
    // static field const value: static public TMPro.TextureMappingOptions Paragraph
    static constexpr const int Paragraph = 2;
    // Get static field: static public TMPro.TextureMappingOptions Paragraph
    static TMPro::TextureMappingOptions _get_Paragraph();
    // Set static field: static public TMPro.TextureMappingOptions Paragraph
    static void _set_Paragraph(TMPro::TextureMappingOptions value);
    // static field const value: static public TMPro.TextureMappingOptions MatchAspect
    static constexpr const int MatchAspect = 3;
    // Get static field: static public TMPro.TextureMappingOptions MatchAspect
    static TMPro::TextureMappingOptions _get_MatchAspect();
    // Set static field: static public TMPro.TextureMappingOptions MatchAspect
    static void _set_MatchAspect(TMPro::TextureMappingOptions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.TextureMappingOptions
  #pragma pack(pop)
  static check_size<sizeof(TextureMappingOptions), 0 + sizeof(int)> __TMPro_TextureMappingOptionsSizeCheck;
  static_assert(sizeof(TextureMappingOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
