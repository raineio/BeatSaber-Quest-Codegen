// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_VolumeLayerPreset
  class HEU_VolumeLayerPreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HoudiniEngineUnity::HEU_VolumeLayerPreset);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_VolumeLayerPreset*, "HoudiniEngineUnity", "HEU_VolumeLayerPreset");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_VolumeLayerPreset
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_VolumeLayerPreset : public ::Il2CppObject {
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
    // public System.String _layerName
    // Size: 0x8
    // Offset: 0x10
    ::StringW layerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single _strength
    // Size: 0x4
    // Offset: 0x18
    float strength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean _uiExpanded
    // Size: 0x1
    // Offset: 0x1C
    bool uiExpanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: uiExpanded and: tile
    char __padding2[0x3] = {};
    // [OptionalFieldAttribute] Offset: 0xF66258
    // public System.Int32 _tile
    // Size: 0x4
    // Offset: 0x20
    int tile;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String _layerName
    ::StringW& dyn__layerName();
    // Get instance field reference: public System.Single _strength
    float& dyn__strength();
    // Get instance field reference: public System.Boolean _uiExpanded
    bool& dyn__uiExpanded();
    // Get instance field reference: public System.Int32 _tile
    int& dyn__tile();
    // public System.Void .ctor()
    // Offset: 0x178598C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_VolumeLayerPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_VolumeLayerPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_VolumeLayerPreset*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_VolumeLayerPreset
  #pragma pack(pop)
  static check_size<sizeof(HEU_VolumeLayerPreset), 32 + sizeof(int)> __HoudiniEngineUnity_HEU_VolumeLayerPresetSizeCheck;
  static_assert(sizeof(HEU_VolumeLayerPreset) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_VolumeLayerPreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
