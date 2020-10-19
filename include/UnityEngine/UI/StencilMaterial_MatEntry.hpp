// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.StencilMaterial
#include "UnityEngine/UI/StencilMaterial.hpp"
// Including type: UnityEngine.Rendering.StencilOp
#include "UnityEngine/Rendering/StencilOp.hpp"
// Including type: UnityEngine.Rendering.CompareFunction
#include "UnityEngine/Rendering/CompareFunction.hpp"
// Including type: UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine/Rendering/ColorWriteMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.StencilMaterial/MatEntry
  class StencilMaterial::MatEntry : public ::Il2CppObject {
    public:
    // public UnityEngine.Material baseMat
    // Offset: 0x10
    UnityEngine::Material* baseMat;
    // public UnityEngine.Material customMat
    // Offset: 0x18
    UnityEngine::Material* customMat;
    // public System.Int32 count
    // Offset: 0x20
    int count;
    // public System.Int32 stencilId
    // Offset: 0x24
    int stencilId;
    // public UnityEngine.Rendering.StencilOp operation
    // Offset: 0x28
    UnityEngine::Rendering::StencilOp operation;
    // public UnityEngine.Rendering.CompareFunction compareFunction
    // Offset: 0x2C
    UnityEngine::Rendering::CompareFunction compareFunction;
    // public System.Int32 readMask
    // Offset: 0x30
    int readMask;
    // public System.Int32 writeMask
    // Offset: 0x34
    int writeMask;
    // public System.Boolean useAlphaClip
    // Offset: 0x38
    bool useAlphaClip;
    // public UnityEngine.Rendering.ColorWriteMask colorMask
    // Offset: 0x3C
    UnityEngine::Rendering::ColorWriteMask colorMask;
    // public System.Void .ctor()
    // Offset: 0x1F2ED5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static StencilMaterial::MatEntry* New_ctor();
  }; // UnityEngine.UI.StencilMaterial/MatEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::StencilMaterial::MatEntry*, "UnityEngine.UI", "StencilMaterial/MatEntry");
#pragma pack(pop)
