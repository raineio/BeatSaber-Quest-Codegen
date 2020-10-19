// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: AdvancingFront
  class AdvancingFront;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DTSweepBasin
  class DTSweepBasin;
  // Forward declaring type: DTSweepEdgeEvent
  class DTSweepEdgeEvent;
  // Forward declaring type: DTSweepPointComparator
  class DTSweepPointComparator;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: Triangulatable
  class Triangulatable;
  // Forward declaring type: TriangulationConstraint
  class TriangulationConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
  class DTSweepContext : public UnityEngine::ProBuilder::Poly2Tri::TriangulationContext {
    public:
    // private readonly System.Single ALPHA
    // Offset: 0x40
    float ALPHA;
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFront Front
    // Offset: 0x48
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* Front;
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Head>k__BackingField
    // Offset: 0x50
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Head;
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint <Tail>k__BackingField
    // Offset: 0x58
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Tail;
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin Basin
    // Offset: 0x60
    UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* Basin;
    // public UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent EdgeEvent
    // Offset: 0x68
    UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* EdgeEvent;
    // private UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator _comparator
    // Offset: 0x70
    UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* comparator;
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint get_Head()
    // Offset: 0x1F1A12C
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Head();
    // public System.Void set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x1F1A134
    void set_Head(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint get_Tail()
    // Offset: 0x1F1A13C
    UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Tail();
    // public System.Void set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x1F1A144
    void set_Tail(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public System.Void RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x1F16F6C
    void RemoveFromList(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // public System.Void MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x1F175F4
    void MeshClean(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // private System.Void MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle triangle)
    // Offset: 0x1F1A2F8
    void MeshCleanReq(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle);
    // public System.Void AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x1F177A0
    void AddNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // public System.Void RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x1F19AD8
    void RemoveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x1F175F8
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public System.Void CreateAdvancingFront()
    // Offset: 0x1F15BF8
    void CreateAdvancingFront();
    // public System.Void MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x1F16E8C
    void MapTriangleToNodes(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void FinalizeTriangulation()
    // Offset: 0x1F1722C
    void FinalizeTriangulation();
    // public System.Void .ctor()
    // Offset: 0x1F1A14C
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::.ctor()
    // Base method: System.Void Object::.ctor()
    static DTSweepContext* New_ctor();
    // public override System.Boolean get_IsDebugEnabled()
    // Offset: 0x1F1A2F0
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Boolean TriangulationContext::get_IsDebugEnabled()
    bool get_IsDebugEnabled();
    // public override System.Void Clear()
    // Offset: 0x1F1A428
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::Clear()
    void Clear();
    // public override System.Void PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable t)
    // Offset: 0x1F1A4FC
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: System.Void TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable t)
    void PrepareTriangulation(UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t);
    // public override UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b)
    // Offset: 0x1F1A8B0
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
    // Base method: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint a, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint b)
    UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b);
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepContext");
#pragma pack(pop)
