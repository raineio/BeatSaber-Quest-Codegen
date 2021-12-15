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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: NetSyncVoipMicSource
  struct NetSyncVoipMicSource;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncVoipMicSource, "Oculus.Platform", "NetSyncVoipMicSource");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.NetSyncVoipMicSource
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetSyncVoipMicSource/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetSyncVoipMicSource
    constexpr NetSyncVoipMicSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xF2A46C
    // static field const value: static public Oculus.Platform.NetSyncVoipMicSource Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.NetSyncVoipMicSource Unknown
    static Oculus::Platform::NetSyncVoipMicSource _get_Unknown();
    // Set static field: static public Oculus.Platform.NetSyncVoipMicSource Unknown
    static void _set_Unknown(Oculus::Platform::NetSyncVoipMicSource value);
    // [DescriptionAttribute] Offset: 0xF2A4A4
    // static field const value: static public Oculus.Platform.NetSyncVoipMicSource None
    static constexpr const int None = 1;
    // Get static field: static public Oculus.Platform.NetSyncVoipMicSource None
    static Oculus::Platform::NetSyncVoipMicSource _get_None();
    // Set static field: static public Oculus.Platform.NetSyncVoipMicSource None
    static void _set_None(Oculus::Platform::NetSyncVoipMicSource value);
    // [DescriptionAttribute] Offset: 0xF2A4DC
    // static field const value: static public Oculus.Platform.NetSyncVoipMicSource Internal
    static constexpr const int Internal = 2;
    // Get static field: static public Oculus.Platform.NetSyncVoipMicSource Internal
    static Oculus::Platform::NetSyncVoipMicSource _get_Internal();
    // Set static field: static public Oculus.Platform.NetSyncVoipMicSource Internal
    static void _set_Internal(Oculus::Platform::NetSyncVoipMicSource value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.NetSyncVoipMicSource
  #pragma pack(pop)
  static check_size<sizeof(NetSyncVoipMicSource), 0 + sizeof(int)> __Oculus_Platform_NetSyncVoipMicSourceSizeCheck;
  static_assert(sizeof(NetSyncVoipMicSource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
