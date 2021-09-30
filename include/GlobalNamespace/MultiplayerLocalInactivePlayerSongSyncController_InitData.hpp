// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerLocalInactivePlayerSongSyncController
#include "GlobalNamespace/MultiplayerLocalInactivePlayerSongSyncController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerSongSyncController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerSongSyncController::InitData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public readonly UnityEngine.AudioClip audioClip
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // public readonly System.Single startSongTime
    // Size: 0x4
    // Offset: 0x18
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single songTimeOffset
    // Size: 0x4
    // Offset: 0x1C
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single timeScale
    // Size: 0x4
    // Offset: 0x20
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly UnityEngine.AudioClip audioClip
    UnityEngine::AudioClip*& dyn_audioClip();
    // Get instance field reference: public readonly System.Single startSongTime
    float& dyn_startSongTime();
    // Get instance field reference: public readonly System.Single songTimeOffset
    float& dyn_songTimeOffset();
    // Get instance field reference: public readonly System.Single timeScale
    float& dyn_timeScale();
    // public System.Void .ctor(UnityEngine.AudioClip audioClip, System.Single startSongTime, System.Single songTimeOffset, System.Single timeScale)
    // Offset: 0x1176E38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerSongSyncController::InitData* New_ctor(UnityEngine::AudioClip* audioClip, float startSongTime, float songTimeOffset, float timeScale) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerSongSyncController::InitData*, creationType>(audioClip, startSongTime, songTimeOffset, timeScale)));
    }
  }; // MultiplayerLocalInactivePlayerSongSyncController/InitData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerSongSyncController::InitData), 32 + sizeof(float)> __GlobalNamespace_MultiplayerLocalInactivePlayerSongSyncController_InitDataSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerSongSyncController::InitData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData*, "", "MultiplayerLocalInactivePlayerSongSyncController/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
