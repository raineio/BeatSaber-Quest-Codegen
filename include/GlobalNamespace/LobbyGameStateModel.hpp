// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: LobbyGameStateModel
  // [TokenAttribute] Offset: FFFFFFFF
  class LobbyGameStateModel : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.Action`1<MultiplayerGameState> gameStateDidChangeEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerGameState>*) == 0x8);
    // private System.Action`1<MultiplayerGameState> gameStateDidChangeAlwaysSentEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeAlwaysSentEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerGameState>*) == 0x8);
    // private MultiplayerGameState _gameState
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::MultiplayerGameState gameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerGameState) == 0x4);
    public:
    // Get instance field reference: private System.Action`1<MultiplayerGameState> gameStateDidChangeEvent
    System::Action_1<GlobalNamespace::MultiplayerGameState>*& dyn_gameStateDidChangeEvent();
    // Get instance field reference: private System.Action`1<MultiplayerGameState> gameStateDidChangeAlwaysSentEvent
    System::Action_1<GlobalNamespace::MultiplayerGameState>*& dyn_gameStateDidChangeAlwaysSentEvent();
    // Get instance field reference: private MultiplayerGameState _gameState
    GlobalNamespace::MultiplayerGameState& dyn__gameState();
    // public MultiplayerGameState get_gameState()
    // Offset: 0x131A3DC
    GlobalNamespace::MultiplayerGameState get_gameState();
    // public System.Void add_gameStateDidChangeEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x131A3E4
    void add_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_gameStateDidChangeEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x131A488
    void remove_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void add_gameStateDidChangeAlwaysSentEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x131A52C
    void add_gameStateDidChangeAlwaysSentEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_gameStateDidChangeAlwaysSentEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x131A5D0
    void remove_gameStateDidChangeAlwaysSentEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void SetGameState(MultiplayerGameState newGameState)
    // Offset: 0x1319A28
    void SetGameState(GlobalNamespace::MultiplayerGameState newGameState);
    // public System.Void SetGameStateWithoutNotification(MultiplayerGameState newGameState)
    // Offset: 0x1317B54
    void SetGameStateWithoutNotification(GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void SetGameState(MultiplayerGameState newGameState, System.Boolean sendNotification)
    // Offset: 0x131A674
    void SetGameState(GlobalNamespace::MultiplayerGameState newGameState, bool sendNotification);
    // public System.Void .ctor()
    // Offset: 0x131A71C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyGameStateModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyGameStateModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyGameStateModel*, creationType>()));
    }
  }; // LobbyGameStateModel
  #pragma pack(pop)
  static check_size<sizeof(LobbyGameStateModel), 32 + sizeof(GlobalNamespace::MultiplayerGameState)> __GlobalNamespace_LobbyGameStateModelSizeCheck;
  static_assert(sizeof(LobbyGameStateModel) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameStateModel*, "", "LobbyGameStateModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::get_gameState
// Il2CppName: get_gameState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerGameState (GlobalNamespace::LobbyGameStateModel::*)()>(&GlobalNamespace::LobbyGameStateModel::get_gameState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateModel*), "get_gameState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::add_gameStateDidChangeEvent
// Il2CppName: add_gameStateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateModel::*)(System::Action_1<GlobalNamespace::MultiplayerGameState>*)>(&GlobalNamespace::LobbyGameStateModel::add_gameStateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateModel*), "add_gameStateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::remove_gameStateDidChangeEvent
// Il2CppName: remove_gameStateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateModel::*)(System::Action_1<GlobalNamespace::MultiplayerGameState>*)>(&GlobalNamespace::LobbyGameStateModel::remove_gameStateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateModel*), "remove_gameStateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::add_gameStateDidChangeAlwaysSentEvent
// Il2CppName: add_gameStateDidChangeAlwaysSentEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateModel::*)(System::Action_1<GlobalNamespace::MultiplayerGameState>*)>(&GlobalNamespace::LobbyGameStateModel::add_gameStateDidChangeAlwaysSentEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateModel*), "add_gameStateDidChangeAlwaysSentEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::remove_gameStateDidChangeAlwaysSentEvent
// Il2CppName: remove_gameStateDidChangeAlwaysSentEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateModel::*)(System::Action_1<GlobalNamespace::MultiplayerGameState>*)>(&GlobalNamespace::LobbyGameStateModel::remove_gameStateDidChangeAlwaysSentEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateModel*), "remove_gameStateDidChangeAlwaysSentEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::SetGameState
// Il2CppName: SetGameState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateModel::*)(GlobalNamespace::MultiplayerGameState)>(&GlobalNamespace::LobbyGameStateModel::SetGameState)> {
  static const MethodInfo* get() {
    static auto* newGameState = &::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateModel*), "SetGameState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newGameState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::SetGameStateWithoutNotification
// Il2CppName: SetGameStateWithoutNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateModel::*)(GlobalNamespace::MultiplayerGameState)>(&GlobalNamespace::LobbyGameStateModel::SetGameStateWithoutNotification)> {
  static const MethodInfo* get() {
    static auto* newGameState = &::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateModel*), "SetGameStateWithoutNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newGameState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::SetGameState
// Il2CppName: SetGameState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateModel::*)(GlobalNamespace::MultiplayerGameState, bool)>(&GlobalNamespace::LobbyGameStateModel::SetGameState)> {
  static const MethodInfo* get() {
    static auto* newGameState = &::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")->byval_arg;
    static auto* sendNotification = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateModel*), "SetGameState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newGameState, sendNotification});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
