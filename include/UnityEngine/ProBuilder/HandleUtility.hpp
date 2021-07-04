// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: RaycastHit
  class RaycastHit;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: CullingMode
  struct CullingMode;
  // Forward declaring type: SimpleTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct SimpleTuple_2;
  // Forward declaring type: HandleOrientation
  struct HandleOrientation;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.HandleUtility
  // [ExtensionAttribute] Offset: FFFFFFFF
  class HandleUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HandleUtility
    HandleUtility() noexcept {}
    // static UnityEngine.Vector3 ScreenToGuiPoint(UnityEngine.Camera camera, UnityEngine.Vector3 point, System.Single pixelsPerPoint)
    // Offset: 0x1AB8F88
    static UnityEngine::Vector3 ScreenToGuiPoint(UnityEngine::Camera* camera, UnityEngine::Vector3 point, float pixelsPerPoint);
    // static System.Boolean FaceRaycast(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out UnityEngine.ProBuilder.RaycastHit hit, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x1AB9000
    static bool FaceRaycast(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::RaycastHit*& hit, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static System.Boolean FaceRaycast(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance, UnityEngine.ProBuilder.CullingMode cullingMode, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x1AB9044
    static bool FaceRaycast(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::RaycastHit*& hit, float distance, UnityEngine::ProBuilder::CullingMode cullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static System.Boolean FaceRaycastBothCullModes(UnityEngine.Ray worldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, ref UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.Vector3> back, ref UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.Vector3> front)
    // Offset: 0x1AB9A28
    static bool FaceRaycastBothCullModes(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>& back, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>& front);
    // static System.Boolean FaceRaycast(UnityEngine.Ray InWorldRay, UnityEngine.ProBuilder.ProBuilderMesh mesh, out System.Collections.Generic.List`1<UnityEngine.ProBuilder.RaycastHit> hits, UnityEngine.ProBuilder.CullingMode cullingMode, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> ignore)
    // Offset: 0x1AB9FB0
    static bool FaceRaycast(UnityEngine::Ray InWorldRay, UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<UnityEngine::ProBuilder::RaycastHit*>*& hits, UnityEngine::ProBuilder::CullingMode cullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* ignore);
    // static UnityEngine.Ray InverseTransformRay(UnityEngine.Transform transform, UnityEngine.Ray InWorldRay)
    // Offset: 0x1ABA5D8
    static UnityEngine::Ray InverseTransformRay(UnityEngine::Transform* transform, UnityEngine::Ray InWorldRay);
    // static System.Boolean MeshRaycast(UnityEngine.Ray InWorldRay, UnityEngine.GameObject gameObject, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance)
    // Offset: 0x1ABA7F8
    static bool MeshRaycast(UnityEngine::Ray InWorldRay, UnityEngine::GameObject* gameObject, UnityEngine::ProBuilder::RaycastHit*& hit, float distance);
    // static System.Boolean MeshRaycast(UnityEngine.Ray InRay, UnityEngine.Vector3[] mesh, System.Int32[] triangles, out UnityEngine.ProBuilder.RaycastHit hit, System.Single distance)
    // Offset: 0x1ABA97C
    static bool MeshRaycast(UnityEngine::Ray InRay, ::Array<UnityEngine::Vector3>* mesh, ::Array<int>* triangles, UnityEngine::ProBuilder::RaycastHit*& hit, float distance);
    // static System.Boolean PointIsOccluded(UnityEngine.Camera cam, UnityEngine.ProBuilder.ProBuilderMesh pb, UnityEngine.Vector3 worldPoint)
    // Offset: 0x1ABAF98
    static bool PointIsOccluded(UnityEngine::Camera* cam, UnityEngine::ProBuilder::ProBuilderMesh* pb, UnityEngine::Vector3 worldPoint);
    // static public UnityEngine.Quaternion GetRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indices)
    // Offset: 0x1ABB150
    static UnityEngine::Quaternion GetRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indices);
    // static public UnityEngine.Quaternion GetFaceRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1ABB76C
    static UnityEngine::Quaternion GetFaceRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public UnityEngine.Quaternion GetFaceRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1ABB87C
    static UnityEngine::Quaternion GetFaceRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public UnityEngine.Quaternion GetEdgeRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x1ABBFF0
    static UnityEngine::Quaternion GetEdgeRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public UnityEngine.Quaternion GetEdgeRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x1ABC100
    static UnityEngine::Quaternion GetEdgeRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Edge edge);
    // static public UnityEngine.Quaternion GetVertexRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.HandleOrientation orientation, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x1ABC1C8
    static UnityEngine::Quaternion GetVertexRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<int>* vertices);
    // static public UnityEngine.Quaternion GetVertexRotation(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 vertex)
    // Offset: 0x1ABC2DC
    static UnityEngine::Quaternion GetVertexRotation(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int vertex);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1ABC3F8
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x1ABCCA0
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static UnityEngine.Vector3 GetActiveElementPosition(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x1ABCDB0
    static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* vertices);
  }; // UnityEngine.ProBuilder.HandleUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleUtility*, "UnityEngine.ProBuilder", "HandleUtility");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::ScreenToGuiPoint
