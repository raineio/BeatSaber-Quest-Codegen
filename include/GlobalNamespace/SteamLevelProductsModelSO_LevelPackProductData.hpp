// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamLevelProductsModelSO
#include "GlobalNamespace/SteamLevelProductsModelSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamLevelProductsModelSO/LevelPackProductData
  class SteamLevelProductsModelSO::LevelPackProductData : public ::Il2CppObject {
    public:
    // private System.UInt32 _bundleId
    // Offset: 0x10
    uint bundleId;
    // private System.String _levelPackId
    // Offset: 0x18
    ::Il2CppString* levelPackId;
    // private SteamLevelProductsModelSO/LevelProductData[] _levelProductsData
    // Offset: 0x20
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* levelProductsData;
    // public System.UInt32 get_bundleId()
    // Offset: 0x1F93C04
    uint get_bundleId();
    // public System.String get_levelPackId()
    // Offset: 0x1F93C0C
    ::Il2CppString* get_levelPackId();
    // public SteamLevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0x1F93C14
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0x1F93C1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SteamLevelProductsModelSO::LevelPackProductData* New_ctor();
  }; // SteamLevelProductsModelSO/LevelPackProductData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*, "", "SteamLevelProductsModelSO/LevelPackProductData");
#pragma pack(pop)
