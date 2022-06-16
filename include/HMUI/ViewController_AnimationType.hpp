// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewController::AnimationType, "HMUI", "ViewController/AnimationType");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController/HMUI.AnimationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ViewController::AnimationType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AnimationType
    constexpr AnimationType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public HMUI.ViewController/HMUI.AnimationType None
    static constexpr const int None = 0;
    // Get static field: static public HMUI.ViewController/HMUI.AnimationType None
    static ::HMUI::ViewController::AnimationType _get_None();
    // Set static field: static public HMUI.ViewController/HMUI.AnimationType None
    static void _set_None(::HMUI::ViewController::AnimationType value);
    // static field const value: static public HMUI.ViewController/HMUI.AnimationType In
    static constexpr const int In = 1;
    // Get static field: static public HMUI.ViewController/HMUI.AnimationType In
    static ::HMUI::ViewController::AnimationType _get_In();
    // Set static field: static public HMUI.ViewController/HMUI.AnimationType In
    static void _set_In(::HMUI::ViewController::AnimationType value);
    // static field const value: static public HMUI.ViewController/HMUI.AnimationType Out
    static constexpr const int Out = 2;
    // Get static field: static public HMUI.ViewController/HMUI.AnimationType Out
    static ::HMUI::ViewController::AnimationType _get_Out();
    // Set static field: static public HMUI.ViewController/HMUI.AnimationType Out
    static void _set_Out(::HMUI::ViewController::AnimationType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HMUI.ViewController/HMUI.AnimationType
  #pragma pack(pop)
  static check_size<sizeof(ViewController::AnimationType), 0 + sizeof(int)> __HMUI_ViewController_AnimationTypeSizeCheck;
  static_assert(sizeof(ViewController::AnimationType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
