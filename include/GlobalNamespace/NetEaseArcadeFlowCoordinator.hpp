// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
// Including type: HowToPlayViewController
#include "GlobalNamespace/HowToPlayViewController.hpp"
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
  // Forward declaring type: NetEaseArcadeFlowCoordinator
  class NetEaseArcadeFlowCoordinator;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::NetEaseArcadeFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseArcadeFlowCoordinator*, "", "NetEaseArcadeFlowCoordinator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x158
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseArcadeFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class NetEaseArcadeFlowCoordinator : public GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::NetEaseArcadeFlowCoordinator::$LogoutAsync$d__20
    struct $LogoutAsync$d__20;
    // Nested type: GlobalNamespace::NetEaseArcadeFlowCoordinator::$$c__DisplayClass25_0
    class $$c__DisplayClass25_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
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
    // [InjectAttribute] Offset: 0xF4363C
    // private TabBarViewController _tabBarViewController
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::TabBarViewController* tabBarViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TabBarViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xF4364C
    // private NetEaseManager _netEaseManager
    // Size: 0x8
    // Offset: 0x128
    GlobalNamespace::NetEaseManager* netEaseManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF4365C
    // private MenuLightsManager _menuLightsManager
    // Size: 0x8
    // Offset: 0x130
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuLightsManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF4366C
    // private ResultsViewController _resultsViewController
    // Size: 0x8
    // Offset: 0x138
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xF4367C
    // private LocalLeaderboardViewController _localLeaderboardViewController
    // Size: 0x8
    // Offset: 0x140
    GlobalNamespace::LocalLeaderboardViewController* localLeaderboardViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalLeaderboardViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xF4368C
    // private HowToPlayViewController _howToPlayViewController
    // Size: 0x8
    // Offset: 0x148
    GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HowToPlayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xF4369C
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x150
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    public:
    // Get instance field reference: private MenuLightsPresetSO _defaultLightsPreset
    GlobalNamespace::MenuLightsPresetSO*& dyn__defaultLightsPreset();
    // Get instance field reference: private NetEaseLeaderboardViewController _netEaseLeaderboardViewController
    GlobalNamespace::NetEaseLeaderboardViewController*& dyn__netEaseLeaderboardViewController();
    // Get instance field reference: private TabBarViewController _tabBarViewController
    GlobalNamespace::TabBarViewController*& dyn__tabBarViewController();
    // Get instance field reference: private NetEaseManager _netEaseManager
    GlobalNamespace::NetEaseManager*& dyn__netEaseManager();
    // Get instance field reference: private MenuLightsManager _menuLightsManager
    GlobalNamespace::MenuLightsManager*& dyn__menuLightsManager();
    // Get instance field reference: private ResultsViewController _resultsViewController
    GlobalNamespace::ResultsViewController*& dyn__resultsViewController();
    // Get instance field reference: private LocalLeaderboardViewController _localLeaderboardViewController
    GlobalNamespace::LocalLeaderboardViewController*& dyn__localLeaderboardViewController();
    // Get instance field reference: private HowToPlayViewController _howToPlayViewController
    GlobalNamespace::HowToPlayViewController*& dyn__howToPlayViewController();
    // Get instance field reference: private readonly MenuTransitionsHelper _menuTransitionsHelper
    GlobalNamespace::MenuTransitionsHelper*& dyn__menuTransitionsHelper();
    // private System.Void ProcessScore(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x117E548
    void ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // private System.Void AddScoreToLeaderboards(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x117E724
    void AddScoreToLeaderboards(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // private System.Void LogoutAsync()
    // Offset: 0x117E90C
    void LogoutAsync();
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0x117E9CC
    void HandleHowToPlayViewControllerDidFinish(GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // private System.Void HandleHowToPlayTabSelected()
    // Offset: 0x117E9F4
    void HandleHowToPlayTabSelected();
    // private System.Void HandleLogoutTabWasSelected()
    // Offset: 0x117EAA4
    void HandleLogoutTabWasSelected();
    // private System.Void HandleResultsViewControllerContinueButtonPressed(ResultsViewController viewController)
    // Offset: 0x117EAA8
    void HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* viewController);
    // private System.Void HandleResultsViewControllerRestartButtonPressed(ResultsViewController resultsViewController)
    // Offset: 0x117EAF0
    void HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController);
    // private System.Void <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__15_0()
    // Offset: 0x117EBB8
    void $SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__15_0();
    // private System.Void <HandleHowToPlayTabSelected>b__22_0()
    // Offset: 0x117EBC8
    void $HandleHowToPlayTabSelected$b__22_0();
    // protected override System.String get_gameMode()
    // Offset: 0x117DEAC
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.String SinglePlayerLevelSelectionFlowCoordinator::get_gameMode()
    ::Il2CppString* get_gameMode();
    // protected override LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x117DEF4
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: LeaderboardViewController SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController()
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0x117DF34
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // public System.Void .ctor()
    // Offset: 0x117EBB0
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
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x117DF3C
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x117E2A8
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x117E490
    // Implemented from: SinglePlayerLevelSelectionFlowCoordinator
    // Base method: System.Void SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
  }; // NetEaseArcadeFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(NetEaseArcadeFlowCoordinator), 336 + sizeof(GlobalNamespace::MenuTransitionsHelper*)> __GlobalNamespace_NetEaseArcadeFlowCoordinatorSizeCheck;
  static_assert(sizeof(NetEaseArcadeFlowCoordinator) == 0x158);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::ProcessScore
