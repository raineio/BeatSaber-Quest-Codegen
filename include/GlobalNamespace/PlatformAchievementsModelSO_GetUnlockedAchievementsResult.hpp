// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult, "", "PlatformAchievementsModelSO/GetUnlockedAchievementsResult");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlatformAchievementsModelSO/GetUnlockedAchievementsResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlatformAchievementsModelSO::GetUnlockedAchievementsResult/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GetUnlockedAchievementsResult
    constexpr GetUnlockedAchievementsResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult OK
    static constexpr const int OK = 0;
    // Get static field: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult OK
    static GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult _get_OK();
    // Set static field: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult OK
    static void _set_OK(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult value);
    // static field const value: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult Failed
    static constexpr const int Failed = 1;
    // Get static field: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult Failed
    static GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult _get_Failed();
    // Set static field: static public PlatformAchievementsModelSO/GetUnlockedAchievementsResult Failed
    static void _set_Failed(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // PlatformAchievementsModelSO/GetUnlockedAchievementsResult
  #pragma pack(pop)
  static check_size<sizeof(PlatformAchievementsModelSO::GetUnlockedAchievementsResult), 0 + sizeof(int)> __GlobalNamespace_PlatformAchievementsModelSO_GetUnlockedAchievementsResultSizeCheck;
  static_assert(sizeof(PlatformAchievementsModelSO::GetUnlockedAchievementsResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
