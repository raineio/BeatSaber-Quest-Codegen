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
  // Forward declaring type: TextContainerAnchors
  struct TextContainerAnchors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextContainerAnchors, "TMPro", "TextContainerAnchors");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TextContainerAnchors
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextContainerAnchors/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TextContainerAnchors
    constexpr TextContainerAnchors(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public TMPro.TextContainerAnchors TopLeft
    static constexpr const int TopLeft = 0;
    // Get static field: static public TMPro.TextContainerAnchors TopLeft
    static ::TMPro::TextContainerAnchors _get_TopLeft();
    // Set static field: static public TMPro.TextContainerAnchors TopLeft
    static void _set_TopLeft(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors Top
    static constexpr const int Top = 1;
    // Get static field: static public TMPro.TextContainerAnchors Top
    static ::TMPro::TextContainerAnchors _get_Top();
    // Set static field: static public TMPro.TextContainerAnchors Top
    static void _set_Top(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors TopRight
    static constexpr const int TopRight = 2;
    // Get static field: static public TMPro.TextContainerAnchors TopRight
    static ::TMPro::TextContainerAnchors _get_TopRight();
    // Set static field: static public TMPro.TextContainerAnchors TopRight
    static void _set_TopRight(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors Left
    static constexpr const int Left = 3;
    // Get static field: static public TMPro.TextContainerAnchors Left
    static ::TMPro::TextContainerAnchors _get_Left();
    // Set static field: static public TMPro.TextContainerAnchors Left
    static void _set_Left(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors Middle
    static constexpr const int Middle = 4;
    // Get static field: static public TMPro.TextContainerAnchors Middle
    static ::TMPro::TextContainerAnchors _get_Middle();
    // Set static field: static public TMPro.TextContainerAnchors Middle
    static void _set_Middle(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors Right
    static constexpr const int Right = 5;
    // Get static field: static public TMPro.TextContainerAnchors Right
    static ::TMPro::TextContainerAnchors _get_Right();
    // Set static field: static public TMPro.TextContainerAnchors Right
    static void _set_Right(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors BottomLeft
    static constexpr const int BottomLeft = 6;
    // Get static field: static public TMPro.TextContainerAnchors BottomLeft
    static ::TMPro::TextContainerAnchors _get_BottomLeft();
    // Set static field: static public TMPro.TextContainerAnchors BottomLeft
    static void _set_BottomLeft(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors Bottom
    static constexpr const int Bottom = 7;
    // Get static field: static public TMPro.TextContainerAnchors Bottom
    static ::TMPro::TextContainerAnchors _get_Bottom();
    // Set static field: static public TMPro.TextContainerAnchors Bottom
    static void _set_Bottom(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors BottomRight
    static constexpr const int BottomRight = 8;
    // Get static field: static public TMPro.TextContainerAnchors BottomRight
    static ::TMPro::TextContainerAnchors _get_BottomRight();
    // Set static field: static public TMPro.TextContainerAnchors BottomRight
    static void _set_BottomRight(::TMPro::TextContainerAnchors value);
    // static field const value: static public TMPro.TextContainerAnchors Custom
    static constexpr const int Custom = 9;
    // Get static field: static public TMPro.TextContainerAnchors Custom
    static ::TMPro::TextContainerAnchors _get_Custom();
    // Set static field: static public TMPro.TextContainerAnchors Custom
    static void _set_Custom(::TMPro::TextContainerAnchors value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // TMPro.TextContainerAnchors
  #pragma pack(pop)
  static check_size<sizeof(TextContainerAnchors), 0 + sizeof(int)> __TMPro_TextContainerAnchorsSizeCheck;
  static_assert(sizeof(TextContainerAnchors) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
