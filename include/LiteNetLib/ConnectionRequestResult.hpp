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
  // Forward declaring type: ConnectionRequestResult
  struct ConnectionRequestResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectionRequestResult, "LiteNetLib", "ConnectionRequestResult");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.ConnectionRequestResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConnectionRequestResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ConnectionRequestResult
    constexpr ConnectionRequestResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.ConnectionRequestResult None
    static constexpr const int None = 0;
    // Get static field: static public LiteNetLib.ConnectionRequestResult None
    static ::LiteNetLib::ConnectionRequestResult _get_None();
    // Set static field: static public LiteNetLib.ConnectionRequestResult None
    static void _set_None(::LiteNetLib::ConnectionRequestResult value);
    // static field const value: static public LiteNetLib.ConnectionRequestResult Accept
    static constexpr const int Accept = 1;
    // Get static field: static public LiteNetLib.ConnectionRequestResult Accept
    static ::LiteNetLib::ConnectionRequestResult _get_Accept();
    // Set static field: static public LiteNetLib.ConnectionRequestResult Accept
    static void _set_Accept(::LiteNetLib::ConnectionRequestResult value);
    // static field const value: static public LiteNetLib.ConnectionRequestResult Reject
    static constexpr const int Reject = 2;
    // Get static field: static public LiteNetLib.ConnectionRequestResult Reject
    static ::LiteNetLib::ConnectionRequestResult _get_Reject();
    // Set static field: static public LiteNetLib.ConnectionRequestResult Reject
    static void _set_Reject(::LiteNetLib::ConnectionRequestResult value);
    // static field const value: static public LiteNetLib.ConnectionRequestResult RejectForce
    static constexpr const int RejectForce = 3;
    // Get static field: static public LiteNetLib.ConnectionRequestResult RejectForce
    static ::LiteNetLib::ConnectionRequestResult _get_RejectForce();
    // Set static field: static public LiteNetLib.ConnectionRequestResult RejectForce
    static void _set_RejectForce(::LiteNetLib::ConnectionRequestResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // LiteNetLib.ConnectionRequestResult
  #pragma pack(pop)
  static check_size<sizeof(ConnectionRequestResult), 0 + sizeof(int)> __LiteNetLib_ConnectionRequestResultSizeCheck;
  static_assert(sizeof(ConnectionRequestResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
