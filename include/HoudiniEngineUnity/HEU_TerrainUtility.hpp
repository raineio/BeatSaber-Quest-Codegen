// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HAPI_VolumeInfo
  struct HAPI_VolumeInfo;
  // Forward declaring type: HEU_TreePrototypeInfo
  class HEU_TreePrototypeInfo;
  // Forward declaring type: HEU_VolumeScatterTrees
  class HEU_VolumeScatterTrees;
  // Forward declaring type: HEU_DetailPrototype
  class HEU_DetailPrototype;
  // Forward declaring type: HEU_DetailProperties
  class HEU_DetailProperties;
  // Forward declaring type: HFLayerType
  struct HFLayerType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: TerrainData
  class TerrainData;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Terrain
  class Terrain;
  // Forward declaring type: TerrainLayer
  class TerrainLayer;
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_TerrainUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_TerrainUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean GenerateTerrainFromVolume(HoudiniEngineUnity.HEU_SessionBase session, ref HoudiniEngineUnity.HAPI_VolumeInfo volumeInfo, System.Int32 geoID, System.Int32 partID, UnityEngine.GameObject gameObject, ref UnityEngine.TerrainData terrainData, out UnityEngine.Vector3 volumePositionOffset, ref UnityEngine.Terrain terrain, System.String bakedMaterialPath)
    // Offset: 0x17DA85C
    static bool GenerateTerrainFromVolume(HoudiniEngineUnity::HEU_SessionBase* session, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo, int geoID, int partID, UnityEngine::GameObject* gameObject, ByRef<UnityEngine::TerrainData*> terrainData, ByRef<UnityEngine::Vector3> volumePositionOffset, ByRef<UnityEngine::Terrain*> terrain, ::Il2CppString* bakedMaterialPath);
    // static public System.Void SetTerrainMaterial(UnityEngine.Terrain terrain, System.String specifiedMaterialName, System.String bakedMaterialPath)
    // Offset: 0x17DB25C
    static void SetTerrainMaterial(UnityEngine::Terrain* terrain, ::Il2CppString* specifiedMaterialName, ::Il2CppString* bakedMaterialPath);
    // static public System.String GetDefaultTerrainShaderName()
    // Offset: 0x17DB998
    static ::Il2CppString* GetDefaultTerrainShaderName();
    // static public System.String GetDefaultTerrainMaterialPath()
    // Offset: 0x17DBA24
    static ::Il2CppString* GetDefaultTerrainMaterialPath();
    // static public System.Single[] GetNormalizedHeightmapFromPartWithMinMax(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.Int32 heightMapWidth, System.Int32 heightMapHeight, ref System.Single minHeight, ref System.Single maxHeight, ref System.Single heightRange, System.Boolean bUseHeightRangeOverride)
    // Offset: 0x17DB438
    static ::ArrayW<float> GetNormalizedHeightmapFromPartWithMinMax(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, int heightMapWidth, int heightMapHeight, ByRef<float> minHeight, ByRef<float> maxHeight, ByRef<float> heightRange, bool bUseHeightRangeOverride);
    // static public System.Int32[,] GetDetailMapFromPart(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, out System.Int32 detailResolution)
    // Offset: 0x17DBCC0
    static ::ArrayW<int> GetDetailMapFromPart(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ByRef<int> detailResolution);
    // static public System.Boolean GetHeightmapFromPart(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 xLength, System.Int32 yLength, System.Int32 geoID, System.Int32 partID, ref System.Single[] heightValues, ref System.Single minHeight, ref System.Single maxHeight)
    // Offset: 0x17DBAB0
    static bool GetHeightmapFromPart(HoudiniEngineUnity::HEU_SessionBase* session, int xLength, int yLength, int geoID, int partID, ByRef<::ArrayW<float>> heightValues, ByRef<float> minHeight, ByRef<float> maxHeight);
    // static public System.Single[,] ConvertHeightMapHoudiniToUnity(System.Int32 heightMapWidth, System.Int32 heightMapHeight, System.Single[] heightValues)
    // Offset: 0x17DB888
    static ::ArrayW<float> ConvertHeightMapHoudiniToUnity(int heightMapWidth, int heightMapHeight, ::ArrayW<float> heightValues);
    // static public System.Single[,,] ConvertHeightFieldToAlphaMap(System.Int32 heightMapWidth, System.Int32 heightMapHeight, System.Collections.Generic.List`1<System.Single[]> heightFields)
    // Offset: 0x17DBF84
    static ::ArrayW<float> ConvertHeightFieldToAlphaMap(int heightMapWidth, int heightMapHeight, System::Collections::Generic::List_1<::ArrayW<float>>* heightFields);
    // static public System.Single[,,] AppendConvertedHeightFieldToAlphaMap(System.Int32 heightMapWidth, System.Int32 heightMapHeight, System.Single[,,] existingAlphaMaps, System.Collections.Generic.List`1<System.Single[]> heightFields, System.Single[] strengths, System.Collections.Generic.List`1<System.Int32> alphaMapIndices)
    // Offset: 0x17DC138
    static ::ArrayW<float> AppendConvertedHeightFieldToAlphaMap(int heightMapWidth, int heightMapHeight, ::ArrayW<float> existingAlphaMaps, System::Collections::Generic::List_1<::ArrayW<float>>* heightFields, ::ArrayW<float> strengths, System::Collections::Generic::List_1<int>* alphaMapIndices);
    // static public UnityEngine.Vector3 GetVolumePositionOffset(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, UnityEngine.Vector3 volumePosition, System.Single terrainSizeX, System.Single heightMapSize, System.Int32 mapWidth, System.Int32 mapHeight, System.Single minHeight)
    // Offset: 0x17DC400
    static UnityEngine::Vector3 GetVolumePositionOffset(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, UnityEngine::Vector3 volumePosition, float terrainSizeX, float heightMapSize, int mapWidth, int mapHeight, float minHeight);
    // static public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_TreePrototypeInfo> GetTreePrototypeInfosFromPart(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID)
    // Offset: 0x17DC4E8
    static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo*>* GetTreePrototypeInfosFromPart(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID);
    // static public System.Void PopulateScatterTrees(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.Int32 pointCount, ref HoudiniEngineUnity.HEU_VolumeScatterTrees scatterTrees, System.Boolean throwWarningIfNoTileAttribute)
    // Offset: 0x17DC768
    static void PopulateScatterTrees(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, int pointCount, ByRef<HoudiniEngineUnity::HEU_VolumeScatterTrees*> scatterTrees, bool throwWarningIfNoTileAttribute);
    // static public System.Void ApplyScatterTrees(UnityEngine.TerrainData terrainData, HoudiniEngineUnity.HEU_VolumeScatterTrees scatterTrees, System.Int32 tileIndex)
    // Offset: 0x17DD33C
    static void ApplyScatterTrees(UnityEngine::TerrainData* terrainData, HoudiniEngineUnity::HEU_VolumeScatterTrees* scatterTrees, int tileIndex);
    // static public System.Void PopulateDetailPrototype(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, ref HoudiniEngineUnity.HEU_DetailPrototype detailPrototype)
    // Offset: 0x17DD7E0
    static void PopulateDetailPrototype(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ByRef<HoudiniEngineUnity::HEU_DetailPrototype*> detailPrototype);
    // static public System.Void PopulateDetailProperties(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, ref HoudiniEngineUnity.HEU_DetailProperties detailProperties)
    // Offset: 0x17DDB58
    static void PopulateDetailProperties(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ByRef<HoudiniEngineUnity::HEU_DetailProperties*> detailProperties);
    // static public System.Void ApplyDetailLayers(UnityEngine.Terrain terrain, UnityEngine.TerrainData terrainData, HoudiniEngineUnity.HEU_DetailProperties detailProperties, System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_DetailPrototype> heuDetailPrototypes, System.Collections.Generic.List`1<System.Int32[,]> convertedDetailMaps)
    // Offset: 0x17DDE1C
    static void ApplyDetailLayers(UnityEngine::Terrain* terrain, UnityEngine::TerrainData* terrainData, HoudiniEngineUnity::HEU_DetailProperties* detailProperties, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_DetailPrototype*>* heuDetailPrototypes, System::Collections::Generic::List_1<::ArrayW<int>>* convertedDetailMaps);
    // static private System.Int32 GetTerrainLayerIndexByName(System.String layerName, UnityEngine.TerrainLayer[] terrainLayers)
    // Offset: 0x17DE23C
    static int GetTerrainLayerIndexByName(::Il2CppString* layerName, ::ArrayW<UnityEngine::TerrainLayer*> terrainLayers);
    // static public System.Int32 GetTerrainLayerIndex(UnityEngine.TerrainLayer layer, UnityEngine.TerrainLayer[] terrainLayers)
    // Offset: 0x17DE3C0
    static int GetTerrainLayerIndex(UnityEngine::TerrainLayer* layer, ::ArrayW<UnityEngine::TerrainLayer*> terrainLayers);
    // static public System.Boolean VolumeLayerHasAttributes(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID)
    // Offset: 0x17DE498
    static bool VolumeLayerHasAttributes(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID);
    // static public HoudiniEngineUnity.HFLayerType GetHeightfieldLayerType(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID, System.String volumeName)
    // Offset: 0x17DE794
    static HoudiniEngineUnity::HFLayerType GetHeightfieldLayerType(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID, ::Il2CppString* volumeName);
    // static public System.Single GetHeightRangeFromHeightfield(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID)
    // Offset: 0x17DBC3C
    static float GetHeightRangeFromHeightfield(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID);
    // static public System.String GetTerrainDataExportPathFromHeightfieldAttribute(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 geoID, System.Int32 partID)
    // Offset: 0x17DE8DC
    static ::Il2CppString* GetTerrainDataExportPathFromHeightfieldAttribute(HoudiniEngineUnity::HEU_SessionBase* session, int geoID, int partID);
    // static public System.Single[] ResampleData(System.Single[] data, System.Int32 oldWidth, System.Int32 oldHeight, System.Int32 newWidth, System.Int32 newHeight)
    // Offset: 0x17DE9BC
    static ::ArrayW<float> ResampleData(::ArrayW<float> data, int oldWidth, int oldHeight, int newWidth, int newHeight);
  }; // HoudiniEngineUnity.HEU_TerrainUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_TerrainUtility*, "HoudiniEngineUnity", "HEU_TerrainUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GenerateTerrainFromVolume
