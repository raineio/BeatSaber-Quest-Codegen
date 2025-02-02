// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData::PracticeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData::PracticeSettings*, "", "PlayerSaveData/PracticeSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/PracticeSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::PracticeSettings : public ::Il2CppObject {
    public:
    public:
    // public System.Single startSongTime
    // Size: 0x4
    // Offset: 0x10
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single songSpeedMul
    // Size: 0x4
    // Offset: 0x14
    float songSpeedMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single startSongTime
    [[deprecated("Use field access instead!")]] float& dyn_startSongTime();
    // Get instance field reference: public System.Single songSpeedMul
    [[deprecated("Use field access instead!")]] float& dyn_songSpeedMul();
    // public System.Void .ctor()
    // Offset: 0x1585C3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PracticeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveData::PracticeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PracticeSettings*, creationType>()));
    }
  }; // PlayerSaveData/PracticeSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::PracticeSettings), 20 + sizeof(float)> __GlobalNamespace_PlayerSaveData_PracticeSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::PracticeSettings) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::PracticeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
