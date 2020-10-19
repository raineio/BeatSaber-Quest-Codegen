// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer/ISelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer_ISelectionPickerRenderer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPickerRenderer/SelectionPickerRendererStandard
  class SelectionPickerRenderer::SelectionPickerRendererStandard : public ::Il2CppObject, public UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer {
    public:
    // public UnityEngine.Texture2D RenderLookupTexture(UnityEngine.Camera camera, UnityEngine.Shader shader, System.String tag, System.Int32 width, System.Int32 height)
    // Offset: 0x138A6EC
    // Implemented from: UnityEngine.ProBuilder.SelectionPickerRenderer/ISelectionPickerRenderer
    // Base method: UnityEngine.Texture2D ISelectionPickerRenderer::RenderLookupTexture(UnityEngine.Camera camera, UnityEngine.Shader shader, System.String tag, System.Int32 width, System.Int32 height)
    UnityEngine::Texture2D* RenderLookupTexture(UnityEngine::Camera* camera, UnityEngine::Shader* shader, ::Il2CppString* tag, int width, int height);
    // public System.Void .ctor()
    // Offset: 0x1387F24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SelectionPickerRenderer::SelectionPickerRendererStandard* New_ctor();
  }; // UnityEngine.ProBuilder.SelectionPickerRenderer/SelectionPickerRendererStandard
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionPickerRenderer::SelectionPickerRendererStandard*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/SelectionPickerRendererStandard");
#pragma pack(pop)
