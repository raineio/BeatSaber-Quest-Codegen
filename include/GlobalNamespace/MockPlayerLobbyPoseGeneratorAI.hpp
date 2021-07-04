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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerLobbyPoseGeneratorAI
  class MockPlayerLobbyPoseGeneratorAI : public GlobalNamespace::MockPlayerLobbyPoseGenerator {
    public:
    // Nested type: GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1
    struct $SendPoses$d__1;
    // Creating value type constructor for type: MockPlayerLobbyPoseGeneratorAI
    MockPlayerLobbyPoseGeneratorAI() noexcept {}
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager)
    // Offset: 0x23B8FEC
    // Implemented from: MockPlayerLobbyPoseGenerator
    // Base method: System.Void MockPlayerLobbyPoseGenerator::.ctor(IMultiplayerSessionManager multiplayerSessionManager)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerLobbyPoseGeneratorAI* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerLobbyPoseGeneratorAI*, creationType>(multiplayerSessionManager)));
    }
    // public override System.Void SendPoses(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x23B8FF0
    // Implemented from: MockPlayerLobbyPoseGenerator
    // Base method: System.Void MockPlayerLobbyPoseGenerator::SendPoses(System.Threading.CancellationToken cancellationToken)
    void SendPoses(System::Threading::CancellationToken cancellationToken);
  }; // MockPlayerLobbyPoseGeneratorAI
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*, "", "MockPlayerLobbyPoseGeneratorAI");
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::SendPoses
// Il2CppName: SendPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::*)(System::Threading::CancellationToken)>(&GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::SendPoses)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*), "SendPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
  }
};
