// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ScriptableObjectInstaller
#include "Zenject/ScriptableObjectInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Ice
namespace Ice {
  // Forward declaring type: FloorLightTile
  class FloorLightTile;
}
// Completed forward declares
// Type namespace: Ice
namespace Ice {
  // Forward declaring type: FloorLightTileInstaller
  class FloorLightTileInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ice::FloorLightTileInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTileInstaller*, "Ice", "FloorLightTileInstaller");
// Type namespace: Ice
namespace Ice {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Ice.FloorLightTileInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class FloorLightTileInstaller : public ::Zenject::ScriptableObjectInstaller {
    public:
    public:
    // private Ice.FloorLightTile _floorLightTilePrefab
    // Size: 0x8
    // Offset: 0x20
    ::Ice::FloorLightTile* floorLightTilePrefab;
    // Field size check
    static_assert(sizeof(::Ice::FloorLightTile*) == 0x8);
    public:
    // Get instance field reference: private Ice.FloorLightTile _floorLightTilePrefab
    [[deprecated("Use field access instead!")]] ::Ice::FloorLightTile*& dyn__floorLightTilePrefab();
    // public System.Void .ctor()
    // Offset: 0x2B76C34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloorLightTileInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ice::FloorLightTileInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloorLightTileInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x2B76BB4
    // Implemented from: Zenject.ScriptableObjectInstallerBase
    // Base method: System.Void ScriptableObjectInstallerBase::InstallBindings()
    void InstallBindings();
  }; // Ice.FloorLightTileInstaller
  #pragma pack(pop)
  static check_size<sizeof(FloorLightTileInstaller), 32 + sizeof(::Ice::FloorLightTile*)> __Ice_FloorLightTileInstallerSizeCheck;
  static_assert(sizeof(FloorLightTileInstaller) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ice::FloorLightTileInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Ice::FloorLightTileInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightTileInstaller::*)()>(&Ice::FloorLightTileInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightTileInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
