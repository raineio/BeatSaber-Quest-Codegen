// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_InputInterface
#include "HoudiniEngineUnity/HEU_InputInterface.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HAPI_VolumeInfo
  struct HAPI_VolumeInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainData
  class TerrainData;
  // Forward declaring type: TerrainLayer
  class TerrainLayer;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputInterfaceTerrain
  class HEU_InputInterfaceTerrain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTerrain);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTerrain*, "HoudiniEngineUnity", "HEU_InputInterfaceTerrain");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputInterfaceTerrain
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputInterfaceTerrain : public ::HoudiniEngineUnity::HEU_InputInterface {
    public:
    // Nested type: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain
    class HEU_InputDataTerrain;
    // public System.Void .ctor()
    // Offset: 0x18C0FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputInterfaceTerrain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputInterfaceTerrain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputInterfaceTerrain*, creationType>()));
    }
    // private System.Boolean SetMaskLayer(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HEU_InputInterfaceTerrain/HoudiniEngineUnity.HEU_InputDataTerrain idt, ref HoudiniEngineUnity.HAPI_VolumeInfo baseVolumeInfo)
    // Offset: 0x18C21D8
    bool SetMaskLayer(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain* idt, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo);
    // public System.Boolean CreateHeightFieldInputNode(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HEU_InputInterfaceTerrain/HoudiniEngineUnity.HEU_InputDataTerrain idt)
    // Offset: 0x18C150C
    bool CreateHeightFieldInputNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain* idt);
    // public System.Boolean UploadHeightValuesWithTransform(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HEU_InputInterfaceTerrain/HoudiniEngineUnity.HEU_InputDataTerrain idt, ref HoudiniEngineUnity.HAPI_VolumeInfo volumeInfo)
    // Offset: 0x18C164C
    bool UploadHeightValuesWithTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain* idt, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo);
    // public System.Boolean UploadAlphaMaps(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HEU_InputInterfaceTerrain/HoudiniEngineUnity.HEU_InputDataTerrain idt, ref HoudiniEngineUnity.HAPI_VolumeInfo baseVolumeInfo, out System.Boolean bMaskSet)
    // Offset: 0x18C1CA4
    bool UploadAlphaMaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain* idt, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo, ByRef<bool> bMaskSet);
    // public System.Boolean SetHeightFieldData(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 volumeNodeID, System.Int32 partID, System.Single[] heightValues, System.String heightFieldName, ref HoudiniEngineUnity.HAPI_VolumeInfo baseVolumeInfo)
    // Offset: 0x18C22DC
    bool SetHeightFieldData(::HoudiniEngineUnity::HEU_SessionBase* session, int volumeNodeID, int partID, ::ArrayW<float> heightValues, ::StringW heightFieldName, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo);
    // public System.Boolean SetTerrainDataAttributesToHeightField(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoNodeID, System.Int32 partID, UnityEngine.TerrainData terrainData)
    // Offset: 0x18C2724
    bool SetTerrainDataAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int geoNodeID, int partID, ::UnityEngine::TerrainData* terrainData);
    // public System.Boolean SetTerrainLayerAttributesToHeightField(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoNodeID, System.Int32 partID, UnityEngine.TerrainLayer terrainLayer)
    // Offset: 0x18C2B6C
    bool SetTerrainLayerAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int geoNodeID, int partID, ::UnityEngine::TerrainLayer* terrainLayer);
    // public System.Void SetTreePrototypes(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoNodeID, System.Int32 partID, UnityEngine.TerrainData terrainData)
    // Offset: 0x18C28CC
    void SetTreePrototypes(::HoudiniEngineUnity::HEU_SessionBase* session, int geoNodeID, int partID, ::UnityEngine::TerrainData* terrainData);
    // public System.Void SetTreeInstances(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoNodeID, System.Int32 partID, UnityEngine.TerrainData terrainData)
    // Offset: 0x18C2D98
    void SetTreeInstances(::HoudiniEngineUnity::HEU_SessionBase* session, int geoNodeID, int partID, ::UnityEngine::TerrainData* terrainData);
    // public HoudiniEngineUnity.HEU_InputInterfaceTerrain/HoudiniEngineUnity.HEU_InputDataTerrain GenerateTerrainDataFromGameObject(UnityEngine.GameObject inputObject)
    // Offset: 0x18C11C8
    ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain* GenerateTerrainDataFromGameObject(::UnityEngine::GameObject* inputObject);
    // public override System.Boolean CreateInputNodeWithDataUpload(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 connectNodeID, UnityEngine.GameObject inputObject, out System.Int32 inputNodeID)
    // Offset: 0x18C1028
    // Implemented from: HoudiniEngineUnity.HEU_InputInterface
    // Base method: System.Boolean HEU_InputInterface::CreateInputNodeWithDataUpload(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 connectNodeID, UnityEngine.GameObject inputObject, out System.Int32 inputNodeID)
    bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int connectNodeID, ::UnityEngine::GameObject* inputObject, ByRef<int> inputNodeID);
    // public override System.Boolean IsThisInputObjectSupported(UnityEngine.GameObject inputObject)
    // Offset: 0x18C255C
    // Implemented from: HoudiniEngineUnity.HEU_InputInterface
    // Base method: System.Boolean HEU_InputInterface::IsThisInputObjectSupported(UnityEngine.GameObject inputObject)
    bool IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject);
  }; // HoudiniEngineUnity.HEU_InputInterfaceTerrain
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetMaskLayer
// Il2CppName: SetMaskLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain*, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetMaskLayer)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* idt = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputInterfaceTerrain/HEU_InputDataTerrain")->byval_arg;
    static auto* baseVolumeInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_VolumeInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "SetMaskLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, idt, baseVolumeInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateHeightFieldInputNode
