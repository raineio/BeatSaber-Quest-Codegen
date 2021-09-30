// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SpawnRotationChevronManager
#include "GlobalNamespace/SpawnRotationChevronManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SpawnRotationChevron
  class SpawnRotationChevron;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: SpawnRotationChevronManager/DirectionData
  // [TokenAttribute] Offset: FFFFFFFF
  class SpawnRotationChevronManager::DirectionData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public SpawnRotationChevron chevron
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::SpawnRotationChevron* chevron;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SpawnRotationChevron*) == 0x8);
    // public System.Boolean fullyLid
    // Size: 0x1
    // Offset: 0x18
    bool fullyLid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullyLid and: fadeOutStartTime
    char __padding1[0x3] = {};
    // public System.Single fadeOutStartTime
    // Size: 0x4
    // Offset: 0x1C
    float fadeOutStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fadeInEndTime
    // Size: 0x4
    // Offset: 0x20
    float fadeInEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public SpawnRotationChevron chevron
    GlobalNamespace::SpawnRotationChevron*& dyn_chevron();
    // Get instance field reference: public System.Boolean fullyLid
    bool& dyn_fullyLid();
    // Get instance field reference: public System.Single fadeOutStartTime
    float& dyn_fadeOutStartTime();
    // Get instance field reference: public System.Single fadeInEndTime
    float& dyn_fadeInEndTime();
    // public System.Void .ctor()
    // Offset: 0x110F4FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnRotationChevronManager::DirectionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SpawnRotationChevronManager::DirectionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnRotationChevronManager::DirectionData*, creationType>()));
    }
  }; // SpawnRotationChevronManager/DirectionData
  #pragma pack(pop)
  static check_size<sizeof(SpawnRotationChevronManager::DirectionData), 32 + sizeof(float)> __GlobalNamespace_SpawnRotationChevronManager_DirectionDataSizeCheck;
  static_assert(sizeof(SpawnRotationChevronManager::DirectionData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationChevronManager::DirectionData*, "", "SpawnRotationChevronManager/DirectionData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::DirectionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
