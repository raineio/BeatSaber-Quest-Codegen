// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Triangle
#include "UnityEngine/ProBuilder/Triangle.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: MeshValidation
  class MeshValidation;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::MeshValidation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MeshValidation : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c
    class $$c;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // static public System.Boolean ContainsDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1905D74
    static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public System.Boolean ContainsDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1905D8C
    static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Boolean ContainsDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x19061DC
    static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public System.Boolean ContainsNonContiguousTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1906364
    static bool ContainsNonContiguousTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> EnsureFacesAreComposedOfContiguousTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x19064B4
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* EnsureFacesAreComposedOfContiguousTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.ProBuilder.Triangle>> CollectFaceGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1906A3C
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public System.Boolean RemoveDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<System.Int32> removed)
    // Offset: 0x1906CC4
    static bool RemoveDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<int>* removed);
    // static public System.Boolean RemoveUnusedVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<System.Int32> removed)
    // Offset: 0x1903010
    static bool RemoveUnusedVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<int>* removed);
    // static System.Collections.Generic.List`1<System.Int32> RebuildIndexes(System.Collections.Generic.IEnumerable`1<System.Int32> indices, System.Collections.Generic.List`1<System.Int32> removed)
    // Offset: 0x1907468
    static System::Collections::Generic::List_1<int>* RebuildIndexes(System::Collections::Generic::IEnumerable_1<int>* indices, System::Collections::Generic::List_1<int>* removed);
    // static System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> RebuildEdges(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.List`1<System.Int32> removed)
    // Offset: 0x190777C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* RebuildEdges(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::List_1<int>* removed);
    // static System.Void RebuildSelectionIndexes(UnityEngine.ProBuilder.ProBuilderMesh mesh, ref UnityEngine.ProBuilder.Face[] faces, ref UnityEngine.ProBuilder.Edge[] edges, ref System.Int32[] indices, System.Collections.Generic.IEnumerable`1<System.Int32> removed)
    // Offset: 0x1907B14
    static void RebuildSelectionIndexes(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<::ArrayW<UnityEngine::ProBuilder::Face*>> faces, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>> edges, ByRef<::ArrayW<int>> indices, System::Collections::Generic::IEnumerable_1<int>* removed);
    // static System.Boolean EnsureMeshIsValid(UnityEngine.ProBuilder.ProBuilderMesh mesh, out System.Int32 removedVertices)
    // Offset: 0x1907CA8
    static bool EnsureMeshIsValid(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ByRef<int> removedVertices);
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles
// Il2CppName: ContainsDegenerateTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles
// Il2CppName: ContainsDegenerateTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles
// Il2CppName: ContainsDegenerateTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "ContainsDegenerateTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, face});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsNonContiguousTriangles
// Il2CppName: ContainsNonContiguousTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsNonContiguousTriangles)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "ContainsNonContiguousTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, face});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureFacesAreComposedOfContiguousTriangles
// Il2CppName: EnsureFacesAreComposedOfContiguousTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureFacesAreComposedOfContiguousTriangles)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "EnsureFacesAreComposedOfContiguousTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::CollectFaceGroups
// Il2CppName: CollectFaceGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Triangle>*>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::CollectFaceGroups)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "CollectFaceGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, face});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveDegenerateTriangles
// Il2CppName: RemoveDegenerateTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveDegenerateTriangles)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* removed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "RemoveDegenerateTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, removed});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveUnusedVertices
// Il2CppName: RemoveUnusedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveUnusedVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* removed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "RemoveUnusedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, removed});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildIndexes
// Il2CppName: RebuildIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<int>* (*)(System::Collections::Generic::IEnumerable_1<int>*, System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildIndexes)> {
  static const MethodInfo* get() {
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* removed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "RebuildIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indices, removed});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildEdges
// Il2CppName: RebuildEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* (*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>*, System::Collections::Generic::List_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildEdges)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* removed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "RebuildEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, removed});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildSelectionIndexes
// Il2CppName: RebuildSelectionIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, ByRef<::ArrayW<UnityEngine::ProBuilder::Face*>>, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>>, ByRef<::ArrayW<int>>, System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildSelectionIndexes)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face"), 1)->this_arg;
    static auto* edges = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge"), 1)->this_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->this_arg;
    static auto* removed = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "RebuildSelectionIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, edges, indices, removed});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureMeshIsValid
// Il2CppName: EnsureMeshIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, ByRef<int>)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureMeshIsValid)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* removedVertices = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation*), "EnsureMeshIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, removedVertices});
  }
};
