// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SpriteRenderer
  class SpriteRenderer : public UnityEngine::Renderer {
    public:
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0x173724C
    void set_sprite(UnityEngine::Sprite* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x173729C
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1737348
    void set_color(UnityEngine::Color value);
    // private System.Void get_color_Injected(out UnityEngine.Color ret)
    // Offset: 0x17372F8
    void get_color_Injected(UnityEngine::Color& ret);
    // private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0x17373A0
    void set_color_Injected(UnityEngine::Color& value);
  }; // UnityEngine.SpriteRenderer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
#pragma pack(pop)
