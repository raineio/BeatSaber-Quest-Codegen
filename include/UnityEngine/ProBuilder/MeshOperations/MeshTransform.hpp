// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: PivotLocation
  struct PivotLocation;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: MeshTransform
  class MeshTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshTransform*, "UnityEngine.ProBuilder.MeshOperations", "MeshTransform");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MeshTransform : public ::Il2CppObject {
    public:
    // static System.Void SetPivot(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.PivotLocation pivotType, System.Int32 firstVertexIndex)
    // Offset: 0x1C3F1CC
    static void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::PivotLocation pivotType, int firstVertexIndex);
    // static public System.Void CenterPivot(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes)
    // Offset: 0x1C3F280
    static void CenterPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int> indexes);
    // static public System.Void SetPivot(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Vector3 worldPosition)
    // Offset: 0x1C3F630
    static void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 worldPosition);
    // static public System.Void FreezeScaleTransform(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1C3F818
    static void FreezeScaleTransform(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);
  }; // UnityEngine.ProBuilder.MeshOperations.MeshTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshTransform::SetPivot
// Il2CppName: SetPivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::PivotLocation, int)>(&UnityEngine::ProBuilder::MeshOperations::MeshTransform::SetPivot)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* pivotType = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "PivotLocation")->byval_arg;
    static auto* firstVertexIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshTransform*), "SetPivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, pivotType, firstVertexIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshTransform::CenterPivot
// Il2CppName: CenterPivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int>)>(&UnityEngine::ProBuilder::MeshOperations::MeshTransform::CenterPivot)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshTransform*), "CenterPivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshTransform::SetPivot
// Il2CppName: SetPivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3)>(&UnityEngine::ProBuilder::MeshOperations::MeshTransform::SetPivot)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* worldPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshTransform*), "SetPivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, worldPosition});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshTransform::FreezeScaleTransform
// Il2CppName: FreezeScaleTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::MeshOperations::MeshTransform::FreezeScaleTransform)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshTransform*), "FreezeScaleTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
