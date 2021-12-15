// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Including type: GameplayServerMode
#include "GlobalNamespace/GameplayServerMode.hpp"
// Including type: SongSelectionMode
#include "GlobalNamespace/SongSelectionMode.hpp"
// Including type: GameplayServerControlSettings
#include "GlobalNamespace/GameplayServerControlSettings.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CreateServerFormData
  struct CreateServerFormData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateServerFormData, "", "CreateServerFormData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: CreateServerFormData
  // [TokenAttribute] Offset: FFFFFFFF
  struct CreateServerFormData/*, public System::ValueType*/ {
    public:
    public:
    // public System.Boolean usePassword
    // Size: 0x1
    // Offset: 0x0
    bool usePassword;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usePassword and: password
    char __padding0[0x7] = {};
    // public System.String password
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 maxPlayers
    // Size: 0x4
    // Offset: 0x10
    int maxPlayers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean allowInviteOthers
    // Size: 0x1
    // Offset: 0x14
    bool allowInviteOthers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean netDiscoverable
    // Size: 0x1
    // Offset: 0x15
    bool netDiscoverable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public BeatmapDifficultyMask difficulties
    // Size: 0x1
    // Offset: 0x16
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: difficulties and: modifiers
    char __padding5[0x1] = {};
    // public GameplayModifierMask modifiers
    // Size: 0x2
    // Offset: 0x18
    GlobalNamespace::GameplayModifierMask modifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierMask) == 0x2);
    // Padding between fields: modifiers and: songPacks
    char __padding6[0x6] = {};
    // public SongPackMask songPacks
    // Size: 0x10
    // Offset: 0x20
    GlobalNamespace::SongPackMask songPacks;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // public GameplayServerMode gameplayServerMode
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::GameplayServerMode gameplayServerMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerMode) == 0x4);
    // public SongSelectionMode songSelectionMode
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::SongSelectionMode songSelectionMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongSelectionMode) == 0x4);
    // public GameplayServerControlSettings gameplayServerControlSettings
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerControlSettings) == 0x4);
    public:
    // Creating value type constructor for type: CreateServerFormData
    constexpr CreateServerFormData(bool usePassword_ = {}, ::Il2CppString* password_ = {}, int maxPlayers_ = {}, bool allowInviteOthers_ = {}, bool netDiscoverable_ = {}, GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, GlobalNamespace::GameplayModifierMask modifiers_ = {}, GlobalNamespace::SongPackMask songPacks_ = {}, GlobalNamespace::GameplayServerMode gameplayServerMode_ = {}, GlobalNamespace::SongSelectionMode songSelectionMode_ = {}, GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings_ = {}) noexcept : usePassword{usePassword_}, password{password_}, maxPlayers{maxPlayers_}, allowInviteOthers{allowInviteOthers_}, netDiscoverable{netDiscoverable_}, difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_}, gameplayServerMode{gameplayServerMode_}, songSelectionMode{songSelectionMode_}, gameplayServerControlSettings{gameplayServerControlSettings_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean usePassword
    bool& dyn_usePassword();
    // Get instance field reference: public System.String password
    ::Il2CppString*& dyn_password();
    // Get instance field reference: public System.Int32 maxPlayers
    int& dyn_maxPlayers();
    // Get instance field reference: public System.Boolean allowInviteOthers
    bool& dyn_allowInviteOthers();
    // Get instance field reference: public System.Boolean netDiscoverable
    bool& dyn_netDiscoverable();
    // Get instance field reference: public BeatmapDifficultyMask difficulties
    GlobalNamespace::BeatmapDifficultyMask& dyn_difficulties();
    // Get instance field reference: public GameplayModifierMask modifiers
    GlobalNamespace::GameplayModifierMask& dyn_modifiers();
    // Get instance field reference: public SongPackMask songPacks
    GlobalNamespace::SongPackMask& dyn_songPacks();
    // Get instance field reference: public GameplayServerMode gameplayServerMode
    GlobalNamespace::GameplayServerMode& dyn_gameplayServerMode();
    // Get instance field reference: public SongSelectionMode songSelectionMode
    GlobalNamespace::SongSelectionMode& dyn_songSelectionMode();
    // Get instance field reference: public GameplayServerControlSettings gameplayServerControlSettings
    GlobalNamespace::GameplayServerControlSettings& dyn_gameplayServerControlSettings();
  }; // CreateServerFormData
  #pragma pack(pop)
  static check_size<sizeof(CreateServerFormData), 56 + sizeof(GlobalNamespace::GameplayServerControlSettings)> __GlobalNamespace_CreateServerFormDataSizeCheck;
  static_assert(sizeof(CreateServerFormData) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
