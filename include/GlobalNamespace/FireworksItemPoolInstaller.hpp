// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FireworksController
  class FireworksController;
  // Forward declaring type: FireworkItemController
  class FireworkItemController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FireworksItemPoolInstaller
  class FireworksItemPoolInstaller;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FireworksItemPoolInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworksItemPoolInstaller*, "", "FireworksItemPoolInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FireworksItemPoolInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class FireworksItemPoolInstaller : public Zenject::MonoInstaller {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private FireworksController _fireworksController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FireworksController* fireworksController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworksController*) == 0x8);
    // private FireworkItemController _fireworkItemControllerPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::FireworkItemController* fireworkItemControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworkItemController*) == 0x8);
    public:
    // Get instance field reference: private FireworksController _fireworksController
    GlobalNamespace::FireworksController*& dyn__fireworksController();
    // Get instance field reference: private FireworkItemController _fireworkItemControllerPrefab
    GlobalNamespace::FireworkItemController*& dyn__fireworkItemControllerPrefab();
    // public System.Void .ctor()
    // Offset: 0x11E5BB4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworksItemPoolInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FireworksItemPoolInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworksItemPoolInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x11E5B24
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // FireworksItemPoolInstaller
  #pragma pack(pop)
  static check_size<sizeof(FireworksItemPoolInstaller), 40 + sizeof(GlobalNamespace::FireworkItemController*)> __GlobalNamespace_FireworksItemPoolInstallerSizeCheck;
  static_assert(sizeof(FireworksItemPoolInstaller) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FireworksItemPoolInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FireworksItemPoolInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksItemPoolInstaller::*)()>(&GlobalNamespace::FireworksItemPoolInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FireworksItemPoolInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
