// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TrailerToolConfigurationProcessor
#include "GlobalNamespace/TrailerToolConfigurationProcessor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration*, "", "TrailerToolConfigurationProcessor/TrailerToolConfiguration");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: TrailerToolConfigurationProcessor/TrailerToolConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  class TrailerToolConfigurationProcessor::TrailerToolConfiguration : public ::Il2CppObject {
    public:
    public:
    // public System.String mode
    // Size: 0x8
    // Offset: 0x10
    ::StringW mode;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String packID
    // Size: 0x8
    // Offset: 0x18
    ::StringW packID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String levelID
    // Size: 0x8
    // Offset: 0x20
    ::StringW levelID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String difficulty
    // Size: 0x8
    // Offset: 0x28
    ::StringW difficulty;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String characteristic
    // Size: 0x8
    // Offset: 0x30
    ::StringW characteristic;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean runLevel
    // Size: 0x1
    // Offset: 0x38
    bool runLevel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: runLevel and: recordingMode
    char __padding5[0x7] = {};
    // public System.String recordingMode
    // Size: 0x8
    // Offset: 0x40
    ::StringW recordingMode;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String recordingPath
    // Size: 0x8
    // Offset: 0x48
    ::StringW recordingPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String cameraView
    // Size: 0x8
    // Offset: 0x50
    ::StringW cameraView;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean addDateTimeSuffixToRecordingName
    // Size: 0x1
    // Offset: 0x58
    bool addDateTimeSuffixToRecordingName;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean screenshotRecording
    // Size: 0x1
    // Offset: 0x59
    bool screenshotRecording;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: screenshotRecording and: screenshotWidth
    char __padding10[0x2] = {};
    // public System.Int32 screenshotWidth
    // Size: 0x4
    // Offset: 0x5C
    int screenshotWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 screenshotHeight
    // Size: 0x4
    // Offset: 0x60
    int screenshotHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 framerate
    // Size: 0x4
    // Offset: 0x64
    int framerate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TrailerToolConfigurationProcessor/PlaybackScreenshot[] playbackScreenshots
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::GlobalNamespace::TrailerToolConfigurationProcessor::PlaybackScreenshot*> playbackScreenshots;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TrailerToolConfigurationProcessor::PlaybackScreenshot*>) == 0x8);
    // public System.Boolean practice
    // Size: 0x1
    // Offset: 0x70
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: practice and: startSongTime
    char __padding15[0x3] = {};
    // public System.Single startSongTime
    // Size: 0x4
    // Offset: 0x74
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single songSpeedMultiplier
    // Size: 0x4
    // Offset: 0x78
    float songSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean overrideEnvironments
    // Size: 0x1
    // Offset: 0x7C
    bool overrideEnvironments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideEnvironments and: environmentType
    char __padding18[0x3] = {};
    // public System.String environmentType
    // Size: 0x8
    // Offset: 0x80
    ::StringW environmentType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String environmentName
    // Size: 0x8
    // Offset: 0x88
    ::StringW environmentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean saveToOldFormat
    // Size: 0x1
    // Offset: 0x90
    bool saveToOldFormat;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String mode
    [[deprecated("Use field access instead!")]] ::StringW& dyn_mode();
    // Get instance field reference: public System.String packID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_packID();
    // Get instance field reference: public System.String levelID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_levelID();
    // Get instance field reference: public System.String difficulty
    [[deprecated("Use field access instead!")]] ::StringW& dyn_difficulty();
    // Get instance field reference: public System.String characteristic
    [[deprecated("Use field access instead!")]] ::StringW& dyn_characteristic();
    // Get instance field reference: public System.Boolean runLevel
    [[deprecated("Use field access instead!")]] bool& dyn_runLevel();
    // Get instance field reference: public System.String recordingMode
    [[deprecated("Use field access instead!")]] ::StringW& dyn_recordingMode();
    // Get instance field reference: public System.String recordingPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_recordingPath();
    // Get instance field reference: public System.String cameraView
    [[deprecated("Use field access instead!")]] ::StringW& dyn_cameraView();
    // Get instance field reference: public System.Boolean addDateTimeSuffixToRecordingName
    [[deprecated("Use field access instead!")]] bool& dyn_addDateTimeSuffixToRecordingName();
    // Get instance field reference: public System.Boolean screenshotRecording
    [[deprecated("Use field access instead!")]] bool& dyn_screenshotRecording();
    // Get instance field reference: public System.Int32 screenshotWidth
    [[deprecated("Use field access instead!")]] int& dyn_screenshotWidth();
    // Get instance field reference: public System.Int32 screenshotHeight
    [[deprecated("Use field access instead!")]] int& dyn_screenshotHeight();
    // Get instance field reference: public System.Int32 framerate
    [[deprecated("Use field access instead!")]] int& dyn_framerate();
    // Get instance field reference: public TrailerToolConfigurationProcessor/PlaybackScreenshot[] playbackScreenshots
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::TrailerToolConfigurationProcessor::PlaybackScreenshot*>& dyn_playbackScreenshots();
    // Get instance field reference: public System.Boolean practice
    [[deprecated("Use field access instead!")]] bool& dyn_practice();
    // Get instance field reference: public System.Single startSongTime
    [[deprecated("Use field access instead!")]] float& dyn_startSongTime();
    // Get instance field reference: public System.Single songSpeedMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_songSpeedMultiplier();
    // Get instance field reference: public System.Boolean overrideEnvironments
    [[deprecated("Use field access instead!")]] bool& dyn_overrideEnvironments();
    // Get instance field reference: public System.String environmentType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_environmentType();
    // Get instance field reference: public System.String environmentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_environmentName();
    // Get instance field reference: public System.Boolean saveToOldFormat
    [[deprecated("Use field access instead!")]] bool& dyn_saveToOldFormat();
    // public System.Void .ctor()
    // Offset: 0x148DCE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailerToolConfigurationProcessor::TrailerToolConfiguration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailerToolConfigurationProcessor::TrailerToolConfiguration*, creationType>()));
    }
  }; // TrailerToolConfigurationProcessor/TrailerToolConfiguration
  #pragma pack(pop)
  static check_size<sizeof(TrailerToolConfigurationProcessor::TrailerToolConfiguration), 144 + sizeof(bool)> __GlobalNamespace_TrailerToolConfigurationProcessor_TrailerToolConfigurationSizeCheck;
  static_assert(sizeof(TrailerToolConfigurationProcessor::TrailerToolConfiguration) == 0x91);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
