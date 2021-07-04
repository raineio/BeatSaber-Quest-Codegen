// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayServerFiniteStateMachine
#include "GlobalNamespace/GameplayServerFiniteStateMachine.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AuthenticationToken
  struct AuthenticationToken;
  // Forward declaring type: DiscoveryPolicy
  struct DiscoveryPolicy;
  // Forward declaring type: InvitePolicy
  struct InvitePolicy;
  // Skipping declaration: GameplayServerConfiguration because it is already included!
  // Forward declaring type: GameplayServerFilter
  struct GameplayServerFilter;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: UserServerStatusUpdateResponse
  class UserServerStatusUpdateResponse;
  // Forward declaring type: UserServerHeartbeatResponse
  class UserServerHeartbeatResponse;
  // Forward declaring type: GetPublicUserServersResponse
  class GetPublicUserServersResponse;
  // Forward declaring type: ConnectToServerResponse
  class ConnectToServerResponse;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServer
  class IMasterServer {
    public:
    // Creating value type constructor for type: IMasterServer
    IMasterServer() noexcept {}
    // public System.Boolean ShouldHandleMessageFromEndPoint(System.Net.IPEndPoint remoteEndPoint)
    // Offset: 0xFFFFFFFF
    bool ShouldHandleMessageFromEndPoint(System::Net::IPEndPoint* remoteEndPoint);
    // public System.Void ReportExceptionForEndPoint(System.Net.IPEndPoint remoteEndPoint, System.Exception exception)
    // Offset: 0xFFFFFFFF
    void ReportExceptionForEndPoint(System::Net::IPEndPoint* remoteEndPoint, System::Exception* exception);
    // public System.Threading.Tasks.Task`1<System.Boolean> TryAuthenticateUser(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, AuthenticationToken authenticationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<bool>* TryAuthenticateUser(uint protocolVersion, System::Net::IPEndPoint* endPoint, GlobalNamespace::AuthenticationToken authenticationToken);
    // public System.Threading.Tasks.Task`1<MasterServer.UserServerStatusUpdateResponse> UpdateUserServerStatus(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.String serverName, System.String secret, System.String password, System.Byte[] random, System.Byte[] publicKey, System.Int32 currentPlayerCount, System.Int32 maxPlayerCount, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, GameplayServerConfiguration configuration)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::UserServerStatusUpdateResponse*>* UpdateUserServerStatus(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* serverName, ::Il2CppString* secret, ::Il2CppString* password, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, int currentPlayerCount, int maxPlayerCount, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.Threading.Tasks.Task`1<MasterServer.UserServerHeartbeatResponse> HeartbeatUserServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.String secret, System.Int32 currentPlayerCount)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::UserServerHeartbeatResponse*>* HeartbeatUserServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, int currentPlayerCount);
    // public System.Void RemoveUserServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.String secret)
    // Offset: 0xFFFFFFFF
    void RemoveUserServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret);
    // public System.Threading.Tasks.Task`1<MasterServer.GetPublicUserServersResponse> GetPublicUserServers(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.Int32 offset, System.Int32 count, GameplayServerFilter filter)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::GetPublicUserServersResponse*>* GetPublicUserServers(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, int offset, int count, GlobalNamespace::GameplayServerFilter filter);
    // public System.Threading.Tasks.Task`1<MasterServer.ConnectToServerResponse> ConnectToUserServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, System.String secret, System.String code, System.String password, System.Byte[] random, System.Byte[] publicKey, System.Boolean useRelay)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::ConnectToServerResponse*>* ConnectToUserServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, ::Il2CppString* code, ::Il2CppString* password, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, bool useRelay);
    // public System.Threading.Tasks.Task`1<MasterServer.ConnectToServerResponse> ConnectToMatchmakingServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String userId, System.String userName, GameplayServerConfiguration configuration, DiscoveryPolicy discoveryPolicy, System.Byte[] random, System.Byte[] publicKey, System.String secret, System.String code)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::ConnectToServerResponse*>* ConnectToMatchmakingServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::GameplayServerConfiguration configuration, GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, ::Il2CppString* secret, ::Il2CppString* code);
    // public System.Boolean TryAuthenticateDedicatedServer(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.String id, System.Byte[] nonce, System.Byte[] hash, System.Int64 timestamp)
    // Offset: 0xFFFFFFFF
    bool TryAuthenticateDedicatedServer(uint protocolVersion, System::Net::IPEndPoint* endPoint, ::Il2CppString* id, ::Array<uint8_t>* nonce, ::Array<uint8_t>* hash, int64_t timestamp);
    // public System.Void HeartbeatDedicatedServer(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint, System.Int32 cpuUtilization, System.Int32 occupiedServerSlotCount, System.Int32 unoccupiedServerSlotCount)
    // Offset: 0xFFFFFFFF
    void HeartbeatDedicatedServer(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint, int cpuUtilization, int occupiedServerSlotCount, int unoccupiedServerSlotCount);
    // public System.Void UpdateMatchmakingServerStatus(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint, System.String id, GameplayServerFiniteStateMachine/GameStateType gameState, System.Int32 currentPlayerCount)
    // Offset: 0xFFFFFFFF
    void UpdateMatchmakingServerStatus(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint, ::Il2CppString* id, GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType gameState, int currentPlayerCount);
    // public System.Void UpdateRelayServerStatus(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint, System.String id, System.Int32 currentPlayerCount)
    // Offset: 0xFFFFFFFF
    void UpdateRelayServerStatus(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint, ::Il2CppString* id, int currentPlayerCount);
    // public System.Void SetDedicatedServerNoLongerOccupied(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint, System.String id)
    // Offset: 0xFFFFFFFF
    void SetDedicatedServerNoLongerOccupied(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint, ::Il2CppString* id);
    // public System.Void RemoveDedicatedServer(System.UInt32 protocolVersion, System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.Net.IPEndPoint endPoint)
    // Offset: 0xFFFFFFFF
    void RemoveDedicatedServer(uint protocolVersion, ::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, System::Net::IPEndPoint* endPoint);
  }; // MasterServer.IMasterServer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServer*, "MasterServer", "IMasterServer");
