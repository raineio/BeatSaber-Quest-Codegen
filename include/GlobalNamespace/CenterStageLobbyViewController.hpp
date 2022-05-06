// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapSelectionView
  class BeatmapSelectionView;
  // Forward declaring type: ModifiersSelectionView
  class ModifiersSelectionView;
  // Forward declaring type: ILevelGameplaySetupData
  class ILevelGameplaySetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CenterStageLobbyViewController
  class CenterStageLobbyViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CenterStageLobbyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CenterStageLobbyViewController*, "", "CenterStageLobbyViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: CenterStageLobbyViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class CenterStageLobbyViewController : public ::HMUI::ViewController {
    public:
    public:
    // private BeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::BeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapSelectionView*) == 0x8);
    // private ModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::ModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ModifiersSelectionView*) == 0x8);
    public:
    // Get instance field reference: private BeatmapSelectionView _beatmapSelectionView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapSelectionView*& dyn__beatmapSelectionView();
    // Get instance field reference: private ModifiersSelectionView _modifiersSelectionView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ModifiersSelectionView*& dyn__modifiersSelectionView();
    // public System.Void .ctor()
    // Offset: 0x133BE40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CenterStageLobbyViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CenterStageLobbyViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CenterStageLobbyViewController*, creationType>()));
    }
    // public System.Void SetLevelGameplaySetupData(ILevelGameplaySetupData levelGameplaySetupData)
    // Offset: 0x133BCEC
    void SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);
  }; // CenterStageLobbyViewController
  #pragma pack(pop)
  static check_size<sizeof(CenterStageLobbyViewController), 120 + sizeof(::GlobalNamespace::ModifiersSelectionView*)> __GlobalNamespace_CenterStageLobbyViewControllerSizeCheck;
  static_assert(sizeof(CenterStageLobbyViewController) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CenterStageLobbyViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData
// Il2CppName: SetLevelGameplaySetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageLobbyViewController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(&GlobalNamespace::CenterStageLobbyViewController::SetLevelGameplaySetupData)> {
  static const MethodInfo* get() {
    static auto* levelGameplaySetupData = &::il2cpp_utils::GetClassFromName("", "ILevelGameplaySetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageLobbyViewController*), "SetLevelGameplaySetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelGameplaySetupData});
  }
};
