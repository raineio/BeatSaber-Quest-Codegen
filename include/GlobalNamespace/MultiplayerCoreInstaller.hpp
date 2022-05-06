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
  // Forward declaring type: ScoreSyncStateManager
  class ScoreSyncStateManager;
  // Forward declaring type: MultiplayerBadgesModelSO
  class MultiplayerBadgesModelSO;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerCoreInstaller
  class MultiplayerCoreInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerCoreInstaller*, "", "MultiplayerCoreInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerCoreInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerCoreInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // [SpaceAttribute] Offset: 0x10DBF84
    // private ScoreSyncStateManager _scoreSyncStateManagerPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ScoreSyncStateManager* scoreSyncStateManagerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScoreSyncStateManager*) == 0x8);
    // private MultiplayerBadgesModelSO _multiplayerBadgesModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerBadgesModelSO* multiplayerBadgesModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerBadgesModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10DBFCC
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0x10DBFDC
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    public:
    // Get instance field reference: private ScoreSyncStateManager _scoreSyncStateManagerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScoreSyncStateManager*& dyn__scoreSyncStateManagerPrefab();
    // Get instance field reference: private MultiplayerBadgesModelSO _multiplayerBadgesModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerBadgesModelSO*& dyn__multiplayerBadgesModel();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // public System.Void .ctor()
    // Offset: 0x13FDC08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerCoreInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerCoreInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerCoreInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x13FD6C4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // MultiplayerCoreInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerCoreInstaller), 56 + sizeof(::GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_MultiplayerCoreInstallerSizeCheck;
  static_assert(sizeof(MultiplayerCoreInstaller) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCoreInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCoreInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCoreInstaller::*)()>(&GlobalNamespace::MultiplayerCoreInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCoreInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
