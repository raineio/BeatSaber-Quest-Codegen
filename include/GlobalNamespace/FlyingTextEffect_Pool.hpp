// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FlyingTextEffect
#include "GlobalNamespace/FlyingTextEffect.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlyingTextEffect/Pool
  class FlyingTextEffect::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingTextEffect*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2026134
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlyingTextEffect::Pool* New_ctor();
  }; // FlyingTextEffect/Pool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingTextEffect::Pool*, "", "FlyingTextEffect/Pool");
#pragma pack(pop)
