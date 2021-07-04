// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
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
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPickerRenderer/ISelectionPickerRenderer
  class SelectionPickerRenderer::ISelectionPickerRenderer {
    public:
    // Creating value type constructor for type: ISelectionPickerRenderer
    ISelectionPickerRenderer() noexcept {}
    // public UnityEngine.Texture2D RenderLookupTexture(UnityEngine.Camera camera, UnityEngine.Shader shader, System.String tag, System.Int32 width, System.Int32 height)
    // Offset: 0xFFFFFFFF
    UnityEngine::Texture2D* RenderLookupTexture(UnityEngine::Camera* camera, UnityEngine::Shader* shader, ::Il2CppString* tag, int width, int height);
  }; // UnityEngine.ProBuilder.SelectionPickerRenderer/ISelectionPickerRenderer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/ISelectionPickerRenderer");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer::RenderLookupTexture
// Il2CppName: RenderLookupTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D* (UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer::*)(UnityEngine::Camera*, UnityEngine::Shader*, ::Il2CppString*, int, int)>(&UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer::RenderLookupTexture)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SelectionPickerRenderer::ISelectionPickerRenderer*), "RenderLookupTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Shader*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
