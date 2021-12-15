// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuDestination
#include "GlobalNamespace/MenuDestination.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SelectMultiplayerLobbyDestination
  class SelectMultiplayerLobbyDestination;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SelectMultiplayerLobbyDestination);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectMultiplayerLobbyDestination*, "", "SelectMultiplayerLobbyDestination");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SelectMultiplayerLobbyDestination
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectMultiplayerLobbyDestination : public GlobalNamespace::MenuDestination {
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
    // public readonly System.String lobbySecret
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* lobbySecret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String lobbyCode
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* lobbyCode;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public readonly System.String lobbySecret
    ::Il2CppString*& dyn_lobbySecret();
    // Get instance field reference: public readonly System.String lobbyCode
    ::Il2CppString*& dyn_lobbyCode();
    // public System.Void .ctor(System.String lobbySecret, System.String lobbyCode)
    // Offset: 0x12344AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectMultiplayerLobbyDestination* New_ctor(::Il2CppString* lobbySecret, ::Il2CppString* lobbyCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectMultiplayerLobbyDestination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectMultiplayerLobbyDestination*, creationType>(lobbySecret, lobbyCode)));
    }
    // public System.Void .ctor(System.UInt64 roomId)
    // Offset: 0x12344E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectMultiplayerLobbyDestination* New_ctor(uint64_t roomId) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectMultiplayerLobbyDestination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectMultiplayerLobbyDestination*, creationType>(roomId)));
    }
    // public System.Void .ctor(System.String lobbyCode)
    // Offset: 0x12345A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectMultiplayerLobbyDestination* New_ctor(::Il2CppString* lobbyCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectMultiplayerLobbyDestination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectMultiplayerLobbyDestination*, creationType>(lobbyCode)));
    }
  }; // SelectMultiplayerLobbyDestination
  #pragma pack(pop)
  static check_size<sizeof(SelectMultiplayerLobbyDestination), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_SelectMultiplayerLobbyDestinationSizeCheck;
  static_assert(sizeof(SelectMultiplayerLobbyDestination) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
