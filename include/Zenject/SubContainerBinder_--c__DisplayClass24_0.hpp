// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerBinder
#include "Zenject/SubContainerBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerBinder/<>c__DisplayClass24_0
  class SubContainerBinder::$$c__DisplayClass24_0 : public ::Il2CppObject {
    public:
    // public System.String resourcePath
    // Offset: 0x10
    ::Il2CppString* resourcePath;
    // public Zenject.GameObjectCreationParameters gameObjectInfo
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectInfo;
    // Zenject.ISubContainerCreator <ByNewContextPrefabResource>b__0(Zenject.DiContainer container)
    // Offset: 0x12F57D4
    Zenject::ISubContainerCreator* $ByNewContextPrefabResource$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x12F4EC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SubContainerBinder::$$c__DisplayClass24_0* New_ctor();
  }; // Zenject.SubContainerBinder/<>c__DisplayClass24_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass24_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass24_0");
#pragma pack(pop)
