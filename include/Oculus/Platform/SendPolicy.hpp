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
  // Forward declaring type: SendPolicy
  struct SendPolicy;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::SendPolicy, "Oculus.Platform", "SendPolicy");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.SendPolicy
  // [TokenAttribute] Offset: FFFFFFFF
  struct SendPolicy/*, public System::Enum*/ {
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
    // Creating value type constructor for type: SendPolicy
    constexpr SendPolicy(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xF2B23C
    // static field const value: static public Oculus.Platform.SendPolicy Unreliable
    static constexpr const int Unreliable = 0;
    // Get static field: static public Oculus.Platform.SendPolicy Unreliable
    static Oculus::Platform::SendPolicy _get_Unreliable();
    // Set static field: static public Oculus.Platform.SendPolicy Unreliable
    static void _set_Unreliable(Oculus::Platform::SendPolicy value);
    // [DescriptionAttribute] Offset: 0xF2B274
    // static field const value: static public Oculus.Platform.SendPolicy Reliable
    static constexpr const int Reliable = 1;
    // Get static field: static public Oculus.Platform.SendPolicy Reliable
    static Oculus::Platform::SendPolicy _get_Reliable();
    // Set static field: static public Oculus.Platform.SendPolicy Reliable
    static void _set_Reliable(Oculus::Platform::SendPolicy value);
    // [DescriptionAttribute] Offset: 0xF2B2AC
    // static field const value: static public Oculus.Platform.SendPolicy Unknown
    static constexpr const int Unknown = 2;
    // Get static field: static public Oculus.Platform.SendPolicy Unknown
    static Oculus::Platform::SendPolicy _get_Unknown();
    // Set static field: static public Oculus.Platform.SendPolicy Unknown
    static void _set_Unknown(Oculus::Platform::SendPolicy value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.SendPolicy
  #pragma pack(pop)
  static check_size<sizeof(SendPolicy), 0 + sizeof(int)> __Oculus_Platform_SendPolicySizeCheck;
  static_assert(sizeof(SendPolicy) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
