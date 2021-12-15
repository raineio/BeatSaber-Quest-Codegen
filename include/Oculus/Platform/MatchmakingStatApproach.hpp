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
  // Forward declaring type: MatchmakingStatApproach
  struct MatchmakingStatApproach;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MatchmakingStatApproach, "Oculus.Platform", "MatchmakingStatApproach");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.MatchmakingStatApproach
  // [TokenAttribute] Offset: FFFFFFFF
  struct MatchmakingStatApproach/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MatchmakingStatApproach
    constexpr MatchmakingStatApproach(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xF2A14C
    // static field const value: static public Oculus.Platform.MatchmakingStatApproach Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.MatchmakingStatApproach Unknown
    static Oculus::Platform::MatchmakingStatApproach _get_Unknown();
    // Set static field: static public Oculus.Platform.MatchmakingStatApproach Unknown
    static void _set_Unknown(Oculus::Platform::MatchmakingStatApproach value);
    // [DescriptionAttribute] Offset: 0xF2A184
    // static field const value: static public Oculus.Platform.MatchmakingStatApproach Trailing
    static constexpr const int Trailing = 1;
    // Get static field: static public Oculus.Platform.MatchmakingStatApproach Trailing
    static Oculus::Platform::MatchmakingStatApproach _get_Trailing();
    // Set static field: static public Oculus.Platform.MatchmakingStatApproach Trailing
    static void _set_Trailing(Oculus::Platform::MatchmakingStatApproach value);
    // [DescriptionAttribute] Offset: 0xF2A1BC
    // static field const value: static public Oculus.Platform.MatchmakingStatApproach Swingy
    static constexpr const int Swingy = 2;
    // Get static field: static public Oculus.Platform.MatchmakingStatApproach Swingy
    static Oculus::Platform::MatchmakingStatApproach _get_Swingy();
    // Set static field: static public Oculus.Platform.MatchmakingStatApproach Swingy
    static void _set_Swingy(Oculus::Platform::MatchmakingStatApproach value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.MatchmakingStatApproach
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingStatApproach), 0 + sizeof(int)> __Oculus_Platform_MatchmakingStatApproachSizeCheck;
  static_assert(sizeof(MatchmakingStatApproach) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
