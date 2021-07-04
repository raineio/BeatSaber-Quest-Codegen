// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MergeElements
  class MergeElements : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MergeElements::$$c
    class $$c;
    // Creating value type constructor for type: MergeElements
    MergeElements() noexcept {}
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> MergePairs(UnityEngine.ProBuilder.ProBuilderMesh target, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.Face,UnityEngine.ProBuilder.Face>> pairs, System.Boolean collapseCoincidentVertices)
    // Offset: 0x1707D3C
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* MergePairs(UnityEngine::ProBuilder::ProBuilderMesh* target, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Face*>>* pairs, bool collapseCoincidentVertices);
    // static public UnityEngine.ProBuilder.Face Merge(UnityEngine.ProBuilder.ProBuilderMesh target, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x17086A0
    static UnityEngine::ProBuilder::Face* Merge(UnityEngine::ProBuilder::ProBuilderMesh* target, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static System.Void CollapseCoincidentVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1708270
    static void CollapseCoincidentVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
  }; // UnityEngine.ProBuilder.MeshOperations.MergeElements
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MergeElements*, "UnityEngine.ProBuilder.MeshOperations", "MergeElements");
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MergeElements::MergePairs
// Il2CppName: MergePairs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Face*>>*, bool)>(&UnityEngine::ProBuilder::MeshOperations::MergeElements::MergePairs)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MergeElements*), "MergePairs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face*, UnityEngine::ProBuilder::Face*>>*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MergeElements::Merge
// Il2CppName: Merge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Face* (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::MergeElements::Merge)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MergeElements*), "Merge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MergeElements::CollapseCoincidentVertices
// Il2CppName: CollapseCoincidentVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::MergeElements::CollapseCoincidentVertices)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MergeElements*), "CollapseCoincidentVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::ProBuilderMesh*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>*>()});
  }
};
