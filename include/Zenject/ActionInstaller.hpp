// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Installer`1
#include "Zenject/Installer_1.hpp"
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
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ActionInstaller
  class ActionInstaller : public Zenject::Installer_1<Zenject::ActionInstaller*> {
    public:
    // private readonly System.Action`1<Zenject.DiContainer> _installMethod
    // Offset: 0x18
    System::Action_1<Zenject::DiContainer*>* installMethod;
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // public System.Void .ctor(System.Action`1<Zenject.DiContainer> installMethod)
    // Offset: 0xFEDEEC
    static ActionInstaller* New_ctor(System::Action_1<Zenject::DiContainer*>* installMethod);
    // public override System.Void InstallBindings()
    // Offset: 0xFEDF58
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.ActionInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ActionInstaller*, "Zenject", "ActionInstaller");
#pragma pack(pop)
