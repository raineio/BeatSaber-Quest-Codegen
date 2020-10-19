// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
  // Forward declaring type: PlatformLeaderboardsHandler
  class PlatformLeaderboardsHandler;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel : public UnityEngine::MonoBehaviour, public Zenject::IInitializable {
    public:
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::State
    struct State;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult
    struct GetScoresResult;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult
    struct UploadScoreResult;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::ScoresScope
    struct ScoresScope;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler
    class GetScoresCompletionHandler;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler
    class UploadScoreCompletionHandler;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore
    class LeaderboardScore;
    // Nested type: GlobalNamespace::PlatformLeaderboardsModel::$Initialize$d__15
    struct $Initialize$d__15;
    // Autogenerated type: PlatformLeaderboardsModel/State
    struct State : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PlatformLeaderboardsModel/State NotInitialized
      static constexpr const int NotInitialized = 0;
      // Get static field: static public PlatformLeaderboardsModel/State NotInitialized
      static GlobalNamespace::PlatformLeaderboardsModel::State _get_NotInitialized();
      // Set static field: static public PlatformLeaderboardsModel/State NotInitialized
      static void _set_NotInitialized(GlobalNamespace::PlatformLeaderboardsModel::State value);
      // static field const value: static public PlatformLeaderboardsModel/State Initializing
      static constexpr const int Initializing = 1;
      // Get static field: static public PlatformLeaderboardsModel/State Initializing
      static GlobalNamespace::PlatformLeaderboardsModel::State _get_Initializing();
      // Set static field: static public PlatformLeaderboardsModel/State Initializing
      static void _set_Initializing(GlobalNamespace::PlatformLeaderboardsModel::State value);
      // static field const value: static public PlatformLeaderboardsModel/State Initialized
      static constexpr const int Initialized = 2;
      // Get static field: static public PlatformLeaderboardsModel/State Initialized
      static GlobalNamespace::PlatformLeaderboardsModel::State _get_Initialized();
      // Set static field: static public PlatformLeaderboardsModel/State Initialized
      static void _set_Initialized(GlobalNamespace::PlatformLeaderboardsModel::State value);
    }; // PlatformLeaderboardsModel/State
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // private readonly LeaderboardScoreUploader _leaderboardScoreUploader
    // Offset: 0x20
    GlobalNamespace::LeaderboardScoreUploader* leaderboardScoreUploader;
    // private readonly IPlatformUserModel _platformUserModel
    // Offset: 0x28
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // private readonly PlatformLeaderboardsHandler _platformLeaderboardsHandler
    // Offset: 0x30
    GlobalNamespace::PlatformLeaderboardsHandler* platformLeaderboardsHandler;
    // private System.Action allScoresDidUploadEvent
    // Offset: 0x38
    System::Action* allScoresDidUploadEvent;
    // private PlatformLeaderboardsModel/State _state
    // Offset: 0x40
    GlobalNamespace::PlatformLeaderboardsModel::State state;
    // private System.String _playerId
    // Offset: 0x48
    ::Il2CppString* playerId;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_allScoresDidUploadEvent(System.Action value)
    // Offset: 0x2084BFC
    void add_allScoresDidUploadEvent(System::Action* value);
    // public System.Void remove_allScoresDidUploadEvent(System.Action value)
    // Offset: 0x2084DB4
    void remove_allScoresDidUploadEvent(System::Action* value);
    // private HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0x20859AC
    GlobalNamespace::HMAsyncRequest* UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
    // private HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x2085C50
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // private System.Void HandleAllScoresDidUpload()
    // Offset: 0x2085F44
    void HandleAllScoresDidUpload();
    // public HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x2085830
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public HMAsyncRequest GetScoresAroundPlayer(IDifficultyBeatmap beatmap, System.Int32 count, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x2085848
    GlobalNamespace::HMAsyncRequest* GetScoresAroundPlayer(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public HMAsyncRequest GetFriendsScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0x208583C
    GlobalNamespace::HMAsyncRequest* GetFriendsScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public System.Void UploadScore(IDifficultyBeatmap beatmap, System.Int32 rawScore, System.Int32 modifiedScore, System.Boolean fullCombo, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 maxCombo, GameplayModifiers gameplayModifiers)
    // Offset: 0x2085F58
    void UploadScore(GlobalNamespace::IDifficultyBeatmap* beatmap, int rawScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void Initialize()
    // Offset: 0x20858D0
    // Implemented from: Zenject.IInitializable
    // Base method: System.Void IInitializable::Initialize()
    void Initialize();
    // public System.Void .ctor()
    // Offset: 0x2086158
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlatformLeaderboardsModel* New_ctor();
  }; // PlatformLeaderboardsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel*, "", "PlatformLeaderboardsModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel::State, "", "PlatformLeaderboardsModel/State");
#pragma pack(pop)
