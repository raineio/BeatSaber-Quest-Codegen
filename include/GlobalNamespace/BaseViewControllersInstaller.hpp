// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ScriptableObjectInstaller
#include "Zenject/ScriptableObjectInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BaseViewControllersInstaller
  class BaseViewControllersInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BaseViewControllersInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseViewControllersInstaller*, "", "BaseViewControllersInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BaseViewControllersInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseViewControllersInstaller : public ::Zenject::ScriptableObjectInstaller {
    public:
    public:
    // private SimpleDialogPromptViewController _simpleDialogPromptViewControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    public:
    // Get instance field reference: private SimpleDialogPromptViewController _simpleDialogPromptViewControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleDialogPromptViewController*& dyn__simpleDialogPromptViewControllerPrefab();
    // public System.Void .ctor()
    // Offset: 0x134BDE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseViewControllersInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BaseViewControllersInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseViewControllersInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x134BD74
    // Implemented from: Zenject.ScriptableObjectInstallerBase
    // Base method: System.Void ScriptableObjectInstallerBase::InstallBindings()
    void InstallBindings();
  }; // BaseViewControllersInstaller
  #pragma pack(pop)
  static check_size<sizeof(BaseViewControllersInstaller), 32 + sizeof(::GlobalNamespace::SimpleDialogPromptViewController*)> __GlobalNamespace_BaseViewControllersInstallerSizeCheck;
  static_assert(sizeof(BaseViewControllersInstaller) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseViewControllersInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BaseViewControllersInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseViewControllersInstaller::*)()>(&GlobalNamespace::BaseViewControllersInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseViewControllersInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
