// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
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
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ProBuilderMesh/<>c
  class ProBuilderMesh::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.ProBuilderMesh/<>c <>9
    static UnityEngine::ProBuilder::ProBuilderMesh::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.ProBuilderMesh/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::ProBuilderMesh::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector4,UnityEngine.Vector2> <>9__102_0
    static System::Func_2<UnityEngine::Vector4, UnityEngine::Vector2>* _get_$$9__102_0();
    // Set static field: static public System.Func`2<UnityEngine.Vector4,UnityEngine.Vector2> <>9__102_0
    static void _set_$$9__102_0(System::Func_2<UnityEngine::Vector4, UnityEngine::Vector2>* value);
    // Get static field: static public System.Func`2<UnityEngine.Vector4,UnityEngine.Vector2> <>9__102_1
    static System::Func_2<UnityEngine::Vector4, UnityEngine::Vector2>* _get_$$9__102_1();
    // Set static field: static public System.Func`2<UnityEngine.Vector4,UnityEngine.Vector2> <>9__102_1
    static void _set_$$9__102_1(System::Func_2<UnityEngine::Vector4, UnityEngine::Vector2>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__110_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__110_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__110_0
    static void _set_$$9__110_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__112_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__112_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__112_0
    static void _set_$$9__112_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,UnityEngine.ProBuilder.Face> <>9__147_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Face*>* _get_$$9__147_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,UnityEngine.ProBuilder.Face> <>9__147_0
    static void _set_$$9__147_0(System::Func_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Face*>* value);
    // static private System.Void .cctor()
    // Offset: 0x13804D0
    static void _cctor();
    // UnityEngine.Vector2 <SetUVs>b__102_0(UnityEngine.Vector4 x)
    // Offset: 0x1380540
    UnityEngine::Vector2 $SetUVs$b__102_0(UnityEngine::Vector4 x);
    // UnityEngine.Vector2 <SetUVs>b__102_1(UnityEngine.Vector4 x)
    // Offset: 0x13805D0
    UnityEngine::Vector2 $SetUVs$b__102_1(UnityEngine::Vector4 x);
    // System.Int32 <get_indexCount>b__110_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x1380660
    int $get_indexCount$b__110_0(UnityEngine::ProBuilder::Face* x);
    // System.Int32 <get_triangleCount>b__112_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x1380684
    int $get_triangleCount$b__112_0(UnityEngine::ProBuilder::Face* x);
    // UnityEngine.ProBuilder.Face <CopyFrom>b__147_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x13806A8
    UnityEngine::ProBuilder::Face* $CopyFrom$b__147_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x1380538
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ProBuilderMesh::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.ProBuilderMesh/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProBuilderMesh::$$c*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c");
#pragma pack(pop)
