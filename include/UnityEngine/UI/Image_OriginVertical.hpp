// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Image/UnityEngine.UI.OriginVertical
  // [TokenAttribute] Offset: FFFFFFFF
  struct Image::OriginVertical/*, public System::Enum*/ {
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
    // Creating value type constructor for type: OriginVertical
    constexpr OriginVertical(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UI.Image/UnityEngine.UI.OriginVertical Bottom
    static constexpr const int Bottom = 0;
    // Get static field: static public UnityEngine.UI.Image/UnityEngine.UI.OriginVertical Bottom
    static UnityEngine::UI::Image::OriginVertical _get_Bottom();
    // Set static field: static public UnityEngine.UI.Image/UnityEngine.UI.OriginVertical Bottom
    static void _set_Bottom(UnityEngine::UI::Image::OriginVertical value);
    // static field const value: static public UnityEngine.UI.Image/UnityEngine.UI.OriginVertical Top
    static constexpr const int Top = 1;
    // Get static field: static public UnityEngine.UI.Image/UnityEngine.UI.OriginVertical Top
    static UnityEngine::UI::Image::OriginVertical _get_Top();
    // Set static field: static public UnityEngine.UI.Image/UnityEngine.UI.OriginVertical Top
    static void _set_Top(UnityEngine::UI::Image::OriginVertical value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.UI.Image/UnityEngine.UI.OriginVertical
  #pragma pack(pop)
  static check_size<sizeof(Image::OriginVertical), 0 + sizeof(int)> __UnityEngine_UI_Image_OriginVerticalSizeCheck;
  static_assert(sizeof(Image::OriginVertical) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Image::OriginVertical, "UnityEngine.UI", "Image/OriginVertical");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
