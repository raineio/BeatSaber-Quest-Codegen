// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.BaseMeshEffect
#include "UnityEngine/UI/BaseMeshEffect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.PositionAsUV1
  class PositionAsUV1 : public UnityEngine::UI::BaseMeshEffect {
    public:
    // protected System.Void .ctor()
    // Offset: 0x15E2E7C
    // Implemented from: UnityEngine.UI.BaseMeshEffect
    // Base method: System.Void BaseMeshEffect::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PositionAsUV1* New_ctor();
    // public override System.Void ModifyMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x15E2E84
    // Implemented from: UnityEngine.UI.BaseMeshEffect
    // Base method: System.Void BaseMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper vh)
    void ModifyMesh(UnityEngine::UI::VertexHelper* vh);
  }; // UnityEngine.UI.PositionAsUV1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::PositionAsUV1*, "UnityEngine.UI", "PositionAsUV1");
#pragma pack(pop)
