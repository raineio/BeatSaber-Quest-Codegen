// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainEffectSO
  class MainEffectSO;
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainEffectContainerSO
  class MainEffectContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private MainEffectSO _mainEffect
    // Offset: 0x18
    GlobalNamespace::MainEffectSO* mainEffect;
    // private BoolSO _postProcessEnabled
    // Offset: 0x20
    GlobalNamespace::BoolSO* postProcessEnabled;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MainEffectSO get_mainEffect()
    // Offset: 0x1EF3334
    GlobalNamespace::MainEffectSO* get_mainEffect();
    // public System.Void Init(MainEffectSO mainEffect)
    // Offset: 0x1EF33BC
    void Init(GlobalNamespace::MainEffectSO* mainEffect);
    // protected override System.Void OnEnable()
    // Offset: 0x1EF333C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1EF344C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainEffectContainerSO* New_ctor();
  }; // MainEffectContainerSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectContainerSO*, "", "MainEffectContainerSO");
#pragma pack(pop)
