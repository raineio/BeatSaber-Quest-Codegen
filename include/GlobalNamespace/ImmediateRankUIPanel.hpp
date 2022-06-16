// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
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
  // Forward declaring type: RelativeScoreAndImmediateRankCounter
  class RelativeScoreAndImmediateRankCounter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ImmediateRankUIPanel
  class ImmediateRankUIPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ImmediateRankUIPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImmediateRankUIPanel*, "", "ImmediateRankUIPanel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ImmediateRankUIPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class ImmediateRankUIPanel : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _relativeScoreText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* relativeScoreText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0x10D9CF4
    // private readonly RelativeScoreAndImmediateRankCounter _relativeScoreAndImmediateRankCounter
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::RelativeScoreAndImmediateRankCounter* relativeScoreAndImmediateRankCounter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter*) == 0x8);
    // private System.Text.StringBuilder _stringBuilder
    // Size: 0x8
    // Offset: 0x30
    ::System::Text::StringBuilder* stringBuilder;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Single _prevRelativeScore
    // Size: 0x4
    // Offset: 0x38
    float prevRelativeScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private RankModel/Rank _prevImmediateRank
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::RankModel::Rank prevImmediateRank;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RankModel::Rank) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _rankText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__rankText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _relativeScoreText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__relativeScoreText();
    // Get instance field reference: private readonly RelativeScoreAndImmediateRankCounter _relativeScoreAndImmediateRankCounter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RelativeScoreAndImmediateRankCounter*& dyn__relativeScoreAndImmediateRankCounter();
    // Get instance field reference: private System.Text.StringBuilder _stringBuilder
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn__stringBuilder();
    // Get instance field reference: private System.Single _prevRelativeScore
    [[deprecated("Use field access instead!")]] float& dyn__prevRelativeScore();
    // Get instance field reference: private RankModel/Rank _prevImmediateRank
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RankModel::Rank& dyn__prevImmediateRank();
    // public System.Void .ctor()
    // Offset: 0x1370808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImmediateRankUIPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ImmediateRankUIPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImmediateRankUIPanel*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13705CC
    void Start();
    // private System.Void HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange()
    // Offset: 0x1370804
    void HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange();
    // private System.Void RefreshUI()
    // Offset: 0x1370684
    void RefreshUI();
  }; // ImmediateRankUIPanel
  #pragma pack(pop)
  static check_size<sizeof(ImmediateRankUIPanel), 60 + sizeof(::GlobalNamespace::RankModel::Rank)> __GlobalNamespace_ImmediateRankUIPanelSizeCheck;
  static_assert(sizeof(ImmediateRankUIPanel) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ImmediateRankUIPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ImmediateRankUIPanel::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ImmediateRankUIPanel::*)()>(&GlobalNamespace::ImmediateRankUIPanel::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ImmediateRankUIPanel*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ImmediateRankUIPanel::HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange
// Il2CppName: HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ImmediateRankUIPanel::*)()>(&GlobalNamespace::ImmediateRankUIPanel::HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ImmediateRankUIPanel*), "HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ImmediateRankUIPanel::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ImmediateRankUIPanel::*)()>(&GlobalNamespace::ImmediateRankUIPanel::RefreshUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ImmediateRankUIPanel*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
