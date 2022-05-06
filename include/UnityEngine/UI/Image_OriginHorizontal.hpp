// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image::OriginHorizontal, "UnityEngine.UI", "Image/OriginHorizontal");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Image/UnityEngine.UI.OriginHorizontal
  // [TokenAttribute] Offset: FFFFFFFF
  struct Image::OriginHorizontal/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OriginHorizontal
    constexpr OriginHorizontal(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UI.Image/UnityEngine.UI.OriginHorizontal Left
    static constexpr const int Left = 0;
    // Get static field: static public UnityEngine.UI.Image/UnityEngine.UI.OriginHorizontal Left
    static ::UnityEngine::UI::Image::OriginHorizontal _get_Left();
    // Set static field: static public UnityEngine.UI.Image/UnityEngine.UI.OriginHorizontal Left
    static void _set_Left(::UnityEngine::UI::Image::OriginHorizontal value);
    // static field const value: static public UnityEngine.UI.Image/UnityEngine.UI.OriginHorizontal Right
    static constexpr const int Right = 1;
    // Get static field: static public UnityEngine.UI.Image/UnityEngine.UI.OriginHorizontal Right
    static ::UnityEngine::UI::Image::OriginHorizontal _get_Right();
    // Set static field: static public UnityEngine.UI.Image/UnityEngine.UI.OriginHorizontal Right
    static void _set_Right(::UnityEngine::UI::Image::OriginHorizontal value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UI.Image/UnityEngine.UI.OriginHorizontal
  #pragma pack(pop)
  static check_size<sizeof(Image::OriginHorizontal), 0 + sizeof(int)> __UnityEngine_UI_Image_OriginHorizontalSizeCheck;
  static_assert(sizeof(Image::OriginHorizontal) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