// Il2CppName: GenerateTerrainFromVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo>, int, int, UnityEngine::GameObject*, ByRef<UnityEngine::TerrainData*>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Terrain*>, ::Il2CppString*)>(&HoudiniEngineUnity::HEU_TerrainUtility::GenerateTerrainFromVolume)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* volumeInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_VolumeInfo")->this_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->this_arg;
    static auto* volumePositionOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->this_arg;
    static auto* bakedMaterialPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GenerateTerrainFromVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, volumeInfo, geoID, partID, gameObject, terrainData, volumePositionOffset, terrain, bakedMaterialPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::SetTerrainMaterial
// Il2CppName: SetTerrainMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Terrain*, ::Il2CppString*, ::Il2CppString*)>(&HoudiniEngineUnity::HEU_TerrainUtility::SetTerrainMaterial)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* specifiedMaterialName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bakedMaterialPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "SetTerrainMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain, specifiedMaterialName, bakedMaterialPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetDefaultTerrainShaderName
// Il2CppName: GetDefaultTerrainShaderName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&HoudiniEngineUnity::HEU_TerrainUtility::GetDefaultTerrainShaderName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetDefaultTerrainShaderName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetDefaultTerrainMaterialPath
// Il2CppName: GetDefaultTerrainMaterialPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&HoudiniEngineUnity::HEU_TerrainUtility::GetDefaultTerrainMaterialPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetDefaultTerrainMaterialPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetNormalizedHeightmapFromPartWithMinMax
// Il2CppName: GetNormalizedHeightmapFromPartWithMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, int, int, ByRef<float>, ByRef<float>, ByRef<float>, bool)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetNormalizedHeightmapFromPartWithMinMax)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightMapWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightMapHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* maxHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* heightRange = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* bUseHeightRangeOverride = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetNormalizedHeightmapFromPartWithMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, heightMapWidth, heightMapHeight, minHeight, maxHeight, heightRange, bUseHeightRangeOverride});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetDetailMapFromPart
// Il2CppName: GetDetailMapFromPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ByRef<int>)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetDetailMapFromPart)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* detailResolution = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetDetailMapFromPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, detailResolution});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetHeightmapFromPart
// Il2CppName: GetHeightmapFromPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, int, int, ByRef<::ArrayW<float>>, ByRef<float>, ByRef<float>)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetHeightmapFromPart)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* xLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* yLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->this_arg;
    static auto* minHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* maxHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetHeightmapFromPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, xLength, yLength, geoID, partID, heightValues, minHeight, maxHeight});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::ConvertHeightMapHoudiniToUnity
