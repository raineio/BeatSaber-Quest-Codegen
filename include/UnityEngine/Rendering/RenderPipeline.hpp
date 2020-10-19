// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.RenderPipeline
  class RenderPipeline : public ::Il2CppObject {
    public:
    // private System.Boolean <disposed>k__BackingField
    // Offset: 0x10
    bool disposed;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return disposed;
    }
    // protected System.Void Render(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0xFFFFFFFF
    void Render(UnityEngine::Rendering::ScriptableRenderContext context, ::Array<UnityEngine::Camera*>* cameras);
    // System.Void InternalRender(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0x1731864
    void InternalRender(UnityEngine::Rendering::ScriptableRenderContext context, ::Array<UnityEngine::Camera*>* cameras);
    // public System.Boolean get_disposed()
    // Offset: 0x1731924
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x173192C
    void set_disposed(bool value);
    // System.Void Dispose()
    // Offset: 0x1731938
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x17319C0
    void Dispose(bool disposing);
  }; // UnityEngine.Rendering.RenderPipeline
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipeline*, "UnityEngine.Rendering", "RenderPipeline");
#pragma pack(pop)
