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
  // Autogenerated type: PlayerSaveData/PlayerMissionStatsData
  class PlayerSaveData::PlayerMissionStatsData : public ::Il2CppObject {
    public:
    // public System.String missionId
    // Offset: 0x10
    ::Il2CppString* missionId;
    // public System.Boolean cleared
    // Offset: 0x18
    bool cleared;
    // public System.Void .ctor()
    // Offset: 0x2089980
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveData::PlayerMissionStatsData* New_ctor();
  }; // PlayerSaveData/PlayerMissionStatsData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PlayerMissionStatsData*, "", "PlayerSaveData/PlayerMissionStatsData");
#pragma pack(pop)
