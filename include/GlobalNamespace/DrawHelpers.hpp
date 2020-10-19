// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DrawHelpers
  class DrawHelpers : public ::Il2CppObject {
    public:
    // static public System.Void DrawTexture(UnityEngine.Texture texture, System.Single x, System.Single y, System.Single w, System.Single h, UnityEngine.Material mat, System.Single sx, System.Single sy, System.Single sw, System.Single sh)
    // Offset: 0x210B118
    static void DrawTexture(UnityEngine::Texture* texture, float x, float y, float w, float h, UnityEngine::Material* mat, float sx, float sy, float sw, float sh);
    // public System.Void .ctor()
    // Offset: 0x210B2C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DrawHelpers* New_ctor();
  }; // DrawHelpers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DrawHelpers*, "", "DrawHelpers");
#pragma pack(pop)
