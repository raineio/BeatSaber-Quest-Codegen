// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MirroredObstacleController
#include "GlobalNamespace/MirroredObstacleController.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MirroredObstacleController::Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredObstacleController::Pool*, "", "MirroredObstacleController/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MirroredObstacleController/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class MirroredObstacleController::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::MirroredObstacleController*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x115ECC0
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredObstacleController::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirroredObstacleController::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredObstacleController::Pool*, creationType>()));
    }
  }; // MirroredObstacleController/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirroredObstacleController::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
