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
  // Autogenerated type: PlayerSaveData/PracticeSettings
  class PlayerSaveData::PracticeSettings : public ::Il2CppObject {
    public:
    // public System.Single startSongTime
    // Offset: 0x10
    float startSongTime;
    // public System.Single songSpeedMul
    // Offset: 0x14
    float songSpeedMul;
    // public System.Void .ctor()
    // Offset: 0x20898B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveData::PracticeSettings* New_ctor();
  }; // PlayerSaveData/PracticeSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PracticeSettings*, "", "PlayerSaveData/PracticeSettings");
#pragma pack(pop)
