// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.ConnectionRequestResult
  struct ConnectionRequestResult : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ConnectionRequestResult
    constexpr ConnectionRequestResult(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.ConnectionRequestResult None
    static constexpr const int None = 0;
    // Get static field: static public LiteNetLib.ConnectionRequestResult None
    static LiteNetLib::ConnectionRequestResult _get_None();
    // Set static field: static public LiteNetLib.ConnectionRequestResult None
    static void _set_None(LiteNetLib::ConnectionRequestResult value);
    // static field const value: static public LiteNetLib.ConnectionRequestResult Accept
    static constexpr const int Accept = 1;
    // Get static field: static public LiteNetLib.ConnectionRequestResult Accept
    static LiteNetLib::ConnectionRequestResult _get_Accept();
    // Set static field: static public LiteNetLib.ConnectionRequestResult Accept
    static void _set_Accept(LiteNetLib::ConnectionRequestResult value);
    // static field const value: static public LiteNetLib.ConnectionRequestResult Reject
    static constexpr const int Reject = 2;
    // Get static field: static public LiteNetLib.ConnectionRequestResult Reject
    static LiteNetLib::ConnectionRequestResult _get_Reject();
    // Set static field: static public LiteNetLib.ConnectionRequestResult Reject
    static void _set_Reject(LiteNetLib::ConnectionRequestResult value);
    // static field const value: static public LiteNetLib.ConnectionRequestResult RejectForce
    static constexpr const int RejectForce = 3;
    // Get static field: static public LiteNetLib.ConnectionRequestResult RejectForce
    static LiteNetLib::ConnectionRequestResult _get_RejectForce();
    // Set static field: static public LiteNetLib.ConnectionRequestResult RejectForce
    static void _set_RejectForce(LiteNetLib::ConnectionRequestResult value);
  }; // LiteNetLib.ConnectionRequestResult
  check_size<sizeof(ConnectionRequestResult), 0 + sizeof(int) + 8 - (0 + sizeof(int)) % 8> __LiteNetLib_ConnectionRequestResultSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ConnectionRequestResult, "LiteNetLib", "ConnectionRequestResult");
#pragma pack(pop)