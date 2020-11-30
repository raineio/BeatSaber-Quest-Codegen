// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IScoreSyncStateManager
#include "GlobalNamespace/IScoreSyncStateManager.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: MockStandardScoreSyncState
  class MockStandardScoreSyncState;
  // Forward declaring type: LocalMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalMultiplayerSyncState_3;
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MockScoreSyncStateManager
  class MockScoreSyncStateManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IScoreSyncStateManager*/ {
    public:
    // private readonly MultiplayerMockSettings _mockSettings
    // Offset: 0x18
    GlobalNamespace::MultiplayerMockSettings* mockSettings;
    // private readonly MultiplayerController _multiplayerController
    // Offset: 0x20
    GlobalNamespace::MultiplayerController* multiplayerController;
    // private IAudioTimeSource _audioTimeSource
    // Offset: 0x28
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // private MockStandardScoreSyncState _localState
    // Offset: 0x30
    GlobalNamespace::MockStandardScoreSyncState* localState;
    // private System.Collections.Generic.List`1<MockStandardScoreSyncState> _mockedScoreStates
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::MockStandardScoreSyncState*>* mockedScoreStates;
    // private System.Collections.Generic.Dictionary`2<System.String,MockStandardScoreSyncState> _mockedScoreStatesMap
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MockStandardScoreSyncState*>* mockedScoreStatesMap;
    // private System.Single _localTime
    // Offset: 0x48
    float localTime;
    // Creating interface conversion operator: operator GlobalNamespace::IScoreSyncStateManager
    operator GlobalNamespace::IScoreSyncStateManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IScoreSyncStateManager*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public LocalMultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> get_localState()
    // Offset: 0x10287FC
    GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* get_localState();
    // private System.Void Init()
    // Offset: 0x1028804
    void Init();
    // public System.Void SetAudioTimeSource(IAudioTimeSource audioTimeSource)
    // Offset: 0x1028C2C
    void SetAudioTimeSource(GlobalNamespace::IAudioTimeSource* audioTimeSource);
    // protected System.Void Update()
    // Offset: 0x1028C34
    void Update();
    // private System.Void UpdatePlayer(MockPlayer connectedPlayer)
    // Offset: 0x1028D60
    void UpdatePlayer(GlobalNamespace::MockPlayer* connectedPlayer);
    // public MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> GetSyncStateForPlayer(IConnectedPlayer player)
    // Offset: 0x1028EC0
    GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* GetSyncStateForPlayer(GlobalNamespace::IConnectedPlayer* player);
    // public MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> GetSyncState(System.Int32 i)
    // Offset: 0x1028F9C
    GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>* GetSyncState(int i);
    // private System.Int32 Interpolate(System.Int32 prev, System.Single pt, System.Int32 curr, System.Single ct, System.Single t)
    // Offset: 0x1029014
    int Interpolate(int prev, float pt, int curr, float ct, float t);
    // private System.Int32 Smooth(System.Int32 prev, System.Int32 curr, System.Single t)
    // Offset: 0x102901C
    int Smooth(int prev, int curr, float t);
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x1028C1C
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // public System.Single get_syncTime()
    // Offset: 0x10287A4
    // Implemented from: IScoreSyncStateManager`4
    // Base method: System.Single IScoreSyncStateManager_4::get_syncTime()
    float get_syncTime();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0x10287AC
    // Implemented from: IScoreSyncStateManager`4
    // Base method: System.Int32 IScoreSyncStateManager_4::get_connectedPlayerCount()
    int get_connectedPlayerCount();
    // public System.Void .ctor()
    // Offset: 0x1029024
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MockScoreSyncStateManager* New_ctor();
  }; // MockScoreSyncStateManager
  check_size<sizeof(MockScoreSyncStateManager), 72 + sizeof(float) + 8 - (72 + sizeof(float)) % 8> __GlobalNamespace_MockScoreSyncStateManagerSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockScoreSyncStateManager*, "", "MockScoreSyncStateManager");
#pragma pack(pop)