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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: PlayerData
  class PlayerData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelStatsView
  class LevelStatsView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelStatsView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelStatsView*, "", "LevelStatsView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LevelStatsView
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelStatsView : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI _highScoreText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* highScoreText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _maxComboText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* maxComboText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _maxRankText
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshProUGUI* maxRankText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _highScoreText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__highScoreText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _maxComboText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__maxComboText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _maxRankText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__maxRankText();
    // public System.Void .ctor()
    // Offset: 0x151B74C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelStatsView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelStatsView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelStatsView*, creationType>()));
    }
    // public System.Void Hide()
    // Offset: 0x151B380
    void Hide();
    // public System.Void ShowStats(IDifficultyBeatmap difficultyBeatmap, PlayerData playerData)
    // Offset: 0x151B3A8
    void ShowStats(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::PlayerData* playerData);
  }; // LevelStatsView
  #pragma pack(pop)
  static check_size<sizeof(LevelStatsView), 40 + sizeof(::TMPro::TextMeshProUGUI*)> __GlobalNamespace_LevelStatsViewSizeCheck;
  static_assert(sizeof(LevelStatsView) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelStatsView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelStatsView::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelStatsView::*)()>(&GlobalNamespace::LevelStatsView::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelStatsView*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelStatsView::ShowStats
// Il2CppName: ShowStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelStatsView::*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::PlayerData*)>(&GlobalNamespace::LevelStatsView::ShowStats)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("", "PlayerData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelStatsView*), "ShowStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap, playerData});
  }
};
