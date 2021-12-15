// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MeshType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRMesh
  class OVRMesh;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OVRMesh);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMesh*, "", "OVRMesh");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: OVRMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: EF1378
  class OVRMesh : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRMesh::IOVRMeshDataProvider
    class IOVRMeshDataProvider;
    // Nested type: GlobalNamespace::OVRMesh::MeshType
    struct MeshType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRMesh/MeshType
    // [TokenAttribute] Offset: FFFFFFFF
    struct MeshType/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MeshType
      constexpr MeshType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRMesh/MeshType None
      static constexpr const int None = -1;
      // Get static field: static public OVRMesh/MeshType None
      static GlobalNamespace::OVRMesh::MeshType _get_None();
      // Set static field: static public OVRMesh/MeshType None
      static void _set_None(GlobalNamespace::OVRMesh::MeshType value);
      // static field const value: static public OVRMesh/MeshType HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRMesh/MeshType HandLeft
      static GlobalNamespace::OVRMesh::MeshType _get_HandLeft();
      // Set static field: static public OVRMesh/MeshType HandLeft
      static void _set_HandLeft(GlobalNamespace::OVRMesh::MeshType value);
      // static field const value: static public OVRMesh/MeshType HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRMesh/MeshType HandRight
      static GlobalNamespace::OVRMesh::MeshType _get_HandRight();
      // Set static field: static public OVRMesh/MeshType HandRight
      static void _set_HandRight(GlobalNamespace::OVRMesh::MeshType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OVRMesh/MeshType
    #pragma pack(pop)
    static check_size<sizeof(OVRMesh::MeshType), 0 + sizeof(int)> __GlobalNamespace_OVRMesh_MeshTypeSizeCheck;
    static_assert(sizeof(OVRMesh::MeshType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private OVRMesh/IOVRMeshDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRMesh::IOVRMeshDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMesh::IOVRMeshDataProvider*) == 0x8);
    // private OVRMesh/MeshType _meshType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::OVRMesh::MeshType meshType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMesh::MeshType) == 0x4);
    // Padding between fields: meshType and: mesh
    char __padding1[0x4] = {};
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // private System.Boolean <IsInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool IsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private OVRMesh/IOVRMeshDataProvider _dataProvider
    GlobalNamespace::OVRMesh::IOVRMeshDataProvider*& dyn__dataProvider();
    // Get instance field reference: private OVRMesh/MeshType _meshType
    GlobalNamespace::OVRMesh::MeshType& dyn__meshType();
    // Get instance field reference: private UnityEngine.Mesh _mesh
    UnityEngine::Mesh*& dyn__mesh();
    // Get instance field reference: private System.Boolean <IsInitialized>k__BackingField
    bool& dyn_$IsInitialized$k__BackingField();
    // public System.Boolean get_IsInitialized()
    // Offset: 0x14758AC
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x14758B4
    void set_IsInitialized(bool value);
    // public UnityEngine.Mesh get_Mesh()
    // Offset: 0x14758C0
    UnityEngine::Mesh* get_Mesh();
    // private System.Void Awake()
    // Offset: 0x14758C8
    void Awake();
    // private System.Boolean ShouldInitialize()
    // Offset: 0x14759C0
    bool ShouldInitialize();
    // private System.Void Initialize(OVRMesh/MeshType meshType)
    // Offset: 0x14759E0
    void Initialize(GlobalNamespace::OVRMesh::MeshType meshType);
    // public System.Void .ctor()
    // Offset: 0x14760AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMesh*, creationType>()));
    }
  }; // OVRMesh
  #pragma pack(pop)
  static check_size<sizeof(OVRMesh), 48 + sizeof(bool)> __GlobalNamespace_OVRMeshSizeCheck;
  static_assert(sizeof(OVRMesh) == 0x31);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMesh::MeshType, "", "OVRMesh/MeshType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMesh::get_IsInitialized
// Il2CppName: get_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMesh::*)()>(&GlobalNamespace::OVRMesh::get_IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMesh*), "get_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMesh::set_IsInitialized
// Il2CppName: set_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMesh::*)(bool)>(&GlobalNamespace::OVRMesh::set_IsInitialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMesh*), "set_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMesh::get_Mesh
// Il2CppName: get_Mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (GlobalNamespace::OVRMesh::*)()>(&GlobalNamespace::OVRMesh::get_Mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMesh*), "get_Mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMesh::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMesh::*)()>(&GlobalNamespace::OVRMesh::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMesh*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMesh::ShouldInitialize
// Il2CppName: ShouldInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMesh::*)()>(&GlobalNamespace::OVRMesh::ShouldInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMesh*), "ShouldInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMesh::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMesh::*)(GlobalNamespace::OVRMesh::MeshType)>(&GlobalNamespace::OVRMesh::Initialize)> {
  static const MethodInfo* get() {
    static auto* meshType = &::il2cpp_utils::GetClassFromName("", "OVRMesh/MeshType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMesh*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
