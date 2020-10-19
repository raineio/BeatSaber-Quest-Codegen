// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRCustomSkeleton
  class OVRCustomSkeleton : public GlobalNamespace::OVRSkeleton {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Transform> _customBones
    // Offset: 0x90
    System::Collections::Generic::List_1<UnityEngine::Transform*>* customBones;
    // public System.Collections.Generic.List`1<UnityEngine.Transform> get_CustomBones()
    // Offset: 0xF72AE4
    System::Collections::Generic::List_1<UnityEngine::Transform*>* get_CustomBones();
    // protected override System.Void InitializeBones(OVRPlugin/Skeleton skeleton)
    // Offset: 0xF72AEC
    // Implemented from: OVRSkeleton
    // Base method: System.Void OVRSkeleton::InitializeBones(OVRPlugin/Skeleton skeleton)
    void InitializeBones(GlobalNamespace::OVRPlugin::Skeleton skeleton);
    // public System.Void .ctor()
    // Offset: 0xF72CA8
    // Implemented from: OVRSkeleton
    // Base method: System.Void OVRSkeleton::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRCustomSkeleton* New_ctor();
  }; // OVRCustomSkeleton
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCustomSkeleton*, "", "OVRCustomSkeleton");
#pragma pack(pop)