// Il2CppName: ConvertHeightMapHoudiniToUnity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (*)(int, int, ::ArrayW<float>)>(&HoudiniEngineUnity::HEU_TerrainUtility::ConvertHeightMapHoudiniToUnity)> {
  static const MethodInfo* get() {
    static auto* heightMapWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightMapHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "ConvertHeightMapHoudiniToUnity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{heightMapWidth, heightMapHeight, heightValues});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::ConvertHeightFieldToAlphaMap
// Il2CppName: ConvertHeightFieldToAlphaMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (*)(int, int, System::Collections::Generic::List_1<::ArrayW<float>>*)>(&HoudiniEngineUnity::HEU_TerrainUtility::ConvertHeightFieldToAlphaMap)> {
  static const MethodInfo* get() {
    static auto* heightMapWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightMapHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightFields = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "ConvertHeightFieldToAlphaMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{heightMapWidth, heightMapHeight, heightFields});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::AppendConvertedHeightFieldToAlphaMap
// Il2CppName: AppendConvertedHeightFieldToAlphaMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (*)(int, int, ::ArrayW<float>, System::Collections::Generic::List_1<::ArrayW<float>>*, ::ArrayW<float>, System::Collections::Generic::List_1<int>*)>(&HoudiniEngineUnity::HEU_TerrainUtility::AppendConvertedHeightFieldToAlphaMap)> {
  static const MethodInfo* get() {
    static auto* heightMapWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* heightMapHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* existingAlphaMaps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* heightFields = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)})->byval_arg;
    static auto* strengths = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* alphaMapIndices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "AppendConvertedHeightFieldToAlphaMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{heightMapWidth, heightMapHeight, existingAlphaMaps, heightFields, strengths, alphaMapIndices});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetVolumePositionOffset
