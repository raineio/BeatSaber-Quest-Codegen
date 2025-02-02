// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuDestination
#include "GlobalNamespace/MenuDestination.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RunLevelMenuDestination
  class RunLevelMenuDestination;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RunLevelMenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunLevelMenuDestination*, "", "RunLevelMenuDestination");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: RunLevelMenuDestination
  // [TokenAttribute] Offset: FFFFFFFF
  class RunLevelMenuDestination : public ::GlobalNamespace::MenuDestination {
    public:
    public:
    // public readonly IBeatmapLevelPack beatmapLevelPack
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: beatmapCharacteristic
    char __padding2[0x4] = {};
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // public readonly System.Boolean practice
    // Size: 0x1
    // Offset: 0x30
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: practice and: startSongTime
    char __padding4[0x3] = {};
    // public readonly System.Single startSongTime
    // Size: 0x4
    // Offset: 0x34
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single songSpeedMultiplier
    // Size: 0x4
    // Offset: 0x38
    float songSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Boolean overrideEnvironments
    // Size: 0x1
    // Offset: 0x3C
    bool overrideEnvironments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideEnvironments and: environmentType
    char __padding7[0x3] = {};
    // public readonly System.String environmentType
    // Size: 0x8
    // Offset: 0x40
    ::StringW environmentType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String environmentName
    // Size: 0x8
    // Offset: 0x48
    ::StringW environmentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly IBeatmapLevelPack beatmapLevelPack
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapLevelPack*& dyn_beatmapLevelPack();
    // Get instance field reference: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // Get instance field reference: public readonly BeatmapDifficulty beatmapDifficulty
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_beatmapDifficulty();
    // Get instance field reference: public readonly BeatmapCharacteristicSO beatmapCharacteristic
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicSO*& dyn_beatmapCharacteristic();
    // Get instance field reference: public readonly System.Boolean practice
    [[deprecated("Use field access instead!")]] bool& dyn_practice();
    // Get instance field reference: public readonly System.Single startSongTime
    [[deprecated("Use field access instead!")]] float& dyn_startSongTime();
    // Get instance field reference: public readonly System.Single songSpeedMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_songSpeedMultiplier();
    // Get instance field reference: public readonly System.Boolean overrideEnvironments
    [[deprecated("Use field access instead!")]] bool& dyn_overrideEnvironments();
    // Get instance field reference: public readonly System.String environmentType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_environmentType();
    // Get instance field reference: public readonly System.String environmentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_environmentName();
    // public System.Void .ctor(IBeatmapLevelPack beatmapLevelPack, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.Boolean practice, System.Single startSongTime, System.Single songSpeedMultiplier, System.Boolean overrideEnvironments, System.String environmentType, System.String environmentName)
    // Offset: 0x142EE68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RunLevelMenuDestination* New_ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool practice, float startSongTime, float songSpeedMultiplier, bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RunLevelMenuDestination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RunLevelMenuDestination*, creationType>(beatmapLevelPack, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentName)));
    }
  }; // RunLevelMenuDestination
  #pragma pack(pop)
  static check_size<sizeof(RunLevelMenuDestination), 72 + sizeof(::StringW)> __GlobalNamespace_RunLevelMenuDestinationSizeCheck;
  static_assert(sizeof(RunLevelMenuDestination) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RunLevelMenuDestination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
