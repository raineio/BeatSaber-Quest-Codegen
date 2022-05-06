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
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputUpdateType
  struct NativeInputUpdateType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputUpdateType, "UnityEngineInternal.Input", "NativeInputUpdateType");
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.Input.NativeInputUpdateType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NativeInputUpdateType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NativeInputUpdateType
    constexpr NativeInputUpdateType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngineInternal.Input.NativeInputUpdateType Dynamic
    static constexpr const int Dynamic = 1;
    // Get static field: static public UnityEngineInternal.Input.NativeInputUpdateType Dynamic
    static ::UnityEngineInternal::Input::NativeInputUpdateType _get_Dynamic();
    // Set static field: static public UnityEngineInternal.Input.NativeInputUpdateType Dynamic
    static void _set_Dynamic(::UnityEngineInternal::Input::NativeInputUpdateType value);
    // static field const value: static public UnityEngineInternal.Input.NativeInputUpdateType Fixed
    static constexpr const int Fixed = 2;
    // Get static field: static public UnityEngineInternal.Input.NativeInputUpdateType Fixed
    static ::UnityEngineInternal::Input::NativeInputUpdateType _get_Fixed();
    // Set static field: static public UnityEngineInternal.Input.NativeInputUpdateType Fixed
    static void _set_Fixed(::UnityEngineInternal::Input::NativeInputUpdateType value);
    // static field const value: static public UnityEngineInternal.Input.NativeInputUpdateType BeforeRender
    static constexpr const int BeforeRender = 4;
    // Get static field: static public UnityEngineInternal.Input.NativeInputUpdateType BeforeRender
    static ::UnityEngineInternal::Input::NativeInputUpdateType _get_BeforeRender();
    // Set static field: static public UnityEngineInternal.Input.NativeInputUpdateType BeforeRender
    static void _set_BeforeRender(::UnityEngineInternal::Input::NativeInputUpdateType value);
    // static field const value: static public UnityEngineInternal.Input.NativeInputUpdateType Editor
    static constexpr const int Editor = 8;
    // Get static field: static public UnityEngineInternal.Input.NativeInputUpdateType Editor
    static ::UnityEngineInternal::Input::NativeInputUpdateType _get_Editor();
    // Set static field: static public UnityEngineInternal.Input.NativeInputUpdateType Editor
    static void _set_Editor(::UnityEngineInternal::Input::NativeInputUpdateType value);
    // static field const value: static public UnityEngineInternal.Input.NativeInputUpdateType IgnoreFocus
    static constexpr const int IgnoreFocus = -2147483648;
    // Get static field: static public UnityEngineInternal.Input.NativeInputUpdateType IgnoreFocus
    static ::UnityEngineInternal::Input::NativeInputUpdateType _get_IgnoreFocus();
    // Set static field: static public UnityEngineInternal.Input.NativeInputUpdateType IgnoreFocus
    static void _set_IgnoreFocus(::UnityEngineInternal::Input::NativeInputUpdateType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngineInternal.Input.NativeInputUpdateType
  #pragma pack(pop)
  static check_size<sizeof(NativeInputUpdateType), 0 + sizeof(int)> __UnityEngineInternal_Input_NativeInputUpdateTypeSizeCheck;
  static_assert(sizeof(NativeInputUpdateType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
