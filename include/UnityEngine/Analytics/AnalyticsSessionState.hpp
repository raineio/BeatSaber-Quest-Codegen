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
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: AnalyticsSessionState
  struct AnalyticsSessionState;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::AnalyticsSessionState, "UnityEngine.Analytics", "AnalyticsSessionState");
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Analytics.AnalyticsSessionState
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: F17E9C
  struct AnalyticsSessionState/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AnalyticsSessionState
    constexpr AnalyticsSessionState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStopped
    static constexpr const int kSessionStopped = 0;
    // Get static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStopped
    static UnityEngine::Analytics::AnalyticsSessionState _get_kSessionStopped();
    // Set static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStopped
    static void _set_kSessionStopped(UnityEngine::Analytics::AnalyticsSessionState value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStarted
    static constexpr const int kSessionStarted = 1;
    // Get static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStarted
    static UnityEngine::Analytics::AnalyticsSessionState _get_kSessionStarted();
    // Set static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionStarted
    static void _set_kSessionStarted(UnityEngine::Analytics::AnalyticsSessionState value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsSessionState kSessionPaused
    static constexpr const int kSessionPaused = 2;
    // Get static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionPaused
    static UnityEngine::Analytics::AnalyticsSessionState _get_kSessionPaused();
    // Set static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionPaused
    static void _set_kSessionPaused(UnityEngine::Analytics::AnalyticsSessionState value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsSessionState kSessionResumed
    static constexpr const int kSessionResumed = 3;
    // Get static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionResumed
    static UnityEngine::Analytics::AnalyticsSessionState _get_kSessionResumed();
    // Set static field: static public UnityEngine.Analytics.AnalyticsSessionState kSessionResumed
    static void _set_kSessionResumed(UnityEngine::Analytics::AnalyticsSessionState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Analytics.AnalyticsSessionState
  #pragma pack(pop)
  static check_size<sizeof(AnalyticsSessionState), 0 + sizeof(int)> __UnityEngine_Analytics_AnalyticsSessionStateSizeCheck;
  static_assert(sizeof(AnalyticsSessionState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
