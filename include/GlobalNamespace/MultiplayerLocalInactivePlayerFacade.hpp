// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: IMultiplayerLevelEndActionsListener
#include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
// Including type: IStartSeekSongControllerProvider
#include "GlobalNamespace/IStartSeekSongControllerProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalInactivePlayerSongSyncController
  class MultiplayerLocalInactivePlayerSongSyncController;
  // Forward declaring type: MultiplayerSpectatorController
  class MultiplayerSpectatorController;
  // Forward declaring type: MultiplayerLocalInactivePlayerOutroAnimator
  class MultiplayerLocalInactivePlayerOutroAnimator;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Forward declaring type: IStartSeekSongController
  class IStartSeekSongController;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerFacade
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerFacade : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerLevelEndActionsPublisher, public GlobalNamespace::IMultiplayerLevelEndActionsListener, public GlobalNamespace::IStartSeekSongControllerProvider*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::Factory
    class Factory;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [InjectAttribute] Offset: 0xF08D28
    // private readonly MultiplayerLocalInactivePlayerSongSyncController _inactivePlayerSongSyncController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* inactivePlayerSongSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xF08D38
    // private readonly MultiplayerSpectatorController _spectatorController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerSpectatorController* spectatorController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSpectatorController*) == 0x8);
    // private UnityEngine.Playables.PlayableDirector _introAnimator
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Playables::PlayableDirector* introAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [InjectAttribute] Offset: 0xF08D58
    // private readonly MultiplayerLocalInactivePlayerOutroAnimator _outroAnimator
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* outroAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*) == 0x8);
    // private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    // private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*) == 0x8);
    public:
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
    // Get instance field reference: private readonly MultiplayerLocalInactivePlayerSongSyncController _inactivePlayerSongSyncController
    GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*& dyn__inactivePlayerSongSyncController();
    // Get instance field reference: private readonly MultiplayerSpectatorController _spectatorController
    GlobalNamespace::MultiplayerSpectatorController*& dyn__spectatorController();
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _introAnimator
    UnityEngine::Playables::PlayableDirector*& dyn__introAnimator();
    // Get instance field reference: private readonly MultiplayerLocalInactivePlayerOutroAnimator _outroAnimator
    GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*& dyn__outroAnimator();
    // Get instance field reference: private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*& dyn_playerDidFinishEvent();
    // Get instance field reference: private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*& dyn_playerNetworkDidFailedEvent();
    // public IStartSeekSongController get_songController()
    // Offset: 0x1175D74
    GlobalNamespace::IStartSeekSongController* get_songController();
    // public MultiplayerSpectatorController get_spectatorController()
    // Offset: 0x1175D7C
    GlobalNamespace::MultiplayerSpectatorController* get_spectatorController();
    // public UnityEngine.GameObject get_introAnimator()
    // Offset: 0x1175D84
    UnityEngine::GameObject* get_introAnimator();
    // public UnityEngine.Playables.PlayableDirector get_introPlayableDirector()
    // Offset: 0x1175DA0
    UnityEngine::Playables::PlayableDirector* get_introPlayableDirector();
    // public MultiplayerLocalInactivePlayerOutroAnimator get_outroAnimator()
    // Offset: 0x1175DA8
    GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* get_outroAnimator();
    // public System.Void add_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x1175DB0
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x1175E54
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x1175EF8
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x1175F9C
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void ReportPlayerDidFinish(MultiplayerLevelCompletionResults results)
    // Offset: 0x1176040
    void ReportPlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0x11760B4
    void ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // public System.Void .ctor()
    // Offset: 0x1176128
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerFacade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerFacade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerFacade*, creationType>()));
    }
  }; // MultiplayerLocalInactivePlayerFacade
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerFacade), 64 + sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)> __GlobalNamespace_MultiplayerLocalInactivePlayerFacadeSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerFacade) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*, "", "MultiplayerLocalInactivePlayerFacade");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_songController
// Il2CppName: get_songController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IStartSeekSongController* (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_songController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "get_songController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_spectatorController
// Il2CppName: get_spectatorController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerSpectatorController* (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_spectatorController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "get_spectatorController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introAnimator
// Il2CppName: get_introAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introAnimator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "get_introAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introPlayableDirector
// Il2CppName: get_introPlayableDirector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableDirector* (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introPlayableDirector)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "get_introPlayableDirector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_outroAnimator
// Il2CppName: get_outroAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_outroAnimator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "get_outroAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerDidFinishEvent
// Il2CppName: add_playerDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "add_playerDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerDidFinishEvent
// Il2CppName: remove_playerDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "remove_playerDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerNetworkDidFailedEvent
// Il2CppName: add_playerNetworkDidFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerNetworkDidFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PlayerNetworkFailReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "add_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerNetworkDidFailedEvent
// Il2CppName: remove_playerNetworkDidFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerNetworkDidFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PlayerNetworkFailReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "remove_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerDidFinish
// Il2CppName: ReportPlayerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerDidFinish)> {
  static const MethodInfo* get() {
    static auto* results = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "ReportPlayerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{results});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerNetworkDidFailed
// Il2CppName: ReportPlayerNetworkDidFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(GlobalNamespace::PlayerNetworkFailReason)>(&GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerNetworkDidFailed)> {
  static const MethodInfo* get() {
    static auto* failReason = &::il2cpp_utils::GetClassFromName("", "PlayerNetworkFailReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerFacade*), "ReportPlayerNetworkDidFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerFacade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
