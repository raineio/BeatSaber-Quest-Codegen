// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LobbyGameStateController
#include "GlobalNamespace/LobbyGameStateController.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyPlayerData
  class ILobbyPlayerData;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LobbyGameStateController::$$c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameStateController::$$c*, "", "LobbyGameStateController/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LobbyGameStateController/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LobbyGameStateController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly LobbyGameStateController/<>c <>9
    static GlobalNamespace::LobbyGameStateController::$$c* _get_$$9();
    // Set static field: static public readonly LobbyGameStateController/<>c <>9
    static void _set_$$9(GlobalNamespace::LobbyGameStateController::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerData>,System.Boolean> <>9__95_0
    static System::Func_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerData*>, bool>* _get_$$9__95_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerData>,System.Boolean> <>9__95_0
    static void _set_$$9__95_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerData*>, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x134BBF0
    static void _cctor();
    // System.Boolean <PredictCountdownEndTime>b__95_0(System.Collections.Generic.KeyValuePair`2<System.String,ILobbyPlayerData> pair)
    // Offset: 0x134BC5C
    bool $PredictCountdownEndTime$b__95_0(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerData*> pair);
    // public System.Void .ctor()
    // Offset: 0x134BC54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyGameStateController::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyGameStateController::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyGameStateController::$$c*, creationType>()));
    }
  }; // LobbyGameStateController/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateController::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LobbyGameStateController::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateController::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateController::$$c::$PredictCountdownEndTime$b__95_0
// Il2CppName: <PredictCountdownEndTime>b__95_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LobbyGameStateController::$$c::*)(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerData*>)>(&GlobalNamespace::LobbyGameStateController::$$c::$PredictCountdownEndTime$b__95_0)> {
  static const MethodInfo* get() {
    static auto* pair = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "ILobbyPlayerData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LobbyGameStateController::$$c*), "<PredictCountdownEndTime>b__95_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pair});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LobbyGameStateController::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
