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
  // Forward declaring type: NoteVisualModifierType
  struct NoteVisualModifierType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteVisualModifierType, "", "NoteVisualModifierType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NoteVisualModifierType
  // [TokenAttribute] Offset: FFFFFFFF
  struct NoteVisualModifierType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NoteVisualModifierType
    constexpr NoteVisualModifierType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NoteVisualModifierType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public NoteVisualModifierType Normal
    static ::GlobalNamespace::NoteVisualModifierType _get_Normal();
    // Set static field: static public NoteVisualModifierType Normal
    static void _set_Normal(::GlobalNamespace::NoteVisualModifierType value);
    // static field const value: static public NoteVisualModifierType DisappearingArrow
    static constexpr const int DisappearingArrow = 1;
    // Get static field: static public NoteVisualModifierType DisappearingArrow
    static ::GlobalNamespace::NoteVisualModifierType _get_DisappearingArrow();
    // Set static field: static public NoteVisualModifierType DisappearingArrow
    static void _set_DisappearingArrow(::GlobalNamespace::NoteVisualModifierType value);
    // static field const value: static public NoteVisualModifierType Ghost
    static constexpr const int Ghost = 2;
    // Get static field: static public NoteVisualModifierType Ghost
    static ::GlobalNamespace::NoteVisualModifierType _get_Ghost();
    // Set static field: static public NoteVisualModifierType Ghost
    static void _set_Ghost(::GlobalNamespace::NoteVisualModifierType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NoteVisualModifierType
  #pragma pack(pop)
  static check_size<sizeof(NoteVisualModifierType), 0 + sizeof(int)> __GlobalNamespace_NoteVisualModifierTypeSizeCheck;
  static_assert(sizeof(NoteVisualModifierType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"