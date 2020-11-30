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
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Autogenerated type: Mono.Security.Interface.AlertLevel
  struct AlertLevel : public System::Enum {
    public:
    // public System.Byte value__
    // Offset: 0x0
    uint8_t value;
    // Creating value type constructor for type: AlertLevel
    constexpr AlertLevel(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Interface.AlertLevel Warning
    static constexpr const uint8_t Warning = 1u;
    // Get static field: static public Mono.Security.Interface.AlertLevel Warning
    static Mono::Security::Interface::AlertLevel _get_Warning();
    // Set static field: static public Mono.Security.Interface.AlertLevel Warning
    static void _set_Warning(Mono::Security::Interface::AlertLevel value);
    // static field const value: static public Mono.Security.Interface.AlertLevel Fatal
    static constexpr const uint8_t Fatal = 2u;
    // Get static field: static public Mono.Security.Interface.AlertLevel Fatal
    static Mono::Security::Interface::AlertLevel _get_Fatal();
    // Set static field: static public Mono.Security.Interface.AlertLevel Fatal
    static void _set_Fatal(Mono::Security::Interface::AlertLevel value);
  }; // Mono.Security.Interface.AlertLevel
  check_size<sizeof(AlertLevel), 0 + sizeof(uint8_t) + 8 - (0 + sizeof(uint8_t)) % 8> __Mono_Security_Interface_AlertLevelSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::AlertLevel, "Mono.Security.Interface", "AlertLevel");
#pragma pack(pop)