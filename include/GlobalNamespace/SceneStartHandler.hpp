// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
  // Forward declaring type: PlayerSpecificSettingsNetSerializable
  class PlayerSpecificSettingsNetSerializable;
  // Forward declaring type: PlayerSpecificSettingsAtStartNetSerializable
  class PlayerSpecificSettingsAtStartNetSerializable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
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
  // Forward declaring type: SceneStartHandler
  class SceneStartHandler;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SceneStartHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneStartHandler*, "", "SceneStartHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: SceneStartHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneStartHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // private readonly PlayersSpecificSettingsAtGameStartModel _playersAtGameStartModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.String> _readyPlayers
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,PlayerSpecificSettingsNetSerializable> _playersSpecificSettings
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* playersSpecificSettings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*) == 0x8);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x38
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: sessionGameId
    char __padding5[0x7] = {};
    // private System.String _sessionGameId
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* sessionGameId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Action`1<System.String> sceneSetupDidFinishEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<::Il2CppString*>* sceneSetupDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // private System.Action`1<System.String> sceneSetupDidReceiveTooLateEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<::Il2CppString*>* sceneSetupDidReceiveTooLateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly IGameplayRpcManager _gameplayRpcManager
    GlobalNamespace::IGameplayRpcManager*& dyn__gameplayRpcManager();
    // Get instance field reference: private readonly PlayersSpecificSettingsAtGameStartModel _playersAtGameStartModel
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& dyn__playersAtGameStartModel();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<System.String> _readyPlayers
    System::Collections::Generic::HashSet_1<::Il2CppString*>*& dyn__readyPlayers();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,PlayerSpecificSettingsNetSerializable> _playersSpecificSettings
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& dyn__playersSpecificSettings();
    // Get instance field reference: private System.Boolean _started
    bool& dyn__started();
    // Get instance field reference: private System.String _sessionGameId
    ::Il2CppString*& dyn__sessionGameId();
    // Get instance field reference: private System.Action`1<System.String> sceneSetupDidFinishEvent
    System::Action_1<::Il2CppString*>*& dyn_sceneSetupDidFinishEvent();
    // Get instance field reference: private System.Action`1<System.String> sceneSetupDidReceiveTooLateEvent
    System::Action_1<::Il2CppString*>*& dyn_sceneSetupDidReceiveTooLateEvent();
    // public System.Void add_sceneSetupDidFinishEvent(System.Action`1<System.String> value)
    // Offset: 0x1810BD8
    void add_sceneSetupDidFinishEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_sceneSetupDidFinishEvent(System.Action`1<System.String> value)
    // Offset: 0x1810C7C
    void remove_sceneSetupDidFinishEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_sceneSetupDidReceiveTooLateEvent(System.Action`1<System.String> value)
    // Offset: 0x1810D20
    void add_sceneSetupDidReceiveTooLateEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_sceneSetupDidReceiveTooLateEvent(System.Action`1<System.String> value)
    // Offset: 0x1810DC4
    void remove_sceneSetupDidReceiveTooLateEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel)
    // Offset: 0x1810E68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneStartHandler* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SceneStartHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneStartHandler*, creationType>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel)));
    }
    // public System.Void Dispose()
    // Offset: 0x1810F28
    void Dispose();
    // public System.Void GetSceneLoadStatus()
    // Offset: 0x1811268
    void GetSceneLoadStatus();
    // public System.Void ForceStart()
    // Offset: 0x1811C64
    void ForceStart();
    // private System.Void HandleSetGameplaySceneReady(System.String userId, PlayerSpecificSettingsNetSerializable playerSpecificSettings)
    // Offset: 0x18122B0
    void HandleSetGameplaySceneReady(::Il2CppString* userId, GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);
    // private System.Void HandleGetGameplaySceneReady(System.String userId)
    // Offset: 0x1812674
    void HandleGetGameplaySceneReady(::Il2CppString* userId);
    // private System.Void HandleSetGameplaySceneSyncFinished(System.String userId, PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, System.String sessionId)
    // Offset: 0x1812738
    void HandleSetGameplaySceneSyncFinished(::Il2CppString* userId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::Il2CppString* sessionId);
    // private System.Void HandleSetPlayerDidConnectLate(System.String userId, System.String failedUserId, PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, System.String sessionId)
    // Offset: 0x18127D8
    void HandleSetPlayerDidConnectLate(::Il2CppString* userId, ::Il2CppString* failedUserId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::Il2CppString* sessionId);
    // private System.Void AddPlayerSpecificSettingsToDictionary(PlayerSpecificSettingsNetSerializable playerSpecificSettingsNetSerializable)
    // Offset: 0x18119B4
    void AddPlayerSpecificSettingsToDictionary(GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable);
    // private PlayerSpecificSettingsAtStartNetSerializable CreatePlayersSpecificSettingsAtGameStartData()
    // Offset: 0x1811A34
    GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* CreatePlayersSpecificSettingsAtGameStartData();
  }; // SceneStartHandler
  #pragma pack(pop)
  static check_size<sizeof(SceneStartHandler), 80 + sizeof(System::Action_1<::Il2CppString*>*)> __GlobalNamespace_SceneStartHandlerSizeCheck;
  static_assert(sizeof(SceneStartHandler) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::add_sceneSetupDidFinishEvent
// Il2CppName: add_sceneSetupDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::SceneStartHandler::add_sceneSetupDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "add_sceneSetupDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::remove_sceneSetupDidFinishEvent
// Il2CppName: remove_sceneSetupDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::SceneStartHandler::remove_sceneSetupDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "remove_sceneSetupDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::add_sceneSetupDidReceiveTooLateEvent
// Il2CppName: add_sceneSetupDidReceiveTooLateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::SceneStartHandler::add_sceneSetupDidReceiveTooLateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "add_sceneSetupDidReceiveTooLateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::remove_sceneSetupDidReceiveTooLateEvent
// Il2CppName: remove_sceneSetupDidReceiveTooLateEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::SceneStartHandler::remove_sceneSetupDidReceiveTooLateEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "remove_sceneSetupDidReceiveTooLateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)()>(&GlobalNamespace::SceneStartHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::GetSceneLoadStatus
// Il2CppName: GetSceneLoadStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)()>(&GlobalNamespace::SceneStartHandler::GetSceneLoadStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "GetSceneLoadStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::ForceStart
// Il2CppName: ForceStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)()>(&GlobalNamespace::SceneStartHandler::ForceStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "ForceStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneReady
// Il2CppName: HandleSetGameplaySceneReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(&GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneReady)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettingsNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "HandleSetGameplaySceneReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, playerSpecificSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::HandleGetGameplaySceneReady
// Il2CppName: HandleGetGameplaySceneReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(::Il2CppString*)>(&GlobalNamespace::SceneStartHandler::HandleGetGameplaySceneReady)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "HandleGetGameplaySceneReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneSyncFinished
// Il2CppName: HandleSetGameplaySceneSyncFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*)>(&GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneSyncFinished)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playersAtGameStart = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettingsAtStartNetSerializable")->byval_arg;
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "HandleSetGameplaySceneSyncFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, playersAtGameStart, sessionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::HandleSetPlayerDidConnectLate
// Il2CppName: HandleSetPlayerDidConnectLate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::Il2CppString*)>(&GlobalNamespace::SceneStartHandler::HandleSetPlayerDidConnectLate)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failedUserId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playersAtGameStart = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettingsAtStartNetSerializable")->byval_arg;
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "HandleSetPlayerDidConnectLate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, failedUserId, playersAtGameStart, sessionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::AddPlayerSpecificSettingsToDictionary
// Il2CppName: AddPlayerSpecificSettingsToDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneStartHandler::*)(GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(&GlobalNamespace::SceneStartHandler::AddPlayerSpecificSettingsToDictionary)> {
  static const MethodInfo* get() {
    static auto* playerSpecificSettingsNetSerializable = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettingsNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "AddPlayerSpecificSettingsToDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerSpecificSettingsNetSerializable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::CreatePlayersSpecificSettingsAtGameStartData
// Il2CppName: CreatePlayersSpecificSettingsAtGameStartData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* (GlobalNamespace::SceneStartHandler::*)()>(&GlobalNamespace::SceneStartHandler::CreatePlayersSpecificSettingsAtGameStartData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneStartHandler*), "CreatePlayersSpecificSettingsAtGameStartData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