// Il2CppName: GetVolumePositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, UnityEngine::Vector3, float, float, int, int, float)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetVolumePositionOffset)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* volumePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* terrainSizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* heightMapSize = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mapWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mapHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetVolumePositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, volumePosition, terrainSizeX, heightMapSize, mapWidth, mapHeight, minHeight});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetTreePrototypeInfosFromPart
// Il2CppName: GetTreePrototypeInfosFromPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo*>* (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetTreePrototypeInfosFromPart)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetTreePrototypeInfosFromPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::PopulateScatterTrees
// Il2CppName: PopulateScatterTrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, int, ByRef<HoudiniEngineUnity::HEU_VolumeScatterTrees*>, bool)>(&HoudiniEngineUnity::HEU_TerrainUtility::PopulateScatterTrees)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scatterTrees = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_VolumeScatterTrees")->this_arg;
    static auto* throwWarningIfNoTileAttribute = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "PopulateScatterTrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, pointCount, scatterTrees, throwWarningIfNoTileAttribute});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::ApplyScatterTrees
// Il2CppName: ApplyScatterTrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::TerrainData*, HoudiniEngineUnity::HEU_VolumeScatterTrees*, int)>(&HoudiniEngineUnity::HEU_TerrainUtility::ApplyScatterTrees)> {
  static const MethodInfo* get() {
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    static auto* scatterTrees = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_VolumeScatterTrees")->byval_arg;
    static auto* tileIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "ApplyScatterTrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrainData, scatterTrees, tileIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::PopulateDetailPrototype
// Il2CppName: PopulateDetailPrototype
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ByRef<HoudiniEngineUnity::HEU_DetailPrototype*>)>(&HoudiniEngineUnity::HEU_TerrainUtility::PopulateDetailPrototype)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* detailPrototype = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_DetailPrototype")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "PopulateDetailPrototype", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, detailPrototype});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::PopulateDetailProperties
// Il2CppName: PopulateDetailProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ByRef<HoudiniEngineUnity::HEU_DetailProperties*>)>(&HoudiniEngineUnity::HEU_TerrainUtility::PopulateDetailProperties)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* detailProperties = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_DetailProperties")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "PopulateDetailProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, detailProperties});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::ApplyDetailLayers
// Il2CppName: ApplyDetailLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Terrain*, UnityEngine::TerrainData*, HoudiniEngineUnity::HEU_DetailProperties*, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_DetailPrototype*>*, System::Collections::Generic::List_1<::ArrayW<int>>*)>(&HoudiniEngineUnity::HEU_TerrainUtility::ApplyDetailLayers)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    static auto* detailProperties = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_DetailProperties")->byval_arg;
    static auto* heuDetailPrototypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_DetailPrototype")})->byval_arg;
    static auto* convertedDetailMaps = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "ApplyDetailLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain, terrainData, detailProperties, heuDetailPrototypes, convertedDetailMaps});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainLayerIndexByName
// Il2CppName: GetTerrainLayerIndexByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, ::ArrayW<UnityEngine::TerrainLayer*>)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainLayerIndexByName)> {
  static const MethodInfo* get() {
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* terrainLayers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainLayer"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetTerrainLayerIndexByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerName, terrainLayers});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainLayerIndex
// Il2CppName: GetTerrainLayerIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::TerrainLayer*, ::ArrayW<UnityEngine::TerrainLayer*>)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainLayerIndex)> {
  static const MethodInfo* get() {
    static auto* layer = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainLayer")->byval_arg;
    static auto* terrainLayers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainLayer"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetTerrainLayerIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layer, terrainLayers});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::VolumeLayerHasAttributes
// Il2CppName: VolumeLayerHasAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int)>(&HoudiniEngineUnity::HEU_TerrainUtility::VolumeLayerHasAttributes)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "VolumeLayerHasAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetHeightfieldLayerType
// Il2CppName: GetHeightfieldLayerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::HFLayerType (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int, ::Il2CppString*)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetHeightfieldLayerType)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* volumeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetHeightfieldLayerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID, volumeName});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetHeightRangeFromHeightfield
// Il2CppName: GetHeightRangeFromHeightfield
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetHeightRangeFromHeightfield)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetHeightRangeFromHeightfield", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainDataExportPathFromHeightfieldAttribute
// Il2CppName: GetTerrainDataExportPathFromHeightfieldAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(HoudiniEngineUnity::HEU_SessionBase*, int, int)>(&HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainDataExportPathFromHeightfieldAttribute)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* geoID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "GetTerrainDataExportPathFromHeightfieldAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, geoID, partID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_TerrainUtility::ResampleData
// Il2CppName: ResampleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (*)(::ArrayW<float>, int, int, int, int)>(&HoudiniEngineUnity::HEU_TerrainUtility::ResampleData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* oldWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* oldHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_TerrainUtility*), "ResampleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, oldWidth, oldHeight, newWidth, newHeight});
  }
};
