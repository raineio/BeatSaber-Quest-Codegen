// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionObjectiveCheckersManager
#include "GlobalNamespace/MissionObjectiveCheckersManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjective
  class MissionObjective;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveCheckersManager::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveCheckersManager::InitData*, "", "MissionObjectiveCheckersManager/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveCheckersManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionObjectiveCheckersManager::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly MissionObjective[] missionObjectives
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MissionObjective*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::GlobalNamespace::MissionObjective*>
    constexpr operator ::ArrayW<::GlobalNamespace::MissionObjective*>() const noexcept {
      return missionObjectives;
    }
    // Get instance field reference: public readonly MissionObjective[] missionObjectives
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MissionObjective*>& dyn_missionObjectives();
    // public System.Void .ctor(MissionObjective[] missionObjectives)
    // Offset: 0x1495CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveCheckersManager::InitData* New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionObjectiveCheckersManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveCheckersManager::InitData*, creationType>(missionObjectives)));
    }
  }; // MissionObjectiveCheckersManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectiveCheckersManager::InitData), 16 + sizeof(::ArrayW<::GlobalNamespace::MissionObjective*>)> __GlobalNamespace_MissionObjectiveCheckersManager_InitDataSizeCheck;
  static_assert(sizeof(MissionObjectiveCheckersManager::InitData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
