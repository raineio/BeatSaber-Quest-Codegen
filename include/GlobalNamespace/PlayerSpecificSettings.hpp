// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSpecificSettings
  class PlayerSpecificSettings : public ::Il2CppObject {
    public:
    // private System.Boolean _staticLights
    // Offset: 0x10
    bool staticLights;
    // private System.Boolean _leftHanded
    // Offset: 0x11
    bool leftHanded;
    // private System.Single _playerHeight
    // Offset: 0x14
    float playerHeight;
    // private System.Boolean _automaticPlayerHeight
    // Offset: 0x18
    bool automaticPlayerHeight;
    // private System.Single _sfxVolume
    // Offset: 0x1C
    float sfxVolume;
    // private System.Boolean _reduceDebris
    // Offset: 0x20
    bool reduceDebris;
    // private System.Boolean _noTextsAndHuds
    // Offset: 0x21
    bool noTextsAndHuds;
    // private System.Boolean _noFailEffects
    // Offset: 0x22
    bool noFailEffects;
    // private System.Boolean _advancedHud
    // Offset: 0x23
    bool advancedHud;
    // private System.Boolean _autoRestart
    // Offset: 0x24
    bool autoRestart;
    // private System.Single _saberTrailIntensity
    // Offset: 0x28
    float saberTrailIntensity;
    // private System.Single _noteJumpStartBeatOffset
    // Offset: 0x2C
    float noteJumpStartBeatOffset;
    // private System.Boolean _hideNoteSpawnEffect
    // Offset: 0x30
    bool hideNoteSpawnEffect;
    // private System.Boolean _adaptiveSfx
    // Offset: 0x31
    bool adaptiveSfx;
    // public System.Boolean get_staticLights()
    // Offset: 0x208E550
    bool get_staticLights();
    // public System.Boolean get_leftHanded()
    // Offset: 0x208E558
    bool get_leftHanded();
    // public System.Single get_playerHeight()
    // Offset: 0x208E560
    float get_playerHeight();
    // public System.Boolean get_automaticPlayerHeight()
    // Offset: 0x208E568
    bool get_automaticPlayerHeight();
    // public System.Single get_sfxVolume()
    // Offset: 0x208E570
    float get_sfxVolume();
    // public System.Boolean get_reduceDebris()
    // Offset: 0x208E578
    bool get_reduceDebris();
    // public System.Boolean get_noTextsAndHuds()
    // Offset: 0x208E580
    bool get_noTextsAndHuds();
    // public System.Boolean get_noFailEffects()
    // Offset: 0x208E588
    bool get_noFailEffects();
    // public System.Boolean get_advancedHud()
    // Offset: 0x208E590
    bool get_advancedHud();
    // public System.Boolean get_autoRestart()
    // Offset: 0x208E598
    bool get_autoRestart();
    // public System.Single get_saberTrailIntensity()
    // Offset: 0x208E5A0
    float get_saberTrailIntensity();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x208E5A8
    float get_noteJumpStartBeatOffset();
    // public System.Boolean get_hideNoteSpawnEffect()
    // Offset: 0x208E5B0
    bool get_hideNoteSpawnEffect();
    // public System.Boolean get_adaptiveSfx()
    // Offset: 0x208E5B8
    bool get_adaptiveSfx();
    // public System.Void .ctor(System.Boolean staticLights, System.Boolean leftHanded, System.Single playerHeight, System.Boolean automaticPlayerHeight, System.Single sfxVolume, System.Boolean reduceDebris, System.Boolean noTextsAndHuds, System.Boolean noFailEffects, System.Boolean advancedHud, System.Boolean autoRestart, System.Single saberTrailIntensity, System.Single noteJumpStartBeatOffset, System.Boolean hideNoteSpawnEffect, System.Boolean adaptiveSfx)
    // Offset: 0x208B30C
    static PlayerSpecificSettings* New_ctor(bool staticLights, bool leftHanded, float playerHeight, bool automaticPlayerHeight, float sfxVolume, bool reduceDebris, bool noTextsAndHuds, bool noFailEffects, bool advancedHud, bool autoRestart, float saberTrailIntensity, float noteJumpStartBeatOffset, bool hideNoteSpawnEffect, bool adaptiveSfx);
    // public PlayerSpecificSettings CopyWith(System.Nullable`1<System.Boolean> staticLights, System.Nullable`1<System.Boolean> leftHanded, System.Nullable`1<System.Single> playerHeight, System.Nullable`1<System.Boolean> automaticPlayerHeight, System.Nullable`1<System.Single> sfxVolume, System.Nullable`1<System.Boolean> reduceDebris, System.Nullable`1<System.Boolean> noTextsAndHuds, System.Nullable`1<System.Boolean> noFailEffects, System.Nullable`1<System.Boolean> advancedHud, System.Nullable`1<System.Boolean> autoRestart, System.Nullable`1<System.Single> saberTrailIntensity, System.Nullable`1<System.Single> noteJumpStartBeatOffset, System.Nullable`1<System.Boolean> hideNoteSpawnEffect, System.Nullable`1<System.Boolean> adaptiveSfx)
    // Offset: 0x208B72C
    GlobalNamespace::PlayerSpecificSettings* CopyWith(System::Nullable_1<bool> staticLights, System::Nullable_1<bool> leftHanded, System::Nullable_1<float> playerHeight, System::Nullable_1<bool> automaticPlayerHeight, System::Nullable_1<float> sfxVolume, System::Nullable_1<bool> reduceDebris, System::Nullable_1<bool> noTextsAndHuds, System::Nullable_1<bool> noFailEffects, System::Nullable_1<bool> advancedHud, System::Nullable_1<bool> autoRestart, System::Nullable_1<float> saberTrailIntensity, System::Nullable_1<float> noteJumpStartBeatOffset, System::Nullable_1<bool> hideNoteSpawnEffect, System::Nullable_1<bool> adaptiveSfx);
    // public System.Void .ctor()
    // Offset: 0x2087AFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSpecificSettings* New_ctor();
  }; // PlayerSpecificSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSpecificSettings*, "", "PlayerSpecificSettings");
#pragma pack(pop)
