// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersPanelController
  class GameplayModifiersPanelController;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SelectModifiersViewController
  class SelectModifiersViewController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SelectModifiersViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectModifiersViewController*, "", "SelectModifiersViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: SelectModifiersViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectModifiersViewController : public HMUI::ViewController {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private GameplayModifiersPanelController _gameplayModifiersPanelController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameplayModifiersPanelController* gameplayModifiersPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersPanelController*) == 0x8);
    public:
    // Get instance field reference: private GameplayModifiersPanelController _gameplayModifiersPanelController
    GlobalNamespace::GameplayModifiersPanelController*& dyn__gameplayModifiersPanelController();
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0x12343BC
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public System.Void Setup(GameplayModifiers gameplayModifiers)
    // Offset: 0x12343D8
    void Setup(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void .ctor()
    // Offset: 0x12344A4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectModifiersViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectModifiersViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectModifiersViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x12343F4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // SelectModifiersViewController
  #pragma pack(pop)
  static check_size<sizeof(SelectModifiersViewController), 112 + sizeof(GlobalNamespace::GameplayModifiersPanelController*)> __GlobalNamespace_SelectModifiersViewControllerSizeCheck;
  static_assert(sizeof(SelectModifiersViewController) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectModifiersViewController::get_gameplayModifiers
// Il2CppName: get_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (GlobalNamespace::SelectModifiersViewController::*)()>(&GlobalNamespace::SelectModifiersViewController::get_gameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectModifiersViewController*), "get_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectModifiersViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectModifiersViewController::*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::SelectModifiersViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectModifiersViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectModifiersViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SelectModifiersViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectModifiersViewController::*)(bool, bool, bool)>(&GlobalNamespace::SelectModifiersViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectModifiersViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
