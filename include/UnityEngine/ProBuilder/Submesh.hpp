// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MeshTopology
#include "UnityEngine/MeshTopology.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Submesh
  class Submesh : public ::Il2CppObject {
    public:
    // System.Int32[] m_Indexes
    // Offset: 0x10
    ::Array<int>* m_Indexes;
    // UnityEngine.MeshTopology m_Topology
    // Offset: 0x18
    UnityEngine::MeshTopology m_Topology;
    // System.Int32 m_SubmeshIndex
    // Offset: 0x1C
    int m_SubmeshIndex;
    // public System.Collections.Generic.IEnumerable`1<System.Int32> get_indexes()
    // Offset: 0x1E77914
    System::Collections::Generic::IEnumerable_1<int>* get_indexes();
    // public System.Void set_indexes(System.Collections.Generic.IEnumerable`1<System.Int32> value)
    // Offset: 0x1E77984
    void set_indexes(System::Collections::Generic::IEnumerable_1<int>* value);
    // public UnityEngine.MeshTopology get_topology()
    // Offset: 0x1E779F0
    UnityEngine::MeshTopology get_topology();
    // public System.Void set_topology(UnityEngine.MeshTopology value)
    // Offset: 0x1E779F8
    void set_topology(UnityEngine::MeshTopology value);
    // public System.Int32 get_submeshIndex()
    // Offset: 0x1E77A00
    int get_submeshIndex();
    // public System.Void set_submeshIndex(System.Int32 value)
    // Offset: 0x1E77A08
    void set_submeshIndex(int value);
    // public System.Void .ctor(System.Int32 submeshIndex, UnityEngine.MeshTopology topology, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x1E77A10
    static Submesh* New_ctor(int submeshIndex, UnityEngine::MeshTopology topology, System::Collections::Generic::IEnumerable_1<int>* indexes);
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 subMeshIndex)
    // Offset: 0x1E77AE0
    static Submesh* New_ctor(UnityEngine::Mesh* mesh, int subMeshIndex);
    // static System.Int32 GetSubmeshCount(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1E77CEC
    static int GetSubmeshCount(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public UnityEngine.ProBuilder.Submesh[] GetSubmeshes(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Int32 submeshCount, UnityEngine.MeshTopology preferredTopology)
    // Offset: 0x1E77D70
    static ::Array<UnityEngine::ProBuilder::Submesh*>* GetSubmeshes(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, int submeshCount, UnityEngine::MeshTopology preferredTopology);
    // static System.Void MapFaceMaterialsToSubmeshIndex(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1E78720
    static void MapFaceMaterialsToSubmeshIndex(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // public override System.String ToString()
    // Offset: 0x1E77BE8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Submesh
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Submesh*, "UnityEngine.ProBuilder", "Submesh");
#pragma pack(pop)
