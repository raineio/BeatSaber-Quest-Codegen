// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerLevelEndActionsPublisher
  class IMultiplayerLevelEndActionsPublisher;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Forward declaring type: PlayerNetworkFailReason
  struct PlayerNetworkFailReason;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelFinishedController
  class MultiplayerLevelFinishedController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__19
    class $StartLevelFinished$d__19;
    // [InjectAttribute] Offset: 0xE1C75C
    // private readonly IMultiplayerLevelEndActionsPublisher _levelEndActionsPublisher
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IMultiplayerLevelEndActionsPublisher* levelEndActionsPublisher;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerLevelEndActionsPublisher*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C76C
    // private readonly IGameplayRpcManager _rpcManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* rpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C77C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C78C
    // private System.Action`2<MultiplayerLevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,MultiplayerLevelCompletionResults>> allResultsCollectedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>* allResultsCollectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerLevelCompletionResults> _otherPlayersCompletionResults
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersCompletionResults;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    // private MultiplayerLevelCompletionResults _localPlayerResults
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelCompletionResults*) == 0x8);
    // private System.Boolean _gameFinishReported
    // Size: 0x1
    // Offset: 0x48
    bool gameFinishReported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: gameFinishReported and: sceneLoadTime
    char __padding6[0x3] = {};
    // private System.Single _sceneLoadTime
    // Size: 0x4
    // Offset: 0x4C
    float sceneLoadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerLevelFinishedController
    MultiplayerLevelFinishedController(GlobalNamespace::IMultiplayerLevelEndActionsPublisher* levelEndActionsPublisher_ = {}, GlobalNamespace::IGameplayRpcManager* rpcManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>* allResultsCollectedEvent_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersCompletionResults_ = {}, GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults_ = {}, bool gameFinishReported_ = {}, float sceneLoadTime_ = {}) noexcept : levelEndActionsPublisher{levelEndActionsPublisher_}, rpcManager{rpcManager_}, multiplayerSessionManager{multiplayerSessionManager_}, allResultsCollectedEvent{allResultsCollectedEvent_}, otherPlayersCompletionResults{otherPlayersCompletionResults_}, localPlayerResults{localPlayerResults_}, gameFinishReported{gameFinishReported_}, sceneLoadTime{sceneLoadTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kMinSceneDuration
    static constexpr const float kMinSceneDuration = 2;
    // Get static field: static private System.Single kMinSceneDuration
    static float _get_kMinSceneDuration();
    // Set static field: static private System.Single kMinSceneDuration
    static void _set_kMinSceneDuration(float value);
    // public System.Void add_allResultsCollectedEvent(System.Action`2<MultiplayerLevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,MultiplayerLevelCompletionResults>> value)
    // Offset: 0x102149C
    void add_allResultsCollectedEvent(System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>* value);
    // public System.Void remove_allResultsCollectedEvent(System.Action`2<MultiplayerLevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,MultiplayerLevelCompletionResults>> value)
    // Offset: 0x1021540
    void remove_allResultsCollectedEvent(System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>* value);
    // public System.Boolean get_gameResultsReady()
    // Offset: 0x10215E4
    bool get_gameResultsReady();
    // public System.Collections.Generic.Dictionary`2<System.String,MultiplayerLevelCompletionResults> get_otherPlayersCompletionResults()
    // Offset: 0x10215EC
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>* get_otherPlayersCompletionResults();
    // public MultiplayerLevelCompletionResults get_localPlayerResults()
    // Offset: 0x10215F4
    GlobalNamespace::MultiplayerLevelCompletionResults* get_localPlayerResults();
    // protected System.Void Start()
    // Offset: 0x10215FC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1021848
    void OnDestroy();
    // private System.Collections.IEnumerator StartLevelFinished(MultiplayerLevelCompletionResults localPlayerResults)
    // Offset: 0x1021A9C
    System::Collections::IEnumerator* StartLevelFinished(GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults);
    // private System.Void HandlePlayerDidFinish(MultiplayerLevelCompletionResults levelCompletionResults)
    // Offset: 0x1021B44
    void HandlePlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);
    // private System.Void HandlePlayerNetworkDidFailed(PlayerNetworkFailReason playerNetworkFailReason)
    // Offset: 0x1021B70
    void HandlePlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason playerNetworkFailReason);
    // private System.Void HandleRpcLevelFinished(System.String userId, MultiplayerLevelCompletionResults results)
    // Offset: 0x1021CCC
    void HandleRpcLevelFinished(::Il2CppString* userId, GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void .ctor()
    // Offset: 0x1021D3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelFinishedController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelFinishedController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelFinishedController*, creationType>()));
    }
  }; // MultiplayerLevelFinishedController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelFinishedController), 76 + sizeof(float)> __GlobalNamespace_MultiplayerLevelFinishedControllerSizeCheck;
  static_assert(sizeof(MultiplayerLevelFinishedController) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelFinishedController*, "", "MultiplayerLevelFinishedController");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::add_allResultsCollectedEvent
// Il2CppName: add_allResultsCollectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::*)(System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>*)>(&GlobalNamespace::MultiplayerLevelFinishedController::add_allResultsCollectedEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "add_allResultsCollectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::remove_allResultsCollectedEvent
// Il2CppName: remove_allResultsCollectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::*)(System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>*)>(&GlobalNamespace::MultiplayerLevelFinishedController::remove_allResultsCollectedEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "remove_allResultsCollectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::MultiplayerLevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::get_gameResultsReady
// Il2CppName: get_gameResultsReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelFinishedController::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::get_gameResultsReady)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "get_gameResultsReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::get_otherPlayersCompletionResults
// Il2CppName: get_otherPlayersCompletionResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*>* (GlobalNamespace::MultiplayerLevelFinishedController::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::get_otherPlayersCompletionResults)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "get_otherPlayersCompletionResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::get_localPlayerResults
// Il2CppName: get_localPlayerResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLevelCompletionResults* (GlobalNamespace::MultiplayerLevelFinishedController::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::get_localPlayerResults)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "get_localPlayerResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::*)()>(&GlobalNamespace::MultiplayerLevelFinishedController::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::StartLevelFinished
// Il2CppName: StartLevelFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MultiplayerLevelFinishedController::*)(GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerLevelFinishedController::StartLevelFinished)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "StartLevelFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MultiplayerLevelCompletionResults*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::HandlePlayerDidFinish
// Il2CppName: HandlePlayerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::*)(GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerLevelFinishedController::HandlePlayerDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "HandlePlayerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MultiplayerLevelCompletionResults*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::HandlePlayerNetworkDidFailed
// Il2CppName: HandlePlayerNetworkDidFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::*)(GlobalNamespace::PlayerNetworkFailReason)>(&GlobalNamespace::MultiplayerLevelFinishedController::HandlePlayerNetworkDidFailed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "HandlePlayerNetworkDidFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PlayerNetworkFailReason>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::HandleRpcLevelFinished
// Il2CppName: HandleRpcLevelFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelFinishedController::*)(::Il2CppString*, GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerLevelFinishedController::HandleRpcLevelFinished)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelFinishedController*), "HandleRpcLevelFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MultiplayerLevelCompletionResults*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelFinishedController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
