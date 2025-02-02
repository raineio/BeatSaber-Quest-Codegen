// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_InputInterface
#include "HoudiniEngineUnity/HEU_InputInterface.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HEU_InputData
  class HEU_InputData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputInterfaceMesh
  class HEU_InputInterfaceMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceMesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceMesh*, "HoudiniEngineUnity", "HEU_InputInterfaceMesh");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputInterfaceMesh
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputInterfaceMesh : public ::HoudiniEngineUnity::HEU_InputInterface {
    public:
    // Nested type: ::HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMeshes
    class HEU_InputDataMeshes;
    // Nested type: ::HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMesh
    class HEU_InputDataMesh;
    // private System.Void .ctor()
    // Offset: 0x18BDD78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputInterfaceMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputInterfaceMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputInterfaceMesh*, creationType>()));
    }
    // static public System.Void GetUVsFromMesh(UnityEngine.Mesh mesh, UnityEngine.Vector2[] srcUVs, System.Collections.Generic.List`1<UnityEngine.Vector3> destUVs, System.Int32 index)
    // Offset: 0x18C04A8
    static void GetUVsFromMesh(::UnityEngine::Mesh* mesh, ::ArrayW<::UnityEngine::Vector2> srcUVs, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* destUVs, int index);
    // public System.Boolean UploadData(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 inputNodeID, HoudiniEngineUnity.HEU_InputData inputData)
    // Offset: 0x18BE188
    bool UploadData(::HoudiniEngineUnity::HEU_SessionBase* session, int inputNodeID, ::HoudiniEngineUnity::HEU_InputData* inputData);
    // public HoudiniEngineUnity.HEU_InputInterfaceMesh/HoudiniEngineUnity.HEU_InputDataMeshes GenerateMeshDatasFromGameObject(UnityEngine.GameObject inputObject)
    // Offset: 0x18BDF00
    ::HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMeshes* GenerateMeshDatasFromGameObject(::UnityEngine::GameObject* inputObject);
    // static public HoudiniEngineUnity.HEU_InputInterfaceMesh/HoudiniEngineUnity.HEU_InputDataMesh CreateSingleMeshData(UnityEngine.GameObject meshGameObject)
    // Offset: 0x18C0CC8
    static ::HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMesh* CreateSingleMeshData(::UnityEngine::GameObject* meshGameObject);
    // static private UnityEngine.Mesh GetMeshFromObject(UnityEngine.GameObject meshGameObject)
    // Offset: 0x18C0EAC
    static ::UnityEngine::Mesh* GetMeshFromObject(::UnityEngine::GameObject* meshGameObject);
    // public override System.Boolean CreateInputNodeWithDataUpload(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 connectNodeID, UnityEngine.GameObject inputObject, out System.Int32 inputNodeID)
    // Offset: 0x18BDDA4
    // Implemented from: HoudiniEngineUnity.HEU_InputInterface
    // Base method: System.Boolean HEU_InputInterface::CreateInputNodeWithDataUpload(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 connectNodeID, UnityEngine.GameObject inputObject, out System.Int32 inputNodeID)
    bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int connectNodeID, ::UnityEngine::GameObject* inputObject, ByRef<int> inputNodeID);
    // public override System.Boolean IsThisInputObjectSupported(UnityEngine.GameObject inputObject)
    // Offset: 0x18C0338
    // Implemented from: HoudiniEngineUnity.HEU_InputInterface
    // Base method: System.Boolean HEU_InputInterface::IsThisInputObjectSupported(UnityEngine.GameObject inputObject)
    bool IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject);
  }; // HoudiniEngineUnity.HEU_InputInterfaceMesh
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::GetUVsFromMesh
// Il2CppName: GetUVsFromMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector2>, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::GetUVsFromMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* srcUVs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* destUVs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceMesh*), "GetUVsFromMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, srcUVs, destUVs, index});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::UploadData
// Il2CppName: UploadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::HoudiniEngineUnity::HEU_InputData*)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::UploadData)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* inputNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceMesh*), "UploadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, inputNodeID, inputData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::GenerateMeshDatasFromGameObject
// Il2CppName: GenerateMeshDatasFromGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMeshes* (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::GenerateMeshDatasFromGameObject)> {
  static const MethodInfo* get() {
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceMesh*), "GenerateMeshDatasFromGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateSingleMeshData
// Il2CppName: CreateSingleMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterfaceMesh::HEU_InputDataMesh* (*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateSingleMeshData)> {
  static const MethodInfo* get() {
    static auto* meshGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceMesh*), "CreateSingleMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshGameObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::GetMeshFromObject
// Il2CppName: GetMeshFromObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::GetMeshFromObject)> {
  static const MethodInfo* get() {
    static auto* meshGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceMesh*), "GetMeshFromObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshGameObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateInputNodeWithDataUpload
// Il2CppName: CreateInputNodeWithDataUpload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::UnityEngine::GameObject*, ByRef<int>)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::CreateInputNodeWithDataUpload)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* connectNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* inputNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceMesh*), "CreateInputNodeWithDataUpload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, connectNodeID, inputObject, inputNodeID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceMesh::IsThisInputObjectSupported
// Il2CppName: IsThisInputObjectSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceMesh::*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterfaceMesh::IsThisInputObjectSupported)> {
  static const MethodInfo* get() {
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceMesh*), "IsThisInputObjectSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObject});
  }
};
