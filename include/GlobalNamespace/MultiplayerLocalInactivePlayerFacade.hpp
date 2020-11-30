// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: IMultiplayerLevelEndActionsListener
#include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
// Including type: IStartSeekSongControllerProvider
#include "GlobalNamespace/IStartSeekSongControllerProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalInactivePlayerSongSyncController
  class MultiplayerLocalInactivePlayerSongSyncController;
  // Forward declaring type: MultiplayerSpectatorController
  class MultiplayerSpectatorController;
  // Forward declaring type: MultiplayerLocalInactivePlayerIntroAnimator
  class MultiplayerLocalInactivePlayerIntroAnimator;
  // Forward declaring type: MultiplayerLocalInactivePlayerOutroAnimator
  class MultiplayerLocalInactivePlayerOutroAnimator;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IStartSeekSongController
  class IStartSeekSongController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLocalInactivePlayerFacade
  class MultiplayerLocalInactivePlayerFacade : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerLevelEndActionsPublisher, public GlobalNamespace::IMultiplayerLevelEndActionsListener, public GlobalNamespace::IStartSeekSongControllerProvider*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::Factory
    class Factory;
    // private readonly MultiplayerLocalInactivePlayerSongSyncController _inactivePlayerSongSyncController
    // Offset: 0x18
    GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* inactivePlayerSongSyncController;
    // private readonly MultiplayerSpectatorController _spectatorController
    // Offset: 0x20
    GlobalNamespace::MultiplayerSpectatorController* spectatorController;
    // private readonly MultiplayerLocalInactivePlayerIntroAnimator _introAnimator
    // Offset: 0x28
    GlobalNamespace::MultiplayerLocalInactivePlayerIntroAnimator* introAnimator;
    // private readonly MultiplayerLocalInactivePlayerOutroAnimator _outroAnimator
    // Offset: 0x30
    GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* outroAnimator;
    // private System.Action`1<LevelCompletionResults> playerDidFinishEvent
    // Offset: 0x38
    System::Action_1<GlobalNamespace::LevelCompletionResults*>* playerDidFinishEvent;
    // private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent;
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher
    operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsListener
    operator GlobalNamespace::IMultiplayerLevelEndActionsListener() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsListener*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IStartSeekSongControllerProvider
    operator GlobalNamespace::IStartSeekSongControllerProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStartSeekSongControllerProvider*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MultiplayerSpectatorController get_spectatorController()
    // Offset: 0xF71498
    GlobalNamespace::MultiplayerSpectatorController* get_spectatorController();
    // public MultiplayerLocalInactivePlayerIntroAnimator get_introAnimator()
    // Offset: 0xF714A0
    GlobalNamespace::MultiplayerLocalInactivePlayerIntroAnimator* get_introAnimator();
    // public MultiplayerLocalInactivePlayerOutroAnimator get_outroAnimator()
    // Offset: 0xF714A8
    GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* get_outroAnimator();
    // public IStartSeekSongController get_songController()
    // Offset: 0xF71490
    // Implemented from: IStartSeekSongControllerProvider
    // Base method: IStartSeekSongController IStartSeekSongControllerProvider::get_songController()
    GlobalNamespace::IStartSeekSongController* get_songController();
    // public System.Void add_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    // Offset: 0xF714B0
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::add_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    // Offset: 0xF71554
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::remove_playerDidFinishEvent(System.Action`1<LevelCompletionResults> value)
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0xF715F8
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0xF7169C
    // Implemented from: IMultiplayerLevelEndActionsPublisher
    // Base method: System.Void IMultiplayerLevelEndActionsPublisher::remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void ReportPlayerDidFinish(LevelCompletionResults results)
    // Offset: 0xF71740
    // Implemented from: IMultiplayerLevelEndActionsListener
    // Base method: System.Void IMultiplayerLevelEndActionsListener::ReportPlayerDidFinish(LevelCompletionResults results)
    void ReportPlayerDidFinish(GlobalNamespace::LevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0xF717B4
    // Implemented from: IMultiplayerLevelEndActionsListener
    // Base method: System.Void IMultiplayerLevelEndActionsListener::ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    void ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // public System.Void .ctor()
    // Offset: 0xF71828
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLocalInactivePlayerFacade* New_ctor();
  }; // MultiplayerLocalInactivePlayerFacade
  check_size<sizeof(MultiplayerLocalInactivePlayerFacade), 64 + sizeof(void*) + 8 - (64 + sizeof(void*)) % 8> __GlobalNamespace_MultiplayerLocalInactivePlayerFacadeSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*, "", "MultiplayerLocalInactivePlayerFacade");
#pragma pack(pop)