// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameServerLobbyFlowCoordinator
#include "GlobalNamespace/GameServerLobbyFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: <>c__DisplayClass87_0
  class $$c__DisplayClass87_0;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0*, "", "GameServerLobbyFlowCoordinator/<>c__DisplayClass87_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GameServerLobbyFlowCoordinator/<>c__DisplayClass87_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0 : public ::Il2CppObject {
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
    // public GameServerLobbyFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::GameServerLobbyFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServerLobbyFlowCoordinator*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public GameServerLobbyFlowCoordinator <>4__this
    GlobalNamespace::GameServerLobbyFlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public System.String userId
    ::Il2CppString*& dyn_userId();
    // System.Void <HandleServerPlayerListViewControllerKickPlayer>b__0(System.Int32 btnId)
    // Offset: 0x11F51B4
    void $HandleServerPlayerListViewControllerKickPlayer$b__0(int btnId);
    // public System.Void .ctor()
    // Offset: 0x11F37AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0*, creationType>()));
    }
  }; // GameServerLobbyFlowCoordinator/<>c__DisplayClass87_0
  #pragma pack(pop)
  static check_size<sizeof(GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_GameServerLobbyFlowCoordinator_$$c__DisplayClass87_0SizeCheck;
  static_assert(sizeof(GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0::$HandleServerPlayerListViewControllerKickPlayer$b__0
// Il2CppName: <HandleServerPlayerListViewControllerKickPlayer>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0::*)(int)>(&GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0::$HandleServerPlayerListViewControllerKickPlayer$b__0)> {
  static const MethodInfo* get() {
    static auto* btnId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0*), "<HandleServerPlayerListViewControllerKickPlayer>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{btnId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerLobbyFlowCoordinator::$$c__DisplayClass87_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
