// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RelativeSfxVolumePerLevelSO
#include "GlobalNamespace/RelativeSfxVolumePerLevelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelSO
  class PreviewBeatmapLevelSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*, "", "RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair
  // [TokenAttribute] Offset: FFFFFFFF
  class RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair : public ::Il2CppObject {
    public:
    public:
    // private PreviewBeatmapLevelSO _previewLevel
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PreviewBeatmapLevelSO* previewLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PreviewBeatmapLevelSO*) == 0x8);
    // private System.Single _relativeSfxVolume
    // Size: 0x4
    // Offset: 0x18
    float relativeSfxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private PreviewBeatmapLevelSO _previewLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PreviewBeatmapLevelSO*& dyn__previewLevel();
    // Get instance field reference: private System.Single _relativeSfxVolume
    [[deprecated("Use field access instead!")]] float& dyn__relativeSfxVolume();
    // public System.String get_levelId()
    // Offset: 0x14313F8
    ::StringW get_levelId();
    // public System.Single get_relativeSfxVolume()
    // Offset: 0x14314A8
    float get_relativeSfxVolume();
    // public System.Void .ctor()
    // Offset: 0x14314B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*, creationType>()));
    }
  }; // RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair
  #pragma pack(pop)
  static check_size<sizeof(RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair), 24 + sizeof(float)> __GlobalNamespace_RelativeSfxVolumePerLevelSO_RelativeSfxVolumePairSizeCheck;
  static_assert(sizeof(RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair::get_levelId
// Il2CppName: get_levelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair::*)()>(&GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair::get_levelId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*), "get_levelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair::get_relativeSfxVolume
// Il2CppName: get_relativeSfxVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair::*)()>(&GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair::get_relativeSfxVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*), "get_relativeSfxVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
