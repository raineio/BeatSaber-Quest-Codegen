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
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: NetEaseLeaderboardViewController
  class NetEaseLeaderboardViewController;
  // Forward declaring type: TabBarViewController
  class TabBarViewController;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
  // Forward declaring type: LocalLeaderboardViewController
  class LocalLeaderboardViewController;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
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
  // Size: 0x158
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseArcadeFlowCoordinator
  class NetEaseArcadeFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__22
    struct $LogoutAsync$d__22;
    // Nested type: GlobalNamespace::NetEaseArcadeFlowCoordinator::$$c__DisplayClass27_0
    class $$c__DisplayClass27_0;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Size: 0x8
    // Offset: 0x110
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsPresetSO*) == 0x8);
    // private NetEaseLeaderboardViewController _netEaseLeaderboardViewController
    // Size: 0x8
    // Offset: 0x118
    GlobalNamespace::NetEaseLeaderboardViewController* netEaseLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22F70
    // private TabBarViewController _tabBarViewController
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TabBarViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22F80
    // private NetEaseManager _netEaseManager
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::NetEaseManager* netEaseManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE22F90
    // private MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE22FA0
    // private ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22FB0
    // private LocalLeaderboardViewController _localLeaderboardViewController
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22FC0
    // private HowToPlayViewController _howToPlayViewController
    // Size: 0x8
    // Offset: 0x148
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HowToPlayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE22FD0
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x150
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // Creating value type constructor for type: NetEaseArcadeFlowCoordinator
    NetEaseArcadeFlowCoordinator(GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset_ = {}, GlobalNamespace::NetEaseLeaderboardViewController* netEaseLeaderboardViewController_ = {}, GlobalNamespace::TabBarViewController* tabBarViewController_ = {}, GlobalNamespace::NetEaseManager* netEaseManager_ = {}, GlobalNamespace::MenuLightsManager* menuLightsManager_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}, GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController_ = {}, GlobalNamespace::HowToPlayViewController* howToPlayViewController_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}) noexcept : defaultLightsPreset{defaultLightsPreset_}, netEaseLeaderboardViewController{netEaseLeaderboardViewController_}, tabBarViewController{tabBarViewController_}, netEaseManager{netEaseManager_}, menuLightsManager{menuLightsManager_}, resultsViewController{resultsViewController_}, localLeaderboardViewController{localLeaderboardViewController_}, howToPlayViewController{howToPlayViewController_}, menuTransitionsHelper{menuTransitionsHelper_} {}
    // private System.Void ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x1016538
    void ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // private System.Void AddScoreToLeaderboards(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x1016714
    void AddScoreToLeaderboards(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // private System.Void LogoutAsync()
    // Offset: 0x1016944
    void LogoutAsync();
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0x1016A04
    void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0x1016A2C
    void HandleHowToPlayTabSelected();
    // private System.Void HandleLogoutTabWasSelected()
    // Offset: 0x1016ADC
    void HandleLogoutTabWasSelected();
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController viewController)
    // Offset: 0x1016AE0
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* viewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x1016B28
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__17_0()
    // Offset: 0x1016BF0
    void $SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__17_0();
    // private System.Void <HandleHowToPlayTabSelected>b__24_0()
    // Offset: 0x1016C00
    void $HandleHowToPlayTabSelected$b__24_0();
    // protected override System.String get_gameMode()
    // Offset: 0x1015E94
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x1015EDC
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0x1015F1C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // protected override System.Boolean get_showPlayerStatsInDetailView()
    // Offset: 0x1015F24
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView()
    bool get_showPlayerStatsInDetailView();
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x1015F2C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x1016298
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x1016480
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void .ctor()
    // Offset: 0x1016BE8
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
    static NetEaseArcadeFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseArcadeFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseArcadeFlowCoordinator*, creationType>()));
    }
  }; // NetEaseArcadeFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(NetEaseArcadeFlowCoordinator), 336 + sizeof(GlobalNamespace::MenuTransitionsHelper*)> __GlobalNamespace_NetEaseArcadeFlowCoordinatorSizeCheck;
  static_assert(sizeof(NetEaseArcadeFlowCoordinator) == 0x158);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseArcadeFlowCoordinator*, "", "NetEaseArcadeFlowCoordinator");
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::ProcessScore
// Il2CppName: ProcessScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::ProcessScore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "ProcessScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayModifiers*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::AddScoreToLeaderboards
// Il2CppName: AddScoreToLeaderboards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::AddScoreToLeaderboards)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "AddScoreToLeaderboards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayModifiers*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::LogoutAsync
// Il2CppName: LogoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::LogoutAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "LogoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleHowToPlayViewControllerDidFinish
// Il2CppName: HandleHowToPlayViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::HowToPlayViewController::HowToPlayOptions)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleHowToPlayViewControllerDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleHowToPlayViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::HowToPlayViewController::HowToPlayOptions>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleHowToPlayTabSelected
// Il2CppName: HandleHowToPlayTabSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleHowToPlayTabSelected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleHowToPlayTabSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleLogoutTabWasSelected
// Il2CppName: HandleLogoutTabWasSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleLogoutTabWasSelected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleLogoutTabWasSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleResultsViewControllerContinueButtonPressed
// Il2CppName: HandleResultsViewControllerContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ResultsViewController*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleResultsViewControllerRestartButtonPressed
// Il2CppName: HandleResultsViewControllerRestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ResultsViewController*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::$SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__17_0
// Il2CppName: <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::$SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__17_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "<SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::$HandleHowToPlayTabSelected$b__24_0
// Il2CppName: <HandleHowToPlayTabSelected>b__24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::$HandleHowToPlayTabSelected$b__24_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "<HandleHowToPlayTabSelected>b__24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::get_gameMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::get_leaderboardViewController
// Il2CppName: get_leaderboardViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LeaderboardViewController* (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::get_leaderboardViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "get_leaderboardViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::get_initialTopScreenViewController
// Il2CppName: get_initialTopScreenViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController* (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::get_initialTopScreenViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "get_initialTopScreenViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::get_showPlayerStatsInDetailView
// Il2CppName: get_showPlayerStatsInDetailView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::get_showPlayerStatsInDetailView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "get_showPlayerStatsInDetailView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish
// Il2CppName: ProcessLevelCompletionResultsAfterLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "ProcessLevelCompletionResultsAfterLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayModifiers*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
