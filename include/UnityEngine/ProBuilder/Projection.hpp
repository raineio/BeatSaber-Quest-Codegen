// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: AutoUnwrapSettings
  struct AutoUnwrapSettings;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: SortMethod
  struct SortMethod;
  // Forward declaring type: ProjectionAxis
  struct ProjectionAxis;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Projection
  class Projection : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::Projection::$$c
    class $$c;
    // Creating value type constructor for type: Projection
    Projection() noexcept {}
    // static public UnityEngine.Vector2[] PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x14E31E4
    static ::Array<UnityEngine::Vector2>* PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector2[] PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Vector3 direction)
    // Offset: 0x14E3B3C
    static ::Array<UnityEngine::Vector2>* PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::Vector3 direction);
    // static System.Void PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Vector3 direction, System.Collections.Generic.List`1<UnityEngine.Vector2> results)
    // Offset: 0x14E3CDC
    static void PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::Vector3 direction, System::Collections::Generic::List_1<UnityEngine::Vector2>* results);
    // static System.Void PlanarProject(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 textureGroup, UnityEngine.ProBuilder.AutoUnwrapSettings unwrapSettings)
    // Offset: 0x14E4550
    static void PlanarProject(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int textureGroup, UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);
    // static System.Void PlanarProject(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face, UnityEngine.Vector3 projection)
    // Offset: 0x14E497C
    static void PlanarProject(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face, UnityEngine::Vector3 projection);
    // static UnityEngine.Vector2[] SphericalProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> vertices, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x14E4CCC
    static ::Array<UnityEngine::Vector2>* SphericalProject(System::Collections::Generic::IList_1<UnityEngine::Vector3>* vertices, System::Collections::Generic::IList_1<int>* indexes);
    // static System.Collections.Generic.IList`1<UnityEngine.Vector2> Sort(System.Collections.Generic.IList`1<UnityEngine.Vector2> verts, UnityEngine.ProBuilder.SortMethod method)
    // Offset: 0x14E5078
    static System::Collections::Generic::IList_1<UnityEngine::Vector2>* Sort(System::Collections::Generic::IList_1<UnityEngine::Vector2>* verts, UnityEngine::ProBuilder::SortMethod method);
    // static UnityEngine.Vector3 GetTangentToAxis(UnityEngine.ProBuilder.ProjectionAxis axis)
    // Offset: 0x14E4494
    static UnityEngine::Vector3 GetTangentToAxis(UnityEngine::ProBuilder::ProjectionAxis axis);
    // static UnityEngine.Vector3 ProjectionAxisToVector(UnityEngine.ProBuilder.ProjectionAxis axis)
    // Offset: 0x14E54E8
    static UnityEngine::Vector3 ProjectionAxisToVector(UnityEngine::ProBuilder::ProjectionAxis axis);
    // static UnityEngine.ProBuilder.ProjectionAxis VectorToProjectionAxis(UnityEngine.Vector3 direction)
    // Offset: 0x14E4364
    static UnityEngine::ProBuilder::ProjectionAxis VectorToProjectionAxis(UnityEngine::Vector3 direction);
    // static public UnityEngine.Plane FindBestPlane(System.Collections.Generic.IList`1<UnityEngine.Vector3> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x14E3230
    static UnityEngine::Plane FindBestPlane(System::Collections::Generic::IList_1<UnityEngine::Vector3>* points, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Plane FindBestPlane(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 textureGroup)
    // Offset: 0x14E568C
    static UnityEngine::Plane FindBestPlane(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int textureGroup);
  }; // UnityEngine.ProBuilder.Projection
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Projection*, "UnityEngine.ProBuilder", "Projection");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector2>* (*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*, System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<int>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector2>* (*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*, System::Collections::Generic::IList_1<int>*, UnityEngine::Vector3)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<int>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*, System::Collections::Generic::IList_1<int>*, UnityEngine::Vector3, System::Collections::Generic::List_1<UnityEngine::Vector2>*)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<int>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::Vector2>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, int, UnityEngine::ProBuilder::AutoUnwrapSettings)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::AutoUnwrapSettings>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::PlanarProject
// Il2CppName: PlanarProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*, UnityEngine::Vector3)>(&UnityEngine::ProBuilder::Projection::PlanarProject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "PlanarProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::SphericalProject
// Il2CppName: SphericalProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector2>* (*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*, System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Projection::SphericalProject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "SphericalProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<int>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::Sort
// Il2CppName: Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::Vector2>* (*)(System::Collections::Generic::IList_1<UnityEngine::Vector2>*, UnityEngine::ProBuilder::SortMethod)>(&UnityEngine::ProBuilder::Projection::Sort)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::Vector2>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::SortMethod>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::GetTangentToAxis
// Il2CppName: GetTangentToAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::ProjectionAxis)>(&UnityEngine::ProBuilder::Projection::GetTangentToAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "GetTangentToAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProjectionAxis>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::ProjectionAxisToVector
// Il2CppName: ProjectionAxisToVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::ProjectionAxis)>(&UnityEngine::ProBuilder::Projection::ProjectionAxisToVector)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "ProjectionAxisToVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProjectionAxis>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::VectorToProjectionAxis
// Il2CppName: VectorToProjectionAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ProjectionAxis (*)(UnityEngine::Vector3)>(&UnityEngine::ProBuilder::Projection::VectorToProjectionAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "VectorToProjectionAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::FindBestPlane
// Il2CppName: FindBestPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Plane (*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*, System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::Projection::FindBestPlane)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "FindBestPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<int>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Projection::FindBestPlane
// Il2CppName: FindBestPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Plane (*)(UnityEngine::ProBuilder::ProBuilderMesh*, int)>(&UnityEngine::ProBuilder::Projection::FindBestPlane)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Projection*), "FindBestPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
