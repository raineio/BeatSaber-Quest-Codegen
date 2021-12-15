// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: PacketProperty
  struct PacketProperty;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::PacketProperty, "LiteNetLib", "PacketProperty");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.PacketProperty
  // [TokenAttribute] Offset: FFFFFFFF
  struct PacketProperty/*, public System::Enum*/ {
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
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: PacketProperty
    constexpr PacketProperty(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.PacketProperty Unreliable
    static constexpr const uint8_t Unreliable = 0u;
    // Get static field: static public LiteNetLib.PacketProperty Unreliable
    static LiteNetLib::PacketProperty _get_Unreliable();
    // Set static field: static public LiteNetLib.PacketProperty Unreliable
    static void _set_Unreliable(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty Channeled
    static constexpr const uint8_t Channeled = 1u;
    // Get static field: static public LiteNetLib.PacketProperty Channeled
    static LiteNetLib::PacketProperty _get_Channeled();
    // Set static field: static public LiteNetLib.PacketProperty Channeled
    static void _set_Channeled(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty Ack
    static constexpr const uint8_t Ack = 2u;
    // Get static field: static public LiteNetLib.PacketProperty Ack
    static LiteNetLib::PacketProperty _get_Ack();
    // Set static field: static public LiteNetLib.PacketProperty Ack
    static void _set_Ack(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty Ping
    static constexpr const uint8_t Ping = 3u;
    // Get static field: static public LiteNetLib.PacketProperty Ping
    static LiteNetLib::PacketProperty _get_Ping();
    // Set static field: static public LiteNetLib.PacketProperty Ping
    static void _set_Ping(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty Pong
    static constexpr const uint8_t Pong = 4u;
    // Get static field: static public LiteNetLib.PacketProperty Pong
    static LiteNetLib::PacketProperty _get_Pong();
    // Set static field: static public LiteNetLib.PacketProperty Pong
    static void _set_Pong(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty ConnectRequest
    static constexpr const uint8_t ConnectRequest = 5u;
    // Get static field: static public LiteNetLib.PacketProperty ConnectRequest
    static LiteNetLib::PacketProperty _get_ConnectRequest();
    // Set static field: static public LiteNetLib.PacketProperty ConnectRequest
    static void _set_ConnectRequest(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty ConnectAccept
    static constexpr const uint8_t ConnectAccept = 6u;
    // Get static field: static public LiteNetLib.PacketProperty ConnectAccept
    static LiteNetLib::PacketProperty _get_ConnectAccept();
    // Set static field: static public LiteNetLib.PacketProperty ConnectAccept
    static void _set_ConnectAccept(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty Disconnect
    static constexpr const uint8_t Disconnect = 7u;
    // Get static field: static public LiteNetLib.PacketProperty Disconnect
    static LiteNetLib::PacketProperty _get_Disconnect();
    // Set static field: static public LiteNetLib.PacketProperty Disconnect
    static void _set_Disconnect(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty UnconnectedMessage
    static constexpr const uint8_t UnconnectedMessage = 8u;
    // Get static field: static public LiteNetLib.PacketProperty UnconnectedMessage
    static LiteNetLib::PacketProperty _get_UnconnectedMessage();
    // Set static field: static public LiteNetLib.PacketProperty UnconnectedMessage
    static void _set_UnconnectedMessage(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty MtuCheck
    static constexpr const uint8_t MtuCheck = 9u;
    // Get static field: static public LiteNetLib.PacketProperty MtuCheck
    static LiteNetLib::PacketProperty _get_MtuCheck();
    // Set static field: static public LiteNetLib.PacketProperty MtuCheck
    static void _set_MtuCheck(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty MtuOk
    static constexpr const uint8_t MtuOk = 10u;
    // Get static field: static public LiteNetLib.PacketProperty MtuOk
    static LiteNetLib::PacketProperty _get_MtuOk();
    // Set static field: static public LiteNetLib.PacketProperty MtuOk
    static void _set_MtuOk(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty Broadcast
    static constexpr const uint8_t Broadcast = 11u;
    // Get static field: static public LiteNetLib.PacketProperty Broadcast
    static LiteNetLib::PacketProperty _get_Broadcast();
    // Set static field: static public LiteNetLib.PacketProperty Broadcast
    static void _set_Broadcast(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty Merged
    static constexpr const uint8_t Merged = 12u;
    // Get static field: static public LiteNetLib.PacketProperty Merged
    static LiteNetLib::PacketProperty _get_Merged();
    // Set static field: static public LiteNetLib.PacketProperty Merged
    static void _set_Merged(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty ShutdownOk
    static constexpr const uint8_t ShutdownOk = 13u;
    // Get static field: static public LiteNetLib.PacketProperty ShutdownOk
    static LiteNetLib::PacketProperty _get_ShutdownOk();
    // Set static field: static public LiteNetLib.PacketProperty ShutdownOk
    static void _set_ShutdownOk(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty PeerNotFound
    static constexpr const uint8_t PeerNotFound = 14u;
    // Get static field: static public LiteNetLib.PacketProperty PeerNotFound
    static LiteNetLib::PacketProperty _get_PeerNotFound();
    // Set static field: static public LiteNetLib.PacketProperty PeerNotFound
    static void _set_PeerNotFound(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty InvalidProtocol
    static constexpr const uint8_t InvalidProtocol = 15u;
    // Get static field: static public LiteNetLib.PacketProperty InvalidProtocol
    static LiteNetLib::PacketProperty _get_InvalidProtocol();
    // Set static field: static public LiteNetLib.PacketProperty InvalidProtocol
    static void _set_InvalidProtocol(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty NatMessage
    static constexpr const uint8_t NatMessage = 16u;
    // Get static field: static public LiteNetLib.PacketProperty NatMessage
    static LiteNetLib::PacketProperty _get_NatMessage();
    // Set static field: static public LiteNetLib.PacketProperty NatMessage
    static void _set_NatMessage(LiteNetLib::PacketProperty value);
    // static field const value: static public LiteNetLib.PacketProperty Empty
    static constexpr const uint8_t Empty = 17u;
    // Get static field: static public LiteNetLib.PacketProperty Empty
    static LiteNetLib::PacketProperty _get_Empty();
    // Set static field: static public LiteNetLib.PacketProperty Empty
    static void _set_Empty(LiteNetLib::PacketProperty value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // LiteNetLib.PacketProperty
  #pragma pack(pop)
  static check_size<sizeof(PacketProperty), 0 + sizeof(uint8_t)> __LiteNetLib_PacketPropertySizeCheck;
  static_assert(sizeof(PacketProperty) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
