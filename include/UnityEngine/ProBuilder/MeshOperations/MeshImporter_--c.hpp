// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshImporter
#include "UnityEngine/ProBuilder/MeshOperations/MeshImporter.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshImporter/<>c
  class MeshImporter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.MeshImporter/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.MeshImporter/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__9_0
    static System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* _get_$$9__9_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__9_0
    static void _set_$$9__9_0(System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* value);
    // static private System.Void .cctor()
    // Offset: 0x134C854
    static void _cctor();
    // UnityEngine.Vector3 <Import>b__9_0(UnityEngine.ProBuilder.Vertex x)
    // Offset: 0x134C8C4
    UnityEngine::Vector3 $Import$b__9_0(UnityEngine::ProBuilder::Vertex* x);
    // public System.Void .ctor()
    // Offset: 0x134C8BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MeshImporter::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshImporter/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter/<>c");
#pragma pack(pop)
