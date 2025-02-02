// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplaySetupViewController
  class GameplaySetupViewController;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ServerManager
  class ServerManager;
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CentralLeaderboardViewController
  class CentralLeaderboardViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CentralLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CentralLeaderboardViewController*, "", "CentralLeaderboardViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x108
  #pragma pack(push, 1)
  // Autogenerated type: CentralLeaderboardViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class CentralLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
    public:
    // Nested type: ::GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel
    class LeaderboardPanel;
    // Nested type: ::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo
    class ScoreScopeInfo;
    // Nested type: ::GlobalNamespace::CentralLeaderboardViewController::$$c
    class $$c;
    // Nested type: ::GlobalNamespace::CentralLeaderboardViewController::$RefreshDelayed$d__36
    class $RefreshDelayed$d__36;
    // Nested type: ::GlobalNamespace::CentralLeaderboardViewController::$LoadScoresAsync$d__37
    struct $LoadScoresAsync$d__37;
    public:
    // private LeaderboardTableView _leaderboardTableView
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::LeaderboardTableView* leaderboardTableView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LeaderboardTableView*) == 0x8);
    // private HMUI.IconSegmentedControl _scopeSegmentedControl
    // Size: 0x8
    // Offset: 0x78
    ::HMUI::IconSegmentedControl* scopeSegmentedControl;
    // Field size check
    static_assert(sizeof(::HMUI::IconSegmentedControl*) == 0x8);
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LoadingControl*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x1129A1C
    // private HMUI.TextSegmentedControl _leaderboardTypeSegmentedControl
    // Size: 0x8
    // Offset: 0x90
    ::HMUI::TextSegmentedControl* leaderboardTypeSegmentedControl;
    // Field size check
    static_assert(sizeof(::HMUI::TextSegmentedControl*) == 0x8);
    // private UnityEngine.Sprite _globalLeaderboardIcon
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::Sprite* globalLeaderboardIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _friendsLeaderboardIcon
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Sprite* friendsLeaderboardIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.UI.Button _enableOnlineServicesButton
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::UI::Button* enableOnlineServicesButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // private UnityEngine.GameObject _optInOnlineServicesView
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::GameObject* optInOnlineServicesView;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _leaderboardView
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::GameObject* leaderboardView;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0x1129AB4
    // private readonly GameplaySetupViewController _gameplaySetupViewController
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplaySetupViewController*) == 0x8);
    // private readonly OnlineServices.ServerManager _serverManager
    // Size: 0x8
    // Offset: 0xD0
    ::OnlineServices::ServerManager* serverManager;
    // Field size check
    static_assert(sizeof(::OnlineServices::ServerManager*) == 0x8);
    // private readonly System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Size: 0x8
    // Offset: 0xD8
    ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView::ScoreData*>*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0xE0
    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xE8
    ::System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    // private CentralLeaderboardViewController/LeaderboardPanel[] _leaderboardPanels
    // Size: 0x8
    // Offset: 0xF0
    ::ArrayW<::GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*> leaderboardPanels;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*>) == 0x8);
    // private CentralLeaderboardViewController/ScoreScopeInfo[] _scoreScopeInfos
    // Size: 0x8
    // Offset: 0xF8
    ::ArrayW<::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*> scoreScopeInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*>) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x100
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    public:
    // Get instance field reference: private LeaderboardTableView _leaderboardTableView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LeaderboardTableView*& dyn__leaderboardTableView();
    // Get instance field reference: private HMUI.IconSegmentedControl _scopeSegmentedControl
    [[deprecated("Use field access instead!")]] ::HMUI::IconSegmentedControl*& dyn__scopeSegmentedControl();
    // Get instance field reference: private LoadingControl _loadingControl
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LoadingControl*& dyn__loadingControl();
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private HMUI.TextSegmentedControl _leaderboardTypeSegmentedControl
    [[deprecated("Use field access instead!")]] ::HMUI::TextSegmentedControl*& dyn__leaderboardTypeSegmentedControl();
    // Get instance field reference: private UnityEngine.Sprite _globalLeaderboardIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__globalLeaderboardIcon();
    // Get instance field reference: private UnityEngine.Sprite _friendsLeaderboardIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__friendsLeaderboardIcon();
    // Get instance field reference: private UnityEngine.UI.Button _enableOnlineServicesButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__enableOnlineServicesButton();
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private UnityEngine.GameObject _optInOnlineServicesView
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__optInOnlineServicesView();
    // Get instance field reference: private UnityEngine.GameObject _leaderboardView
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__leaderboardView();
    // Get instance field reference: private readonly GameplaySetupViewController _gameplaySetupViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplaySetupViewController*& dyn__gameplaySetupViewController();
    // Get instance field reference: private readonly OnlineServices.ServerManager _serverManager
    [[deprecated("Use field access instead!")]] ::OnlineServices::ServerManager*& dyn__serverManager();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView::ScoreData*>*& dyn__scores();
    // Get instance field reference: private IDifficultyBeatmap _difficultyBeatmap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // Get instance field reference: private CentralLeaderboardViewController/LeaderboardPanel[] _leaderboardPanels
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CentralLeaderboardViewController::LeaderboardPanel*>& dyn__leaderboardPanels();
    // Get instance field reference: private CentralLeaderboardViewController/ScoreScopeInfo[] _scoreScopeInfos
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CentralLeaderboardViewController::ScoreScopeInfo*>& dyn__scoreScopeInfos();
    // Get instance field reference: private GameplayModifiers _gameplayModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // private GameplayModifiers get_gameplayModifiers()
    // Offset: 0x1407E4C
    ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // private System.Boolean get_hasScoresData()
    // Offset: 0x1407E68
    bool get_hasScoresData();
    // private System.Void HandleDidPressRefreshButton()
    // Offset: 0x1408D08
    void HandleDidPressRefreshButton();
    // private System.Void HandleGameplaySetupViewControllerDidChangeGameplayModifiers()
    // Offset: 0x1408D14
    void HandleGameplaySetupViewControllerDidChangeGameplayModifiers();
    // private System.Void HandlelatformServicesAvailabilityInfoChanged(OnlineServices.PlatformServicesAvailabilityInfo availabilityInfo)
    // Offset: 0x1408D68
    void HandlelatformServicesAvailabilityInfoChanged(::OnlineServices::PlatformServicesAvailabilityInfo* availabilityInfo);
    // private System.Void HanldeLeaderboardTypeSegmentedControlDidSelectCell(HMUI.SegmentedControl control, System.Int32 index)
    // Offset: 0x1408D90
    void HanldeLeaderboardTypeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* control, int index);
    // private System.Void HandleScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x1408E0C
    void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // private System.Void HandleScoreForLeaderboardDidUpload(System.String leaderboardId)
    // Offset: 0x1408E18
    void HandleScoreForLeaderboardDidUpload(::StringW leaderboardId);
    // private System.Void Refresh(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x1407F9C
    void Refresh(bool showLoadingIndicator, bool clear);
    // private System.Collections.IEnumerator RefreshDelayed(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x1408E78
    ::System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);
    // private System.Void LoadScoresAsync()
    // Offset: 0x1408F34
    void LoadScoresAsync();
    // private System.Void ClearContent()
    // Offset: 0x1407F2C
    void ClearContent();
    // private System.Void <DidActivate>b__26_0()
    // Offset: 0x1409060
    void $DidActivate$b__26_0();
    // public System.Void .ctor()
    // Offset: 0x1408FEC
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CentralLeaderboardViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CentralLeaderboardViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CentralLeaderboardViewController*, creationType>()));
    }
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1407EC4
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x14081BC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x14088D0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1408AD0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // CentralLeaderboardViewController
  #pragma pack(pop)
  static check_size<sizeof(CentralLeaderboardViewController), 256 + sizeof(::GlobalNamespace::GameplayModifiers*)> __GlobalNamespace_CentralLeaderboardViewControllerSizeCheck;
  static_assert(sizeof(CentralLeaderboardViewController) == 0x108);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::get_gameplayModifiers
