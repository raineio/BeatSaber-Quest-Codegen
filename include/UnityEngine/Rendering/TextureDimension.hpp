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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: TextureDimension
  struct TextureDimension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureDimension, "UnityEngine.Rendering", "TextureDimension");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.TextureDimension
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextureDimension/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TextureDimension
    constexpr TextureDimension(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public UnityEngine.Rendering.TextureDimension Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public UnityEngine.Rendering.TextureDimension Unknown
    static ::UnityEngine::Rendering::TextureDimension _get_Unknown();
    // Set static field: static public UnityEngine.Rendering.TextureDimension Unknown
    static void _set_Unknown(::UnityEngine::Rendering::TextureDimension value);
    // static field const value: static public UnityEngine.Rendering.TextureDimension None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.TextureDimension None
    static ::UnityEngine::Rendering::TextureDimension _get_None();
    // Set static field: static public UnityEngine.Rendering.TextureDimension None
    static void _set_None(::UnityEngine::Rendering::TextureDimension value);
    // static field const value: static public UnityEngine.Rendering.TextureDimension Any
    static constexpr const int Any = 1;
    // Get static field: static public UnityEngine.Rendering.TextureDimension Any
    static ::UnityEngine::Rendering::TextureDimension _get_Any();
    // Set static field: static public UnityEngine.Rendering.TextureDimension Any
    static void _set_Any(::UnityEngine::Rendering::TextureDimension value);
    // static field const value: static public UnityEngine.Rendering.TextureDimension Tex2D
    static constexpr const int Tex2D = 2;
    // Get static field: static public UnityEngine.Rendering.TextureDimension Tex2D
    static ::UnityEngine::Rendering::TextureDimension _get_Tex2D();
    // Set static field: static public UnityEngine.Rendering.TextureDimension Tex2D
    static void _set_Tex2D(::UnityEngine::Rendering::TextureDimension value);
    // static field const value: static public UnityEngine.Rendering.TextureDimension Tex3D
    static constexpr const int Tex3D = 3;
    // Get static field: static public UnityEngine.Rendering.TextureDimension Tex3D
    static ::UnityEngine::Rendering::TextureDimension _get_Tex3D();
    // Set static field: static public UnityEngine.Rendering.TextureDimension Tex3D
    static void _set_Tex3D(::UnityEngine::Rendering::TextureDimension value);
    // static field const value: static public UnityEngine.Rendering.TextureDimension Cube
    static constexpr const int Cube = 4;
    // Get static field: static public UnityEngine.Rendering.TextureDimension Cube
    static ::UnityEngine::Rendering::TextureDimension _get_Cube();
    // Set static field: static public UnityEngine.Rendering.TextureDimension Cube
    static void _set_Cube(::UnityEngine::Rendering::TextureDimension value);
    // static field const value: static public UnityEngine.Rendering.TextureDimension Tex2DArray
    static constexpr const int Tex2DArray = 5;
    // Get static field: static public UnityEngine.Rendering.TextureDimension Tex2DArray
    static ::UnityEngine::Rendering::TextureDimension _get_Tex2DArray();
    // Set static field: static public UnityEngine.Rendering.TextureDimension Tex2DArray
    static void _set_Tex2DArray(::UnityEngine::Rendering::TextureDimension value);
    // static field const value: static public UnityEngine.Rendering.TextureDimension CubeArray
    static constexpr const int CubeArray = 6;
    // Get static field: static public UnityEngine.Rendering.TextureDimension CubeArray
    static ::UnityEngine::Rendering::TextureDimension _get_CubeArray();
    // Set static field: static public UnityEngine.Rendering.TextureDimension CubeArray
    static void _set_CubeArray(::UnityEngine::Rendering::TextureDimension value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.TextureDimension
  #pragma pack(pop)
  static check_size<sizeof(TextureDimension), 0 + sizeof(int)> __UnityEngine_Rendering_TextureDimensionSizeCheck;
  static_assert(sizeof(TextureDimension) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
