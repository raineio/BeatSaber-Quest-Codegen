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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NoteJumpDurationTypeSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct NoteJumpDurationTypeSettings/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NoteJumpDurationTypeSettings
    constexpr NoteJumpDurationTypeSettings(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NoteJumpDurationTypeSettings Dynamic
    static constexpr const int Dynamic = 0;
    // Get static field: static public NoteJumpDurationTypeSettings Dynamic
    static GlobalNamespace::NoteJumpDurationTypeSettings _get_Dynamic();
    // Set static field: static public NoteJumpDurationTypeSettings Dynamic
    static void _set_Dynamic(GlobalNamespace::NoteJumpDurationTypeSettings value);
    // static field const value: static public NoteJumpDurationTypeSettings Static
    static constexpr const int Static = 1;
    // Get static field: static public NoteJumpDurationTypeSettings Static
    static GlobalNamespace::NoteJumpDurationTypeSettings _get_Static();
    // Set static field: static public NoteJumpDurationTypeSettings Static
    static void _set_Static(GlobalNamespace::NoteJumpDurationTypeSettings value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NoteJumpDurationTypeSettings
  #pragma pack(pop)
  static check_size<sizeof(NoteJumpDurationTypeSettings), 0 + sizeof(int)> __GlobalNamespace_NoteJumpDurationTypeSettingsSizeCheck;
  static_assert(sizeof(NoteJumpDurationTypeSettings) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteJumpDurationTypeSettings, "", "NoteJumpDurationTypeSettings");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"