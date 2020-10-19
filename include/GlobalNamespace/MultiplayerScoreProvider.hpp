// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreSyncStateManager
  class IScoreSyncStateManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerScoreProvider
  class MultiplayerScoreProvider : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer
    class RankedPlayer;
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::$$c
    class $$c;
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // private readonly IScoreSyncStateManager _scoreSyncStateManager
    // Offset: 0x18
    GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager;
    // private MultiplayerScoreProvider/RankedPlayer <firstPlayer>k__BackingField
    // Offset: 0x20
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* firstPlayer;
    // private System.Action`1<MultiplayerScoreProvider/RankedPlayer> firstPlayerDidChangeEvent
    // Offset: 0x28
    System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* firstPlayerDidChangeEvent;
    // private System.Single _sharedOffsetSyncTime
    // Offset: 0x30
    float sharedOffsetSyncTime;
    // private readonly System.Collections.Generic.List`1<MultiplayerScoreProvider/RankedPlayer> _rankedPlayers
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* rankedPlayers;
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerScoreProvider/RankedPlayer> _players
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* players;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_scoresAvailable()
    // Offset: 0x1FD6000
    bool get_scoresAvailable();
    // public MultiplayerScoreProvider/RankedPlayer get_firstPlayer()
    // Offset: 0x1FD833C
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* get_firstPlayer();
    // private System.Void set_firstPlayer(MultiplayerScoreProvider/RankedPlayer value)
    // Offset: 0x1FD8344
    void set_firstPlayer(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* value);
    // public System.Void add_firstPlayerDidChangeEvent(System.Action`1<MultiplayerScoreProvider/RankedPlayer> value)
    // Offset: 0x1FD6024
    void add_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* value);
    // public System.Void remove_firstPlayerDidChangeEvent(System.Action`1<MultiplayerScoreProvider/RankedPlayer> value)
    // Offset: 0x1FD61B0
    void remove_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* value);
    // public System.Collections.Generic.IReadOnlyList`1<MultiplayerScoreProvider/RankedPlayer> get_rankedPlayers()
    // Offset: 0x1FD834C
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* get_rankedPlayers();
    // protected System.Void Update()
    // Offset: 0x1FD8354
    void Update();
    // public System.Boolean TryGetScore(System.String userId, out MultiplayerScoreProvider/RankedPlayer data)
    // Offset: 0x1FD8B14
    bool TryGetScore(::Il2CppString* userId, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*& data);
    // public System.Int32 GetPositionOfPlayer(System.String userId)
    // Offset: 0x1FD6568
    int GetPositionOfPlayer(::Il2CppString* userId);
    // public System.Void .ctor()
    // Offset: 0x1FD8B8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerScoreProvider* New_ctor();
  }; // MultiplayerScoreProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreProvider*, "", "MultiplayerScoreProvider");
#pragma pack(pop)
