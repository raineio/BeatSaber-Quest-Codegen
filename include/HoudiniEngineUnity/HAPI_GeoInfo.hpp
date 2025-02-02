// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.HAPI_GeoType
#include "HoudiniEngineUnity/HAPI_GeoType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_GroupType
  struct HAPI_GroupType;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_GeoInfo
  struct HAPI_GeoInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_GeoInfo, "HoudiniEngineUnity", "HAPI_GeoInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_GeoInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_GeoInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public HoudiniEngineUnity.HAPI_GeoType type
    // Size: 0x4
    // Offset: 0x0
    ::HoudiniEngineUnity::HAPI_GeoType type;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_GeoType) == 0x4);
    // public System.Int32 nameSH
    // Size: 0x4
    // Offset: 0x4
    int nameSH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 nodeId
    // Size: 0x4
    // Offset: 0x8
    int nodeId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isEditable
    // Size: 0x1
    // Offset: 0xC
    bool isEditable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isTemplated
    // Size: 0x1
    // Offset: 0xD
    bool isTemplated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isDisplayGeo
    // Size: 0x1
    // Offset: 0xE
    bool isDisplayGeo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasGeoChanged
    // Size: 0x1
    // Offset: 0xF
    bool hasGeoChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasMaterialChanged
    // Size: 0x1
    // Offset: 0x10
    bool hasMaterialChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasMaterialChanged and: pointGroupCount
    char __padding7[0x3] = {};
    // public System.Int32 pointGroupCount
    // Size: 0x4
    // Offset: 0x14
    int pointGroupCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 primitiveGroupCount
    // Size: 0x4
    // Offset: 0x18
    int primitiveGroupCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 edgeGroupCount
    // Size: 0x4
    // Offset: 0x1C
    int edgeGroupCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 partCount
    // Size: 0x4
    // Offset: 0x20
    int partCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_GeoInfo
    constexpr HAPI_GeoInfo(::HoudiniEngineUnity::HAPI_GeoType type_ = {}, int nameSH_ = {}, int nodeId_ = {}, bool isEditable_ = {}, bool isTemplated_ = {}, bool isDisplayGeo_ = {}, bool hasGeoChanged_ = {}, bool hasMaterialChanged_ = {}, int pointGroupCount_ = {}, int primitiveGroupCount_ = {}, int edgeGroupCount_ = {}, int partCount_ = {}) noexcept : type{type_}, nameSH{nameSH_}, nodeId{nodeId_}, isEditable{isEditable_}, isTemplated{isTemplated_}, isDisplayGeo{isDisplayGeo_}, hasGeoChanged{hasGeoChanged_}, hasMaterialChanged{hasMaterialChanged_}, pointGroupCount{pointGroupCount_}, primitiveGroupCount{primitiveGroupCount_}, edgeGroupCount{edgeGroupCount_}, partCount{partCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_GeoType type
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_GeoType& dyn_type();
    // Get instance field reference: public System.Int32 nameSH
    [[deprecated("Use field access instead!")]] int& dyn_nameSH();
    // Get instance field reference: public System.Int32 nodeId
    [[deprecated("Use field access instead!")]] int& dyn_nodeId();
    // Get instance field reference: public System.Boolean isEditable
    [[deprecated("Use field access instead!")]] bool& dyn_isEditable();
    // Get instance field reference: public System.Boolean isTemplated
    [[deprecated("Use field access instead!")]] bool& dyn_isTemplated();
    // Get instance field reference: public System.Boolean isDisplayGeo
    [[deprecated("Use field access instead!")]] bool& dyn_isDisplayGeo();
    // Get instance field reference: public System.Boolean hasGeoChanged
    [[deprecated("Use field access instead!")]] bool& dyn_hasGeoChanged();
    // Get instance field reference: public System.Boolean hasMaterialChanged
    [[deprecated("Use field access instead!")]] bool& dyn_hasMaterialChanged();
    // Get instance field reference: public System.Int32 pointGroupCount
    [[deprecated("Use field access instead!")]] int& dyn_pointGroupCount();
    // Get instance field reference: public System.Int32 primitiveGroupCount
    [[deprecated("Use field access instead!")]] int& dyn_primitiveGroupCount();
    // Get instance field reference: public System.Int32 edgeGroupCount
    [[deprecated("Use field access instead!")]] int& dyn_edgeGroupCount();
    // Get instance field reference: public System.Int32 partCount
    [[deprecated("Use field access instead!")]] int& dyn_partCount();
    // public System.Int32 getGroupCountByType(HoudiniEngineUnity.HAPI_GroupType type)
    // Offset: 0x17340F8
    int getGroupCountByType(::HoudiniEngineUnity::HAPI_GroupType type);
  }; // HoudiniEngineUnity.HAPI_GeoInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_GeoInfo), 32 + sizeof(int)> __HoudiniEngineUnity_HAPI_GeoInfoSizeCheck;
  static_assert(sizeof(HAPI_GeoInfo) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_GeoInfo::getGroupCountByType
// Il2CppName: getGroupCountByType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HoudiniEngineUnity::HAPI_GeoInfo::*)(::HoudiniEngineUnity::HAPI_GroupType)>(&HoudiniEngineUnity::HAPI_GeoInfo::getGroupCountByType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_GroupType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_GeoInfo), "getGroupCountByType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
