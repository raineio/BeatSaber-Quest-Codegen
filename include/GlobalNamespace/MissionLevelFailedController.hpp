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
  // Forward declaring type: LevelFailedTextEffect
  class LevelFailedTextEffect;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelFailedController
  class MissionLevelFailedController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MissionLevelFailedController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelFailedController*, "", "MissionLevelFailedController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelFailedController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelFailedController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionLevelFailedController::InitData
    class InitData;
    // Nested type: GlobalNamespace::MissionLevelFailedController::$LevelFailedCoroutine$d__13
    class $LevelFailedCoroutine$d__13;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // private LevelFailedTextEffect _levelFailedTextEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LevelFailedTextEffect* levelFailedTextEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFailedTextEffect*) == 0x8);
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF3CF80
    // private MissionLevelFailedController/InitData _initData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MissionLevelFailedController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelFailedController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xF3CF90
    // private BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xF3CFA0
    // private GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xF3CFB0
    // private ILevelEndActions _gameplayManager
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // [InjectAttribute] Offset: 0xF3CFC0
    // private BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PrepareLevelCompletionResults _prepareLevelCompletionResults
    GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // Get instance field reference: private LevelFailedTextEffect _levelFailedTextEffect
    GlobalNamespace::LevelFailedTextEffect*& dyn__levelFailedTextEffect();
    // Get instance field reference: private MissionLevelScenesTransitionSetupDataSO _missionLevelSceneSetupData
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& dyn__missionLevelSceneSetupData();
    // Get instance field reference: private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    GlobalNamespace::MissionObjectiveCheckersManager*& dyn__missionObjectiveCheckersManager();
    // Get instance field reference: private MissionLevelFailedController/InitData _initData
    GlobalNamespace::MissionLevelFailedController::InitData*& dyn__initData();
    // Get instance field reference: private BeatmapObjectSpawnController _beatmapObjectSpawnController
    GlobalNamespace::BeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // Get instance field reference: private GameSongController _gameSongController
    GlobalNamespace::GameSongController*& dyn__gameSongController();
    // Get instance field reference: private ILevelEndActions _gameplayManager
    GlobalNamespace::ILevelEndActions*& dyn__gameplayManager();
    // Get instance field reference: private BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // protected System.Void Start()
    // Offset: 0x1161120
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1161208
    void OnDestroy();
    // private System.Void HandleLevelFailed()
    // Offset: 0x1161300
    void HandleLevelFailed();
    // private System.Collections.IEnumerator LevelFailedCoroutine()
    // Offset: 0x116132C
    System::Collections::IEnumerator* LevelFailedCoroutine();
    // public System.Void .ctor()
    // Offset: 0x11613C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelFailedController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelFailedController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelFailedController*, creationType>()));
    }
  }; // MissionLevelFailedController
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelFailedController), 88 + sizeof(GlobalNamespace::BeatmapObjectManager*)> __GlobalNamespace_MissionLevelFailedControllerSizeCheck;
  static_assert(sizeof(MissionLevelFailedController) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFailedController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelFailedController::*)()>(&GlobalNamespace::MissionLevelFailedController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelFailedController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFailedController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelFailedController::*)()>(&GlobalNamespace::MissionLevelFailedController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelFailedController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFailedController::HandleLevelFailed
// Il2CppName: HandleLevelFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelFailedController::*)()>(&GlobalNamespace::MissionLevelFailedController::HandleLevelFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelFailedController*), "HandleLevelFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFailedController::LevelFailedCoroutine
// Il2CppName: LevelFailedCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MissionLevelFailedController::*)()>(&GlobalNamespace::MissionLevelFailedController::LevelFailedCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelFailedController*), "LevelFailedCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelFailedController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
