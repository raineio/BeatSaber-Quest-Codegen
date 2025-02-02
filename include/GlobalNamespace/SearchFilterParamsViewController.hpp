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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicsDropdown
  class BeatmapCharacteristicsDropdown;
  // Forward declaring type: BeatmapDifficultyDropdown
  class BeatmapDifficultyDropdown;
  // Forward declaring type: SongPacksDropdown
  class SongPacksDropdown;
  // Forward declaring type: FormattedFloatListSettingsController
  class FormattedFloatListSettingsController;
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SearchFilterParamsViewController
  class SearchFilterParamsViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SearchFilterParamsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SearchFilterParamsViewController*, "", "SearchFilterParamsViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF0
  #pragma pack(push, 1)
  // Autogenerated type: SearchFilterParamsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class SearchFilterParamsViewController : public ::HMUI::ViewController {
    public:
    public:
    // private UnityEngine.UI.Toggle _filterByOwnedToggle
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Toggle* filterByOwnedToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByNotOwnedToggle
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Toggle* filterByNotOwnedToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByCharacteristicToggle
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Toggle* filterByCharacteristicToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private BeatmapCharacteristicsDropdown _beatmapCharacteristicsDropdown
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::BeatmapCharacteristicsDropdown* beatmapCharacteristicsDropdown;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicsDropdown*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByDifficultyToggle
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::UI::Toggle* filterByDifficultyToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::BeatmapDifficultyDropdown* beatmapDifficultyDropdown;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficultyDropdown*) == 0x8);
    // private UnityEngine.UI.Toggle _filterBySongPacksToggle
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UI::Toggle* filterBySongPacksToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private SongPacksDropdown _songPacksDropdown
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::SongPacksDropdown* songPacksDropdown;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongPacksDropdown*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByNotPlayedYetToggle
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::UI::Toggle* filterByNotPlayedYetToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByMinBpmToggle
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::UI::Toggle* filterByMinBpmToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private FormattedFloatListSettingsController _minBpmController
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::FormattedFloatListSettingsController* minBpmController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FormattedFloatListSettingsController*) == 0x8);
    // private UnityEngine.UI.Toggle _filterByMaxBpmToggle
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::UI::Toggle* filterByMaxBpmToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private FormattedFloatListSettingsController _maxBpmController
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::FormattedFloatListSettingsController* maxBpmController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FormattedFloatListSettingsController*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private LevelFilterParams _currentLevelFilterParams
    // Size: 0x8
    // Offset: 0xE0
    ::GlobalNamespace::LevelFilterParams* currentLevelFilterParams;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelFilterParams*) == 0x8);
    // private System.Action`2<SearchFilterParamsViewController,LevelFilterParams> didFinishEvent
    // Size: 0x8
    // Offset: 0xE8
    ::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilterParams*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilterParams*>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByOwnedToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__filterByOwnedToggle();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByNotOwnedToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__filterByNotOwnedToggle();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByCharacteristicToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__filterByCharacteristicToggle();
    // Get instance field reference: private BeatmapCharacteristicsDropdown _beatmapCharacteristicsDropdown
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicsDropdown*& dyn__beatmapCharacteristicsDropdown();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByDifficultyToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__filterByDifficultyToggle();
    // Get instance field reference: private BeatmapDifficultyDropdown _beatmapDifficultyDropdown
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficultyDropdown*& dyn__beatmapDifficultyDropdown();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterBySongPacksToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__filterBySongPacksToggle();
    // Get instance field reference: private SongPacksDropdown _songPacksDropdown
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongPacksDropdown*& dyn__songPacksDropdown();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByNotPlayedYetToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__filterByNotPlayedYetToggle();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByMinBpmToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__filterByMinBpmToggle();
    // Get instance field reference: private FormattedFloatListSettingsController _minBpmController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FormattedFloatListSettingsController*& dyn__minBpmController();
    // Get instance field reference: private UnityEngine.UI.Toggle _filterByMaxBpmToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__filterByMaxBpmToggle();
    // Get instance field reference: private FormattedFloatListSettingsController _maxBpmController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FormattedFloatListSettingsController*& dyn__maxBpmController();
    // Get instance field reference: private UnityEngine.UI.Button _okButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__okButton();
    // Get instance field reference: private LevelFilterParams _currentLevelFilterParams
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelFilterParams*& dyn__currentLevelFilterParams();
    // Get instance field reference: private System.Action`2<SearchFilterParamsViewController,LevelFilterParams> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilterParams*>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<SearchFilterParamsViewController,LevelFilterParams> value)
    // Offset: 0x1417BA4
    void add_didFinishEvent(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilterParams*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<SearchFilterParamsViewController,LevelFilterParams> value)
    // Offset: 0x1417C48
    void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilterParams*>* value);
    // public System.Void .ctor()
    // Offset: 0x1418610
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchFilterParamsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SearchFilterParamsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchFilterParamsViewController*, creationType>()));
    }
    // public System.Void Setup(LevelFilterParams levelFilterParams)
    // Offset: 0x1417CEC
    void Setup(::GlobalNamespace::LevelFilterParams* levelFilterParams);
    // private System.Void OkButtonPressed()
    // Offset: 0x1418250
    void OkButtonPressed();
    // private System.Void MinBpmControllerValueDidChange(FormattedFloatListSettingsController minBpmController, System.Single value)
    // Offset: 0x1418490
    void MinBpmControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* minBpmController, float value);
    // private System.Void MaxBpmControllerValueDidChange(FormattedFloatListSettingsController maxBpmController, System.Single value)
    // Offset: 0x1418528
    void MaxBpmControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* maxBpmController, float value);
    // private System.Void HandleFilterByOwnedValueValueChanged(System.Boolean isOn)
    // Offset: 0x14185C0
    void HandleFilterByOwnedValueValueChanged(bool isOn);
    // private System.Void HandleFilterByNotOwnedValueValueChanged(System.Boolean isOn)
    // Offset: 0x14185E8
    void HandleFilterByNotOwnedValueValueChanged(bool isOn);
    // private System.Void Refresh(LevelFilterParams levelFilterParams)
    // Offset: 0x1417CF4
    void Refresh(::GlobalNamespace::LevelFilterParams* levelFilterParams);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1417EAC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x14180BC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // SearchFilterParamsViewController
  #pragma pack(pop)
  static check_size<sizeof(SearchFilterParamsViewController), 232 + sizeof(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilterParams*>*)> __GlobalNamespace_SearchFilterParamsViewControllerSizeCheck;
  static_assert(sizeof(SearchFilterParamsViewController) == 0xF0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilterParams*>*)>(&GlobalNamespace::SearchFilterParamsViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SearchFilterParamsViewController"), ::il2cpp_utils::GetClassFromName("", "LevelFilterParams")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(::System::Action_2<::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilterParams*>*)>(&GlobalNamespace::SearchFilterParamsViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SearchFilterParamsViewController"), ::il2cpp_utils::GetClassFromName("", "LevelFilterParams")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(::GlobalNamespace::LevelFilterParams*)>(&GlobalNamespace::SearchFilterParamsViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* levelFilterParams = &::il2cpp_utils::GetClassFromName("", "LevelFilterParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelFilterParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::OkButtonPressed
// Il2CppName: OkButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)()>(&GlobalNamespace::SearchFilterParamsViewController::OkButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "OkButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::MinBpmControllerValueDidChange
// Il2CppName: MinBpmControllerValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float)>(&GlobalNamespace::SearchFilterParamsViewController::MinBpmControllerValueDidChange)> {
  static const MethodInfo* get() {
    static auto* minBpmController = &::il2cpp_utils::GetClassFromName("", "FormattedFloatListSettingsController")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "MinBpmControllerValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minBpmController, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::MaxBpmControllerValueDidChange
// Il2CppName: MaxBpmControllerValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float)>(&GlobalNamespace::SearchFilterParamsViewController::MaxBpmControllerValueDidChange)> {
  static const MethodInfo* get() {
    static auto* maxBpmController = &::il2cpp_utils::GetClassFromName("", "FormattedFloatListSettingsController")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "MaxBpmControllerValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxBpmController, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::HandleFilterByOwnedValueValueChanged
// Il2CppName: HandleFilterByOwnedValueValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(bool)>(&GlobalNamespace::SearchFilterParamsViewController::HandleFilterByOwnedValueValueChanged)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "HandleFilterByOwnedValueValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::HandleFilterByNotOwnedValueValueChanged
// Il2CppName: HandleFilterByNotOwnedValueValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(bool)>(&GlobalNamespace::SearchFilterParamsViewController::HandleFilterByNotOwnedValueValueChanged)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "HandleFilterByNotOwnedValueValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(::GlobalNamespace::LevelFilterParams*)>(&GlobalNamespace::SearchFilterParamsViewController::Refresh)> {
  static const MethodInfo* get() {
    static auto* levelFilterParams = &::il2cpp_utils::GetClassFromName("", "LevelFilterParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelFilterParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(bool, bool, bool)>(&GlobalNamespace::SearchFilterParamsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SearchFilterParamsViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SearchFilterParamsViewController::*)(bool, bool)>(&GlobalNamespace::SearchFilterParamsViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SearchFilterParamsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
