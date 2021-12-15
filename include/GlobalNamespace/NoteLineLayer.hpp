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
  // Forward declaring type: NoteLineLayer
  struct NoteLineLayer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteLineLayer, "", "NoteLineLayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NoteLineLayer
  // [TokenAttribute] Offset: FFFFFFFF
  struct NoteLineLayer/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NoteLineLayer
    constexpr NoteLineLayer(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NoteLineLayer Base
    static constexpr const int Base = 0;
    // Get static field: static public NoteLineLayer Base
    static GlobalNamespace::NoteLineLayer _get_Base();
    // Set static field: static public NoteLineLayer Base
    static void _set_Base(GlobalNamespace::NoteLineLayer value);
    // static field const value: static public NoteLineLayer Upper
    static constexpr const int Upper = 1;
    // Get static field: static public NoteLineLayer Upper
    static GlobalNamespace::NoteLineLayer _get_Upper();
    // Set static field: static public NoteLineLayer Upper
    static void _set_Upper(GlobalNamespace::NoteLineLayer value);
    // static field const value: static public NoteLineLayer Top
    static constexpr const int Top = 2;
    // Get static field: static public NoteLineLayer Top
    static GlobalNamespace::NoteLineLayer _get_Top();
    // Set static field: static public NoteLineLayer Top
    static void _set_Top(GlobalNamespace::NoteLineLayer value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NoteLineLayer
  #pragma pack(pop)
  static check_size<sizeof(NoteLineLayer), 0 + sizeof(int)> __GlobalNamespace_NoteLineLayerSizeCheck;
  static_assert(sizeof(NoteLineLayer) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
