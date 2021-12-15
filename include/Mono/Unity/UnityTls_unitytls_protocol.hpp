// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_protocol, "Mono.Unity", "UnityTls/unitytls_protocol");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityTls::unitytls_protocol/*, public System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: unitytls_protocol
    constexpr unitytls_protocol(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_0
    static constexpr const uint UNITYTLS_PROTOCOL_TLS_1_0 = 0u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_0
    static Mono::Unity::UnityTls::unitytls_protocol _get_UNITYTLS_PROTOCOL_TLS_1_0();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_0
    static void _set_UNITYTLS_PROTOCOL_TLS_1_0(Mono::Unity::UnityTls::unitytls_protocol value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_1
    static constexpr const uint UNITYTLS_PROTOCOL_TLS_1_1 = 1u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_1
    static Mono::Unity::UnityTls::unitytls_protocol _get_UNITYTLS_PROTOCOL_TLS_1_1();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_1
    static void _set_UNITYTLS_PROTOCOL_TLS_1_1(Mono::Unity::UnityTls::unitytls_protocol value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_2
    static constexpr const uint UNITYTLS_PROTOCOL_TLS_1_2 = 2u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_2
    static Mono::Unity::UnityTls::unitytls_protocol _get_UNITYTLS_PROTOCOL_TLS_1_2();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_TLS_1_2
    static void _set_UNITYTLS_PROTOCOL_TLS_1_2(Mono::Unity::UnityTls::unitytls_protocol value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_INVALID
    static constexpr const uint UNITYTLS_PROTOCOL_INVALID = 3u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_INVALID
    static Mono::Unity::UnityTls::unitytls_protocol _get_UNITYTLS_PROTOCOL_INVALID();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol UNITYTLS_PROTOCOL_INVALID
    static void _set_UNITYTLS_PROTOCOL_INVALID(Mono::Unity::UnityTls::unitytls_protocol value);
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol
  #pragma pack(pop)
  static check_size<sizeof(UnityTls::unitytls_protocol), 0 + sizeof(uint)> __Mono_Unity_UnityTls_unitytls_protocolSizeCheck;
  static_assert(sizeof(UnityTls::unitytls_protocol) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
