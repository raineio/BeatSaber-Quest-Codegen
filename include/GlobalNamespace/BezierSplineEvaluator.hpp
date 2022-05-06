// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BezierCurve
#include "GlobalNamespace/BezierCurve.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BezierSpline
  class BezierSpline;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BezierSplineEvaluator
  class BezierSplineEvaluator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BezierSplineEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSplineEvaluator*, "", "BezierSplineEvaluator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BezierSplineEvaluator
  // [TokenAttribute] Offset: FFFFFFFF
  class BezierSplineEvaluator : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BezierSplineEvaluator::CubicSolveResult
    struct CubicSolveResult;
    public:
    // private readonly System.Collections.Generic.List`1<BezierCurve> _segments
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* segments;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*) == 0x8);
    // private System.Int32 _currentSegmentIndex
    // Size: 0x4
    // Offset: 0x18
    int currentSegmentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static private System.Single kSlightAboveOne
    static constexpr const float kSlightAboveOne = 1.0005;
    // Get static field: static private System.Single kSlightAboveOne
    static float _get_kSlightAboveOne();
    // Set static field: static private System.Single kSlightAboveOne
    static void _set_kSlightAboveOne(float value);
    // static field const value: static private System.Single kSlightBelowZero
    static constexpr const float kSlightBelowZero = -0.0005;
    // Get static field: static private System.Single kSlightBelowZero
    static float _get_kSlightBelowZero();
    // Set static field: static private System.Single kSlightBelowZero
    static void _set_kSlightBelowZero(float value);
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BezierCurve> _segments
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*& dyn__segments();
    // Get instance field reference: private System.Int32 _currentSegmentIndex
    [[deprecated("Use field access instead!")]] int& dyn__currentSegmentIndex();
    // public System.Void .ctor(BezierSpline spline)
    // Offset: 0x132FD14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BezierSplineEvaluator* New_ctor(::GlobalNamespace::BezierSpline* spline) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BezierSplineEvaluator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BezierSplineEvaluator*, creationType>(spline)));
    }
    // public UnityEngine.Vector3 EvaluatePosition(System.Single time)
    // Offset: 0x1332818
    ::UnityEngine::Vector3 EvaluatePosition(float time);
    // private UnityEngine.Vector3 Evaluate(System.Single t)
    // Offset: 0x1332950
    ::UnityEngine::Vector3 Evaluate(float t);
    // private UnityEngine.Vector3 EvaluateFirstDerivation(System.Single t)
    // Offset: 0x1332B8C
    ::UnityEngine::Vector3 EvaluateFirstDerivation(float t);
    // private UnityEngine.Vector3 EvaluateSecondDerivation(System.Single t)
    // Offset: 0x1332DE0
    ::UnityEngine::Vector3 EvaluateSecondDerivation(float t);
    // public System.Single OffsetSegmentAndGetT(System.Single time)
    // Offset: 0x133283C
    float OffsetSegmentAndGetT(float time);
    // private System.Single GetTForSegment(System.Int32 segmentIndex, System.Single time)
    // Offset: 0x1333168
    float GetTForSegment(int segmentIndex, float time);
    // public System.Void GetTimeValuesForSegment(System.Int32 segmentIndex, out System.Single t0Value, out System.Single t1Value)
    // Offset: 0x1333778
    void GetTimeValuesForSegment(int segmentIndex, ByRef<float> t0Value, ByRef<float> t1Value);
    // private System.Void OffsetStartIndexToDistance(System.Single time)
    // Offset: 0x1333024
    void OffsetStartIndexToDistance(float time);
    // static private System.Single CubeRoot(System.Single x)
    // Offset: 0x1333854
    static float CubeRoot(float x);
    // static private BezierSplineEvaluator/CubicSolveResult SolveCubic(System.Single a, System.Single b, System.Single c, System.Single d)
    // Offset: 0x13332D8
    static ::GlobalNamespace::BezierSplineEvaluator::CubicSolveResult SolveCubic(float a, float b, float c, float d);
  }; // BezierSplineEvaluator
  #pragma pack(pop)
  static check_size<sizeof(BezierSplineEvaluator), 24 + sizeof(int)> __GlobalNamespace_BezierSplineEvaluatorSizeCheck;
  static_assert(sizeof(BezierSplineEvaluator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::EvaluatePosition
// Il2CppName: EvaluatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BezierSplineEvaluator::*)(float)>(&GlobalNamespace::BezierSplineEvaluator::EvaluatePosition)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "EvaluatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BezierSplineEvaluator::*)(float)>(&GlobalNamespace::BezierSplineEvaluator::Evaluate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::EvaluateFirstDerivation
// Il2CppName: EvaluateFirstDerivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BezierSplineEvaluator::*)(float)>(&GlobalNamespace::BezierSplineEvaluator::EvaluateFirstDerivation)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "EvaluateFirstDerivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::EvaluateSecondDerivation
// Il2CppName: EvaluateSecondDerivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BezierSplineEvaluator::*)(float)>(&GlobalNamespace::BezierSplineEvaluator::EvaluateSecondDerivation)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "EvaluateSecondDerivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::OffsetSegmentAndGetT
// Il2CppName: OffsetSegmentAndGetT
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BezierSplineEvaluator::*)(float)>(&GlobalNamespace::BezierSplineEvaluator::OffsetSegmentAndGetT)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "OffsetSegmentAndGetT", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::GetTForSegment
// Il2CppName: GetTForSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BezierSplineEvaluator::*)(int, float)>(&GlobalNamespace::BezierSplineEvaluator::GetTForSegment)> {
  static const MethodInfo* get() {
    static auto* segmentIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "GetTForSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentIndex, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::GetTimeValuesForSegment
// Il2CppName: GetTimeValuesForSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSplineEvaluator::*)(int, ByRef<float>, ByRef<float>)>(&GlobalNamespace::BezierSplineEvaluator::GetTimeValuesForSegment)> {
  static const MethodInfo* get() {
    static auto* segmentIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* t0Value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* t1Value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "GetTimeValuesForSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentIndex, t0Value, t1Value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::OffsetStartIndexToDistance
// Il2CppName: OffsetStartIndexToDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSplineEvaluator::*)(float)>(&GlobalNamespace::BezierSplineEvaluator::OffsetStartIndexToDistance)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "OffsetStartIndexToDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::CubeRoot
// Il2CppName: CubeRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::BezierSplineEvaluator::CubeRoot)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "CubeRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BezierSplineEvaluator::SolveCubic
// Il2CppName: SolveCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BezierSplineEvaluator::CubicSolveResult (*)(float, float, float, float)>(&GlobalNamespace::BezierSplineEvaluator::SolveCubic)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BezierSplineEvaluator*), "SolveCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d});
  }
};
