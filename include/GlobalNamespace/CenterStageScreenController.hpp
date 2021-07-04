// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: CenterStageScreenController
  class CenterStageScreenController : public UnityEngine::MonoBehaviour {
    public:
    // protected MenuLightsPresetSO _defaultMenuLightsPreset
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MenuLightsPresetSO* defaultMenuLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // protected MenuLightsPresetSO _lobbyLightsPreset
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MenuLightsPresetSO* lobbyLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // protected MenuLightsPresetSO _countdownMenuLightsPreset
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MenuLightsPresetSO* countdownMenuLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE25AC4
    // private BeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapSelectionView*) == 0x8);
    // private ModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ModifiersSelectionView*) == 0x8);
    // [SpaceAttribute] Offset: 0xE25B0C
    // private CountdownController _countdownController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::CountdownController* countdownController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CountdownController*) == 0x8);
    // private MultiplayerLobbyCenterScreenLayoutAnimator _multiplayerLobbyCenterScreenLayoutAnimator
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* multiplayerLobbyCenterScreenLayoutAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xE25B54
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyPlayersDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE25B64
    // private readonly MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25B74
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
    // Creating value type constructor for type: CenterStageScreenController
    CenterStageScreenController(GlobalNamespace::MenuLightsPresetSO* defaultMenuLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* lobbyLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* countdownMenuLightsPreset_ = {}, GlobalNamespace::BeatmapSelectionView* beatmapSelectionView_ = {}, GlobalNamespace::ModifiersSelectionView* modifiersSelectionView_ = {}, GlobalNamespace::CountdownController* countdownController_ = {}, GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* multiplayerLobbyCenterScreenLayoutAnimator_ = {}, GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, bool countdownShown_ = {}, float countdownEndTime_ = {}) noexcept : defaultMenuLightsPreset{defaultMenuLightsPreset_}, lobbyLightsPreset{lobbyLightsPreset_}, countdownMenuLightsPreset{countdownMenuLightsPreset_}, beatmapSelectionView{beatmapSelectionView_}, modifiersSelectionView{modifiersSelectionView_}, countdownController{countdownController_}, multiplayerLobbyCenterScreenLayoutAnimator{multiplayerLobbyCenterScreenLayoutAnimator_}, lobbyPlayersDataModel{lobbyPlayersDataModel_}, menuLightsManager{menuLightsManager_}, countdownShown{countdownShown_}, countdownEndTime{countdownEndTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_countdownShown()
    // Offset: 0x11890D4
    bool get_countdownShown();
    // private System.Void set_countdownShown(System.Boolean value)
    // Offset: 0x11890DC
    void set_countdownShown(bool value);
    // public System.Void Setup(System.Boolean showModifiers)
    // Offset: 0x11890E8
    void Setup(bool showModifiers);
    // public System.Void Show()
    // Offset: 0x1189124
    void Show();
    // public System.Void Hide()
    // Offset: 0x11896AC
    void Hide();
    // public System.Void ShowCountdown(System.Single countdownEndTime)
    // Offset: 0x1189824
    void ShowCountdown(float countdownEndTime);
    // public System.Void HideCountdown(System.Boolean instant)
    // Offset: 0x11897E0
    void HideCountdown(bool instant);
    // public System.Void SetCountdownEndTime(System.Single countdownEndTime)
    // Offset: 0x11899F4
    void SetCountdownEndTime(float countdownEndTime);
    // public System.Void ShowCountdownColorPreset(System.Boolean animated)
    // Offset: 0x1189AD4
    void ShowCountdownColorPreset(bool animated);
    // public System.Void ShowLobbyColorPreset(System.Boolean animated)
    // Offset: 0x118936C
    void ShowLobbyColorPreset(bool animated);
    // public System.Void SetHostDataManual(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x1189B00
    void SetHostDataManual(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // private System.Void SetNextGameData(ILobbyPlayerDataModel playerData)
    // Offset: 0x1189398
    void SetNextGameData(GlobalNamespace::ILobbyPlayerDataModel* playerData);
    // private System.Void HandleLobbyPlayersDataModelDidChange(System.String userId)
    // Offset: 0x1189B28
    void HandleLobbyPlayersDataModelDidChange(::Il2CppString* userId);
    // public System.Void .ctor()
    // Offset: 0x1189C88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CenterStageScreenController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CenterStageScreenController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CenterStageScreenController*, creationType>()));
    }
  }; // CenterStageScreenController
  #pragma pack(pop)
  static check_size<sizeof(CenterStageScreenController), 100 + sizeof(float)> __GlobalNamespace_CenterStageScreenControllerSizeCheck;
  static_assert(sizeof(CenterStageScreenController) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CenterStageScreenController*, "", "CenterStageScreenController");
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::get_countdownShown
// Il2CppName: get_countdownShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CenterStageScreenController::*)()>(&GlobalNamespace::CenterStageScreenController::get_countdownShown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "get_countdownShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::set_countdownShown
// Il2CppName: set_countdownShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::set_countdownShown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "set_countdownShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::Setup)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)()>(&GlobalNamespace::CenterStageScreenController::Show)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)()>(&GlobalNamespace::CenterStageScreenController::Hide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::ShowCountdown
// Il2CppName: ShowCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(float)>(&GlobalNamespace::CenterStageScreenController::ShowCountdown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "ShowCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::HideCountdown
// Il2CppName: HideCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::HideCountdown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "HideCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::SetCountdownEndTime
// Il2CppName: SetCountdownEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(float)>(&GlobalNamespace::CenterStageScreenController::SetCountdownEndTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "SetCountdownEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::ShowCountdownColorPreset
// Il2CppName: ShowCountdownColorPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::ShowCountdownColorPreset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "ShowCountdownColorPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::ShowLobbyColorPreset
// Il2CppName: ShowLobbyColorPreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(bool)>(&GlobalNamespace::CenterStageScreenController::ShowLobbyColorPreset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "ShowLobbyColorPreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::SetHostDataManual
// Il2CppName: SetHostDataManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::CenterStageScreenController::SetHostDataManual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "SetHostDataManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapCharacteristicSO*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapDifficulty>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::SetNextGameData
// Il2CppName: SetNextGameData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(GlobalNamespace::ILobbyPlayerDataModel*)>(&GlobalNamespace::CenterStageScreenController::SetNextGameData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "SetNextGameData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ILobbyPlayerDataModel*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::HandleLobbyPlayersDataModelDidChange
// Il2CppName: HandleLobbyPlayersDataModelDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CenterStageScreenController::*)(::Il2CppString*)>(&GlobalNamespace::CenterStageScreenController::HandleLobbyPlayersDataModelDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CenterStageScreenController*), "HandleLobbyPlayersDataModelDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CenterStageScreenController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
