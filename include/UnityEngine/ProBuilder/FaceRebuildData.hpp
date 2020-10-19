// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.FaceRebuildData
  class FaceRebuildData : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Face face
    // Offset: 0x10
    UnityEngine::ProBuilder::Face* face;
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices;
    // public System.Collections.Generic.List`1<System.Int32> sharedIndexes
    // Offset: 0x20
    System::Collections::Generic::List_1<int>* sharedIndexes;
    // public System.Collections.Generic.List`1<System.Int32> sharedIndexesUV
    // Offset: 0x28
    System::Collections::Generic::List_1<int>* sharedIndexesUV;
    // private System.Int32 _appliedOffset
    // Offset: 0x30
    int appliedOffset;
    // public System.Int32 Offset()
    // Offset: 0x16E2BC8
    int Offset();
    // static public System.Void Apply(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.FaceRebuildData> newFaces, UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x16E2C6C
    static void Apply(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::FaceRebuildData*>* newFaces, UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Void Apply(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.FaceRebuildData> newFaces, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> sharedVertexLookup, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> sharedTextureLookup)
    // Offset: 0x16E2DCC
    static void Apply(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::FaceRebuildData*>* newFaces, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::Dictionary_2<int, int>* sharedVertexLookup, System::Collections::Generic::Dictionary_2<int, int>* sharedTextureLookup);
    // public override System.String ToString()
    // Offset: 0x16E2BD0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x16E32A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FaceRebuildData* New_ctor();
  }; // UnityEngine.ProBuilder.FaceRebuildData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::FaceRebuildData*, "UnityEngine.ProBuilder", "FaceRebuildData");
#pragma pack(pop)
