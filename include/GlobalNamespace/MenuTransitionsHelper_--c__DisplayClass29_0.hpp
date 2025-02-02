// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuTransitionsHelper
#include "GlobalNamespace/MenuTransitionsHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass29_0*, "", "MenuTransitionsHelper/<>c__DisplayClass29_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MenuTransitionsHelper/<>c__DisplayClass29_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MenuTransitionsHelper::$$c__DisplayClass29_0 : public ::Il2CppObject {
    public:
    public:
    // public MenuTransitionsHelper <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::MenuTransitionsHelper* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // public StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // public LevelCompletionResults levelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelCompletionResults*) == 0x8);
    public:
    // Get instance field reference: public MenuTransitionsHelper <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuTransitionsHelper*& dyn_$$4__this();
    // Get instance field reference: public StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn_standardLevelScenesTransitionSetupData();
    // Get instance field reference: public LevelCompletionResults levelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelCompletionResults*& dyn_levelCompletionResults();
    // public System.Void .ctor()
    // Offset: 0x134E554
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuTransitionsHelper::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuTransitionsHelper::$$c__DisplayClass29_0*, creationType>()));
    }
    // System.Void <HandleMainGameSceneDidFinish>b__0(Zenject.DiContainer container)
    // Offset: 0x134EED8
    void $HandleMainGameSceneDidFinish$b__0(::Zenject::DiContainer* container);
  }; // MenuTransitionsHelper/<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(MenuTransitionsHelper::$$c__DisplayClass29_0), 32 + sizeof(::GlobalNamespace::LevelCompletionResults*)> __GlobalNamespace_MenuTransitionsHelper_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(MenuTransitionsHelper::$$c__DisplayClass29_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass29_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass29_0::$HandleMainGameSceneDidFinish$b__0
// Il2CppName: <HandleMainGameSceneDidFinish>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass29_0::*)(::Zenject::DiContainer*)>(&GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass29_0::$HandleMainGameSceneDidFinish$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass29_0*), "<HandleMainGameSceneDidFinish>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
