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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: DetailRenderMode
  struct DetailRenderMode;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DetailRenderMode, "UnityEngine", "DetailRenderMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.DetailRenderMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct DetailRenderMode/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DetailRenderMode
    constexpr DetailRenderMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.DetailRenderMode GrassBillboard
    static constexpr const int GrassBillboard = 0;
    // Get static field: static public UnityEngine.DetailRenderMode GrassBillboard
    static UnityEngine::DetailRenderMode _get_GrassBillboard();
    // Set static field: static public UnityEngine.DetailRenderMode GrassBillboard
    static void _set_GrassBillboard(UnityEngine::DetailRenderMode value);
    // static field const value: static public UnityEngine.DetailRenderMode VertexLit
    static constexpr const int VertexLit = 1;
    // Get static field: static public UnityEngine.DetailRenderMode VertexLit
    static UnityEngine::DetailRenderMode _get_VertexLit();
    // Set static field: static public UnityEngine.DetailRenderMode VertexLit
    static void _set_VertexLit(UnityEngine::DetailRenderMode value);
    // static field const value: static public UnityEngine.DetailRenderMode Grass
    static constexpr const int Grass = 2;
    // Get static field: static public UnityEngine.DetailRenderMode Grass
    static UnityEngine::DetailRenderMode _get_Grass();
    // Set static field: static public UnityEngine.DetailRenderMode Grass
    static void _set_Grass(UnityEngine::DetailRenderMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.DetailRenderMode
  #pragma pack(pop)
  static check_size<sizeof(DetailRenderMode), 0 + sizeof(int)> __UnityEngine_DetailRenderModeSizeCheck;
  static_assert(sizeof(DetailRenderMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
