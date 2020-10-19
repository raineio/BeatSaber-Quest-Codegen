// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
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
  // Autogenerated type: NetEaseLeaderboardViewController
  class NetEaseLeaderboardViewController : public GlobalNamespace::LeaderboardViewController {
    public:
    // Nested type: GlobalNamespace::NetEaseLeaderboardViewController::$RefreshDelayed$d__14
    class $RefreshDelayed$d__14;
    // Nested type: GlobalNamespace::NetEaseLeaderboardViewController::$LoadScoresAsync$d__15
    struct $LoadScoresAsync$d__15;
    // private LeaderboardTableView _leaderboardTableView
    // Offset: 0x70
    GlobalNamespace::LeaderboardTableView* leaderboardTableView;
    // private LoadingControl _loadingControl
    // Offset: 0x78
    GlobalNamespace::LoadingControl* loadingControl;
    // private NetEaseManager _netEaseManager
    // Offset: 0x80
    GlobalNamespace::NetEaseManager* netEaseManager;
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Offset: 0x88
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // private IDifficultyBeatmap _difficultyBeatmap
    // Offset: 0x90
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // private System.Boolean _refreshIsNeeded
    // Offset: 0x98
    bool refreshIsNeeded;
    // private System.Boolean _hasScoresData
    // Offset: 0x99
    bool hasScoresData;
    // private System.Void HandleLoadingControlDidPressRefreshButton()
    // Offset: 0x1FDF510
    void HandleLoadingControlDidPressRefreshButton();
    // public System.Void Refresh()
    // Offset: 0x1FDEAA8
    void Refresh();
    // private System.Void Refresh(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x1FDF1A4
    void Refresh(bool showLoadingIndicator, bool clear);
    // private System.Collections.IEnumerator RefreshDelayed(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x1FDF590
    System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);
    // private System.Void LoadScoresAsync()
    // Offset: 0x1FDF658
    void LoadScoresAsync();
    // private System.Void ClearContent()
    // Offset: 0x1FDF51C
    void ClearContent();
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1FDF144
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1FDF344
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1FDF408
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1FDF434
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1FDF734
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetEaseLeaderboardViewController* New_ctor();
  }; // NetEaseLeaderboardViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseLeaderboardViewController*, "", "NetEaseLeaderboardViewController");
#pragma pack(pop)
