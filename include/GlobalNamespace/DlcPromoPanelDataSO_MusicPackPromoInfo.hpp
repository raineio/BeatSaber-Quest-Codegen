// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DlcPromoPanelDataSO
#include "GlobalNamespace/DlcPromoPanelDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*, "", "DlcPromoPanelDataSO/MusicPackPromoInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: DlcPromoPanelDataSO/MusicPackPromoInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DlcPromoPanelDataSO::MusicPackPromoInfo : public ::Il2CppObject {
    public:
    public:
    // private PreviewBeatmapLevelPackSO _beatmapLevelPack
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PreviewBeatmapLevelPackSO* beatmapLevelPack;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PreviewBeatmapLevelPackSO*) == 0x8);
    // [NullAllowed] Offset: 0x1131488
    // private BeatmapLevelSO _beatmapLevel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapLevelSO* beatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private UnityEngine.Sprite _bannerImage
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Sprite* bannerImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    public:
    // Get instance field reference: private PreviewBeatmapLevelPackSO _beatmapLevelPack
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PreviewBeatmapLevelPackSO*& dyn__beatmapLevelPack();
    // Get instance field reference: private BeatmapLevelSO _beatmapLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSO*& dyn__beatmapLevel();
    // Get instance field reference: private UnityEngine.Sprite _bannerImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__bannerImage();
    // public IBeatmapLevelPack get_previewBeatmapLevelPack()
    // Offset: 0x14486D8
    ::GlobalNamespace::IBeatmapLevelPack* get_previewBeatmapLevelPack();
    // public IPreviewBeatmapLevel get_previewBeatmapLevel()
    // Offset: 0x14486E0
    ::GlobalNamespace::IPreviewBeatmapLevel* get_previewBeatmapLevel();
    // public UnityEngine.Sprite get_bannerImage()
    // Offset: 0x14486E8
    ::UnityEngine::Sprite* get_bannerImage();
    // public System.Void .ctor()
    // Offset: 0x14486F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DlcPromoPanelDataSO::MusicPackPromoInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DlcPromoPanelDataSO::MusicPackPromoInfo*, creationType>()));
    }
  }; // DlcPromoPanelDataSO/MusicPackPromoInfo
  #pragma pack(pop)
  static check_size<sizeof(DlcPromoPanelDataSO::MusicPackPromoInfo), 32 + sizeof(::UnityEngine::Sprite*)> __GlobalNamespace_DlcPromoPanelDataSO_MusicPackPromoInfoSizeCheck;
  static_assert(sizeof(DlcPromoPanelDataSO::MusicPackPromoInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::get_previewBeatmapLevelPack
// Il2CppName: get_previewBeatmapLevelPack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPack* (GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::*)()>(&GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::get_previewBeatmapLevelPack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*), "get_previewBeatmapLevelPack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::get_previewBeatmapLevel
// Il2CppName: get_previewBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel* (GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::*)()>(&GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::get_previewBeatmapLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*), "get_previewBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::get_bannerImage
// Il2CppName: get_bannerImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::*)()>(&GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::get_bannerImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*), "get_bannerImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