// Il2CppName: ScreenToGuiPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Camera*, UnityEngine::Vector3, float)>(&UnityEngine::ProBuilder::HandleUtility::ScreenToGuiPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "ScreenToGuiPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::FaceRaycast
// Il2CppName: FaceRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::RaycastHit*&, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "FaceRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::RaycastHit*&>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::FaceRaycast
// Il2CppName: FaceRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::RaycastHit*&, float, UnityEngine::ProBuilder::CullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "FaceRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::RaycastHit*&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::CullingMode>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::FaceRaycastBothCullModes
// Il2CppName: FaceRaycastBothCullModes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>&, UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>&)>(&UnityEngine::ProBuilder::HandleUtility::FaceRaycastBothCullModes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "FaceRaycastBothCullModes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::Vector3>&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::FaceRaycast
// Il2CppName: FaceRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::List_1<UnityEngine::ProBuilder::RaycastHit*>*&, UnityEngine::ProBuilder::CullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "FaceRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::ProBuilder::RaycastHit*>*&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::CullingMode>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::InverseTransformRay
// Il2CppName: InverseTransformRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Ray (*)(UnityEngine::Transform*, UnityEngine::Ray)>(&UnityEngine::ProBuilder::HandleUtility::InverseTransformRay)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "InverseTransformRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::MeshRaycast
// Il2CppName: MeshRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, UnityEngine::GameObject*, UnityEngine::ProBuilder::RaycastHit*&, float)>(&UnityEngine::ProBuilder::HandleUtility::MeshRaycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "MeshRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::RaycastHit*&>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::MeshRaycast
// Il2CppName: MeshRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Ray, ::Array<UnityEngine::Vector3>*, ::Array<int>*, UnityEngine::ProBuilder::RaycastHit*&, float)>(&UnityEngine::ProBuilder::HandleUtility::MeshRaycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "MeshRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Vector3>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<int>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::RaycastHit*&>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::PointIsOccluded
// Il2CppName: PointIsOccluded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Camera*, UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Vector3)>(&UnityEngine::ProBuilder::HandleUtility::PointIsOccluded)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "PointIsOccluded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::HandleUtility::GetRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<int>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetFaceRotation
// Il2CppName: GetFaceRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::HandleOrientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::GetFaceRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetFaceRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::HandleOrientation>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetFaceRotation
// Il2CppName: GetFaceRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::HandleUtility::GetFaceRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetFaceRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Face*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation
// Il2CppName: GetEdgeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::HandleOrientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetEdgeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::HandleOrientation>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation
// Il2CppName: GetEdgeRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetEdgeRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Edge>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetVertexRotation
// Il2CppName: GetVertexRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::HandleOrientation, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::HandleUtility::GetVertexRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetVertexRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::HandleOrientation>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<int>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetVertexRotation
// Il2CppName: GetVertexRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::ProBuilder::ProBuilderMesh*, int)>(&UnityEngine::ProBuilder::HandleUtility::GetVertexRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetVertexRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition
// Il2CppName: GetActiveElementPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetActiveElementPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition
// Il2CppName: GetActiveElementPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetActiveElementPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition
// Il2CppName: GetActiveElementPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleUtility*), "GetActiveElementPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<int>*>()});
  }
};