// Writing MetadataGetter for method: MasterServer::IMasterServer::ShouldHandleMessageFromEndPoint
// Il2CppName: ShouldHandleMessageFromEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::IMasterServer::*)(System::Net::IPEndPoint*)>(&MasterServer::IMasterServer::ShouldHandleMessageFromEndPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "ShouldHandleMessageFromEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::ReportExceptionForEndPoint
// Il2CppName: ReportExceptionForEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IMasterServer::*)(System::Net::IPEndPoint*, System::Exception*)>(&MasterServer::IMasterServer::ReportExceptionForEndPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "ReportExceptionForEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<System::Exception*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::TryAuthenticateUser
// Il2CppName: TryAuthenticateUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool>* (MasterServer::IMasterServer::*)(uint, System::Net::IPEndPoint*, GlobalNamespace::AuthenticationToken)>(&MasterServer::IMasterServer::TryAuthenticateUser)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "TryAuthenticateUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::AuthenticationToken>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::UpdateUserServerStatus
// Il2CppName: UpdateUserServerStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::UserServerStatusUpdateResponse*>* (MasterServer::IMasterServer::*)(uint, System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Array<uint8_t>*, ::Array<uint8_t>*, int, int, GlobalNamespace::DiscoveryPolicy, GlobalNamespace::InvitePolicy, GlobalNamespace::GameplayServerConfiguration)>(&MasterServer::IMasterServer::UpdateUserServerStatus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "UpdateUserServerStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::DiscoveryPolicy>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::InvitePolicy>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayServerConfiguration>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::HeartbeatUserServer
// Il2CppName: HeartbeatUserServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::UserServerHeartbeatResponse*>* (MasterServer::IMasterServer::*)(uint, System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, int)>(&MasterServer::IMasterServer::HeartbeatUserServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "HeartbeatUserServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::RemoveUserServer
// Il2CppName: RemoveUserServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IMasterServer::*)(uint, System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&MasterServer::IMasterServer::RemoveUserServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "RemoveUserServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::GetPublicUserServers
// Il2CppName: GetPublicUserServers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::GetPublicUserServersResponse*>* (MasterServer::IMasterServer::*)(uint, System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, int, int, GlobalNamespace::GameplayServerFilter)>(&MasterServer::IMasterServer::GetPublicUserServers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "GetPublicUserServers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayServerFilter>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::ConnectToUserServer
// Il2CppName: ConnectToUserServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::ConnectToServerResponse*>* (MasterServer::IMasterServer::*)(uint, System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Array<uint8_t>*, ::Array<uint8_t>*, bool)>(&MasterServer::IMasterServer::ConnectToUserServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "ConnectToUserServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::ConnectToMatchmakingServer
// Il2CppName: ConnectToMatchmakingServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::ConnectToServerResponse*>* (MasterServer::IMasterServer::*)(uint, System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, GlobalNamespace::GameplayServerConfiguration, GlobalNamespace::DiscoveryPolicy, ::Array<uint8_t>*, ::Array<uint8_t>*, ::Il2CppString*, ::Il2CppString*)>(&MasterServer::IMasterServer::ConnectToMatchmakingServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "ConnectToMatchmakingServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayServerConfiguration>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::DiscoveryPolicy>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::TryAuthenticateDedicatedServer
// Il2CppName: TryAuthenticateDedicatedServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::IMasterServer::*)(uint, System::Net::IPEndPoint*, ::Il2CppString*, ::Array<uint8_t>*, ::Array<uint8_t>*, int64_t)>(&MasterServer::IMasterServer::TryAuthenticateDedicatedServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "TryAuthenticateDedicatedServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::HeartbeatDedicatedServer
// Il2CppName: HeartbeatDedicatedServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IMasterServer::*)(uint, ::Il2CppString*, int64_t, System::Net::IPEndPoint*, int, int, int)>(&MasterServer::IMasterServer::HeartbeatDedicatedServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "HeartbeatDedicatedServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::UpdateMatchmakingServerStatus
// Il2CppName: UpdateMatchmakingServerStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IMasterServer::*)(uint, ::Il2CppString*, int64_t, System::Net::IPEndPoint*, ::Il2CppString*, GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType, int)>(&MasterServer::IMasterServer::UpdateMatchmakingServerStatus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "UpdateMatchmakingServerStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayServerFiniteStateMachine::GameStateType>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::UpdateRelayServerStatus
// Il2CppName: UpdateRelayServerStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IMasterServer::*)(uint, ::Il2CppString*, int64_t, System::Net::IPEndPoint*, ::Il2CppString*, int)>(&MasterServer::IMasterServer::UpdateRelayServerStatus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "UpdateRelayServerStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::SetDedicatedServerNoLongerOccupied
// Il2CppName: SetDedicatedServerNoLongerOccupied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IMasterServer::*)(uint, ::Il2CppString*, int64_t, System::Net::IPEndPoint*, ::Il2CppString*)>(&MasterServer::IMasterServer::SetDedicatedServerNoLongerOccupied)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "SetDedicatedServerNoLongerOccupied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServer::RemoveDedicatedServer
// Il2CppName: RemoveDedicatedServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IMasterServer::*)(uint, ::Il2CppString*, int64_t, System::Net::IPEndPoint*)>(&MasterServer::IMasterServer::RemoveDedicatedServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServer*), "RemoveDedicatedServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int64_t>(), ::il2cpp_utils::ExtractIndependentType<System::Net::IPEndPoint*>()});
  }
};
