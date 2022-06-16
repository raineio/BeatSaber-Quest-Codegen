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
  // Forward declaring type: HealthWarningScenesTransitionSetupDataSO
  class HealthWarningScenesTransitionSetupDataSO;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: BeatmapEditorScenesTransitionSetupDataSO
  class BeatmapEditorScenesTransitionSetupDataSO;
  // Forward declaring type: ShaderWarmupScenesTransitionSetupDataSO
  class ShaderWarmupScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DefaultScenesTransitionsFromInit
  class DefaultScenesTransitionsFromInit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DefaultScenesTransitionsFromInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultScenesTransitionsFromInit*, "", "DefaultScenesTransitionsFromInit");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: DefaultScenesTransitionsFromInit
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultScenesTransitionsFromInit : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private HealthWarningScenesTransitionSetupDataSO _healthWarningScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO* healthWarningScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*) == 0x8);
    // private MenuScenesTransitionSetupDataSO _mainMenuScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MenuScenesTransitionSetupDataSO* mainMenuScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // private BeatmapEditorScenesTransitionSetupDataSO _beatmapEditorScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* beatmapEditorScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*) == 0x8);
    // private ShaderWarmupScenesTransitionSetupDataSO _shaderWarmupScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO* shaderWarmupScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10D12F0
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HealthWarningScenesTransitionSetupDataSO _healthWarningScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*& dyn__healthWarningScenesTransitionSetupData();
    // Get instance field reference: private MenuScenesTransitionSetupDataSO _mainMenuScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuScenesTransitionSetupDataSO*& dyn__mainMenuScenesTransitionSetupData();
    // Get instance field reference: private BeatmapEditorScenesTransitionSetupDataSO _beatmapEditorScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*& dyn__beatmapEditorScenesTransitionSetupData();
    // Get instance field reference: private ShaderWarmupScenesTransitionSetupDataSO _shaderWarmupScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*& dyn__shaderWarmupScenesTransitionSetupData();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // public MenuScenesTransitionSetupDataSO get_mainMenuScenesTransitionSetupData()
    // Offset: 0x140842C
    ::GlobalNamespace::MenuScenesTransitionSetupDataSO* get_mainMenuScenesTransitionSetupData();
    // public System.Void .ctor()
    // Offset: 0x14085A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultScenesTransitionsFromInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DefaultScenesTransitionsFromInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultScenesTransitionsFromInit*, creationType>()));
    }
    // public System.Void TransitionToNextScene(System.Boolean goStraightToMenu, System.Boolean goStraightToEditor)
    // Offset: 0x1408434
    void TransitionToNextScene(bool goStraightToMenu, bool goStraightToEditor);
  }; // DefaultScenesTransitionsFromInit
  #pragma pack(pop)
  static check_size<sizeof(DefaultScenesTransitionsFromInit), 56 + sizeof(::GlobalNamespace::GameScenesManager*)> __GlobalNamespace_DefaultScenesTransitionsFromInitSizeCheck;
  static_assert(sizeof(DefaultScenesTransitionsFromInit) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DefaultScenesTransitionsFromInit::get_mainMenuScenesTransitionSetupData
// Il2CppName: get_mainMenuScenesTransitionSetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuScenesTransitionSetupDataSO* (GlobalNamespace::DefaultScenesTransitionsFromInit::*)()>(&GlobalNamespace::DefaultScenesTransitionsFromInit::get_mainMenuScenesTransitionSetupData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultScenesTransitionsFromInit*), "get_mainMenuScenesTransitionSetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DefaultScenesTransitionsFromInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToNextScene
// Il2CppName: TransitionToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DefaultScenesTransitionsFromInit::*)(bool, bool)>(&GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToNextScene)> {
  static const MethodInfo* get() {
    static auto* goStraightToMenu = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* goStraightToEditor = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultScenesTransitionsFromInit*), "TransitionToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{goStraightToMenu, goStraightToEditor});
  }
};
