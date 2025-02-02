// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: TutorialNoteController
#include "GlobalNamespace/TutorialNoteController.hpp"
// Including type: BombNoteController
#include "GlobalNamespace/BombNoteController.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Skipping declaration: NoteData because it is already included!
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: SliderData
  class SliderData;
  // Skipping declaration: NoteController because it is already included!
  // Forward declaring type: SliderController
  class SliderController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialBeatmapObjectManager
  class TutorialBeatmapObjectManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectManager*, "", "TutorialBeatmapObjectManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: TutorialBeatmapObjectManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
    public:
    // Writing base type padding for base size: 0x91 to desired offset: 0x98
    char ___base_padding[0x7] = {};
    // Nested type: ::GlobalNamespace::TutorialBeatmapObjectManager::InitData
    class InitData;
    public:
    // private MemoryPoolContainer`1<TutorialNoteController> _tutorialNotePoolContainer
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>* tutorialNotePoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* bombNotePoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* obstaclePoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*) == 0x8);
    // private TutorialBeatmapObjectManager/InitData _initData
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::TutorialBeatmapObjectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialBeatmapObjectManager::InitData*) == 0x8);
    public:
    // Get instance field reference: private MemoryPoolContainer`1<TutorialNoteController> _tutorialNotePoolContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*& dyn__tutorialNotePoolContainer();
    // Get instance field reference: private MemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*& dyn__bombNotePoolContainer();
    // Get instance field reference: private MemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*& dyn__obstaclePoolContainer();
    // Get instance field reference: private TutorialBeatmapObjectManager/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TutorialBeatmapObjectManager::InitData*& dyn__initData();
    // private System.Void Init(TutorialBeatmapObjectManager/InitData initData, TutorialNoteController/Pool tutorialNotePool, BombNoteController/Pool bombNotePool, ObstacleController/Pool obstaclePool)
    // Offset: 0x13C65B4
    void Init(::GlobalNamespace::TutorialBeatmapObjectManager::InitData* initData, ::GlobalNamespace::TutorialNoteController::Pool* tutorialNotePool, ::GlobalNamespace::BombNoteController::Pool* bombNotePool, ::GlobalNamespace::ObstacleController::Pool* obstaclePool);
    // public override System.Collections.Generic.List`1<ObstacleController> get_activeObstacleControllers()
    // Offset: 0x13C655C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Collections.Generic.List`1<ObstacleController> BeatmapObjectManager::get_activeObstacleControllers()
    ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();
    // public System.Void .ctor()
    // Offset: 0x13C6B94
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialBeatmapObjectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialBeatmapObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialBeatmapObjectManager*, creationType>()));
    }
    // public override System.Void ProcessObstacleData(ObstacleData obstacleData, in BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x13C669C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::ProcessObstacleData(ObstacleData obstacleData, in BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData> obstacleSpawnData, float rotation);
    // public override System.Void ProcessNoteData(NoteData noteData, in BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Boolean forceIsFirstNoteBehaviour)
    // Offset: 0x13C679C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::ProcessNoteData(NoteData noteData, in BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Boolean forceIsFirstNoteBehaviour)
    void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData> noteSpawnData, float rotation, bool forceIsFirstNoteBehaviour);
    // public override System.Void ProcessSliderData(SliderData sliderData, in BeatmapObjectSpawnMovementData/SliderSpawnData sliderSpawnData, System.Single rotation)
    // Offset: 0x13C6A30
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::ProcessSliderData(SliderData sliderData, in BeatmapObjectSpawnMovementData/SliderSpawnData sliderSpawnData, System.Single rotation)
    void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData> sliderSpawnData, float rotation);
    // protected override System.Void DespawnInternal(NoteController noteController)
    // Offset: 0x13C6A34
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(NoteController noteController)
    void DespawnInternal(::GlobalNamespace::NoteController* noteController);
    // protected override System.Void DespawnInternal(ObstacleController obstacleController)
    // Offset: 0x13C6B28
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(ObstacleController obstacleController)
    void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);
    // protected override System.Void DespawnInternal(SliderController sliderNoteController)
    // Offset: 0x13C6B90
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(SliderController sliderNoteController)
    void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);
  }; // TutorialBeatmapObjectManager
  #pragma pack(pop)
  static check_size<sizeof(TutorialBeatmapObjectManager), 176 + sizeof(::GlobalNamespace::TutorialBeatmapObjectManager::InitData*)> __GlobalNamespace_TutorialBeatmapObjectManagerSizeCheck;
  static_assert(sizeof(TutorialBeatmapObjectManager) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::TutorialBeatmapObjectManager::InitData*, ::GlobalNamespace::TutorialNoteController::Pool*, ::GlobalNamespace::BombNoteController::Pool*, ::GlobalNamespace::ObstacleController::Pool*)>(&GlobalNamespace::TutorialBeatmapObjectManager::Init)> {
  static const MethodInfo* get() {
    static auto* initData = &::il2cpp_utils::GetClassFromName("", "TutorialBeatmapObjectManager/InitData")->byval_arg;
    static auto* tutorialNotePool = &::il2cpp_utils::GetClassFromName("", "TutorialNoteController/Pool")->byval_arg;
    static auto* bombNotePool = &::il2cpp_utils::GetClassFromName("", "BombNoteController/Pool")->byval_arg;
    static auto* obstaclePool = &::il2cpp_utils::GetClassFromName("", "ObstacleController/Pool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initData, tutorialNotePool, bombNotePool, obstaclePool});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers
// Il2CppName: get_activeObstacleControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* (GlobalNamespace::TutorialBeatmapObjectManager::*)()>(&GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "get_activeObstacleControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::ProcessObstacleData
// Il2CppName: ProcessObstacleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::ObstacleData*, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData>, float)>(&GlobalNamespace::TutorialBeatmapObjectManager::ProcessObstacleData)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* obstacleSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/ObstacleSpawnData")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "ProcessObstacleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData, obstacleSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::ProcessNoteData
// Il2CppName: ProcessNoteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::NoteData*, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData>, float, bool)>(&GlobalNamespace::TutorialBeatmapObjectManager::ProcessNoteData)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* noteSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/NoteSpawnData")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* forceIsFirstNoteBehaviour = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "ProcessNoteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, noteSpawnData, rotation, forceIsFirstNoteBehaviour});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::ProcessSliderData
// Il2CppName: ProcessSliderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::SliderData*, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData>, float)>(&GlobalNamespace::TutorialBeatmapObjectManager::ProcessSliderData)> {
  static const MethodInfo* get() {
    static auto* sliderData = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    static auto* sliderSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/SliderSpawnData")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "ProcessSliderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderData, sliderSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal
// Il2CppName: DespawnInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "DespawnInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal
// Il2CppName: DespawnInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(&GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "DespawnInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal
// Il2CppName: DespawnInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(&GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  static const MethodInfo* get() {
    static auto* sliderNoteController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectManager*), "DespawnInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderNoteController});
  }
};
