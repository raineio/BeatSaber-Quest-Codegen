// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: PreviewDifficultyBeatmap
  class PreviewDifficultyBeatmap;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapSelectionView
  class BeatmapSelectionView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSelectionView*, "", "BeatmapSelectionView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSelectionView
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSelectionView : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelBar*) == 0x8);
    // private TMPro.TextMeshProUGUI _noLevelText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* noLevelText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LevelBar _levelBar
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private TMPro.TextMeshProUGUI _noLevelText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__noLevelText();
    // public System.Void .ctor()
    // Offset: 0x13FBB24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSelectionView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapSelectionView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSelectionView*, creationType>()));
    }
    // public System.Void SetBeatmap(PreviewDifficultyBeatmap beatmapLevel)
    // Offset: 0x13FBA6C
    void SetBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel);
  }; // BeatmapSelectionView
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSelectionView), 32 + sizeof(::TMPro::TextMeshProUGUI*)> __GlobalNamespace_BeatmapSelectionViewSizeCheck;
  static_assert(sizeof(BeatmapSelectionView) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSelectionView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSelectionView::SetBeatmap
// Il2CppName: SetBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapSelectionView::*)(::GlobalNamespace::PreviewDifficultyBeatmap*)>(&GlobalNamespace::BeatmapSelectionView::SetBeatmap)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "PreviewDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSelectionView*), "SetBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
