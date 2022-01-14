// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_InputInterfaceMesh
#include "HoudiniEngineUnity/HEU_InputInterfaceMesh.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMesh);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMesh*, "HoudiniEngineUnity", "HEU_InputInterfaceMesh/HEU_InputDataMesh");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputInterfaceMesh/HoudiniEngineUnity.HEU_InputDataMesh
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputInterfaceMesh::HEU_InputDataMesh : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Material[] _materials
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<UnityEngine::Material*> materials;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Material*>) == 0x8);
    // public System.String _meshPath
    // Size: 0x8
    // Offset: 0x20
    ::StringW meshPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String _meshName
    // Size: 0x8
    // Offset: 0x28
    ::StringW meshName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 _numVertices
    // Size: 0x4
    // Offset: 0x30
    int numVertices;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _numSubMeshes
    // Size: 0x4
    // Offset: 0x34
    int numSubMeshes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt32[] _indexStart
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint> indexStart;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // public System.UInt32[] _indexCount
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint> indexCount;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // public System.Single _LODScreenTransition
    // Size: 0x4
    // Offset: 0x48
    float LODScreenTransition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: LODScreenTransition and: transform
    char __padding8[0x4] = {};
    // public UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Mesh _mesh
    UnityEngine::Mesh*& dyn__mesh();
    // Get instance field reference: public UnityEngine.Material[] _materials
    ::ArrayW<UnityEngine::Material*>& dyn__materials();
    // Get instance field reference: public System.String _meshPath
    ::StringW& dyn__meshPath();
    // Get instance field reference: public System.String _meshName
    ::StringW& dyn__meshName();
    // Get instance field reference: public System.Int32 _numVertices
    int& dyn__numVertices();
    // Get instance field reference: public System.Int32 _numSubMeshes
    int& dyn__numSubMeshes();
    // Get instance field reference: public System.UInt32[] _indexStart
    ::ArrayW<uint>& dyn__indexStart();
    // Get instance field reference: public System.UInt32[] _indexCount
    ::ArrayW<uint>& dyn__indexCount();
    // Get instance field reference: public System.Single _LODScreenTransition
    float& dyn__LODScreenTransition();
    // Get instance field reference: public UnityEngine.Transform _transform
    UnityEngine::Transform*& dyn__transform();
    // public System.Void .ctor()
    // Offset: 0x158E1B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputInterfaceMesh::HEU_InputDataMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputInterfaceMesh::HEU_InputDataMesh*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InputInterfaceMesh/HoudiniEngineUnity.HEU_InputDataMesh
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputInterfaceMesh::HEU_InputDataMesh), 80 + sizeof(UnityEngine::Transform*)> __HoudiniEngineUnity_HEU_InputInterfaceMesh_HEU_InputDataMeshSizeCheck;
  static_assert(sizeof(HEU_InputInterfaceMesh::HEU_InputDataMesh) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
