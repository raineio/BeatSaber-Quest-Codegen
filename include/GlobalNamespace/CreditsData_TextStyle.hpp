// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CreditsData
#include "GlobalNamespace/CreditsData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TextStyle
  struct TextStyle;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsData::TextStyle, "", "CreditsData/TextStyle");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: CreditsData/TextStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct CreditsData::TextStyle/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TextStyle
    constexpr TextStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public CreditsData/TextStyle Normal
    static constexpr const int Normal = 0;
    // Get static field: static public CreditsData/TextStyle Normal
    static GlobalNamespace::CreditsData::TextStyle _get_Normal();
    // Set static field: static public CreditsData/TextStyle Normal
    static void _set_Normal(GlobalNamespace::CreditsData::TextStyle value);
    // static field const value: static public CreditsData/TextStyle Title
    static constexpr const int Title = 1;
    // Get static field: static public CreditsData/TextStyle Title
    static GlobalNamespace::CreditsData::TextStyle _get_Title();
    // Set static field: static public CreditsData/TextStyle Title
    static void _set_Title(GlobalNamespace::CreditsData::TextStyle value);
    // static field const value: static public CreditsData/TextStyle Header
    static constexpr const int Header = 2;
    // Get static field: static public CreditsData/TextStyle Header
    static GlobalNamespace::CreditsData::TextStyle _get_Header();
    // Set static field: static public CreditsData/TextStyle Header
    static void _set_Header(GlobalNamespace::CreditsData::TextStyle value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // CreditsData/TextStyle
  #pragma pack(pop)
  static check_size<sizeof(CreditsData::TextStyle), 0 + sizeof(int)> __GlobalNamespace_CreditsData_TextStyleSizeCheck;
  static_assert(sizeof(CreditsData::TextStyle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
