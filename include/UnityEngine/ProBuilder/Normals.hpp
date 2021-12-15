// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Normals
  class Normals;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ProBuilder::Normals);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Normals*, "UnityEngine.ProBuilder", "Normals");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Normals
  // [TokenAttribute] Offset: FFFFFFFF
  class Normals : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Vector3[] s_SmoothAvg
    static ::ArrayW<UnityEngine::Vector3> _get_s_SmoothAvg();
    // Set static field: static private UnityEngine.Vector3[] s_SmoothAvg
    static void _set_s_SmoothAvg(::ArrayW<UnityEngine::Vector3> value);
    // Get static field: static private System.Single[] s_SmoothAvgCount
    static ::ArrayW<float> _get_s_SmoothAvgCount();
    // Set static field: static private System.Single[] s_SmoothAvgCount
    static void _set_s_SmoothAvgCount(::ArrayW<float> value);
    // Get static field: static private System.Int32[] s_CachedIntArray
    static ::ArrayW<int> _get_s_CachedIntArray();
    // Set static field: static private System.Int32[] s_CachedIntArray
    static void _set_s_CachedIntArray(::ArrayW<int> value);
    // static private System.Void .cctor()
    // Offset: 0x19165D4
    static void _cctor();
    // static private System.Void ClearIntArray(System.Int32 count)
    // Offset: 0x1915220
    static void ClearIntArray(int count);
    // static public System.Void CalculateTangents(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1915344
    static void CalculateTangents(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static private System.Void CalculateHardNormals(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1915998
    static void CalculateHardNormals(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public System.Void CalculateNormals(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1915EC4
    static void CalculateNormals(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
  }; // UnityEngine.ProBuilder.Normals
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normals::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Normals::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normals*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normals::ClearIntArray
// Il2CppName: ClearIntArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::ProBuilder::Normals::ClearIntArray)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normals*), "ClearIntArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normals::CalculateTangents
// Il2CppName: CalculateTangents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::Normals::CalculateTangents)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normals*), "CalculateTangents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normals::CalculateHardNormals
// Il2CppName: CalculateHardNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::Normals::CalculateHardNormals)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normals*), "CalculateHardNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Normals::CalculateNormals
// Il2CppName: CalculateNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::Normals::CalculateNormals)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Normals*), "CalculateNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