// Il2CppName: ProcessScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::ProcessScore)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "ProcessScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::AddScoreToLeaderboards
// Il2CppName: AddScoreToLeaderboards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::AddScoreToLeaderboards)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "AddScoreToLeaderboards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::LogoutAsync
// Il2CppName: LogoutAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::LogoutAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "LogoutAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleHowToPlayViewControllerDidFinish
// Il2CppName: HandleHowToPlayViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::HowToPlayViewController::HowToPlayOptions)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleHowToPlayViewControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* howToPlayOptions = &::il2cpp_utils::GetClassFromName("", "HowToPlayViewController/HowToPlayOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleHowToPlayViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{howToPlayOptions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleHowToPlayTabSelected
// Il2CppName: HandleHowToPlayTabSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleHowToPlayTabSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleHowToPlayTabSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleLogoutTabWasSelected
// Il2CppName: HandleLogoutTabWasSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleLogoutTabWasSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleLogoutTabWasSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleResultsViewControllerContinueButtonPressed
// Il2CppName: HandleResultsViewControllerContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleResultsViewControllerContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleResultsViewControllerRestartButtonPressed
// Il2CppName: HandleResultsViewControllerRestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::ResultsViewController*)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  static const MethodInfo* get() {
    static auto* resultsViewController = &::il2cpp_utils::GetClassFromName("", "ResultsViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "HandleResultsViewControllerRestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::$SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__15_0
// Il2CppName: <SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::$SinglePlayerLevelSelectionFlowCoordinatorDidActivate$b__15_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "<SinglePlayerLevelSelectionFlowCoordinatorDidActivate>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::$HandleHowToPlayTabSelected$b__22_0
// Il2CppName: <HandleHowToPlayTabSelected>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::$HandleHowToPlayTabSelected$b__22_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "<HandleHowToPlayTabSelected>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::get_gameMode
// Il2CppName: get_gameMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::get_gameMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "get_gameMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::get_leaderboardViewController
// Il2CppName: get_leaderboardViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LeaderboardViewController* (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::get_leaderboardViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "get_leaderboardViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::get_initialTopScreenViewController
// Il2CppName: get_initialTopScreenViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController* (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)()>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::get_initialTopScreenViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "get_initialTopScreenViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseArcadeFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish
// Il2CppName: ProcessLevelCompletionResultsAfterLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseArcadeFlowCoordinator::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*, bool)>(&GlobalNamespace::NetEaseArcadeFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* practice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseArcadeFlowCoordinator*), "ProcessLevelCompletionResultsAfterLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice});
  }
};
