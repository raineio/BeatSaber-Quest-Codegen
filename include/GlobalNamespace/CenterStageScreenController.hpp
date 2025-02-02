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
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: BeatmapSelectionView
  class BeatmapSelectionView;
  // Forward declaring type: ModifiersSelectionView
  class ModifiersSelectionView;
  // Forward declaring type: CountdownController
  class CountdownController;
  // Forward declaring type: MultiplayerLobbyCenterScreenLayoutAnimator
  class MultiplayerLobbyCenterScreenLayoutAnimator;
  // Forward declaring type: ILobbyGameStateController
  class ILobbyGameStateController;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ILevelGameplaySetupData
  class ILevelGameplaySetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CenterStageScreenController
  class CenterStageScreenController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CenterStageScreenController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CenterStageScreenController*, "", "CenterStageScreenController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: CenterStageScreenController
  // [TokenAttribute] Offset: FFFFFFFF
  class CenterStageScreenController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // protected MenuLightsPresetSO _defaultMenuLightsPreset
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MenuLightsPresetSO* defaultMenuLightsPreset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // protected MenuLightsPresetSO _lobbyLightsPreset
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MenuLightsPresetSO* lobbyLightsPreset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // protected MenuLightsPresetSO _countdownMenuLightsPreset
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MenuLightsPresetSO* countdownMenuLightsPreset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x112B494
    // private BeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapSelectionView*) == 0x8);
    // private ModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ModifiersSelectionView*) == 0x8);
    // [SpaceAttribute] Offset: 0x112B4DC
    // private CountdownController _countdownController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::CountdownController* countdownController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CountdownController*) == 0x8);
    // private MultiplayerLobbyCenterScreenLayoutAnimator _multiplayerLobbyCenterScreenLayoutAnimator
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* multiplayerLobbyCenterScreenLayoutAnimator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0x112B524
    // private readonly ILobbyGameStateController _lobbyGameStateController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::ILobbyGameStateController* lobbyGameStateController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILobbyGameStateController*) == 0x8);
    // [InjectAttribute] Offset: 0x112B534
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuLightsManager*) == 0x8);
    // private System.Boolean <countdownShown>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool countdownShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: countdownShown and: countdownEndTime
    char __padding9[0x3] = {};
    // private System.Single _countdownEndTime
    // Size: 0x4
    // Offset: 0x64
    float countdownEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected MenuLightsPresetSO _defaultMenuLightsPreset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuLightsPresetSO*& dyn__defaultMenuLightsPreset();
    // Get instance field reference: protected MenuLightsPresetSO _lobbyLightsPreset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuLightsPresetSO*& dyn__lobbyLightsPreset();
    // Get instance field reference: protected MenuLightsPresetSO _countdownMenuLightsPreset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuLightsPresetSO*& dyn__countdownMenuLightsPreset();
    // Get instance field reference: private BeatmapSelectionView _beatmapSelectionView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapSelectionView*& dyn__beatmapSelectionView();
    // Get instance field reference: private ModifiersSelectionView _modifiersSelectionView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ModifiersSelectionView*& dyn__modifiersSelectionView();
    // Get instance field reference: private CountdownController _countdownController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CountdownController*& dyn__countdownController();
    // Get instance field reference: private MultiplayerLobbyCenterScreenLayoutAnimator _multiplayerLobbyCenterScreenLayoutAnimator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*& dyn__multiplayerLobbyCenterScreenLayoutAnimator();
    // Get instance field reference: private readonly ILobbyGameStateController _lobbyGameStateController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ILobbyGameStateController*& dyn__lobbyGameStateController();
    // Get instance field reference: private readonly MenuLightsManager _menuLightsManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuLightsManager*& dyn__menuLightsManager();
    // Get instance field reference: private System.Boolean <countdownShown>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$countdownShown$k__BackingField();
    // Get instance field reference: private System.Single _countdownEndTime
    [[deprecated("Use field access instead!")]] float& dyn__countdownEndTime();
    // public System.Boolean get_countdownShown()
    // Offset: 0x1407888
    bool get_countdownShown();
    // private System.Void set_countdownShown(System.Boolean value)
    // Offset: 0x1407890
    void set_countdownShown(bool value);
    // public System.Void .ctor()
    // Offset: 0x1407E44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CenterStageScreenController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CenterStageScreenController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CenterStageScreenController*, creationType>()));
    }
    // public System.Void Setup(System.Boolean showModifiers)
    // Offset: 0x140789C
    void Setup(bool showModifiers);
    // public System.Void Show()
    // Offset: 0x14078D8
    void Show();
    // public System.Void Hide()
    // Offset: 0x1407BE8
    void Hide();
    // public System.Void ShowCountdown(System.Single countdownEndTime)
    // Offset: 0x1407D64
    void ShowCountdown(float countdownEndTime);
    // public System.Void HideCountdown(System.Boolean instant)
    // Offset: 0x1407D1C
    void HideCountdown(bool instant);
    // public System.Void SetCountdownEndTime(System.Single countdownEndTime)
    // Offset: 0x1407DAC
    void SetCountdownEndTime(float countdownEndTime);
    // public System.Void ShowCountdownColorPreset(System.Boolean animated)
    // Offset: 0x1407E14
    void ShowCountdownColorPreset(bool animated);
    // public System.Void ShowLobbyColorPreset(System.Boolean animated)
    // Offset: 0x1407A68
    void ShowLobbyColorPreset(bool animated);
    // private System.Void HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged(ILevelGameplaySetupData levelGameplaySetupData)
    // Offset: 0x1407E40
    void HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);
    // public System.Void SetNextGameplaySetupData(ILevelGameplaySetupData levelGameplaySetupData)
    // Offset: 0x1407A94
    void SetNextGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);
  }; // CenterStageScreenController
  #pragma pack(pop)
  static check_size<sizeof(CenterStageScreenController), 100 + sizeof(float)> __GlobalNamespace_CenterStageScreenControllerSizeCheck;
  static_assert(sizeof(CenterStageScreenController) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::get_countdownShown
// Il2CppName: get_countdownShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CenterStageScreenController::*)()>(&GlobalNamespace::CenterStageScreenController::get_countdownShown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "get_countdownShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::set_countdownShown
// Il2CppName: set_countdownShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::set_countdownShown)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "set_countdownShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::Setup)> {
  static const MethodInfo* get() {
    static auto* showModifiers = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)()>(&GlobalNamespace::CenterStageScreenController::Show)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)()>(&GlobalNamespace::CenterStageScreenController::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::ShowCountdown
// Il2CppName: ShowCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(float)>(&GlobalNamespace::CenterStageScreenController::ShowCountdown)> {
  static const MethodInfo* get() {
    static auto* countdownEndTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "ShowCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{countdownEndTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::HideCountdown
// Il2CppName: HideCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::HideCountdown)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "HideCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::SetCountdownEndTime
// Il2CppName: SetCountdownEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(float)>(&GlobalNamespace::CenterStageScreenController::SetCountdownEndTime)> {
  static const MethodInfo* get() {
    static auto* countdownEndTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "SetCountdownEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{countdownEndTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::ShowCountdownColorPreset
// Il2CppName: ShowCountdownColorPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::ShowCountdownColorPreset)> {
  static const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "ShowCountdownColorPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::ShowLobbyColorPreset
// Il2CppName: ShowLobbyColorPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::ShowLobbyColorPreset)> {
  static const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "ShowLobbyColorPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged
// Il2CppName: HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(&GlobalNamespace::CenterStageScreenController::HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged)> {
  static const MethodInfo* get() {
    static auto* levelGameplaySetupData = &::il2cpp_utils::GetClassFromName("", "ILevelGameplaySetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelGameplaySetupData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::SetNextGameplaySetupData
// Il2CppName: SetNextGameplaySetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(&GlobalNamespace::CenterStageScreenController::SetNextGameplaySetupData)> {
  static const MethodInfo* get() {
    static auto* levelGameplaySetupData = &::il2cpp_utils::GetClassFromName("", "ILevelGameplaySetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "SetNextGameplaySetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelGameplaySetupData});
  }
};
