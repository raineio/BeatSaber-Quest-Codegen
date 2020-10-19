// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SpawnRotationProcessor
  class SpawnRotationProcessor : public ::Il2CppObject {
    public:
    // private System.Single _rotation
    // Offset: 0x10
    float rotation;
    // private readonly System.Single[] _rotations
    // Offset: 0x18
    ::Array<float>* rotations;
    // public System.Single get_rotation()
    // Offset: 0x1FF67B4
    float get_rotation();
    // public System.Boolean ProcessBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x1FF6650
    bool ProcessBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Single RotationForEventValue(System.Int32 index)
    // Offset: 0x1FF67BC
    float RotationForEventValue(int index);
    // public System.Void .ctor()
    // Offset: 0x1FF6730
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SpawnRotationProcessor* New_ctor();
  }; // SpawnRotationProcessor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationProcessor*, "", "SpawnRotationProcessor");
#pragma pack(pop)
