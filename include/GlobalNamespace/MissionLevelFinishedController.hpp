// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelFinishedController
  class MissionLevelFinishedController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelFinishedController*, "", "MissionLevelFinishedController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelFinishedController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelFinishedController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10D7DF8
    // private ILevelEndActions _gameplayManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ILevelEndActions* gameplayManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILevelEndActions*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PrepareLevelCompletionResults _prepareLevelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // Get instance field reference: private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& dyn__missionLevelSceneSetupData();
    // Get instance field reference: private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionObjectiveCheckersManager*& dyn__missionObjectiveCheckersManager();
    // Get instance field reference: private ILevelEndActions _gameplayManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ILevelEndActions*& dyn__gameplayManager();
    // public System.Void .ctor()
    // Offset: 0x1302F24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelFinishedController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionLevelFinishedController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelFinishedController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1302C90
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1302D7C
    void OnDestroy();
    // private System.Void HandleLevelFinished()
    // Offset: 0x1302E74
    void HandleLevelFinished();
    // private System.Void StartLevelFinished()
    // Offset: 0x1302E78
    void StartLevelFinished();
  }; // MissionLevelFinishedController
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelFinishedController), 48 + sizeof(::GlobalNamespace::ILevelEndActions*)> __GlobalNamespace_MissionLevelFinishedControllerSizeCheck;
  static_assert(sizeof(MissionLevelFinishedController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFinishedController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFinishedController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelFinishedController::*)()>(&GlobalNamespace::MissionLevelFinishedController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelFinishedController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFinishedController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelFinishedController::*)()>(&GlobalNamespace::MissionLevelFinishedController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelFinishedController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFinishedController::HandleLevelFinished
// Il2CppName: HandleLevelFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelFinishedController::*)()>(&GlobalNamespace::MissionLevelFinishedController::HandleLevelFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelFinishedController*), "HandleLevelFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFinishedController::StartLevelFinished
// Il2CppName: StartLevelFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelFinishedController::*)()>(&GlobalNamespace::MissionLevelFinishedController::StartLevelFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelFinishedController*), "StartLevelFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
