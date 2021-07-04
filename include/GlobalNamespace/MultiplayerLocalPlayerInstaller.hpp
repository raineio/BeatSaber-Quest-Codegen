// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelSceneSetupData
  class MultiplayerLevelSceneSetupData;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalPlayerInstaller
  class MultiplayerLocalPlayerInstaller : public Zenject::MonoInstaller {
    public:
    // [InjectAttribute] Offset: 0xE20C2C
    // private readonly MultiplayerLevelSceneSetupData _levelSceneSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLevelSceneSetupData* levelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xE20C3C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE20C4C
    // private readonly MultiplayerPlayerStartState _startState
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::MultiplayerPlayerStartState startState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayerStartState) == 0x4);
    // Creating value type constructor for type: MultiplayerLocalPlayerInstaller
    MultiplayerLocalPlayerInstaller(GlobalNamespace::MultiplayerLevelSceneSetupData* levelSceneSetupData_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::MultiplayerPlayerStartState startState_ = {}) noexcept : levelSceneSetupData{levelSceneSetupData_}, multiplayerSessionManager{multiplayerSessionManager_}, startState{startState_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x102FCF4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x102FEDC
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalPlayerInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalPlayerInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalPlayerInstaller*, creationType>()));
    }
  }; // MultiplayerLocalPlayerInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalPlayerInstaller), 48 + sizeof(GlobalNamespace::MultiplayerPlayerStartState)> __GlobalNamespace_MultiplayerLocalPlayerInstallerSizeCheck;
  static_assert(sizeof(MultiplayerLocalPlayerInstaller) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalPlayerInstaller*, "", "MultiplayerLocalPlayerInstaller");
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalPlayerInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalPlayerInstaller::*)()>(&GlobalNamespace::MultiplayerLocalPlayerInstaller::InstallBindings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalPlayerInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalPlayerInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
