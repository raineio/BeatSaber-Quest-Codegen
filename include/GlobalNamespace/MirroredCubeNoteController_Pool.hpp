// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MirroredCubeNoteController
#include "GlobalNamespace/MirroredCubeNoteController.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MirroredCubeNoteController::Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredCubeNoteController::Pool*, "", "MirroredCubeNoteController/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MirroredCubeNoteController/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class MirroredCubeNoteController::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::MirroredCubeNoteController*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x115E9B8
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredCubeNoteController::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirroredCubeNoteController::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredCubeNoteController::Pool*, creationType>()));
    }
  }; // MirroredCubeNoteController/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirroredCubeNoteController::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
