// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightmapLightWithIds
#include "GlobalNamespace/LightmapLightWithIds.hpp"
// Including type: LightWithIds/LightWithId
#include "GlobalNamespace/LightWithIds_LightWithId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId*, "", "LightmapLightWithIds/LightIntensitiesWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightmapLightWithIds/LightIntensitiesWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmapLightWithIds::LightIntensitiesWithId : public ::GlobalNamespace::LightWithIds::LightWithId {
    public:
    public:
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x30
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _probeHighlightsIntensityMultiplier
    // Size: 0x4
    // Offset: 0x34
    float probeHighlightsIntensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _intensity
    [[deprecated("Use field access instead!")]] float& dyn__intensity();
    // Get instance field reference: private System.Single _probeHighlightsIntensityMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__probeHighlightsIntensityMultiplier();
    // public System.Single get_intensity()
    // Offset: 0x1CD9F9C
    float get_intensity();
    // public System.Single get_probeHighlightsIntensityMultiplier()
    // Offset: 0x1CD9FA4
    float get_probeHighlightsIntensityMultiplier();
    // public System.Void .ctor(System.Int32 lightId, System.Single lightIntensity, System.Single probeMultiplier)
    // Offset: 0x1CD9FAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapLightWithIds::LightIntensitiesWithId* New_ctor(int lightId, float lightIntensity, float probeMultiplier) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapLightWithIds::LightIntensitiesWithId*, creationType>(lightId, lightIntensity, probeMultiplier)));
    }
  }; // LightmapLightWithIds/LightIntensitiesWithId
  #pragma pack(pop)
  static check_size<sizeof(LightmapLightWithIds::LightIntensitiesWithId), 52 + sizeof(float)> __GlobalNamespace_LightmapLightWithIds_LightIntensitiesWithIdSizeCheck;
  static_assert(sizeof(LightmapLightWithIds::LightIntensitiesWithId) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId::*)()>(&GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId::get_intensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier
// Il2CppName: get_probeHighlightsIntensityMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId::*)()>(&GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId*), "get_probeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIds::LightIntensitiesWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
