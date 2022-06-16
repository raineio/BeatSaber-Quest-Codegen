// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: Extrapolation
  class Extrapolation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::Extrapolation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Extrapolation*, "UnityEngine.Timeline", "Extrapolation");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.Extrapolation
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Extrapolation : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Timeline::Extrapolation::$$c
    class $$c;
    // Get static field: static readonly System.Double kMinExtrapolationTime
    static double _get_kMinExtrapolationTime();
    // Set static field: static readonly System.Double kMinExtrapolationTime
    static void _set_kMinExtrapolationTime(double value);
    // static private System.Void .cctor()
    // Offset: 0x1DAD1A0
    static void _cctor();
    // static System.Void CalculateExtrapolationTimes(UnityEngine.Timeline.TrackAsset asset)
    // Offset: 0x1DACC3C
    static void CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* asset);
    // static private UnityEngine.Timeline.TimelineClip[] SortClipsByStartTime(UnityEngine.Timeline.TimelineClip[] clips)
    // Offset: 0x1DAD078
    static ::ArrayW<::UnityEngine::Timeline::TimelineClip*> SortClipsByStartTime(::ArrayW<::UnityEngine::Timeline::TimelineClip*> clips);
  }; // UnityEngine.Timeline.Extrapolation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::Extrapolation::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::Extrapolation::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Extrapolation*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes
// Il2CppName: CalculateExtrapolationTimes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::TrackAsset*)>(&UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Extrapolation*), "CalculateExtrapolationTimes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Extrapolation::SortClipsByStartTime
// Il2CppName: SortClipsByStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Timeline::TimelineClip*> (*)(::ArrayW<::UnityEngine::Timeline::TimelineClip*>)>(&UnityEngine::Timeline::Extrapolation::SortClipsByStartTime)> {
  static const MethodInfo* get() {
    static auto* clips = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Extrapolation*), "SortClipsByStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clips});
  }
};
