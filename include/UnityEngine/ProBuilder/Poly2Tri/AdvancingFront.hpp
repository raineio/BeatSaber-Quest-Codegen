// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
  class AdvancingFront : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Head
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Head;
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Tail
    // Offset: 0x18
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Tail;
    // protected UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Search
    // Offset: 0x20
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Search;
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode head, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode tail)
    // Offset: 0x1F1581C
    static AdvancingFront* New_ctor(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* head, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* tail);
    // public System.Void AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x1F1587C
    void AddNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // public System.Void RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x1F15880
    void RemoveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode FindSearchNode(System.Double x)
    // Offset: 0x1F1596C
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* FindSearchNode(double x);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x1F15974
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocateNode(System.Double x)
    // Offset: 0x1F1598C
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(double x);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocatePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x1F15A08
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocatePoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public override System.String ToString()
    // Offset: 0x1F15884
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*, "UnityEngine.ProBuilder.Poly2Tri", "AdvancingFront");
#pragma pack(pop)
