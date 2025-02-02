// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialNoTransitionInstaller
  class TutorialNoTransitionInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialNoTransitionInstaller*, "", "TutorialNoTransitionInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TutorialNoTransitionInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
    public:
    public:
    // private TutorialScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*) == 0x8);
    // private PlayerSpecificSettings _playerSpecificSettings
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TutorialScenesTransitionSetupDataSO _scenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*& dyn__scenesTransitionSetupData();
    // Get instance field reference: private PlayerSpecificSettings _playerSpecificSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSpecificSettings*& dyn__playerSpecificSettings();
    // public System.Void .ctor()
    // Offset: 0x13C84DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialNoTransitionInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x13C8240
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(::Zenject::DiContainer* container);
  }; // TutorialNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(TutorialNoTransitionInstaller), 32 + sizeof(::GlobalNamespace::PlayerSpecificSettings*)> __GlobalNamespace_TutorialNoTransitionInstallerSizeCheck;
  static_assert(sizeof(TutorialNoTransitionInstaller) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialNoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoTransitionInstaller::*)(::Zenject::DiContainer*)>(&GlobalNamespace::TutorialNoTransitionInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialNoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
