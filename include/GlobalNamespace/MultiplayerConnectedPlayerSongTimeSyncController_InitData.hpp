// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerConnectedPlayerSongTimeSyncController
#include "GlobalNamespace/MultiplayerConnectedPlayerSongTimeSyncController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData*, "", "MultiplayerConnectedPlayerSongTimeSyncController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerSongTimeSyncController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerSongTimeSyncController::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Single startSongTime
    // Size: 0x4
    // Offset: 0x10
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single songTimeOffset
    // Size: 0x4
    // Offset: 0x14
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single timeScale
    // Size: 0x4
    // Offset: 0x18
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly System.Single startSongTime
    [[deprecated("Use field access instead!")]] float& dyn_startSongTime();
    // Get instance field reference: public readonly System.Single songTimeOffset
    [[deprecated("Use field access instead!")]] float& dyn_songTimeOffset();
    // Get instance field reference: public readonly System.Single timeScale
    [[deprecated("Use field access instead!")]] float& dyn_timeScale();
    // public System.Void .ctor(System.Single startSongTime, System.Single songTimeOffset, System.Single timeScale)
    // Offset: 0x146AD20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerSongTimeSyncController::InitData* New_ctor(float startSongTime, float songTimeOffset, float timeScale) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerSongTimeSyncController::InitData*, creationType>(startSongTime, songTimeOffset, timeScale)));
    }
  }; // MultiplayerConnectedPlayerSongTimeSyncController/InitData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerSongTimeSyncController::InitData), 24 + sizeof(float)> __GlobalNamespace_MultiplayerConnectedPlayerSongTimeSyncController_InitDataSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerSongTimeSyncController::InitData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
