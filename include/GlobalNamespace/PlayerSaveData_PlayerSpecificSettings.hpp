// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveData/PlayerSpecificSettings
  class PlayerSaveData::PlayerSpecificSettings : public ::Il2CppObject {
    public:
    // public System.Boolean staticLights
    // Offset: 0x10
    bool staticLights;
    // public System.Boolean leftHanded
    // Offset: 0x11
    bool leftHanded;
    // public System.Single playerHeight
    // Offset: 0x14
    float playerHeight;
    // public System.Boolean automaticPlayerHeight
    // Offset: 0x18
    bool automaticPlayerHeight;
    // public System.Single sfxVolume
    // Offset: 0x1C
    float sfxVolume;
    // public System.Boolean reduceDebris
    // Offset: 0x20
    bool reduceDebris;
    // public System.Boolean noTextsAndHuds
    // Offset: 0x21
    bool noTextsAndHuds;
    // public System.Boolean advancedHud
    // Offset: 0x22
    bool advancedHud;
    // public System.Single saberTrailIntensity
    // Offset: 0x24
    float saberTrailIntensity;
    // public System.Boolean autoRestart
    // Offset: 0x28
    bool autoRestart;
    // public System.Boolean noFailEffects
    // Offset: 0x29
    bool noFailEffects;
    // public System.Single noteJumpBeatOffset
    // Offset: 0x2C
    float noteJumpBeatOffset;
    // public System.Boolean hideNoteSpawnEffect
    // Offset: 0x30
    bool hideNoteSpawnEffect;
    // public System.Boolean adaptiveSfx
    // Offset: 0x31
    bool adaptiveSfx;
    // public System.Void .ctor()
    // Offset: 0x2089888
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveData::PlayerSpecificSettings* New_ctor();
  }; // PlayerSaveData/PlayerSpecificSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PlayerSpecificSettings*, "", "PlayerSaveData/PlayerSpecificSettings");
#pragma pack(pop)
