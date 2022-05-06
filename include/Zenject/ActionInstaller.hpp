// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Installer`1
#include "Zenject/Installer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ActionInstaller
  class ActionInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ActionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ActionInstaller*, "Zenject", "ActionInstaller");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ActionInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class ActionInstaller : public ::Zenject::Installer_1<::Zenject::ActionInstaller*> {
    public:
    public:
    // private readonly System.Action`1<Zenject.DiContainer> _installMethod
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::Zenject::DiContainer*>* installMethod;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Zenject::DiContainer*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Zenject::DiContainer*
    constexpr operator ::Zenject::DiContainer*() const noexcept = delete;
    // Get instance field reference: private readonly System.Action`1<Zenject.DiContainer> _installMethod
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Zenject::DiContainer*>*& dyn__installMethod();
    // public System.Void .ctor(System.Action`1<Zenject.DiContainer> installMethod)
    // Offset: 0x17687B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActionInstaller* New_ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ActionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActionInstaller*, creationType>(installMethod)));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1768870
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // public override System.Void InstallBindings()
    // Offset: 0x1768814
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1768918
    // Implemented from: Zenject.Installer`1
    // Base method: Zenject.InjectTypeInfo Installer_1::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo InstallerBase::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ActionInstaller
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ActionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ActionInstaller::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ActionInstaller::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ActionInstaller*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ActionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ActionInstaller::*)()>(&Zenject::ActionInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ActionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ActionInstaller::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ActionInstaller::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ActionInstaller*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
