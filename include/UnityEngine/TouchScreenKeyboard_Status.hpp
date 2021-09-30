// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TouchScreenKeyboard
#include "UnityEngine/TouchScreenKeyboard.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TouchScreenKeyboard/UnityEngine.Status
  // [TokenAttribute] Offset: FFFFFFFF
  struct TouchScreenKeyboard::Status/*, public System::Enum*/ {
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
    // Creating value type constructor for type: Status
    constexpr Status(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Visible
    static constexpr const int Visible = 0;
    // Get static field: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Visible
    static UnityEngine::TouchScreenKeyboard::Status _get_Visible();
    // Set static field: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Visible
    static void _set_Visible(UnityEngine::TouchScreenKeyboard::Status value);
    // static field const value: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Done
    static constexpr const int Done = 1;
    // Get static field: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Done
    static UnityEngine::TouchScreenKeyboard::Status _get_Done();
    // Set static field: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Done
    static void _set_Done(UnityEngine::TouchScreenKeyboard::Status value);
    // static field const value: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Canceled
    static constexpr const int Canceled = 2;
    // Get static field: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Canceled
    static UnityEngine::TouchScreenKeyboard::Status _get_Canceled();
    // Set static field: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status Canceled
    static void _set_Canceled(UnityEngine::TouchScreenKeyboard::Status value);
    // static field const value: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status LostFocus
    static constexpr const int LostFocus = 3;
    // Get static field: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status LostFocus
    static UnityEngine::TouchScreenKeyboard::Status _get_LostFocus();
    // Set static field: static public UnityEngine.TouchScreenKeyboard/UnityEngine.Status LostFocus
    static void _set_LostFocus(UnityEngine::TouchScreenKeyboard::Status value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.TouchScreenKeyboard/UnityEngine.Status
  #pragma pack(pop)
  static check_size<sizeof(TouchScreenKeyboard::Status), 0 + sizeof(int)> __UnityEngine_TouchScreenKeyboard_StatusSizeCheck;
  static_assert(sizeof(TouchScreenKeyboard::Status) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TouchScreenKeyboard::Status, "UnityEngine", "TouchScreenKeyboard/Status");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