// Il2CppName: get_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (GlobalNamespace::CentralLeaderboardViewController::*)()>(&GlobalNamespace::CentralLeaderboardViewController::get_gameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "get_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::get_hasScoresData
// Il2CppName: get_hasScoresData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CentralLeaderboardViewController::*)()>(&GlobalNamespace::CentralLeaderboardViewController::get_hasScoresData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "get_hasScoresData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::HandleDidPressRefreshButton
// Il2CppName: HandleDidPressRefreshButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)()>(&GlobalNamespace::CentralLeaderboardViewController::HandleDidPressRefreshButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "HandleDidPressRefreshButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::HandleGameplaySetupViewControllerDidChangeGameplayModifiers
// Il2CppName: HandleGameplaySetupViewControllerDidChangeGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)()>(&GlobalNamespace::CentralLeaderboardViewController::HandleGameplaySetupViewControllerDidChangeGameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "HandleGameplaySetupViewControllerDidChangeGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::HandlelatformServicesAvailabilityInfoChanged
// Il2CppName: HandlelatformServicesAvailabilityInfoChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)(::OnlineServices::PlatformServicesAvailabilityInfo*)>(&GlobalNamespace::CentralLeaderboardViewController::HandlelatformServicesAvailabilityInfoChanged)> {
  static const MethodInfo* get() {
    static auto* availabilityInfo = &::il2cpp_utils::GetClassFromName("OnlineServices", "PlatformServicesAvailabilityInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "HandlelatformServicesAvailabilityInfoChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{availabilityInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::HanldeLeaderboardTypeSegmentedControlDidSelectCell
// Il2CppName: HanldeLeaderboardTypeSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)(::HMUI::SegmentedControl*, int)>(&GlobalNamespace::CentralLeaderboardViewController::HanldeLeaderboardTypeSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "HanldeLeaderboardTypeSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell
// Il2CppName: HandleScopeSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)(::HMUI::SegmentedControl*, int)>(&GlobalNamespace::CentralLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "HandleScopeSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellNumber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::HandleScoreForLeaderboardDidUpload
// Il2CppName: HandleScoreForLeaderboardDidUpload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)(::StringW)>(&GlobalNamespace::CentralLeaderboardViewController::HandleScoreForLeaderboardDidUpload)> {
  static const MethodInfo* get() {
    static auto* leaderboardId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "HandleScoreForLeaderboardDidUpload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::CentralLeaderboardViewController::Refresh)> {
  static const MethodInfo* get() {
    static auto* showLoadingIndicator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showLoadingIndicator, clear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::RefreshDelayed
// Il2CppName: RefreshDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::CentralLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::CentralLeaderboardViewController::RefreshDelayed)> {
  static const MethodInfo* get() {
    static auto* showLoadingIndicator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "RefreshDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showLoadingIndicator, clear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::LoadScoresAsync
// Il2CppName: LoadScoresAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)()>(&GlobalNamespace::CentralLeaderboardViewController::LoadScoresAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "LoadScoresAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::ClearContent
// Il2CppName: ClearContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)()>(&GlobalNamespace::CentralLeaderboardViewController::ClearContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "ClearContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::$DidActivate$b__26_0
// Il2CppName: <DidActivate>b__26_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)()>(&GlobalNamespace::CentralLeaderboardViewController::$DidActivate$b__26_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "<DidActivate>b__26_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::CentralLeaderboardViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)(bool, bool, bool)>(&GlobalNamespace::CentralLeaderboardViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::CentralLeaderboardViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CentralLeaderboardViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CentralLeaderboardViewController::*)()>(&GlobalNamespace::CentralLeaderboardViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CentralLeaderboardViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
