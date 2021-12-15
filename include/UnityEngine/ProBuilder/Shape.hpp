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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Shape
  struct Shape;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shape, "UnityEngine.ProBuilder", "Shape");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Shape
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: F67EB8
  struct Shape/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Shape
    constexpr Shape(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.Shape Cube
    static constexpr const int Cube = 0;
    // Get static field: static public UnityEngine.ProBuilder.Shape Cube
    static UnityEngine::ProBuilder::Shape _get_Cube();
    // Set static field: static public UnityEngine.ProBuilder.Shape Cube
    static void _set_Cube(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Stair
    static constexpr const int Stair = 1;
    // Get static field: static public UnityEngine.ProBuilder.Shape Stair
    static UnityEngine::ProBuilder::Shape _get_Stair();
    // Set static field: static public UnityEngine.ProBuilder.Shape Stair
    static void _set_Stair(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Prism
    static constexpr const int Prism = 2;
    // Get static field: static public UnityEngine.ProBuilder.Shape Prism
    static UnityEngine::ProBuilder::Shape _get_Prism();
    // Set static field: static public UnityEngine.ProBuilder.Shape Prism
    static void _set_Prism(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Cylinder
    static constexpr const int Cylinder = 3;
    // Get static field: static public UnityEngine.ProBuilder.Shape Cylinder
    static UnityEngine::ProBuilder::Shape _get_Cylinder();
    // Set static field: static public UnityEngine.ProBuilder.Shape Cylinder
    static void _set_Cylinder(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Plane
    static constexpr const int Plane = 4;
    // Get static field: static public UnityEngine.ProBuilder.Shape Plane
    static UnityEngine::ProBuilder::Shape _get_Plane();
    // Set static field: static public UnityEngine.ProBuilder.Shape Plane
    static void _set_Plane(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Door
    static constexpr const int Door = 5;
    // Get static field: static public UnityEngine.ProBuilder.Shape Door
    static UnityEngine::ProBuilder::Shape _get_Door();
    // Set static field: static public UnityEngine.ProBuilder.Shape Door
    static void _set_Door(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Pipe
    static constexpr const int Pipe = 6;
    // Get static field: static public UnityEngine.ProBuilder.Shape Pipe
    static UnityEngine::ProBuilder::Shape _get_Pipe();
    // Set static field: static public UnityEngine.ProBuilder.Shape Pipe
    static void _set_Pipe(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Cone
    static constexpr const int Cone = 7;
    // Get static field: static public UnityEngine.ProBuilder.Shape Cone
    static UnityEngine::ProBuilder::Shape _get_Cone();
    // Set static field: static public UnityEngine.ProBuilder.Shape Cone
    static void _set_Cone(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Sprite
    static constexpr const int Sprite = 8;
    // Get static field: static public UnityEngine.ProBuilder.Shape Sprite
    static UnityEngine::ProBuilder::Shape _get_Sprite();
    // Set static field: static public UnityEngine.ProBuilder.Shape Sprite
    static void _set_Sprite(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Arch
    static constexpr const int Arch = 9;
    // Get static field: static public UnityEngine.ProBuilder.Shape Arch
    static UnityEngine::ProBuilder::Shape _get_Arch();
    // Set static field: static public UnityEngine.ProBuilder.Shape Arch
    static void _set_Arch(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Icosahedron
    static constexpr const int Icosahedron = 10;
    // Get static field: static public UnityEngine.ProBuilder.Shape Icosahedron
    static UnityEngine::ProBuilder::Shape _get_Icosahedron();
    // Set static field: static public UnityEngine.ProBuilder.Shape Icosahedron
    static void _set_Icosahedron(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Torus
    static constexpr const int Torus = 11;
    // Get static field: static public UnityEngine.ProBuilder.Shape Torus
    static UnityEngine::ProBuilder::Shape _get_Torus();
    // Set static field: static public UnityEngine.ProBuilder.Shape Torus
    static void _set_Torus(UnityEngine::ProBuilder::Shape value);
    // static field const value: static public UnityEngine.ProBuilder.Shape Custom
    static constexpr const int Custom = 12;
    // Get static field: static public UnityEngine.ProBuilder.Shape Custom
    static UnityEngine::ProBuilder::Shape _get_Custom();
    // Set static field: static public UnityEngine.ProBuilder.Shape Custom
    static void _set_Custom(UnityEngine::ProBuilder::Shape value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.Shape
  #pragma pack(pop)
  static check_size<sizeof(Shape), 0 + sizeof(int)> __UnityEngine_ProBuilder_ShapeSizeCheck;
  static_assert(sizeof(Shape) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
