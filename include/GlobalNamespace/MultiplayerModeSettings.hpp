// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerModeSettings
  class MultiplayerModeSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSettings*, "", "MultiplayerModeSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerModeSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerModeSettings : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 createServerPlayersCount
    // Size: 0x4
    // Offset: 0x10
    int createServerPlayersCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public BeatmapDifficultyMask quickPlayBeatmapDifficulty
    // Size: 0x1
    // Offset: 0x14
    ::GlobalNamespace::BeatmapDifficultyMask quickPlayBeatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: quickPlayBeatmapDifficulty and: quickPlaySongPackMaskSerializedName
    char __padding1[0x3] = {};
    // public System.String quickPlaySongPackMaskSerializedName
    // Size: 0x8
    // Offset: 0x18
    ::StringW quickPlaySongPackMaskSerializedName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean quickPlayEnableLevelSelection
    // Size: 0x1
    // Offset: 0x20
    bool quickPlayEnableLevelSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Int32 createServerPlayersCount
    [[deprecated("Use field access instead!")]] int& dyn_createServerPlayersCount();
    // Get instance field reference: public BeatmapDifficultyMask quickPlayBeatmapDifficulty
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficultyMask& dyn_quickPlayBeatmapDifficulty();
    // Get instance field reference: public System.String quickPlaySongPackMaskSerializedName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_quickPlaySongPackMaskSerializedName();
    // Get instance field reference: public System.Boolean quickPlayEnableLevelSelection
    [[deprecated("Use field access instead!")]] bool& dyn_quickPlayEnableLevelSelection();
    // public System.Void .ctor()
    // Offset: 0x13F0450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerModeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerModeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerModeSettings*, creationType>()));
    }
  }; // MultiplayerModeSettings
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerModeSettings), 32 + sizeof(bool)> __GlobalNamespace_MultiplayerModeSettingsSizeCheck;
  static_assert(sizeof(MultiplayerModeSettings) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerModeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
