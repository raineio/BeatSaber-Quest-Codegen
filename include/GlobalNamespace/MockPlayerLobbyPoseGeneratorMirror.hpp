// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockPlayerLobbyPoseGenerator
#include "GlobalNamespace/MockPlayerLobbyPoseGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NodePoseSyncStateManager
  class NodePoseSyncStateManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerLobbyPoseGeneratorMirror
  class MockPlayerLobbyPoseGeneratorMirror : public GlobalNamespace::MockPlayerLobbyPoseGenerator {
    public:
    // Nested type: GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::$SendPoses$d__2
    struct $SendPoses$d__2;
    // private readonly NodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NodePoseSyncStateManager*) == 0x8);
    // Creating value type constructor for type: MockPlayerLobbyPoseGeneratorMirror
    MockPlayerLobbyPoseGeneratorMirror(GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager_ = {}) noexcept : nodePoseSyncStateManager{nodePoseSyncStateManager_} {}
    // Creating conversion operator: operator GlobalNamespace::NodePoseSyncStateManager*
    constexpr operator GlobalNamespace::NodePoseSyncStateManager*() const noexcept {
      return nodePoseSyncStateManager;
    }
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, NodePoseSyncStateManager nodePoseSyncStateManager)
    // Offset: 0x113FED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerLobbyPoseGeneratorMirror* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerLobbyPoseGeneratorMirror*, creationType>(multiplayerSessionManager, nodePoseSyncStateManager)));
    }
    // public override System.Void SendPoses(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x11418B0
    // Implemented from: MockPlayerLobbyPoseGenerator
    // Base method: System.Void MockPlayerLobbyPoseGenerator::SendPoses(System.Threading.CancellationToken cancellationToken)
    void SendPoses(System::Threading::CancellationToken cancellationToken);
  }; // MockPlayerLobbyPoseGeneratorMirror
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerLobbyPoseGeneratorMirror), 32 + sizeof(GlobalNamespace::NodePoseSyncStateManager*)> __GlobalNamespace_MockPlayerLobbyPoseGeneratorMirrorSizeCheck;
  static_assert(sizeof(MockPlayerLobbyPoseGeneratorMirror) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*, "", "MockPlayerLobbyPoseGeneratorMirror");
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::SendPoses
// Il2CppName: SendPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)(System::Threading::CancellationToken)>(&GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::SendPoses)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*), "SendPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
