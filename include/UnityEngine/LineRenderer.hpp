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
  // Forward declaring type: Color
  struct Color;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.LineRenderer
  class LineRenderer : public UnityEngine::Renderer {
    public:
    // public System.Void set_startWidth(System.Single value)
    // Offset: 0x1797E14
    void set_startWidth(float value);
    // public System.Void set_endWidth(System.Single value)
    // Offset: 0x1797E64
    void set_endWidth(float value);
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0x1797EB4
    void set_useWorldSpace(bool value);
    // public System.Void set_startColor(UnityEngine.Color value)
    // Offset: 0x1797F04
    void set_startColor(UnityEngine::Color value);
    // public System.Void set_endColor(UnityEngine.Color value)
    // Offset: 0x1797FAC
    void set_endColor(UnityEngine::Color value);
    // public System.Void set_positionCount(System.Int32 value)
    // Offset: 0x1798054
    void set_positionCount(int value);
    // public System.Void SetPosition(System.Int32 index, UnityEngine.Vector3 position)
    // Offset: 0x17980A4
    void SetPosition(int index, UnityEngine::Vector3 position);
    // public System.Void SetPositions(UnityEngine.Vector3[] positions)
    // Offset: 0x1798164
    void SetPositions(::Array<UnityEngine::Vector3>* positions);
    // private System.Void set_startColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1797F5C
    void set_startColor_Injected(UnityEngine::Color& value);
    // private System.Void set_endColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1798004
    void set_endColor_Injected(UnityEngine::Color& value);
    // private System.Void SetPosition_Injected(System.Int32 index, ref UnityEngine.Vector3 position)
    // Offset: 0x179810C
    void SetPosition_Injected(int index, UnityEngine::Vector3& position);
  }; // UnityEngine.LineRenderer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
#pragma pack(pop)
