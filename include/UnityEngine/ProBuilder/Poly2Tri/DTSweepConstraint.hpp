// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationConstraint.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
  class DTSweepConstraint : public UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint {
    public:
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x1F19FC0
    static DTSweepConstraint* New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepConstraint");
#pragma pack(pop)
