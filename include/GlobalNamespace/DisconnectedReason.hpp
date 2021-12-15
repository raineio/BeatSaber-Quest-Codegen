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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectedReason, "", "DisconnectedReason");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DisconnectedReason
  // [TokenAttribute] Offset: FFFFFFFF
  struct DisconnectedReason/*, public System::Enum*/ {
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
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DisconnectedReason
    constexpr DisconnectedReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DisconnectedReason Unknown
    static constexpr const int Unknown = 1;
    // Get static field: static public DisconnectedReason Unknown
    static GlobalNamespace::DisconnectedReason _get_Unknown();
    // Set static field: static public DisconnectedReason Unknown
    static void _set_Unknown(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason UserInitiated
    static constexpr const int UserInitiated = 2;
    // Get static field: static public DisconnectedReason UserInitiated
    static GlobalNamespace::DisconnectedReason _get_UserInitiated();
    // Set static field: static public DisconnectedReason UserInitiated
    static void _set_UserInitiated(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason Timeout
    static constexpr const int Timeout = 3;
    // Get static field: static public DisconnectedReason Timeout
    static GlobalNamespace::DisconnectedReason _get_Timeout();
    // Set static field: static public DisconnectedReason Timeout
    static void _set_Timeout(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason Kicked
    static constexpr const int Kicked = 4;
    // Get static field: static public DisconnectedReason Kicked
    static GlobalNamespace::DisconnectedReason _get_Kicked();
    // Set static field: static public DisconnectedReason Kicked
    static void _set_Kicked(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ServerAtCapacity
    static constexpr const int ServerAtCapacity = 5;
    // Get static field: static public DisconnectedReason ServerAtCapacity
    static GlobalNamespace::DisconnectedReason _get_ServerAtCapacity();
    // Set static field: static public DisconnectedReason ServerAtCapacity
    static void _set_ServerAtCapacity(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ServerConnectionClosed
    static constexpr const int ServerConnectionClosed = 6;
    // Get static field: static public DisconnectedReason ServerConnectionClosed
    static GlobalNamespace::DisconnectedReason _get_ServerConnectionClosed();
    // Set static field: static public DisconnectedReason ServerConnectionClosed
    static void _set_ServerConnectionClosed(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason MasterServerUnreachable
    static constexpr const int MasterServerUnreachable = 7;
    // Get static field: static public DisconnectedReason MasterServerUnreachable
    static GlobalNamespace::DisconnectedReason _get_MasterServerUnreachable();
    // Set static field: static public DisconnectedReason MasterServerUnreachable
    static void _set_MasterServerUnreachable(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ClientConnectionClosed
    static constexpr const int ClientConnectionClosed = 8;
    // Get static field: static public DisconnectedReason ClientConnectionClosed
    static GlobalNamespace::DisconnectedReason _get_ClientConnectionClosed();
    // Set static field: static public DisconnectedReason ClientConnectionClosed
    static void _set_ClientConnectionClosed(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason NetworkDisconnected
    static constexpr const int NetworkDisconnected = 9;
    // Get static field: static public DisconnectedReason NetworkDisconnected
    static GlobalNamespace::DisconnectedReason _get_NetworkDisconnected();
    // Set static field: static public DisconnectedReason NetworkDisconnected
    static void _set_NetworkDisconnected(GlobalNamespace::DisconnectedReason value);
    // static field const value: static public DisconnectedReason ServerTerminated
    static constexpr const int ServerTerminated = 10;
    // Get static field: static public DisconnectedReason ServerTerminated
    static GlobalNamespace::DisconnectedReason _get_ServerTerminated();
    // Set static field: static public DisconnectedReason ServerTerminated
    static void _set_ServerTerminated(GlobalNamespace::DisconnectedReason value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // DisconnectedReason
  #pragma pack(pop)
  static check_size<sizeof(DisconnectedReason), 0 + sizeof(int)> __GlobalNamespace_DisconnectedReasonSizeCheck;
  static_assert(sizeof(DisconnectedReason) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
