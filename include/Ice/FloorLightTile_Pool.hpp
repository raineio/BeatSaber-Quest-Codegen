// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Ice.FloorLightTile
#include "Ice/FloorLightTile.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ice::FloorLightTile::Pool);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTile::Pool*, "Ice", "FloorLightTile/Pool");
// Type namespace: Ice
namespace Ice {
  // WARNING Size may be invalid!
  // Autogenerated type: Ice.FloorLightTile/Ice.Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class FloorLightTile::Pool : public ::Zenject::MonoMemoryPool_1<::Ice::FloorLightTile*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2AC853C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloorLightTile::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ice::FloorLightTile::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloorLightTile::Pool*, creationType>()));
    }
  }; // Ice.FloorLightTile/Ice.Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ice::FloorLightTile::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
