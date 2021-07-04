// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightmapLightWithIds
#include "GlobalNamespace/LightmapLightWithIds.hpp"
// Including type: LightWithIds/LightData
#include "GlobalNamespace/LightWithIds_LightData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: LightmapLightWithIds/LightIntensitiesData
  class LightmapLightWithIds::LightIntensitiesData : public GlobalNamespace::LightWithIds::LightData {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x28
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _weight
    // Size: 0x4
    // Offset: 0x2C
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lightmapLightIdColorPropertyId
    // Size: 0x4
    // Offset: 0x30
    int lightmapLightIdColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _lightProbeLightIdColorPropertyId
    // Size: 0x4
    // Offset: 0x34
    int lightProbeLightIdColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _initializedPropertyIds
    // Size: 0x1
    // Offset: 0x38
    bool initializedPropertyIds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LightIntensitiesData
    LightIntensitiesData(float intensity_ = {}, float weight_ = {}, int lightmapLightIdColorPropertyId_ = {}, int lightProbeLightIdColorPropertyId_ = {}, bool initializedPropertyIds_ = {}) noexcept : intensity{intensity_}, weight{weight_}, lightmapLightIdColorPropertyId{lightmapLightIdColorPropertyId_}, lightProbeLightIdColorPropertyId{lightProbeLightIdColorPropertyId_}, initializedPropertyIds{initializedPropertyIds_} {}
    // public System.Single get_intensity()
    // Offset: 0x1D8E048
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x1D8E050
    void set_intensity(float value);
    // public System.Single get_weight()
    // Offset: 0x1D8E058
    float get_weight();
    // public System.Void set_weight(System.Single value)
    // Offset: 0x1D8E060
    void set_weight(float value);
    // public System.Void SetDataToShaders(UnityEngine.Color lightmapColor, UnityEngine.Color probeColor)
    // Offset: 0x1D8DED4
    void SetDataToShaders(UnityEngine::Color lightmapColor, UnityEngine::Color probeColor);
    // protected override UnityEngine.Color ProcessColor(UnityEngine.Color newColor)
    // Offset: 0x1D8E068
    // Implemented from: LightWithIds/LightData
    // Base method: UnityEngine.Color LightData::ProcessColor(UnityEngine.Color newColor)
    UnityEngine::Color ProcessColor(UnityEngine::Color newColor);
    // public System.Void .ctor()
    // Offset: 0x1D8E06C
    // Implemented from: LightWithIds/LightData
    // Base method: System.Void LightData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapLightWithIds::LightIntensitiesData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapLightWithIds::LightIntensitiesData*, creationType>()));
    }
  }; // LightmapLightWithIds/LightIntensitiesData
  #pragma pack(pop)
  static check_size<sizeof(LightmapLightWithIds::LightIntensitiesData), 56 + sizeof(bool)> __GlobalNamespace_LightmapLightWithIds_LightIntensitiesDataSizeCheck;
  static_assert(sizeof(LightmapLightWithIds::LightIntensitiesData) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*, "", "LightmapLightWithIds/LightIntensitiesData");
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::*)()>(&GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::get_intensity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::set_intensity
// Il2CppName: set_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::*)(float)>(&GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::set_intensity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*), "set_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::get_weight
// Il2CppName: get_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::*)()>(&GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::get_weight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*), "get_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::set_weight
// Il2CppName: set_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::*)(float)>(&GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::set_weight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*), "set_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::SetDataToShaders
// Il2CppName: SetDataToShaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::*)(UnityEngine::Color, UnityEngine::Color)>(&GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::SetDataToShaders)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*), "SetDataToShaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::ProcessColor
// Il2CppName: ProcessColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::*)(UnityEngine::Color)>(&GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::ProcessColor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds::LightIntensitiesData*), "ProcessColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
