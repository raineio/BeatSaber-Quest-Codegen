// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.OVRPhysicsRaycaster
#include "UnityEngine/EventSystems/OVRPhysicsRaycaster.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
  class OVRPhysicsRaycaster::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c <>9
    static UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c <>9
    static void _set_$$9(UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.RaycastHit> <>9__15_0
    static System::Comparison_1<UnityEngine::RaycastHit>* _get_$$9__15_0();
    // Set static field: static public System.Comparison`1<UnityEngine.RaycastHit> <>9__15_0
    static void _set_$$9__15_0(System::Comparison_1<UnityEngine::RaycastHit>* value);
    // Get static field: static public System.Comparison`1<UnityEngine.RaycastHit> <>9__16_0
    static System::Comparison_1<UnityEngine::RaycastHit>* _get_$$9__16_0();
    // Set static field: static public System.Comparison`1<UnityEngine.RaycastHit> <>9__16_0
    static void _set_$$9__16_0(System::Comparison_1<UnityEngine::RaycastHit>* value);
    // static private System.Void .cctor()
    // Offset: 0x1EDE7D4
    static void _cctor();
    // System.Int32 <Raycast>b__15_0(UnityEngine.RaycastHit r1, UnityEngine.RaycastHit r2)
    // Offset: 0x1EDE844
    int $Raycast$b__15_0(UnityEngine::RaycastHit r1, UnityEngine::RaycastHit r2);
    // System.Int32 <Spherecast>b__16_0(UnityEngine.RaycastHit r1, UnityEngine.RaycastHit r2)
    // Offset: 0x1EDE888
    int $Spherecast$b__16_0(UnityEngine::RaycastHit r1, UnityEngine::RaycastHit r2);
    // public System.Void .ctor()
    // Offset: 0x1EDE83C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRPhysicsRaycaster::$$c* New_ctor();
  }; // UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c*, "UnityEngine.EventSystems", "OVRPhysicsRaycaster/<>c");
#pragma pack(pop)
