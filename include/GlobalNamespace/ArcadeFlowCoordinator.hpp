// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
// Including type: HowToPlayViewController
#include "GlobalNamespace/HowToPlayViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x160
  #pragma pack(push, 1)
  // Autogenerated type: ArcadeFlowCoordinator
  class ArcadeFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: GlobalNamespace::ArcadeFlowCoordinator::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // private LocalLeaderboardsModel _localLeaderboardsModel
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardsModel*) == 0x8);
    // [SpaceAttribute] Offset: 0xE22508
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private MenuLightsPresetSO _resultsLightsPreset
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::MenuLightsPresetSO* resultsLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE22550
    // private TabBarViewController _tabBarViewController
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TabBarViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22560
    // private HowToPlayViewController _howToPlayViewController
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HowToPlayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22570
    // private MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE22580
    // private ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22590
    // private LocalLeaderboardViewController _localLeaderboardViewController
    // Size: 0x8
    // Offset: 0x148
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE225A0
    // private EnterPlayerGuestNameViewController _enterNameViewController
    // Size: 0x8
    // Offset: 0x150
    GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE225B0
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x158
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // Creating value type constructor for type: ArcadeFlowCoordinator
    ArcadeFlowCoordinator(GlobalNamespace::LocalLeaderboardsModel* localLeaderboardsModel_ = {}, GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::MenuLightsPresetSO* resultsLightsPreset_ = {}, GlobalNamespace::TabBarViewController* tabBarViewController_ = {}, GlobalNamespace::HowToPlayViewController* howToPlayViewController_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}, GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController_ = {}, GlobalNamespace::EnterPlayerGuestNameViewController* enterNameViewController_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}) noexcept : localLeaderboardsModel{localLeaderboardsModel_}, defaultLightsPreset{defaultLightsPreset_}, resultsLightsPreset{resultsLightsPreset_}, tabBarViewController{tabBarViewController_}, howToPlayViewController{howToPlayViewController_}, menuLightsManager{menuLightsManager_}, resultsViewController{resultsViewController_}, localLeaderboardViewController{localLeaderboardViewController_}, enterNameViewController{enterNameViewController_}, menuTransitionsHelper{menuTransitionsHelper_} {}
    // private System.Boolean WillScoreGoToLeaderboard(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice)
    // Offset: 0x1130A30
    bool WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice);
    // private System.Boolean ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.String playerName)
    // Offset: 0x1130A9C
    bool ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, ::Il2CppString* playerName);
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x1130B6C
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x1130BB4
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0x1130C74
    void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0x1130C9C
    void HandleHowToPlayTabSelected();
    // private System.Void <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__20_0()
    // Offset: 0x1130D54
    void $SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__20_0();
    // private System.Void <HandleHowToPlayTabSelected>b__28_0()
    // Offset: 0x1130D64
    void $HandleHowToPlayTabSelected$b__28_0();
    // protected override System.String get_gameMode()
    // Offset: 0x1130338
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x1130380
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0x1130388
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0x1130390
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Boolean get_hidePacksIfOneOrNone()
    // Offset: 0x1130398
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone()
    bool get_hidePacksIfOneOrNone();
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x11303A0
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x113069C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x1130894
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void .ctor()
    // Offset: 0x1130D4C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArcadeFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ArcadeFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArcadeFlowCoordinator*, creationType>()));
    }
  }; // ArcadeFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(ArcadeFlowCoordinator), 344 + sizeof(GlobalNamespace::MenuTransitionsHelper*)> __GlobalNamespace_ArcadeFlowCoordinatorSizeCheck;
  static_assert(sizeof(ArcadeFlowCoordinator) == 0x160);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArcadeFlowCoordinator*, "", "ArcadeFlowCoordinator");
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::WillScoreGoToLeaderboard
// Il2CppName: WillScoreGoToLeaderboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, bool)>(&GlobalNamespace::ArcadeFlowCoordinator::WillScoreGoToLeaderboard)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "WillScoreGoToLeaderboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::ProcessScore
// Il2CppName: ProcessScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, bool, ::Il2CppString*)>(&GlobalNamespace::ArcadeFlowCoordinator::ProcessScore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "ProcessScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::HandleResultsViewControllerContinueButtonPressed
// Il2CppName: HandleResultsViewControllerContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::ArcadeFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "HandleResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ResultsViewController*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::HandleResultsViewControllerRestartButtonPressed
// Il2CppName: HandleResultsViewControllerRestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::ArcadeFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ResultsViewController*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::HandleHowToPlayViewControllerDidFinish
// Il2CppName: HandleHowToPlayViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)(GlobalNamespace::HowToPlayViewController::HowToPlayOptions)>(&GlobalNamespace::ArcadeFlowCoordinator::HandleHowToPlayViewControllerDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "HandleHowToPlayViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::HowToPlayViewController::HowToPlayOptions>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::HandleHowToPlayTabSelected
// Il2CppName: HandleHowToPlayTabSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::HandleHowToPlayTabSelected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "HandleHowToPlayTabSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::$SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__20_0
// Il2CppName: <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__20_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::$SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__20_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "<SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__20_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::$HandleHowToPlayTabSelected$b__28_0
// Il2CppName: <HandleHowToPlayTabSelected>b__28_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::$HandleHowToPlayTabSelected$b__28_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "<HandleHowToPlayTabSelected>b__28_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ArcadeFlowCoordinator::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::get_gameMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::get_leaderboardViewController
// Il2CppName: get_leaderboardViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LeaderboardViewController* (GlobalNamespace::ArcadeFlowCoordinator::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::get_leaderboardViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "get_leaderboardViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::get_initialTopScreenViewController
// Il2CppName: get_initialTopScreenViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController* (GlobalNamespace::ArcadeFlowCoordinator::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::get_initialTopScreenViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "get_initialTopScreenViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::get_showPlayerStatsInDetailView
// Il2CppName: get_showPlayerStatsInDetailView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ArcadeFlowCoordinator::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::get_showPlayerStatsInDetailView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "get_showPlayerStatsInDetailView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::get_hidePacksIfOneOrNone
// Il2CppName: get_hidePacksIfOneOrNone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ArcadeFlowCoordinator::*)()>(&GlobalNamespace::ArcadeFlowCoordinator::get_hidePacksIfOneOrNone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "get_hidePacksIfOneOrNone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::ArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)(bool)>(&GlobalNamespace::ArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish
// Il2CppName: ProcessLevelCompletionResultsAfterLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::ArcadeFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ArcadeFlowCoordinator*), "ProcessLevelCompletionResultsAfterLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayModifiers*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ArcadeFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
