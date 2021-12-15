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
  // Forward declaring type: NetLogLevel
  struct NetLogLevel;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetLogLevel, "LiteNetLib", "NetLogLevel");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetLogLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetLogLevel/*, public System::Enum*/ {
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
    // Creating value type constructor for type: NetLogLevel
    constexpr NetLogLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.NetLogLevel Warning
    static constexpr const int Warning = 0;
    // Get static field: static public LiteNetLib.NetLogLevel Warning
    static LiteNetLib::NetLogLevel _get_Warning();
    // Set static field: static public LiteNetLib.NetLogLevel Warning
    static void _set_Warning(LiteNetLib::NetLogLevel value);
    // static field const value: static public LiteNetLib.NetLogLevel Error
    static constexpr const int Error = 1;
    // Get static field: static public LiteNetLib.NetLogLevel Error
    static LiteNetLib::NetLogLevel _get_Error();
    // Set static field: static public LiteNetLib.NetLogLevel Error
    static void _set_Error(LiteNetLib::NetLogLevel value);
    // static field const value: static public LiteNetLib.NetLogLevel Trace
    static constexpr const int Trace = 2;
    // Get static field: static public LiteNetLib.NetLogLevel Trace
    static LiteNetLib::NetLogLevel _get_Trace();
    // Set static field: static public LiteNetLib.NetLogLevel Trace
    static void _set_Trace(LiteNetLib::NetLogLevel value);
    // static field const value: static public LiteNetLib.NetLogLevel Info
    static constexpr const int Info = 3;
    // Get static field: static public LiteNetLib.NetLogLevel Info
    static LiteNetLib::NetLogLevel _get_Info();
    // Set static field: static public LiteNetLib.NetLogLevel Info
    static void _set_Info(LiteNetLib::NetLogLevel value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LiteNetLib.NetLogLevel
  #pragma pack(pop)
  static check_size<sizeof(NetLogLevel), 0 + sizeof(int)> __LiteNetLib_NetLogLevelSizeCheck;
  static_assert(sizeof(NetLogLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
