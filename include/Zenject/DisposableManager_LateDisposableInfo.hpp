// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateDisposable
  class ILateDisposable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DisposableManager/LateDisposableInfo
  class DisposableManager::LateDisposableInfo : public ::Il2CppObject {
    public:
    // public Zenject.ILateDisposable LateDisposable
    // Offset: 0x10
    Zenject::ILateDisposable* LateDisposable;
    // public System.Int32 Priority
    // Offset: 0x18
    int Priority;
    // public System.Void .ctor(Zenject.ILateDisposable lateDisposable, System.Int32 priority)
    // Offset: 0x121EAE8
    static DisposableManager::LateDisposableInfo* New_ctor(Zenject::ILateDisposable* lateDisposable, int priority);
  }; // Zenject.DisposableManager/LateDisposableInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::LateDisposableInfo*, "Zenject", "DisposableManager/LateDisposableInfo");
#pragma pack(pop)
