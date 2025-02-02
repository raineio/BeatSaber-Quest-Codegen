// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelScenesTransitionSetupDataSO
  class LevelScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelScenesTransitionSetupDataSO*, "", "LevelScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LevelScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // Nested type: ::GlobalNamespace::LevelScenesTransitionSetupDataSO::$BeforeScenesWillBeActivatedAsync$d__6
    struct $BeforeScenesWillBeActivatedAsync$d__6;
    public:
    // private GameplayCoreSceneSetupData <gameplayCoreSceneSetupData>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::GameplayCoreSceneSetupData* gameplayCoreSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    public:
    // Get instance field reference: private GameplayCoreSceneSetupData <gameplayCoreSceneSetupData>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayCoreSceneSetupData*& dyn_$gameplayCoreSceneSetupData$k__BackingField();
    // public IReadonlyBeatmapData get_transformedBeatmapData()
    // Offset: 0x1518164
    ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData();
    // protected GameplayCoreSceneSetupData get_gameplayCoreSceneSetupData()
    // Offset: 0x1518180
    ::GlobalNamespace::GameplayCoreSceneSetupData* get_gameplayCoreSceneSetupData();
    // protected System.Void set_gameplayCoreSceneSetupData(GameplayCoreSceneSetupData value)
    // Offset: 0x1518188
    void set_gameplayCoreSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);
    // protected System.Void .ctor()
    // Offset: 0x1518280
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelScenesTransitionSetupDataSO*, creationType>()));
    }
    // protected override System.Threading.Tasks.Task BeforeScenesWillBeActivatedAsync()
    // Offset: 0x1518190
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Threading.Tasks.Task ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync()
    ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();
  }; // LevelScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(LevelScenesTransitionSetupDataSO), 48 + sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*)> __GlobalNamespace_LevelScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(LevelScenesTransitionSetupDataSO) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelScenesTransitionSetupDataSO::get_transformedBeatmapData
// Il2CppName: get_transformedBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::LevelScenesTransitionSetupDataSO::get_transformedBeatmapData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelScenesTransitionSetupDataSO*), "get_transformedBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelScenesTransitionSetupDataSO::get_gameplayCoreSceneSetupData
// Il2CppName: get_gameplayCoreSceneSetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayCoreSceneSetupData* (GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::LevelScenesTransitionSetupDataSO::get_gameplayCoreSceneSetupData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelScenesTransitionSetupDataSO*), "get_gameplayCoreSceneSetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelScenesTransitionSetupDataSO::set_gameplayCoreSceneSetupData
// Il2CppName: set_gameplayCoreSceneSetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::GameplayCoreSceneSetupData*)>(&GlobalNamespace::LevelScenesTransitionSetupDataSO::set_gameplayCoreSceneSetupData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GameplayCoreSceneSetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelScenesTransitionSetupDataSO*), "set_gameplayCoreSceneSetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync
// Il2CppName: BeforeScenesWillBeActivatedAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::LevelScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::LevelScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelScenesTransitionSetupDataSO*), "BeforeScenesWillBeActivatedAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
