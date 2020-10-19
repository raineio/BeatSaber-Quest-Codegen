// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshPath
  class NavMeshPath;
  // Forward declaring type: NavMeshHit
  struct NavMeshHit;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Autogenerated type: UnityEngine.AI.NavMesh
  class NavMesh : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::AI::NavMesh::OnNavMeshPreUpdate
    class OnNavMeshPreUpdate;
    // Get static field: static public UnityEngine.AI.NavMesh/OnNavMeshPreUpdate onPreUpdate
    static UnityEngine::AI::NavMesh::OnNavMeshPreUpdate* _get_onPreUpdate();
    // Set static field: static public UnityEngine.AI.NavMesh/OnNavMeshPreUpdate onPreUpdate
    static void _set_onPreUpdate(UnityEngine::AI::NavMesh::OnNavMeshPreUpdate* value);
    // static private System.Void Internal_CallOnNavMeshPreUpdate()
    // Offset: 0x1F7B094
    static void Internal_CallOnNavMeshPreUpdate();
    // static public System.Boolean CalculatePath(UnityEngine.Vector3 sourcePosition, UnityEngine.Vector3 targetPosition, System.Int32 areaMask, UnityEngine.AI.NavMeshPath path)
    // Offset: 0x1F7B300
    static bool CalculatePath(UnityEngine::Vector3 sourcePosition, UnityEngine::Vector3 targetPosition, int areaMask, UnityEngine::AI::NavMeshPath* path);
    // static private System.Boolean CalculatePathInternal(UnityEngine.Vector3 sourcePosition, UnityEngine.Vector3 targetPosition, System.Int32 areaMask, UnityEngine.AI.NavMeshPath path)
    // Offset: 0x1F7B3D0
    static bool CalculatePathInternal(UnityEngine::Vector3 sourcePosition, UnityEngine::Vector3 targetPosition, int areaMask, UnityEngine::AI::NavMeshPath* path);
    // static public System.Boolean SamplePosition(UnityEngine.Vector3 sourcePosition, out UnityEngine.AI.NavMeshHit hit, System.Single maxDistance, System.Int32 areaMask)
    // Offset: 0x1F7B4B0
    static bool SamplePosition(UnityEngine::Vector3 sourcePosition, UnityEngine::AI::NavMeshHit& hit, float maxDistance, int areaMask);
    // static private System.Boolean CalculatePathInternal_Injected(ref UnityEngine.Vector3 sourcePosition, ref UnityEngine.Vector3 targetPosition, System.Int32 areaMask, UnityEngine.AI.NavMeshPath path)
    // Offset: 0x1F7B448
    static bool CalculatePathInternal_Injected(UnityEngine::Vector3& sourcePosition, UnityEngine::Vector3& targetPosition, int areaMask, UnityEngine::AI::NavMeshPath* path);
    // static private System.Boolean SamplePosition_Injected(ref UnityEngine.Vector3 sourcePosition, out UnityEngine.AI.NavMeshHit hit, System.Single maxDistance, System.Int32 areaMask)
    // Offset: 0x1F7B52C
    static bool SamplePosition_Injected(UnityEngine::Vector3& sourcePosition, UnityEngine::AI::NavMeshHit& hit, float maxDistance, int areaMask);
  }; // UnityEngine.AI.NavMesh
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMesh*, "UnityEngine.AI", "NavMesh");
#pragma pack(pop)
