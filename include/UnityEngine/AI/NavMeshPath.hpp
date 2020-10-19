// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: UnityEngine::AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshPathStatus
  struct NavMeshPathStatus;
}
// Completed forward declares
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Autogenerated type: UnityEngine.AI.NavMeshPath
  class NavMeshPath : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // UnityEngine.Vector3[] m_Corners
    // Offset: 0x18
    ::Array<UnityEngine::Vector3>* m_Corners;
    // static private System.IntPtr InitializeNavMeshPath()
    // Offset: 0x1F7B638
    static System::IntPtr InitializeNavMeshPath();
    // static private System.Void DestroyNavMeshPath(System.IntPtr ptr)
    // Offset: 0x1F7B730
    static void DestroyNavMeshPath(System::IntPtr ptr);
    // private UnityEngine.Vector3[] CalculateCornersInternal()
    // Offset: 0x1F7B770
    ::Array<UnityEngine::Vector3>* CalculateCornersInternal();
    // private System.Void ClearCornersInternal()
    // Offset: 0x1F7B7B0
    void ClearCornersInternal();
    // public System.Void ClearCorners()
    // Offset: 0x1F7B380
    void ClearCorners();
    // private System.Void CalculateCorners()
    // Offset: 0x1F7B7F0
    void CalculateCorners();
    // public UnityEngine.Vector3[] get_corners()
    // Offset: 0x1F7B864
    ::Array<UnityEngine::Vector3>* get_corners();
    // public UnityEngine.AI.NavMeshPathStatus get_status()
    // Offset: 0x1F7B888
    UnityEngine::AI::NavMeshPathStatus get_status();
    // public System.Void .ctor()
    // Offset: 0x1F7B5EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NavMeshPath* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x1F7B66C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AI.NavMeshPath
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMeshPath*, "UnityEngine.AI", "NavMeshPath");
#pragma pack(pop)
