// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutInfo::FailReason, "", "NoteCutInfo/FailReason");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutInfo/FailReason
  // [TokenAttribute] Offset: FFFFFFFF
  struct NoteCutInfo::FailReason/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FailReason
    constexpr FailReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NoteCutInfo/FailReason None
    static constexpr const int None = 0;
    // Get static field: static public NoteCutInfo/FailReason None
    static GlobalNamespace::NoteCutInfo::FailReason _get_None();
    // Set static field: static public NoteCutInfo/FailReason None
    static void _set_None(GlobalNamespace::NoteCutInfo::FailReason value);
    // static field const value: static public NoteCutInfo/FailReason TooSoon
    static constexpr const int TooSoon = 1;
    // Get static field: static public NoteCutInfo/FailReason TooSoon
    static GlobalNamespace::NoteCutInfo::FailReason _get_TooSoon();
    // Set static field: static public NoteCutInfo/FailReason TooSoon
    static void _set_TooSoon(GlobalNamespace::NoteCutInfo::FailReason value);
    // static field const value: static public NoteCutInfo/FailReason WrongColor
    static constexpr const int WrongColor = 2;
    // Get static field: static public NoteCutInfo/FailReason WrongColor
    static GlobalNamespace::NoteCutInfo::FailReason _get_WrongColor();
    // Set static field: static public NoteCutInfo/FailReason WrongColor
    static void _set_WrongColor(GlobalNamespace::NoteCutInfo::FailReason value);
    // static field const value: static public NoteCutInfo/FailReason CutHarder
    static constexpr const int CutHarder = 3;
    // Get static field: static public NoteCutInfo/FailReason CutHarder
    static GlobalNamespace::NoteCutInfo::FailReason _get_CutHarder();
    // Set static field: static public NoteCutInfo/FailReason CutHarder
    static void _set_CutHarder(GlobalNamespace::NoteCutInfo::FailReason value);
    // static field const value: static public NoteCutInfo/FailReason WrongDirection
    static constexpr const int WrongDirection = 4;
    // Get static field: static public NoteCutInfo/FailReason WrongDirection
    static GlobalNamespace::NoteCutInfo::FailReason _get_WrongDirection();
    // Set static field: static public NoteCutInfo/FailReason WrongDirection
    static void _set_WrongDirection(GlobalNamespace::NoteCutInfo::FailReason value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NoteCutInfo/FailReason
  #pragma pack(pop)
  static check_size<sizeof(NoteCutInfo::FailReason), 0 + sizeof(int)> __GlobalNamespace_NoteCutInfo_FailReasonSizeCheck;
  static_assert(sizeof(NoteCutInfo::FailReason) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
