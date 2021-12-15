// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FlyingScoreSpawner
#include "GlobalNamespace/FlyingScoreSpawner.hpp"
// Including type: FlyingScoreSpawner/SpawnPosition
#include "GlobalNamespace/FlyingScoreSpawner_SpawnPosition.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FlyingScoreSpawner::InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreSpawner::InitData*, "", "FlyingScoreSpawner/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: FlyingScoreSpawner/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingScoreSpawner::InitData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly FlyingScoreSpawner/SpawnPosition spawnPosition
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::FlyingScoreSpawner::SpawnPosition spawnPosition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingScoreSpawner::SpawnPosition) == 0x4);
    public:
    // Creating conversion operator: operator GlobalNamespace::FlyingScoreSpawner::SpawnPosition
    constexpr operator GlobalNamespace::FlyingScoreSpawner::SpawnPosition() const noexcept {
      return spawnPosition;
    }
    // Get instance field reference: public readonly FlyingScoreSpawner/SpawnPosition spawnPosition
    GlobalNamespace::FlyingScoreSpawner::SpawnPosition& dyn_spawnPosition();
    // public System.Void .ctor(FlyingScoreSpawner/SpawnPosition spawnPosition)
    // Offset: 0x11E80BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingScoreSpawner::InitData* New_ctor(GlobalNamespace::FlyingScoreSpawner::SpawnPosition spawnPosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingScoreSpawner::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingScoreSpawner::InitData*, creationType>(spawnPosition)));
    }
  }; // FlyingScoreSpawner/InitData
  #pragma pack(pop)
  static check_size<sizeof(FlyingScoreSpawner::InitData), 16 + sizeof(GlobalNamespace::FlyingScoreSpawner::SpawnPosition)> __GlobalNamespace_FlyingScoreSpawner_InitDataSizeCheck;
  static_assert(sizeof(FlyingScoreSpawner::InitData) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreSpawner::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
