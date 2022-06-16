// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Including type: LiteNetLib.DisconnectReason
#include "LiteNetLib/DisconnectReason.hpp"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: NetManager
  class NetManager;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetEvent
  class NetEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::NetEvent);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetEvent*, "LiteNetLib", "NetEvent");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class NetEvent : public ::Il2CppObject {
    public:
    // Nested type: ::LiteNetLib::NetEvent::EType
    struct EType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LiteNetLib.NetEvent/LiteNetLib.EType
    // [TokenAttribute] Offset: FFFFFFFF
    struct EType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EType
      constexpr EType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType Connect
      static constexpr const int Connect = 0;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Connect
      static ::LiteNetLib::NetEvent::EType _get_Connect();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Connect
      static void _set_Connect(::LiteNetLib::NetEvent::EType value);
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType Disconnect
      static constexpr const int Disconnect = 1;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Disconnect
      static ::LiteNetLib::NetEvent::EType _get_Disconnect();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Disconnect
      static void _set_Disconnect(::LiteNetLib::NetEvent::EType value);
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType Receive
      static constexpr const int Receive = 2;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Receive
      static ::LiteNetLib::NetEvent::EType _get_Receive();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Receive
      static void _set_Receive(::LiteNetLib::NetEvent::EType value);
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType ReceiveUnconnected
      static constexpr const int ReceiveUnconnected = 3;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType ReceiveUnconnected
      static ::LiteNetLib::NetEvent::EType _get_ReceiveUnconnected();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType ReceiveUnconnected
      static void _set_ReceiveUnconnected(::LiteNetLib::NetEvent::EType value);
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType Error
      static constexpr const int Error = 4;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Error
      static ::LiteNetLib::NetEvent::EType _get_Error();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Error
      static void _set_Error(::LiteNetLib::NetEvent::EType value);
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType ConnectionLatencyUpdated
      static constexpr const int ConnectionLatencyUpdated = 5;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType ConnectionLatencyUpdated
      static ::LiteNetLib::NetEvent::EType _get_ConnectionLatencyUpdated();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType ConnectionLatencyUpdated
      static void _set_ConnectionLatencyUpdated(::LiteNetLib::NetEvent::EType value);
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType Broadcast
      static constexpr const int Broadcast = 6;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Broadcast
      static ::LiteNetLib::NetEvent::EType _get_Broadcast();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType Broadcast
      static void _set_Broadcast(::LiteNetLib::NetEvent::EType value);
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType ConnectionRequest
      static constexpr const int ConnectionRequest = 7;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType ConnectionRequest
      static ::LiteNetLib::NetEvent::EType _get_ConnectionRequest();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType ConnectionRequest
      static void _set_ConnectionRequest(::LiteNetLib::NetEvent::EType value);
      // static field const value: static public LiteNetLib.NetEvent/LiteNetLib.EType MessageDelivered
      static constexpr const int MessageDelivered = 8;
      // Get static field: static public LiteNetLib.NetEvent/LiteNetLib.EType MessageDelivered
      static ::LiteNetLib::NetEvent::EType _get_MessageDelivered();
      // Set static field: static public LiteNetLib.NetEvent/LiteNetLib.EType MessageDelivered
      static void _set_MessageDelivered(::LiteNetLib::NetEvent::EType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // LiteNetLib.NetEvent/LiteNetLib.EType
    #pragma pack(pop)
    static check_size<sizeof(NetEvent::EType), 0 + sizeof(int)> __LiteNetLib_NetEvent_ETypeSizeCheck;
    static_assert(sizeof(NetEvent::EType) == 0x4);
    public:
    // public LiteNetLib.NetEvent/LiteNetLib.EType Type
    // Size: 0x4
    // Offset: 0x10
    ::LiteNetLib::NetEvent::EType Type;
    // Field size check
    static_assert(sizeof(::LiteNetLib::NetEvent::EType) == 0x4);
    // Padding between fields: Type and: Peer
    char __padding0[0x4] = {};
    // public LiteNetLib.NetPeer Peer
    // Size: 0x8
    // Offset: 0x18
    ::LiteNetLib::NetPeer* Peer;
    // Field size check
    static_assert(sizeof(::LiteNetLib::NetPeer*) == 0x8);
    // public System.Net.IPEndPoint RemoteEndPoint
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::IPEndPoint* RemoteEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public System.Object UserData
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* UserData;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Int32 Latency
    // Size: 0x4
    // Offset: 0x30
    int Latency;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Net.Sockets.SocketError ErrorCode
    // Size: 0x4
    // Offset: 0x34
    ::System::Net::Sockets::SocketError ErrorCode;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::SocketError) == 0x4);
    // public LiteNetLib.DisconnectReason DisconnectReason
    // Size: 0x4
    // Offset: 0x38
    ::LiteNetLib::DisconnectReason DisconnectReason;
    // Field size check
    static_assert(sizeof(::LiteNetLib::DisconnectReason) == 0x4);
    // Padding between fields: DisconnectReason and: ConnectionRequest
    char __padding6[0x4] = {};
    // public LiteNetLib.ConnectionRequest ConnectionRequest
    // Size: 0x8
    // Offset: 0x40
    ::LiteNetLib::ConnectionRequest* ConnectionRequest;
    // Field size check
    static_assert(sizeof(::LiteNetLib::ConnectionRequest*) == 0x8);
    // public LiteNetLib.DeliveryMethod DeliveryMethod
    // Size: 0x1
    // Offset: 0x48
    ::LiteNetLib::DeliveryMethod DeliveryMethod;
    // Field size check
    static_assert(sizeof(::LiteNetLib::DeliveryMethod) == 0x1);
    // Padding between fields: DeliveryMethod and: DataReader
    char __padding8[0x7] = {};
    // public readonly LiteNetLib.NetPacketReader DataReader
    // Size: 0x8
    // Offset: 0x50
    ::LiteNetLib::NetPacketReader* DataReader;
    // Field size check
    static_assert(sizeof(::LiteNetLib::NetPacketReader*) == 0x8);
    public:
    // Get instance field reference: public LiteNetLib.NetEvent/LiteNetLib.EType Type
    [[deprecated("Use field access instead!")]] ::LiteNetLib::NetEvent::EType& dyn_Type();
    // Get instance field reference: public LiteNetLib.NetPeer Peer
    [[deprecated("Use field access instead!")]] ::LiteNetLib::NetPeer*& dyn_Peer();
    // Get instance field reference: public System.Net.IPEndPoint RemoteEndPoint
    [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_RemoteEndPoint();
    // Get instance field reference: public System.Object UserData
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_UserData();
    // Get instance field reference: public System.Int32 Latency
    [[deprecated("Use field access instead!")]] int& dyn_Latency();
    // Get instance field reference: public System.Net.Sockets.SocketError ErrorCode
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::SocketError& dyn_ErrorCode();
    // Get instance field reference: public LiteNetLib.DisconnectReason DisconnectReason
    [[deprecated("Use field access instead!")]] ::LiteNetLib::DisconnectReason& dyn_DisconnectReason();
    // Get instance field reference: public LiteNetLib.ConnectionRequest ConnectionRequest
    [[deprecated("Use field access instead!")]] ::LiteNetLib::ConnectionRequest*& dyn_ConnectionRequest();
    // Get instance field reference: public LiteNetLib.DeliveryMethod DeliveryMethod
    [[deprecated("Use field access instead!")]] ::LiteNetLib::DeliveryMethod& dyn_DeliveryMethod();
    // Get instance field reference: public readonly LiteNetLib.NetPacketReader DataReader
    [[deprecated("Use field access instead!")]] ::LiteNetLib::NetPacketReader*& dyn_DataReader();
    // public System.Void .ctor(LiteNetLib.NetManager manager)
    // Offset: 0x21A8650
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEvent* New_ctor(::LiteNetLib::NetManager* manager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::NetEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEvent*, creationType>(manager)));
    }
  }; // LiteNetLib.NetEvent
  #pragma pack(pop)
  static check_size<sizeof(NetEvent), 80 + sizeof(::LiteNetLib::NetPacketReader*)> __LiteNetLib_NetEventSizeCheck;
  static_assert(sizeof(NetEvent) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetEvent::EType, "LiteNetLib", "NetEvent/EType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
