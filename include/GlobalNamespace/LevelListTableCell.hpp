// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelListTableCell
  class LevelListTableCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LevelListTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelListTableCell*, "", "LevelListTableCell");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF0
  #pragma pack(push, 1)
  // Autogenerated type: LevelListTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelListTableCell : public HMUI::TableCell {
    public:
    // Nested type: GlobalNamespace::LevelListTableCell::$SetDataFromLevelAsync$d__17
    struct $SetDataFromLevelAsync$d__17;
    // Nested type: GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22
    struct $RefreshAvailabilityAsync$d__22;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Image _backgroundImage
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::UI::Image* backgroundImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // [SpaceAttribute] Offset: 0xF41F34
    // private UnityEngine.UI.Image _coverImage
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private TMPro.TextMeshProUGUI _songNameText
    // Size: 0x8
    // Offset: 0x68
    TMPro::TextMeshProUGUI* songNameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _songAuthorText
    // Size: 0x8
    // Offset: 0x70
    TMPro::TextMeshProUGUI* songAuthorText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _favoritesBadgeImage
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Image* favoritesBadgeImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private TMPro.TextMeshProUGUI _songDurationText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* songDurationText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _songBpmText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* songBpmText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xF41FBC
    // private UnityEngine.Color _highlightBackgroundColor
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Color highlightBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedBackgroundColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color selectedBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedAndHighlightedBackgroundColor
    // Size: 0x10
    // Offset: 0xB0
    UnityEngine::Color selectedAndHighlightedBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _notOwnedAlpha
    // Size: 0x4
    // Offset: 0xC0
    float notOwnedAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: notOwnedAlpha and: refreshingAvailabilityCancellationTokenSource
    char __padding11[0x4] = {};
    // private System.Threading.CancellationTokenSource _refreshingAvailabilityCancellationTokenSource
    // Size: 0x8
    // Offset: 0xC8
    System::Threading::CancellationTokenSource* refreshingAvailabilityCancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private System.Threading.CancellationTokenSource _settingDataCancellationTokenSource
    // Size: 0x8
    // Offset: 0xD0
    System::Threading::CancellationTokenSource* settingDataCancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private System.Boolean _notOwned
    // Size: 0x1
    // Offset: 0xD8
    bool notOwned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: notOwned and: refreshingAvailabilityLevelID
    char __padding14[0x7] = {};
    // private System.String _refreshingAvailabilityLevelID
    // Size: 0x8
    // Offset: 0xE0
    ::StringW refreshingAvailabilityLevelID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _settingDataFromLevelId
    // Size: 0x8
    // Offset: 0xE8
    ::StringW settingDataFromLevelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Image _backgroundImage
    UnityEngine::UI::Image*& dyn__backgroundImage();
    // Get instance field reference: private UnityEngine.CanvasGroup _canvasGroup
    UnityEngine::CanvasGroup*& dyn__canvasGroup();
    // Get instance field reference: private UnityEngine.UI.Image _coverImage
    UnityEngine::UI::Image*& dyn__coverImage();
    // Get instance field reference: private TMPro.TextMeshProUGUI _songNameText
    TMPro::TextMeshProUGUI*& dyn__songNameText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _songAuthorText
    TMPro::TextMeshProUGUI*& dyn__songAuthorText();
    // Get instance field reference: private UnityEngine.UI.Image _favoritesBadgeImage
    UnityEngine::UI::Image*& dyn__favoritesBadgeImage();
    // Get instance field reference: private TMPro.TextMeshProUGUI _songDurationText
    TMPro::TextMeshProUGUI*& dyn__songDurationText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _songBpmText
    TMPro::TextMeshProUGUI*& dyn__songBpmText();
    // Get instance field reference: private UnityEngine.Color _highlightBackgroundColor
    UnityEngine::Color& dyn__highlightBackgroundColor();
    // Get instance field reference: private UnityEngine.Color _selectedBackgroundColor
    UnityEngine::Color& dyn__selectedBackgroundColor();
    // Get instance field reference: private UnityEngine.Color _selectedAndHighlightedBackgroundColor
    UnityEngine::Color& dyn__selectedAndHighlightedBackgroundColor();
    // Get instance field reference: private System.Single _notOwnedAlpha
    float& dyn__notOwnedAlpha();
    // Get instance field reference: private System.Threading.CancellationTokenSource _refreshingAvailabilityCancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__refreshingAvailabilityCancellationTokenSource();
    // Get instance field reference: private System.Threading.CancellationTokenSource _settingDataCancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__settingDataCancellationTokenSource();
    // Get instance field reference: private System.Boolean _notOwned
    bool& dyn__notOwned();
    // Get instance field reference: private System.String _refreshingAvailabilityLevelID
    ::StringW& dyn__refreshingAvailabilityLevelID();
    // Get instance field reference: private System.String _settingDataFromLevelId
    ::StringW& dyn__settingDataFromLevelId();
    // public System.Void SetDataFromLevelAsync(IPreviewBeatmapLevel level, System.Boolean isFavorite)
    // Offset: 0x12F9828
    void SetDataFromLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* level, bool isFavorite);
    // private System.Void RefreshVisuals()
    // Offset: 0x12F9900
    void RefreshVisuals();
    // public System.Void RefreshAvailabilityAsync(AdditionalContentModel contentModel, System.String levelID)
    // Offset: 0x12F9A1C
    void RefreshAvailabilityAsync(GlobalNamespace::AdditionalContentModel* contentModel, ::StringW levelID);
    // public System.Void CancelAsyncOperations()
    // Offset: 0x12F99D8
    void CancelAsyncOperations();
    // public System.Void .ctor()
    // Offset: 0x12F9AEC
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelListTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelListTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelListTableCell*, creationType>()));
    }
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x12F98FC
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x12F99D0
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void WasPreparedForReuse()
    // Offset: 0x12F99D4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::WasPreparedForReuse()
    void WasPreparedForReuse();
  }; // LevelListTableCell
  #pragma pack(pop)
  static check_size<sizeof(LevelListTableCell), 232 + sizeof(::StringW)> __GlobalNamespace_LevelListTableCellSizeCheck;
  static_assert(sizeof(LevelListTableCell) == 0xF0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::SetDataFromLevelAsync
// Il2CppName: SetDataFromLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::*)(GlobalNamespace::IPreviewBeatmapLevel*, bool)>(&GlobalNamespace::LevelListTableCell::SetDataFromLevelAsync)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* isFavorite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell*), "SetDataFromLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, isFavorite});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::*)()>(&GlobalNamespace::LevelListTableCell::RefreshVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::RefreshAvailabilityAsync
// Il2CppName: RefreshAvailabilityAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::*)(GlobalNamespace::AdditionalContentModel*, ::StringW)>(&GlobalNamespace::LevelListTableCell::RefreshAvailabilityAsync)> {
  static const MethodInfo* get() {
    static auto* contentModel = &::il2cpp_utils::GetClassFromName("", "AdditionalContentModel")->byval_arg;
    static auto* levelID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell*), "RefreshAvailabilityAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contentModel, levelID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::CancelAsyncOperations
// Il2CppName: CancelAsyncOperations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::*)()>(&GlobalNamespace::LevelListTableCell::CancelAsyncOperations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell*), "CancelAsyncOperations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::LevelListTableCell::SelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::LevelListTableCell::HighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::WasPreparedForReuse
// Il2CppName: WasPreparedForReuse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::*)()>(&GlobalNamespace::LevelListTableCell::WasPreparedForReuse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell*), "WasPreparedForReuse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
