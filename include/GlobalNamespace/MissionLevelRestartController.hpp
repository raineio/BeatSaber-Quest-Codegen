// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelRestartController
#include "GlobalNamespace/ILevelRestartController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelRestartController
  class MissionLevelRestartController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionLevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelRestartController*, "", "MissionLevelRestartController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelRestartController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelRestartController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::ILevelRestartController*/ {
    public:
    public:
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ILevelRestartController
    operator ::GlobalNamespace::ILevelRestartController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ILevelRestartController*>(this);
    }
    // Creating interface conversion operator: i_ILevelRestartController
    inline ::GlobalNamespace::ILevelRestartController* i_ILevelRestartController() noexcept {
      return reinterpret_cast<::GlobalNamespace::ILevelRestartController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& dyn__missionLevelSceneSetupData();
    // Get instance field reference: private PrepareLevelCompletionResults _prepareLevelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // Get instance field reference: private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionObjectiveCheckersManager*& dyn__missionObjectiveCheckersManager();
    // public System.Void .ctor()
    // Offset: 0x130616C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelRestartController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionLevelRestartController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelRestartController*, creationType>()));
    }
    // public System.Void RestartLevel()
    // Offset: 0x13060C0
    void RestartLevel();
  }; // MissionLevelRestartController
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelRestartController), 40 + sizeof(::GlobalNamespace::MissionObjectiveCheckersManager*)> __GlobalNamespace_MissionLevelRestartControllerSizeCheck;
  static_assert(sizeof(MissionLevelRestartController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelRestartController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelRestartController::RestartLevel
// Il2CppName: RestartLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelRestartController::*)()>(&GlobalNamespace::MissionLevelRestartController::RestartLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelRestartController*), "RestartLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
