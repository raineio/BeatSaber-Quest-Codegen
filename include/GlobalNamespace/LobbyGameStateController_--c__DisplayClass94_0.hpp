// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LobbyGameStateController
#include "GlobalNamespace/LobbyGameStateController.hpp"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayersLobbyPermissionConfigurationNetSerializable
  class PlayersLobbyPermissionConfigurationNetSerializable;
  // Forward declaring type: PlayerLobbyPermissionConfigurationNetSerializable
  class PlayerLobbyPermissionConfigurationNetSerializable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0*, "", "LobbyGameStateController/<>c__DisplayClass94_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LobbyGameStateController/<>c__DisplayClass94_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LobbyGameStateController::$$c__DisplayClass94_0 : public ::Il2CppObject {
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
    // public LobbyGameStateController <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::LobbyGameStateController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyGameStateController*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<MultiplayerGameState> getGameStateAsyncTcs
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::MultiplayerGameState>* getGameStateAsyncTcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::MultiplayerGameState>*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<PlayersLobbyPermissionConfigurationNetSerializable> getPlayerPermissionAsyncTcs
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* getPlayerPermissionAsyncTcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*) == 0x8);
    public:
    // Get instance field reference: public LobbyGameStateController <>4__this
    GlobalNamespace::LobbyGameStateController*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<MultiplayerGameState> getGameStateAsyncTcs
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::MultiplayerGameState>*& dyn_getGameStateAsyncTcs();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<PlayersLobbyPermissionConfigurationNetSerializable> getPlayerPermissionAsyncTcs
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*& dyn_getPlayerPermissionAsyncTcs();
    // System.Void <GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0(System.String userId, MultiplayerGameState newMultiplayerGameState)
    // Offset: 0x134BD88
    void $GetGameStateAndConfigurationAsync$g__HandleSetMultiplayerGameState_0(::StringW userId, GlobalNamespace::MultiplayerGameState newMultiplayerGameState);
    // System.Void <GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1(System.String userId, PlayersLobbyPermissionConfigurationNetSerializable playersLobbyPermissionConfiguration)
    // Offset: 0x134BFE8
    void $GetGameStateAndConfigurationAsync$g__HandleSetPlayerPermissionConfiguration_1(::StringW userId, GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration);
    // System.Boolean <GetGameStateAndConfigurationAsync>b__2(PlayerLobbyPermissionConfigurationNetSerializable p)
    // Offset: 0x134C1DC
    bool $GetGameStateAndConfigurationAsync$b__2(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* p);
    // public System.Void .ctor()
    // Offset: 0x134BD80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyGameStateController::$$c__DisplayClass94_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyGameStateController::$$c__DisplayClass94_0*, creationType>()));
    }
  }; // LobbyGameStateController/<>c__DisplayClass94_0
  #pragma pack(pop)
  static check_size<sizeof(LobbyGameStateController::$$c__DisplayClass94_0), 32 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*)> __GlobalNamespace_LobbyGameStateController_$$c__DisplayClass94_0SizeCheck;
  static_assert(sizeof(LobbyGameStateController::$$c__DisplayClass94_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::$GetGameStateAndConfigurationAsync$g__HandleSetMultiplayerGameState_0
// Il2CppName: <GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::*)(::StringW, GlobalNamespace::MultiplayerGameState)>(&GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::$GetGameStateAndConfigurationAsync$g__HandleSetMultiplayerGameState_0)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* newMultiplayerGameState = &::il2cpp_utils::GetClassFromName("", "MultiplayerGameState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0*), "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, newMultiplayerGameState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::$GetGameStateAndConfigurationAsync$g__HandleSetPlayerPermissionConfiguration_1
// Il2CppName: <GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::*)(::StringW, GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(&GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::$GetGameStateAndConfigurationAsync$g__HandleSetPlayerPermissionConfiguration_1)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playersLobbyPermissionConfiguration = &::il2cpp_utils::GetClassFromName("", "PlayersLobbyPermissionConfigurationNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0*), "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, playersLobbyPermissionConfiguration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::$GetGameStateAndConfigurationAsync$b__2
// Il2CppName: <GetGameStateAndConfigurationAsync>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::*)(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*)>(&GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::$GetGameStateAndConfigurationAsync$b__2)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "PlayerLobbyPermissionConfigurationNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0*), "<GetGameStateAndConfigurationAsync>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateController::$$c__DisplayClass94_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
