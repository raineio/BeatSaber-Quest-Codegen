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
// Including type: PlatformLeaderboardsModel/ScoresScope
#include "GlobalNamespace/PlatformLeaderboardsModel_ScoresScope.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: LevelStatsView
  class LevelStatsView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlatformLeaderboardViewController
  class PlatformLeaderboardViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardViewController*, "", "PlatformLeaderboardViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
    public:
    // Nested type: ::GlobalNamespace::PlatformLeaderboardViewController::$RefreshDelayed$d__31
    class $RefreshDelayed$d__31;
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
    // [SpaceAttribute] Offset: 0x112BF6C
    // private UnityEngine.Sprite _globalLeaderboardIcon
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::Sprite* globalLeaderboardIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _aroundPlayerLeaderboardIcon
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::Sprite* aroundPlayerLeaderboardIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _friendsLeaderboardIcon
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::Sprite* friendsLeaderboardIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private LevelStatsView _levelStatsView
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::LevelStatsView* levelStatsView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelStatsView*) == 0x8);
    // [InjectAttribute] Offset: 0x112BFD4
    // private readonly PlatformLeaderboardsModel _leaderboardsModel
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::PlatformLeaderboardsModel* leaderboardsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlatformLeaderboardsModel*) == 0x8);
    // [InjectAttribute] Offset: 0x112BFE4
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // private HMAsyncRequest _getScoresAsyncRequest
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::HMAsyncRequest* getScoresAsyncRequest;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HMAsyncRequest*) == 0x8);
    // private System.Int32[] _playerScorePos
    // Size: 0x8
    // Offset: 0xC0
    ::ArrayW<int> playerScorePos;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Size: 0x8
    // Offset: 0xC8
    ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView::ScoreData*>*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private System.Boolean _refreshIsNeeded
    // Size: 0x1
    // Offset: 0xD8
    bool refreshIsNeeded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasScoresData
    // Size: 0x1
    // Offset: 0xD9
    bool hasScoresData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasScoresData and: scoreScopes
    char __padding14[0x6] = {};
    // private PlatformLeaderboardsModel/ScoresScope[] _scoreScopes
    // Size: 0x8
    // Offset: 0xE0
    ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope> scoreScopes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x112BFF4
    // Get static field: static private PlatformLeaderboardsModel/ScoresScope _scoresScope
    static ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get__scoresScope();
    // Set static field: static private PlatformLeaderboardsModel/ScoresScope _scoresScope
    static void _set__scoresScope(::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // Get instance field reference: private LeaderboardTableView _leaderboardTableView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LeaderboardTableView*& dyn__leaderboardTableView();
    // Get instance field reference: private HMUI.IconSegmentedControl _scopeSegmentedControl
    [[deprecated("Use field access instead!")]] ::HMUI::IconSegmentedControl*& dyn__scopeSegmentedControl();
    // Get instance field reference: private LoadingControl _loadingControl
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LoadingControl*& dyn__loadingControl();
    // Get instance field reference: private UnityEngine.Sprite _globalLeaderboardIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__globalLeaderboardIcon();
    // Get instance field reference: private UnityEngine.Sprite _aroundPlayerLeaderboardIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__aroundPlayerLeaderboardIcon();
    // Get instance field reference: private UnityEngine.Sprite _friendsLeaderboardIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__friendsLeaderboardIcon();
    // Get instance field reference: private LevelStatsView _levelStatsView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelStatsView*& dyn__levelStatsView();
    // Get instance field reference: private readonly PlatformLeaderboardsModel _leaderboardsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlatformLeaderboardsModel*& dyn__leaderboardsModel();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private HMAsyncRequest _getScoresAsyncRequest
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HMAsyncRequest*& dyn__getScoresAsyncRequest();
    // Get instance field reference: private System.Int32[] _playerScorePos
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__playerScorePos();
    // Get instance field reference: private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView::ScoreData*>*& dyn__scores();
    // Get instance field reference: private IDifficultyBeatmap _difficultyBeatmap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // Get instance field reference: private System.Boolean _refreshIsNeeded
    [[deprecated("Use field access instead!")]] bool& dyn__refreshIsNeeded();
    // Get instance field reference: private System.Boolean _hasScoresData
    [[deprecated("Use field access instead!")]] bool& dyn__hasScoresData();
    // Get instance field reference: private PlatformLeaderboardsModel/ScoresScope[] _scoreScopes
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>& dyn__scoreScopes();
    // public PlatformLeaderboardsModel get_leaderboardsModel()
    // Offset: 0x157F1D8
    ::GlobalNamespace::PlatformLeaderboardsModel* get_leaderboardsModel();
    // static private System.Void .cctor()
    // Offset: 0x158026C
    static void _cctor();
    // private System.Int32 ScoreScopeToScoreScopeIndex(PlatformLeaderboardsModel/ScoresScope scoresScope)
    // Offset: 0x157F890
    int ScoreScopeToScoreScopeIndex(::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scoresScope);
    // private PlatformLeaderboardsModel/ScoresScope ScopeScopeIndexToScoreScope(System.Int32 scoreScopeIndex)
    // Offset: 0x157FD4C
    ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope ScopeScopeIndexToScoreScope(int scoreScopeIndex);
    // private System.Void HandleDidPressRefreshButton()
    // Offset: 0x157FD98
    void HandleDidPressRefreshButton();
    // private System.Void HandleLeaderboardsResultsReturned(PlatformLeaderboardsModel/GetScoresResult result, PlatformLeaderboardsModel/LeaderboardScore[] scores, System.Int32 playerScoreIndex)
    // Offset: 0x157FDA4
    void HandleLeaderboardsResultsReturned(::GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*> scores, int playerScoreIndex);
    // private System.Void HandleScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x157FFC8
    void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // private System.Void HandlePlatformLeaderboardsModelAllScoresDidUpload()
    // Offset: 0x1580060
    void HandlePlatformLeaderboardsModelAllScoresDidUpload();
    // private System.Void Refresh(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x157F244
    void Refresh(bool showLoadingIndicator, bool clear);
    // private System.Collections.IEnumerator RefreshDelayed(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x158013C
    ::System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);
    // private System.Void ClearContent()
    // Offset: 0x158006C
    void ClearContent();
    // public System.Void .ctor()
    // Offset: 0x15801F8
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformLeaderboardViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlatformLeaderboardViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformLeaderboardViewController*, creationType>()));
    }
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x157F1E0
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public override System.Void RefreshLevelStats()
    // Offset: 0x157F404
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::RefreshLevelStats()
    void RefreshLevelStats();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x157F438
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x157F9FC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x157FBA4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // PlatformLeaderboardViewController
  #pragma pack(pop)
  static check_size<sizeof(PlatformLeaderboardViewController), 224 + sizeof(::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>)> __GlobalNamespace_PlatformLeaderboardViewControllerSizeCheck;
  static_assert(sizeof(PlatformLeaderboardViewController) == 0xE8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::get_leaderboardsModel
// Il2CppName: get_leaderboardsModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlatformLeaderboardsModel* (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::get_leaderboardsModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "get_leaderboardsModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PlatformLeaderboardViewController::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::ScoreScopeToScoreScopeIndex
// Il2CppName: ScoreScopeToScoreScopeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlatformLeaderboardViewController::*)(::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope)>(&GlobalNamespace::PlatformLeaderboardViewController::ScoreScopeToScoreScopeIndex)> {
  static const MethodInfo* get() {
    static auto* scoresScope = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/ScoresScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "ScoreScopeToScoreScopeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoresScope});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::ScopeScopeIndexToScoreScope
// Il2CppName: ScopeScopeIndexToScoreScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope (GlobalNamespace::PlatformLeaderboardViewController::*)(int)>(&GlobalNamespace::PlatformLeaderboardViewController::ScopeScopeIndexToScoreScope)> {
  static const MethodInfo* get() {
    static auto* scoreScopeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "ScopeScopeIndexToScoreScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreScopeIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::HandleDidPressRefreshButton
// Il2CppName: HandleDidPressRefreshButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::HandleDidPressRefreshButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "HandleDidPressRefreshButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::HandleLeaderboardsResultsReturned
// Il2CppName: HandleLeaderboardsResultsReturned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(::GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult, ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>, int)>(&GlobalNamespace::PlatformLeaderboardViewController::HandleLeaderboardsResultsReturned)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresResult")->byval_arg;
    static auto* scores = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/LeaderboardScore"), 1)->byval_arg;
    static auto* playerScoreIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "HandleLeaderboardsResultsReturned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, scores, playerScoreIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell
// Il2CppName: HandleScopeSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(::HMUI::SegmentedControl*, int)>(&GlobalNamespace::PlatformLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "HandleScopeSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellNumber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::HandlePlatformLeaderboardsModelAllScoresDidUpload
// Il2CppName: HandlePlatformLeaderboardsModelAllScoresDidUpload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::HandlePlatformLeaderboardsModelAllScoresDidUpload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "HandlePlatformLeaderboardsModelAllScoresDidUpload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::PlatformLeaderboardViewController::Refresh)> {
  static const MethodInfo* get() {
    static auto* showLoadingIndicator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showLoadingIndicator, clear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::RefreshDelayed
// Il2CppName: RefreshDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::PlatformLeaderboardViewController::RefreshDelayed)> {
  static const MethodInfo* get() {
    static auto* showLoadingIndicator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "RefreshDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showLoadingIndicator, clear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::ClearContent
// Il2CppName: ClearContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::ClearContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "ClearContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlatformLeaderboardViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::RefreshLevelStats
// Il2CppName: RefreshLevelStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::RefreshLevelStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "RefreshLevelStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool, bool)>(&GlobalNamespace::PlatformLeaderboardViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::PlatformLeaderboardViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
