// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteDebris
#include "GlobalNamespace/NoteDebris.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Pool
  class Pool;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::NoteDebris::Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebris::Pool*, "", "NoteDebris/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NoteDebris/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteDebris::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::NoteDebris*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1340E20
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebris::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebris::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebris::Pool*, creationType>()));
    }
  }; // NoteDebris/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDebris::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