// Il2CppName: CreateHeightFieldInputNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain*)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateHeightFieldInputNode)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* idt = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputInterfaceTerrain/HEU_InputDataTerrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "CreateHeightFieldInputNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, idt});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadHeightValuesWithTransform
// Il2CppName: UploadHeightValuesWithTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain*, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadHeightValuesWithTransform)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* idt = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputInterfaceTerrain/HEU_InputDataTerrain")->byval_arg;
    static auto* volumeInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_VolumeInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "UploadHeightValuesWithTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, idt, volumeInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadAlphaMaps
// Il2CppName: UploadAlphaMaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain*, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>, ByRef<bool>)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadAlphaMaps)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* idt = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputInterfaceTerrain/HEU_InputDataTerrain")->byval_arg;
    static auto* baseVolumeInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_VolumeInfo")->this_arg;
    static auto* bMaskSet = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "UploadAlphaMaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, idt, baseVolumeInfo, bMaskSet});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetHeightFieldData
// Il2CppName: SetHeightFieldData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, int, ::ArrayW<float>, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetHeightFieldData)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* volumeNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* heightFieldName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* baseVolumeInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_VolumeInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "SetHeightFieldData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, volumeNodeID, partID, heightValues, heightFieldName, baseVolumeInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainDataAttributesToHeightField
// Il2CppName: SetTerrainDataAttributesToHeightField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, int, ::UnityEngine::TerrainData*)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainDataAttributesToHeightField)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "SetTerrainDataAttributesToHeightField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoNodeID, partID, terrainData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainLayerAttributesToHeightField
// Il2CppName: SetTerrainLayerAttributesToHeightField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, int, ::UnityEngine::TerrainLayer*)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainLayerAttributesToHeightField)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* terrainLayer = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "SetTerrainLayerAttributesToHeightField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoNodeID, partID, terrainLayer});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreePrototypes
// Il2CppName: SetTreePrototypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, int, ::UnityEngine::TerrainData*)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreePrototypes)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "SetTreePrototypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoNodeID, partID, terrainData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreeInstances
// Il2CppName: SetTreeInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, int, ::UnityEngine::TerrainData*)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreeInstances)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "SetTreeInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoNodeID, partID, terrainData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::GenerateTerrainDataFromGameObject
// Il2CppName: GenerateTerrainDataFromGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain* (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::GenerateTerrainDataFromGameObject)> {
  static const MethodInfo* get() {
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "GenerateTerrainDataFromGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateInputNodeWithDataUpload
// Il2CppName: CreateInputNodeWithDataUpload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::UnityEngine::GameObject*, ByRef<int>)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateInputNodeWithDataUpload)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* connectNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* inputNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "CreateInputNodeWithDataUpload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, connectNodeID, inputObject, inputNodeID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::IsThisInputObjectSupported
// Il2CppName: IsThisInputObjectSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputInterfaceTerrain::IsThisInputObjectSupported)> {
  static const MethodInfo* get() {
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputInterfaceTerrain*), "IsThisInputObjectSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObject});
  }
};
