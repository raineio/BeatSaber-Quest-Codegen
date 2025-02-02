// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RecordingToolSettingsFlowCoordinator
#include "GlobalNamespace/RecordingToolSettingsFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData*, "", "RecordingToolSettingsFlowCoordinator/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RecordingToolSettingsFlowCoordinator/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingToolSettingsFlowCoordinator::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly ScenesTransitionSetupDataSO nextScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::ScenesTransitionSetupDataSO*
    constexpr operator ::GlobalNamespace::ScenesTransitionSetupDataSO*() const noexcept {
      return nextScenesTransitionSetupData;
    }
    // Get instance field reference: public readonly ScenesTransitionSetupDataSO nextScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScenesTransitionSetupDataSO*& dyn_nextScenesTransitionSetupData();
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0x142F6C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingToolSettingsFlowCoordinator::InitData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingToolSettingsFlowCoordinator::InitData*, creationType>(nextScenesTransitionSetupData)));
    }
  }; // RecordingToolSettingsFlowCoordinator/InitData
  #pragma pack(pop)
  static check_size<sizeof(RecordingToolSettingsFlowCoordinator::InitData), 16 + sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO*)> __GlobalNamespace_RecordingToolSettingsFlowCoordinator_InitDataSizeCheck;
  static_assert(sizeof(RecordingToolSettingsFlowCoordinator::InitData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
