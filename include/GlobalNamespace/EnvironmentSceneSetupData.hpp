// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentSceneSetupData
  class EnvironmentSceneSetupData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSceneSetupData*, "", "EnvironmentSceneSetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentSceneSetupData : public ::GlobalNamespace::SceneSetupData {
    public:
    public:
    // public readonly System.Boolean hideBranding
    // Size: 0x1
    // Offset: 0x10
    bool hideBranding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideBranding and: environmentInfo
    char __padding0[0x7] = {};
    // public readonly EnvironmentInfoSO environmentInfo
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Boolean hideBranding
    [[deprecated("Use field access instead!")]] bool& dyn_hideBranding();
    // Get instance field reference: public readonly EnvironmentInfoSO environmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn_environmentInfo();
    // Get instance field reference: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // public System.Void .ctor(EnvironmentInfoSO environmentInfo, IPreviewBeatmapLevel previewBeatmapLevel, System.Boolean hideBranding)
    // Offset: 0x1394E5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentSceneSetupData* New_ctor(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, bool hideBranding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentSceneSetupData*, creationType>(environmentInfo, previewBeatmapLevel, hideBranding)));
    }
  }; // EnvironmentSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentSceneSetupData), 32 + sizeof(::GlobalNamespace::IPreviewBeatmapLevel*)> __GlobalNamespace_EnvironmentSceneSetupDataSizeCheck;
  static_assert(sizeof(EnvironmentSceneSetupData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
