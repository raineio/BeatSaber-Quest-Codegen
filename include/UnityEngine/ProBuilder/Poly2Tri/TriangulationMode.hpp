// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct TriangulationMode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TriangulationMode
    constexpr TriangulationMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Unconstrained
    static constexpr const int Unconstrained = 0;
    // Get static field: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Unconstrained
    static UnityEngine::ProBuilder::Poly2Tri::TriangulationMode _get_Unconstrained();
    // Set static field: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Unconstrained
    static void _set_Unconstrained(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value);
    // static field const value: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Constrained
    static constexpr const int Constrained = 1;
    // Get static field: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Constrained
    static UnityEngine::ProBuilder::Poly2Tri::TriangulationMode _get_Constrained();
    // Set static field: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Constrained
    static void _set_Constrained(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value);
    // static field const value: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Polygon
    static constexpr const int Polygon = 2;
    // Get static field: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Polygon
    static UnityEngine::ProBuilder::Poly2Tri::TriangulationMode _get_Polygon();
    // Set static field: static public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode Polygon
    static void _set_Polygon(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationMode
  #pragma pack(pop)
  static check_size<sizeof(TriangulationMode), 0 + sizeof(int)> __UnityEngine_ProBuilder_Poly2Tri_TriangulationModeSizeCheck;
  static_assert(sizeof(TriangulationMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
