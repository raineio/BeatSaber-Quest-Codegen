// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.NetSyncDisconnectReason
#include "Oculus/Platform/NetSyncDisconnectReason.hpp"
// Including type: Oculus.Platform.NetSyncConnectionStatus
#include "Oculus/Platform/NetSyncConnectionStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncConnection
  class NetSyncConnection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncConnection);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncConnection*, "Oculus.Platform.Models", "NetSyncConnection");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.NetSyncConnection
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSyncConnection : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int64 ConnectionId
    // Size: 0x8
    // Offset: 0x10
    int64_t ConnectionId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly Oculus.Platform.NetSyncDisconnectReason DisconnectReason
    // Size: 0x4
    // Offset: 0x18
    ::Oculus::Platform::NetSyncDisconnectReason DisconnectReason;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::NetSyncDisconnectReason) == 0x4);
    // Padding between fields: DisconnectReason and: SessionId
    char __padding1[0x4] = {};
    // public readonly System.UInt64 SessionId
    // Size: 0x8
    // Offset: 0x20
    uint64_t SessionId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly Oculus.Platform.NetSyncConnectionStatus Status
    // Size: 0x4
    // Offset: 0x28
    ::Oculus::Platform::NetSyncConnectionStatus Status;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::NetSyncConnectionStatus) == 0x4);
    // Padding between fields: Status and: ZoneId
    char __padding3[0x4] = {};
    // public readonly System.String ZoneId
    // Size: 0x8
    // Offset: 0x30
    ::StringW ZoneId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int64 ConnectionId
    [[deprecated("Use field access instead!")]] int64_t& dyn_ConnectionId();
    // Get instance field reference: public readonly Oculus.Platform.NetSyncDisconnectReason DisconnectReason
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::NetSyncDisconnectReason& dyn_DisconnectReason();
    // Get instance field reference: public readonly System.UInt64 SessionId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SessionId();
    // Get instance field reference: public readonly Oculus.Platform.NetSyncConnectionStatus Status
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::NetSyncConnectionStatus& dyn_Status();
    // Get instance field reference: public readonly System.String ZoneId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ZoneId();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19E3264
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSyncConnection* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::NetSyncConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSyncConnection*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.NetSyncConnection
  #pragma pack(pop)
  static check_size<sizeof(NetSyncConnection), 48 + sizeof(::StringW)> __Oculus_Platform_Models_NetSyncConnectionSizeCheck;
  static_assert(sizeof(NetSyncConnection) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::NetSyncConnection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
