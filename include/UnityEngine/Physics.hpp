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
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: PhysicsScene
  struct PhysicsScene;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: QueryTriggerInteraction
  struct QueryTriggerInteraction;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Physics
  class Physics : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector3 get_gravity()
    // Offset: 0x1F605C4
    static UnityEngine::Vector3 get_gravity();
    // static public UnityEngine.PhysicsScene get_defaultPhysicsScene()
    // Offset: 0x1F6065C
    static UnityEngine::PhysicsScene get_defaultPhysicsScene();
    // static public System.Void IgnoreCollision(UnityEngine.Collider collider1, UnityEngine.Collider collider2, System.Boolean ignore)
    // Offset: 0x1F606E4
    static void IgnoreCollision(UnityEngine::Collider* collider1, UnityEngine::Collider* collider2, bool ignore);
    // static public System.Void IgnoreCollision(UnityEngine.Collider collider1, UnityEngine.Collider collider2)
    // Offset: 0x1F6073C
    static void IgnoreCollision(UnityEngine::Collider* collider1, UnityEngine::Collider* collider2);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F60790
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F609DC
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
    // Offset: 0x1F60AA4
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
    // Offset: 0x1F60B68
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F60C24
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F60E94
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
    // Offset: 0x1F60F6C
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo)
    // Offset: 0x1F61038
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F610FC
    static bool Raycast(UnityEngine::Ray ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F611D0
    static bool Raycast(UnityEngine::Ray ray, float maxDistance, int layerMask);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance)
    // Offset: 0x1F612A0
    static bool Raycast(UnityEngine::Ray ray, float maxDistance);
    // static public System.Boolean Raycast(UnityEngine.Ray ray)
    // Offset: 0x1F61364
    static bool Raycast(UnityEngine::Ray ray);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F61428
    static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F6150C
    static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
    // Offset: 0x1F61594
    static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo)
    // Offset: 0x1F61668
    static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo);
    // static public System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F6173C
    static bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F6183C
    static bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // static public System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F6185C
    static bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F6193C
    static bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // static private UnityEngine.RaycastHit[] Internal_RaycastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F61944
    static ::Array<UnityEngine::RaycastHit>* Internal_RaycastAll(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F61A30
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F61BDC
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
    // Offset: 0x1F61BE4
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
    // Offset: 0x1F61BF0
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F61C04
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F61C88
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance, int layerMask);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance)
    // Offset: 0x1F61D00
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray)
    // Offset: 0x1F61D74
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F61DE8
    static int RaycastNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* results, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F61FD8
    static int RaycastNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* results, float maxDistance, int layerMask);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance)
    // Offset: 0x1F620AC
    static int RaycastNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* results, float maxDistance);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results)
    // Offset: 0x1F6217C
    static int RaycastNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* results);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F6224C
    static int RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* results, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F62324
    static int RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* results, float maxDistance, int layerMask);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance)
    // Offset: 0x1F623F8
    static int RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* results, float maxDistance);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results)
    // Offset: 0x1F624C0
    static int RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* results);
    // static private UnityEngine.RaycastHit[] Query_SphereCastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F62580
    static ::Array<UnityEngine::RaycastHit>* Query_SphereCastAll(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F6269C
    static ::Array<UnityEngine::RaycastHit>* SphereCastAll(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F62810
    static ::Array<UnityEngine::RaycastHit>* SphereCastAll(UnityEngine::Ray ray, float radius, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1F628A4
    static ::Array<UnityEngine::RaycastHit>* SphereCastAll(UnityEngine::Ray ray, float radius, float maxDistance, int layerMask);
    // static public System.Int32 OverlapBoxNonAlloc(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F628D8
    static int OverlapBoxNonAlloc(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Int32 OverlapBoxNonAlloc(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask)
    // Offset: 0x1F629C0
    static int OverlapBoxNonAlloc(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int mask);
    // static private System.Void get_gravity_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x1F6061C
    static void get_gravity_Injected(UnityEngine::Vector3& ret);
    // static private System.Void get_defaultPhysicsScene_Injected(out UnityEngine.PhysicsScene ret)
    // Offset: 0x1F606A4
    static void get_defaultPhysicsScene_Injected(UnityEngine::PhysicsScene& ret);
    // static private UnityEngine.RaycastHit[] Internal_RaycastAll_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F619B8
    static ::Array<UnityEngine::RaycastHit>* Internal_RaycastAll_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private UnityEngine.RaycastHit[] Query_SphereCastAll_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Vector3 origin, System.Single radius, ref UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1F62614
    static ::Array<UnityEngine::RaycastHit>* Query_SphereCastAll_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& origin, float radius, UnityEngine::Vector3& direction, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
  }; // UnityEngine.Physics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Physics*, "UnityEngine", "Physics");
#pragma pack(pop)
