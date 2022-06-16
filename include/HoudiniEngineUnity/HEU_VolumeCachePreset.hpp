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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_VolumeLayerPreset
  class HEU_VolumeLayerPreset;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_VolumeCachePreset
  class HEU_VolumeCachePreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VolumeCachePreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VolumeCachePreset*, "HoudiniEngineUnity", "HEU_VolumeCachePreset");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_VolumeCachePreset
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_VolumeCachePreset : public ::Il2CppObject {
    public:
    public:
    // public System.String _objName
    // Size: 0x8
    // Offset: 0x10
    ::StringW objName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String _geoName
    // Size: 0x8
    // Offset: 0x18
    ::StringW geoName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean _uiExpanded
    // Size: 0x1
    // Offset: 0x20
    bool uiExpanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: uiExpanded and: volumeLayersPresets
    char __padding2[0x7] = {};
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_VolumeLayerPreset> _volumeLayersPresets
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>* volumeLayersPresets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x1103EA8
    // public System.String _terrainDataPath
    // Size: 0x8
    // Offset: 0x30
    ::StringW terrainDataPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x1103EE0
    // public System.Int32 _tile
    // Size: 0x4
    // Offset: 0x38
    int tile;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String _objName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__objName();
    // Get instance field reference: public System.String _geoName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__geoName();
    // Get instance field reference: public System.Boolean _uiExpanded
    [[deprecated("Use field access instead!")]] bool& dyn__uiExpanded();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_VolumeLayerPreset> _volumeLayersPresets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayerPreset*>*& dyn__volumeLayersPresets();
    // Get instance field reference: public System.String _terrainDataPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__terrainDataPath();
    // Get instance field reference: public System.Int32 _tile
    [[deprecated("Use field access instead!")]] int& dyn__tile();
    // public System.Void .ctor()
    // Offset: 0x1A0C450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_VolumeCachePreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_VolumeCachePreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_VolumeCachePreset*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_VolumeCachePreset
  #pragma pack(pop)
  static check_size<sizeof(HEU_VolumeCachePreset), 56 + sizeof(int)> __HoudiniEngineUnity_HEU_VolumeCachePresetSizeCheck;
  static_assert(sizeof(HEU_VolumeCachePreset) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_VolumeCachePreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
