// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BombCutSoundEffect
#include "GlobalNamespace/BombCutSoundEffect.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BombCutSoundEffect/Pool
  class BombCutSoundEffect::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::BombCutSoundEffect*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1FADCB8
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static BombCutSoundEffect::Pool* New_ctor();
  }; // BombCutSoundEffect/Pool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombCutSoundEffect::Pool*, "", "BombCutSoundEffect/Pool");
#pragma pack(pop)
