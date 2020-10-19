// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: Vector2IntSO
  class Vector2IntSO;
  // Forward declaring type: IntSO
  class IntSO;
  // Forward declaring type: Vector3SO
  class Vector3SO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainSettingsModelSO
  class MainSettingsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::MainSettingsModelSO::WindowMode
    struct WindowMode;
    // Nested type: GlobalNamespace::MainSettingsModelSO::Config
    class Config;
    // public FloatSO vrResolutionScale
    // Offset: 0x18
    GlobalNamespace::FloatSO* vrResolutionScale;
    // public FloatSO menuVRResolutionScaleMultiplier
    // Offset: 0x20
    GlobalNamespace::FloatSO* menuVRResolutionScaleMultiplier;
    // public BoolSO useFixedFoveatedRenderingDuringGameplay
    // Offset: 0x28
    GlobalNamespace::BoolSO* useFixedFoveatedRenderingDuringGameplay;
    // public Vector2IntSO windowResolution
    // Offset: 0x30
    GlobalNamespace::Vector2IntSO* windowResolution;
    // public BoolSO fullscreen
    // Offset: 0x38
    GlobalNamespace::BoolSO* fullscreen;
    // public IntSO antiAliasingLevel
    // Offset: 0x40
    GlobalNamespace::IntSO* antiAliasingLevel;
    // public FloatSO volume
    // Offset: 0x48
    GlobalNamespace::FloatSO* volume;
    // public BoolSO controllersRumbleEnabled
    // Offset: 0x50
    GlobalNamespace::BoolSO* controllersRumbleEnabled;
    // public Vector3SO roomCenter
    // Offset: 0x58
    GlobalNamespace::Vector3SO* roomCenter;
    // public FloatSO roomRotation
    // Offset: 0x60
    GlobalNamespace::FloatSO* roomRotation;
    // public Vector3SO controllerPosition
    // Offset: 0x68
    GlobalNamespace::Vector3SO* controllerPosition;
    // public Vector3SO controllerRotation
    // Offset: 0x70
    GlobalNamespace::Vector3SO* controllerRotation;
    // public IntSO mirrorGraphicsSettings
    // Offset: 0x78
    GlobalNamespace::IntSO* mirrorGraphicsSettings;
    // public IntSO mainEffectGraphicsSettings
    // Offset: 0x80
    GlobalNamespace::IntSO* mainEffectGraphicsSettings;
    // public IntSO bloomPrePassGraphicsSettings
    // Offset: 0x88
    GlobalNamespace::IntSO* bloomPrePassGraphicsSettings;
    // public BoolSO smokeGraphicsSettings
    // Offset: 0x90
    GlobalNamespace::BoolSO* smokeGraphicsSettings;
    // public BoolSO enableAlphaFeatures
    // Offset: 0x98
    GlobalNamespace::BoolSO* enableAlphaFeatures;
    // public IntSO pauseButtonPressDurationLevel
    // Offset: 0xA0
    GlobalNamespace::IntSO* pauseButtonPressDurationLevel;
    // public BoolSO burnMarkTrailsEnabled
    // Offset: 0xA8
    GlobalNamespace::BoolSO* burnMarkTrailsEnabled;
    // public BoolSO screenDisplacementEffectsEnabled
    // Offset: 0xB0
    GlobalNamespace::BoolSO* screenDisplacementEffectsEnabled;
    // public BoolSO smoothCameraEnabled
    // Offset: 0xB8
    GlobalNamespace::BoolSO* smoothCameraEnabled;
    // public FloatSO smoothCameraFieldOfView
    // Offset: 0xC0
    GlobalNamespace::FloatSO* smoothCameraFieldOfView;
    // public Vector3SO smoothCameraThirdPersonPosition
    // Offset: 0xC8
    GlobalNamespace::Vector3SO* smoothCameraThirdPersonPosition;
    // public Vector3SO smoothCameraThirdPersonEulerAngles
    // Offset: 0xD0
    GlobalNamespace::Vector3SO* smoothCameraThirdPersonEulerAngles;
    // public BoolSO smoothCameraThirdPersonEnabled
    // Offset: 0xD8
    GlobalNamespace::BoolSO* smoothCameraThirdPersonEnabled;
    // public FloatSO smoothCameraRotationSmooth
    // Offset: 0xE0
    GlobalNamespace::FloatSO* smoothCameraRotationSmooth;
    // public FloatSO smoothCameraPositionSmooth
    // Offset: 0xE8
    GlobalNamespace::FloatSO* smoothCameraPositionSmooth;
    // public BoolSO overrideAudioLatency
    // Offset: 0xF0
    GlobalNamespace::BoolSO* overrideAudioLatency;
    // public FloatSO audioLatency
    // Offset: 0xF8
    GlobalNamespace::FloatSO* audioLatency;
    // public IntSO maxShockwaveParticles
    // Offset: 0x100
    GlobalNamespace::IntSO* maxShockwaveParticles;
    // public IntSO maxNumberOfCutSoundEffects
    // Offset: 0x108
    GlobalNamespace::IntSO* maxNumberOfCutSoundEffects;
    // public BoolSO onlineServicesEnabled
    // Offset: 0x110
    GlobalNamespace::BoolSO* onlineServicesEnabled;
    // public BoolSO oculusMRCEnabled
    // Offset: 0x118
    GlobalNamespace::BoolSO* oculusMRCEnabled;
    // public BoolSO openVrThreadedHaptics
    // Offset: 0x120
    GlobalNamespace::BoolSO* openVrThreadedHaptics;
    // public IntSO languageSettings
    // Offset: 0x128
    GlobalNamespace::IntSO* languageSettings;
    // public BoolSO depthTextureEnabled
    // Offset: 0x130
    GlobalNamespace::BoolSO* depthTextureEnabled;
    // private System.Boolean <createScreenshotDuringTheGame>k__BackingField
    // Offset: 0x138
    bool createScreenshotDuringTheGame;
    // private System.Boolean <playingForTheFirstTime>k__BackingField
    // Offset: 0x139
    bool playingForTheFirstTime;
    // private System.Boolean _playingForTheFirstTimeChecked
    // Offset: 0x13A
    bool playingForTheFirstTimeChecked;
    // private System.Boolean _isLoaded
    // Offset: 0x13B
    bool isLoaded;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kDefaultPlayerHeight
    static constexpr const float kDefaultPlayerHeight = 1.8;
    // Get static field: static public System.Single kDefaultPlayerHeight
    static float _get_kDefaultPlayerHeight();
    // Set static field: static public System.Single kDefaultPlayerHeight
    static void _set_kDefaultPlayerHeight(float value);
    // static field const value: static public System.Single kHeadPosToPlayerHeightOffset
    static constexpr const float kHeadPosToPlayerHeightOffset = 0.1;
    // Get static field: static public System.Single kHeadPosToPlayerHeightOffset
    static float _get_kHeadPosToPlayerHeightOffset();
    // Set static field: static public System.Single kHeadPosToPlayerHeightOffset
    static void _set_kHeadPosToPlayerHeightOffset(float value);
    // static field const value: static private System.String kFileName
    static constexpr const char* kFileName = "settings.cfg";
    // Get static field: static private System.String kFileName
    static ::Il2CppString* _get_kFileName();
    // Set static field: static private System.String kFileName
    static void _set_kFileName(::Il2CppString* value);
    // static field const value: static private System.String kTempFileName
    static constexpr const char* kTempFileName = "settings.cfg.tmp";
    // Get static field: static private System.String kTempFileName
    static ::Il2CppString* _get_kTempFileName();
    // Set static field: static private System.String kTempFileName
    static void _set_kTempFileName(::Il2CppString* value);
    // static field const value: static private System.String kBackupFileName
    static constexpr const char* kBackupFileName = "settings.cfg.bak";
    // Get static field: static private System.String kBackupFileName
    static ::Il2CppString* _get_kBackupFileName();
    // Set static field: static private System.String kBackupFileName
    static void _set_kBackupFileName(::Il2CppString* value);
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "1.6.0";
    // Get static field: static private System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // static field const value: static public System.Single kControllersPositionOffsetLimit
    static constexpr const float kControllersPositionOffsetLimit = 0.1;
    // Get static field: static public System.Single kControllersPositionOffsetLimit
    static float _get_kControllersPositionOffsetLimit();
    // Set static field: static public System.Single kControllersPositionOffsetLimit
    static void _set_kControllersPositionOffsetLimit(float value);
    // static field const value: static public System.Single kControllersRotationOffsetLimit
    static constexpr const float kControllersRotationOffsetLimit = 180;
    // Get static field: static public System.Single kControllersRotationOffsetLimit
    static float _get_kControllersRotationOffsetLimit();
    // Set static field: static public System.Single kControllersRotationOffsetLimit
    static void _set_kControllersRotationOffsetLimit(float value);
    // public System.Boolean get_createScreenshotDuringTheGame()
    // Offset: 0x1FC0114
    bool get_createScreenshotDuringTheGame();
    // private System.Void set_createScreenshotDuringTheGame(System.Boolean value)
    // Offset: 0x1FC011C
    void set_createScreenshotDuringTheGame(bool value);
    // public System.Boolean get_playingForTheFirstTime()
    // Offset: 0x1FC0128
    bool get_playingForTheFirstTime();
    // private System.Void set_playingForTheFirstTime(System.Boolean value)
    // Offset: 0x1FC0130
    void set_playingForTheFirstTime(bool value);
    // public System.Void Save()
    // Offset: 0x1FC013C
    void Save();
    // public System.Void Load(System.Boolean forced)
    // Offset: 0x1FC0624
    void Load(bool forced);
    // public System.Void __DeleteSettingsFiles()
    // Offset: 0x1FC0C48
    void __DeleteSettingsFiles();
    // protected System.Void OnDisable()
    // Offset: 0x1FC0E14
    void OnDisable();
    // protected override System.Void OnEnable()
    // Offset: 0x1FC0D80
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1FC0E18
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainSettingsModelSO* New_ctor();
  }; // MainSettingsModelSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsModelSO*, "", "MainSettingsModelSO");
#pragma pack(pop)
