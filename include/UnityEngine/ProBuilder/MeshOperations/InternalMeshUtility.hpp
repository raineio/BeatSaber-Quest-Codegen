// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.InternalMeshUtility
  class InternalMeshUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::$$c
    class $$c;
    // Creating value type constructor for type: InternalMeshUtility
    InternalMeshUtility() noexcept {}
    // static UnityEngine.Vector3 AverageNormalWithIndexes(UnityEngine.ProBuilder.SharedVertex shared, System.Int32[] all, System.Collections.Generic.IList`1<UnityEngine.Vector3> norm)
    // Offset: 0x15556A8
    static UnityEngine::Vector3 AverageNormalWithIndexes(UnityEngine::ProBuilder::SharedVertex* shared, ::Array<int>* all, System::Collections::Generic::IList_1<UnityEngine::Vector3>* norm);
    // static public UnityEngine.ProBuilder.ProBuilderMesh CreateMeshWithTransform(UnityEngine.Transform t, System.Boolean preserveFaces)
    // Offset: 0x155682C
    static UnityEngine::ProBuilder::ProBuilderMesh* CreateMeshWithTransform(UnityEngine::Transform* t, bool preserveFaces);
    // static public System.Boolean ResetPbObjectWithMeshFilter(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Boolean preserveFaces)
    // Offset: 0x1557534
    static bool ResetPbObjectWithMeshFilter(UnityEngine::ProBuilder::ProBuilderMesh* pb, bool preserveFaces);
    // static System.Void FilterUnusedSubmeshIndexes(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1547A68
    static void FilterUnusedSubmeshIndexes(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
  }; // UnityEngine.ProBuilder.MeshOperations.InternalMeshUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility*, "UnityEngine.ProBuilder.MeshOperations", "InternalMeshUtility");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::AverageNormalWithIndexes
// Il2CppName: AverageNormalWithIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::ProBuilder::SharedVertex*, ::Array<int>*, System::Collections::Generic::IList_1<UnityEngine::Vector3>*)>(&UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::AverageNormalWithIndexes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility*), "AverageNormalWithIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::SharedVertex*>(), ::il2cpp_utils::ExtractIndependentType<::Array<int>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::Vector3>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::CreateMeshWithTransform
// Il2CppName: CreateMeshWithTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::ProBuilderMesh* (*)(UnityEngine::Transform*, bool)>(&UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::CreateMeshWithTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility*), "CreateMeshWithTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::ResetPbObjectWithMeshFilter
// Il2CppName: ResetPbObjectWithMeshFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ProBuilder::ProBuilderMesh*, bool)>(&UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::ResetPbObjectWithMeshFilter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility*), "ResetPbObjectWithMeshFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::FilterUnusedSubmeshIndexes
// Il2CppName: FilterUnusedSubmeshIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility::FilterUnusedSubmeshIndexes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility*), "FilterUnusedSubmeshIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>()});
  }
};
