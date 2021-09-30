// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TableViewSelectionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TableViewSelectionType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TableViewSelectionType
    constexpr TableViewSelectionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HMUI.TableViewSelectionType None
    static constexpr const int None = 0;
    // Get static field: static public HMUI.TableViewSelectionType None
    static HMUI::TableViewSelectionType _get_None();
    // Set static field: static public HMUI.TableViewSelectionType None
    static void _set_None(HMUI::TableViewSelectionType value);
    // static field const value: static public HMUI.TableViewSelectionType Single
    static constexpr const int Single = 1;
    // Get static field: static public HMUI.TableViewSelectionType Single
    static HMUI::TableViewSelectionType _get_Single();
    // Set static field: static public HMUI.TableViewSelectionType Single
    static void _set_Single(HMUI::TableViewSelectionType value);
    // static field const value: static public HMUI.TableViewSelectionType Multiple
    static constexpr const int Multiple = 2;
    // Get static field: static public HMUI.TableViewSelectionType Multiple
    static HMUI::TableViewSelectionType _get_Multiple();
    // Set static field: static public HMUI.TableViewSelectionType Multiple
    static void _set_Multiple(HMUI::TableViewSelectionType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HMUI.TableViewSelectionType
  #pragma pack(pop)
  static check_size<sizeof(TableViewSelectionType), 0 + sizeof(int)> __HMUI_TableViewSelectionTypeSizeCheck;
  static_assert(sizeof(TableViewSelectionType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableViewSelectionType, "HMUI", "TableViewSelectionType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
