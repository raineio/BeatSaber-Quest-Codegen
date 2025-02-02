// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BezierSplineEvaluator
  class BezierSplineEvaluator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectAvoidanceTiltEvaluator
  class BeatmapObjectAvoidanceTiltEvaluator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*, "", "BeatmapObjectAvoidanceTiltEvaluator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectAvoidanceTiltEvaluator
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectAvoidanceTiltEvaluator : public ::Il2CppObject {
    public:
    public:
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private readonly UnityEngine.Vector2 _gravity
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Vector2 gravity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private readonly UnityEngine.Vector2 _normalizedGravity
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 normalizedGravity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private readonly BezierSplineEvaluator _bezierSplineEvaluator
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BezierSplineEvaluator*) == 0x8);
    // private System.Single _currentAcceleration
    // Size: 0x4
    // Offset: 0x30
    float currentAcceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Single kLookAheadTime
    static constexpr const float kLookAheadTime = 0.2;
    // Get static field: static private System.Single kLookAheadTime
    static float _get_kLookAheadTime();
    // Set static field: static private System.Single kLookAheadTime
    static void _set_kLookAheadTime(float value);
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private readonly UnityEngine.Vector2 _gravity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__gravity();
    // Get instance field reference: private readonly UnityEngine.Vector2 _normalizedGravity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__normalizedGravity();
    // Get instance field reference: private readonly BezierSplineEvaluator _bezierSplineEvaluator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BezierSplineEvaluator*& dyn__bezierSplineEvaluator();
    // Get instance field reference: private System.Single _currentAcceleration
    [[deprecated("Use field access instead!")]] float& dyn__currentAcceleration();
    // public System.Void .ctor(IAudioTimeSource audioTimeSource, BezierSplineEvaluator bezierSplineEvaluator, UnityEngine.Vector2 gravity)
    // Offset: 0x1577EC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectAvoidanceTiltEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator, ::UnityEngine::Vector2 gravity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectAvoidanceTiltEvaluator*, creationType>(audioTimeSource, bezierSplineEvaluator, gravity)));
    }
    // public System.Single GetTiltAngle()
    // Offset: 0x1577F24
    float GetTiltAngle();
  }; // BeatmapObjectAvoidanceTiltEvaluator
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectAvoidanceTiltEvaluator), 48 + sizeof(float)> __GlobalNamespace_BeatmapObjectAvoidanceTiltEvaluatorSizeCheck;
  static_assert(sizeof(BeatmapObjectAvoidanceTiltEvaluator) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle
// Il2CppName: GetTiltAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)()>(&GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*), "GetTiltAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
