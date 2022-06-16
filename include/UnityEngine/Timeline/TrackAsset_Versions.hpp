// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackAsset::Versions, "UnityEngine.Timeline", "TrackAsset/Versions");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions
  // [TokenAttribute] Offset: FFFFFFFF
  struct TrackAsset::Versions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Versions
    constexpr Versions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions Initial
    static constexpr const int Initial = 0;
    // Get static field: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions Initial
    static ::UnityEngine::Timeline::TrackAsset::Versions _get_Initial();
    // Set static field: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions Initial
    static void _set_Initial(::UnityEngine::Timeline::TrackAsset::Versions value);
    // static field const value: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions RotationAsEuler
    static constexpr const int RotationAsEuler = 1;
    // Get static field: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions RotationAsEuler
    static ::UnityEngine::Timeline::TrackAsset::Versions _get_RotationAsEuler();
    // Set static field: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions RotationAsEuler
    static void _set_RotationAsEuler(::UnityEngine::Timeline::TrackAsset::Versions value);
    // static field const value: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions RootMotionUpgrade
    static constexpr const int RootMotionUpgrade = 2;
    // Get static field: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions RootMotionUpgrade
    static ::UnityEngine::Timeline::TrackAsset::Versions _get_RootMotionUpgrade();
    // Set static field: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions RootMotionUpgrade
    static void _set_RootMotionUpgrade(::UnityEngine::Timeline::TrackAsset::Versions value);
    // static field const value: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions AnimatedTrackProperties
    static constexpr const int AnimatedTrackProperties = 3;
    // Get static field: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions AnimatedTrackProperties
    static ::UnityEngine::Timeline::TrackAsset::Versions _get_AnimatedTrackProperties();
    // Set static field: static public UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions AnimatedTrackProperties
    static void _set_AnimatedTrackProperties(::UnityEngine::Timeline::TrackAsset::Versions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Timeline.TrackAsset/UnityEngine.Timeline.Versions
  #pragma pack(pop)
  static check_size<sizeof(TrackAsset::Versions), 0 + sizeof(int)> __UnityEngine_Timeline_TrackAsset_VersionsSizeCheck;
  static_assert(sizeof(TrackAsset::Versions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
