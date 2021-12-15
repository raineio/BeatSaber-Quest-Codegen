// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer*, "", "PlayerSaveDataV1_0_1/GuestPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/GuestPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::GuestPlayer : public ::Il2CppObject {
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
    // public System.String playerName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings*) == 0x8);
    public:
    // Get instance field reference: public System.String playerName
    ::Il2CppString*& dyn_playerName();
    // Get instance field reference: public PlayerSaveDataV1_0_1/PlayerSpecificSettings playerSpecificSettings
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // public System.Void .ctor()
    // Offset: 0x11AAACC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::GuestPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::GuestPlayer*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/GuestPlayer
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::GuestPlayer), 24 + sizeof(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings*)> __GlobalNamespace_PlayerSaveDataV1_0_1_GuestPlayerSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::GuestPlayer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
