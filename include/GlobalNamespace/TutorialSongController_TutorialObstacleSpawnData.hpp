// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
// Including type: TutorialSongController/TutorialObjectSpawnData
#include "GlobalNamespace/TutorialSongController_TutorialObjectSpawnData.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData*, "", "TutorialSongController/TutorialObstacleSpawnData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSongController/TutorialObstacleSpawnData
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialSongController::TutorialObstacleSpawnData : public ::GlobalNamespace::TutorialSongController::TutorialObjectSpawnData {
    public:
    public:
    // public readonly NoteLineLayer noteLineLayer
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public readonly System.Int32 width
    // Size: 0x4
    // Offset: 0x28
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 height
    // Size: 0x4
    // Offset: 0x2C
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly NoteLineLayer noteLineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_noteLineLayer();
    // Get instance field reference: public readonly System.Int32 width
    [[deprecated("Use field access instead!")]] int& dyn_width();
    // Get instance field reference: public readonly System.Int32 height
    [[deprecated("Use field access instead!")]] int& dyn_height();
    // public System.Void .ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex, System.Int32 width, System.Int32 height, NoteLineLayer noteLineLayer)
    // Offset: 0x13C9D4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSongController::TutorialObstacleSpawnData* New_ctor(::GlobalNamespace::Signal* signal, int firstTimeBeatOffset, int beatOffset, int lineIndex, int width, int height, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSongController::TutorialObstacleSpawnData*, creationType>(signal, firstTimeBeatOffset, beatOffset, lineIndex, width, height, noteLineLayer)));
    }
  }; // TutorialSongController/TutorialObstacleSpawnData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSongController::TutorialObstacleSpawnData), 44 + sizeof(int)> __GlobalNamespace_TutorialSongController_TutorialObstacleSpawnDataSizeCheck;
  static_assert(sizeof(TutorialSongController::TutorialObstacleSpawnData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
