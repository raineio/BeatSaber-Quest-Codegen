// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshHandles
  // [TokenAttribute] Offset: FFFFFFFF
  class MeshHandles : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshHandles::$$c
    class $$c;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> s_Vector2List
    static System::Collections::Generic::List_1<UnityEngine::Vector3>* _get_s_Vector2List();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> s_Vector2List
    static void _set_s_Vector2List(System::Collections::Generic::List_1<UnityEngine::Vector3>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> s_Vector3List
    static System::Collections::Generic::List_1<UnityEngine::Vector3>* _get_s_Vector3List();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Vector3> s_Vector3List
    static void _set_s_Vector3List(System::Collections::Generic::List_1<UnityEngine::Vector3>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Vector4> s_Vector4List
    static System::Collections::Generic::List_1<UnityEngine::Vector4>* _get_s_Vector4List();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Vector4> s_Vector4List
    static void _set_s_Vector4List(System::Collections::Generic::List_1<UnityEngine::Vector4>* value);
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> s_IndexList
    static System::Collections::Generic::List_1<int>* _get_s_IndexList();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> s_IndexList
    static void _set_s_IndexList(System::Collections::Generic::List_1<int>* value);
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> s_SharedVertexIndexList
    static System::Collections::Generic::List_1<int>* _get_s_SharedVertexIndexList();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> s_SharedVertexIndexList
    static void _set_s_SharedVertexIndexList(System::Collections::Generic::List_1<int>* value);
    // Get static field: static private readonly UnityEngine.Vector2 k_Billboard0
    static UnityEngine::Vector2 _get_k_Billboard0();
    // Set static field: static private readonly UnityEngine.Vector2 k_Billboard0
    static void _set_k_Billboard0(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 k_Billboard1
    static UnityEngine::Vector2 _get_k_Billboard1();
    // Set static field: static private readonly UnityEngine.Vector2 k_Billboard1
    static void _set_k_Billboard1(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 k_Billboard2
    static UnityEngine::Vector2 _get_k_Billboard2();
    // Set static field: static private readonly UnityEngine.Vector2 k_Billboard2
    static void _set_k_Billboard2(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 k_Billboard3
    static UnityEngine::Vector2 _get_k_Billboard3();
    // Set static field: static private readonly UnityEngine.Vector2 k_Billboard3
    static void _set_k_Billboard3(UnityEngine::Vector2 value);
    // static private System.Void .cctor()
    // Offset: 0x1C85E74
    static void _cctor();
    // static System.Void CreateFaceMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target)
    // Offset: 0x1C83834
    static void CreateFaceMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target);
    // static System.Void CreateEdgeMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target)
    // Offset: 0x1C8398C
    static void CreateEdgeMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target);
    // static System.Void CreateEdgeMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target, UnityEngine.ProBuilder.Edge[] edges)
    // Offset: 0x1C83D0C
    static void CreateEdgeMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target, ::ArrayW<UnityEngine::ProBuilder::Edge> edges);
    // static System.Void CreateVertexMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target)
    // Offset: 0x1C83F60
    static void CreateVertexMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target);
    // static System.Void CreateVertexMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1C84104
    static void CreateVertexMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target, System::Collections::Generic::IList_1<int>* indexes);
    // static private System.Void CreatePointMesh(UnityEngine.Vector3[] positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Mesh target)
    // Offset: 0x1C841E8
    static void CreatePointMesh(::ArrayW<UnityEngine::Vector3> positions, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::Mesh* target);
    // static System.Void CreatePointBillboardMesh(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, UnityEngine.Mesh target)
    // Offset: 0x1C849F8
    static void CreatePointBillboardMesh(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, UnityEngine::Mesh* target);
    // static private System.Void CreatePointBillboardMesh(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Mesh target)
    // Offset: 0x1C84378
    static void CreatePointBillboardMesh(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::Mesh* target);
    // static System.Void CreateEdgeBillboardMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target)
    // Offset: 0x1C84FF4
    static void CreateEdgeBillboardMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target);
    // static System.Void CreateEdgeBillboardMesh(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.Mesh target, System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0x1C85600
    static void CreateEdgeBillboardMesh(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::Mesh* target, System::Collections::Generic::ICollection_1<UnityEngine::ProBuilder::Edge>* edges);
  }; // UnityEngine.ProBuilder.MeshHandles
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshHandles*, "UnityEngine.ProBuilder", "MeshHandles");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::MeshHandles::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreateFaceMesh
// Il2CppName: CreateFaceMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshHandles::CreateFaceMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreateFaceMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreateEdgeMesh
// Il2CppName: CreateEdgeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshHandles::CreateEdgeMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreateEdgeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreateEdgeMesh
// Il2CppName: CreateEdgeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Mesh*, ::ArrayW<UnityEngine::ProBuilder::Edge>)>(&UnityEngine::ProBuilder::MeshHandles::CreateEdgeMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* edges = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreateEdgeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, target, edges});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreateVertexMesh
// Il2CppName: CreateVertexMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshHandles::CreateVertexMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreateVertexMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreateVertexMesh
// Il2CppName: CreateVertexMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Mesh*, System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::MeshHandles::CreateVertexMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreateVertexMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, target, indexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreatePointMesh
// Il2CppName: CreatePointMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::Vector3>, System::Collections::Generic::IList_1<int>*, UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshHandles::CreatePointMesh)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreatePointMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, indexes, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreatePointBillboardMesh
// Il2CppName: CreatePointBillboardMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*, UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshHandles::CreatePointBillboardMesh)> {
  static const MethodInfo* get() {
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreatePointBillboardMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreatePointBillboardMesh
// Il2CppName: CreatePointBillboardMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IList_1<UnityEngine::Vector3>*, System::Collections::Generic::IList_1<int>*, UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshHandles::CreatePointBillboardMesh)> {
  static const MethodInfo* get() {
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreatePointBillboardMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, indexes, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreateEdgeBillboardMesh
// Il2CppName: CreateEdgeBillboardMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Mesh*)>(&UnityEngine::ProBuilder::MeshHandles::CreateEdgeBillboardMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreateEdgeBillboardMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshHandles::CreateEdgeBillboardMesh
// Il2CppName: CreateEdgeBillboardMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, UnityEngine::Mesh*, System::Collections::Generic::ICollection_1<UnityEngine::ProBuilder::Edge>*)>(&UnityEngine::ProBuilder::MeshHandles::CreateEdgeBillboardMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "ICollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshHandles*), "CreateEdgeBillboardMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, target, edges});
  }
};
